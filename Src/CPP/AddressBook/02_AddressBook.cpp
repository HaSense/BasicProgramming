#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Person
{
private:
    int no;
    string name;
    string pnumber;

public:
    Person() : no(0), name("아무개"), pnumber("010-0000-0000") {}
    Person(int no, string name, string pnumber) : no(no), name(name), pnumber(pnumber) {}

    void setNo(int no)
    {
        this->no = no;
    }
    int getNo()
    {
        return no;  //this 생략
    }
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }
    void setPnumber(string pnumber)
    {
        this->pnumber = pnumber;
    }
    string getPnumber()
    {
        return pnumber;
    }

};

int main()
{
    string input;
    vector<Person> addressbook;
    while (true)
    {
        cout << "\n===== 주소록 메뉴 =====" << endl;
        cout << " 1. 데이터 삽입 " << endl;
        cout << " 2. 데이터 삭제 " << endl;
        cout << " 3. 데이터 조회 " << endl;
        cout << " 4. 데이터 수정 " << endl;
        cout << " 5. 프로그램 종료 " << endl;

        cout << "메뉴 : ";
        getline(cin, input);
        int number = atoi(input.c_str()); //cstdlib에서 string을 char배열로 만들어줌

        switch (number)
        {
        case 1: {
            int no;
            string name;
            string phone;

            cout << "데이터 번호를 입력하세요: ";
            getline(cin, input);
            no = atoi(input.c_str());

            cout << "이름을 입력하세요: ";
            getline(cin, name);

            cout << "전화번호를 입력하세요 (예: 010-1234-5678): ";
            getline(cin, phone);

            Person p(no, name, phone);
            addressbook.push_back(p);

            cout << "주소록에 저장되었습니다!" << endl;
            break;
        }
        case 2: {
            cout << "삭제할 데이터 번호를 입력하세요: ";
            getline(cin, input);
            int delNo = atoi(input.c_str());

            bool found = false;
            for (auto it = addressbook.begin(); it != addressbook.end(); ++it) {
                if (it->getNo() == delNo) {
                    addressbook.erase(it);
                    cout << "삭제가 완료되었습니다!" << endl;
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "해당 번호를 가진 데이터가 없습니다." << endl;
            }
            break;
        }

        case 3: {
            if (addressbook.empty()) {
                cout << "주소록이 비어 있습니다." << endl;
            }
            else {
                cout << "\n현재 주소록 정보:" << endl;
                for (auto& person : addressbook) {
                    cout << "번호: " << person.getNo()
                        << ", 이름: " << person.getName()
                        << ", 전화번호: " << person.getPnumber() << endl;
                }
            }
            break;
        }
        case 4: {
            cout << "수정할 데이터 번호를 입력하세요: ";
            getline(cin, input);
            int modifyNo = atoi(input.c_str());

            bool found = false;
            for (Person person : addressbook) {
                if (person.getNo() == modifyNo) {
                    string newName, newPhone;

                    cout << "새로운 이름을 입력하세요: ";
                    getline(cin, newName);
                    cout << "새로운 전화번호를 입력하세요: ";
                    getline(cin, newPhone);

                    person.setName(newName);
                    person.setPnumber(newPhone);

                    cout << "수정이 완료되었습니다!" << endl;
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "해당 번호를 가진 데이터를 찾을 수 없습니다." << endl;
            }
            break;
        }

        case 5:{
            cout << "프로그램이 안전하게 종료되었습니다!" << endl;
            quick_exit(1);
        }

        

        default:
            cout << "올바른 메뉴를 선택하세요." << endl;
        }
    }

    return 0;
}
