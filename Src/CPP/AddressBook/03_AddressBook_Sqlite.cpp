#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include "sqlite3.h"

using namespace std;

class Person 
{
private:
    int no;
    string name;
    string pnumber;

public:
    Person() : no(0), name("아무개"), pnumber("010-0000-0000") {}
    Person(int no, const string& name, const string& pnumber) : no(no), name(name), pnumber(pnumber) {}

    //Getter, Setter
    void setNo(int no) { this->no = no; }
    int getNo() const { return no; }

    void setName(const string& name) { this->name = name; }
    string getName() const { return name; }

    void setPnumber(const string& pnumber) { this->pnumber = pnumber; }
    string getPnumber() const { return pnumber; }
};

//DAO처럼 활용하려고 만든 Manager 클래스
class DBManager {
private:
    sqlite3* db;

public:
    DBManager(const string& filename) 
    {
        if (sqlite3_open(filename.c_str(), &db) != SQLITE_OK) {
            cerr << "데이터베이스 열기 실패: " << sqlite3_errmsg(db) << endl;
            exit(1);
        }

        //DB가 없을 시 테이블을 만들게 해 놓았는데 미리 테이블을 만들고 테스트 해보세요.
        string createSQL =
            "CREATE TABLE IF NOT EXISTS person ("
            "no INTEGER PRIMARY KEY AUTOINCREMENT, "
            "name TEXT NOT NULL, "
            "pnumber TEXT NOT NULL);";

        char* errMsg = nullptr;
        if (sqlite3_exec(db, createSQL.c_str(), nullptr, nullptr, &errMsg) != SQLITE_OK) {
            cerr << "테이블 생성 실패: " << errMsg << endl;
            sqlite3_free(errMsg);
            exit(1);
        }
    }

    //소멸자는 객체가 메모리에 사라질때 하는 동작입니다. 
    //꼭 만들필요는 없지만 리소스를 반환하거나 객체를 메모리에서 삭제하는 기능을 넣으시면 됩니다.
    ~DBManager() 
    {
        sqlite3_close(db);
    }

    void insertPerson(const string& name, const string& phone) 
    {
        string sql = "INSERT INTO person (name, pnumber) VALUES (?, ?);";
        sqlite3_stmt* stmt;
        sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, nullptr);
        sqlite3_bind_text(stmt, 1, name.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(stmt, 2, phone.c_str(), -1, SQLITE_STATIC);
        if (sqlite3_step(stmt) == SQLITE_DONE) {
            cout << " 주소록에 저장되었습니다!" << endl;
        }
        sqlite3_finalize(stmt);
    }

    void deletePerson(int no) 
    {
        string sql = "DELETE FROM person WHERE no = ?;";
        sqlite3_stmt* stmt;
        sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, nullptr);
        sqlite3_bind_int(stmt, 1, no);
        if (sqlite3_step(stmt) == SQLITE_DONE) 
        {
            cout << "삭제가 완료되었습니다!" << endl;
        }
        sqlite3_finalize(stmt);
    }

    void updatePerson(int no, const string& newName, const string& newPhone) 
    {
        string sql = "UPDATE person SET name = ?, pnumber = ? WHERE no = ?;";
        sqlite3_stmt* stmt;
        sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, nullptr);
        sqlite3_bind_text(stmt, 1, newName.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(stmt, 2, newPhone.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_int(stmt, 3, no);
        if (sqlite3_step(stmt) == SQLITE_DONE) 
        {
            cout << "수정이 완료되었습니다!" << endl;
        }
        sqlite3_finalize(stmt);
    }

    void viewPersons() 
    {
        string sql = "SELECT no, name, pnumber FROM person;";
        sqlite3_stmt* stmt;
        sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, nullptr);
        cout << "\n현재 주소록 정보:\n";
        while (sqlite3_step(stmt) == SQLITE_ROW) 
        {
            //가장 중요한 코드가 DBMS(Sqlite3)에서 가져온 데이터를 C++에 맞추어 받는 것입니다.
            //그래서 가장 안전한 타입이나 호환되는 타입으로 받으면 됩니다.
            int no = sqlite3_column_int(stmt, 0);
            string name = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
            string phone = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 2));
            cout << "번호: " << no << ", 이름: " << name << ", 전화번호: " << phone << endl;
        }
        sqlite3_finalize(stmt);
    }
};

int main() {
    DBManager db("c:\\temp\\addressbook.db");

    string input;
    while (true) {
        cout << "\n===== 주소록 메뉴 =====\n";
        cout << " 1. 데이터 삽입\n";
        cout << " 2. 데이터 삭제\n";
        cout << " 3. 데이터 조회\n";
        cout << " 4. 데이터 수정\n";
        cout << " 5. 프로그램 종료\n";
        cout << "메뉴 : ";
        getline(cin, input);
        int number = atoi(input.c_str());

        switch (number) {
        case 1: {
            string name, phone;
            cout << "이름을 입력하세요: ";
            getline(cin, name);
            cout << "전화번호를 입력하세요: ";
            getline(cin, phone);
            db.insertPerson(name, phone);
            break;
        }
        case 2: {
            cout << "삭제할 데이터 번호: ";
            getline(cin, input);
            int delNo = atoi(input.c_str());
            db.deletePerson(delNo);
            break;
        }
        case 3:
            db.viewPersons();
            break;
        case 4: {
            cout << "수정할 데이터 번호: ";
            getline(cin, input);
            int modNo = atoi(input.c_str());
            string newName, newPhone;
            cout << "새 이름: ";
            getline(cin, newName);
            cout << "새 전화번호: ";
            getline(cin, newPhone);
            db.updatePerson(modNo, newName, newPhone);
            break;
        }
        case 5:{
            cout << "프로그램이 안전하게 종료되었습니다!" << endl;
            return 0;
        }
        default:{
            cout << "올바른 메뉴를 선택하세요." << endl;
        }//end of default
        }//end of switch
    }//end of while

    return 0;
}//end of main
