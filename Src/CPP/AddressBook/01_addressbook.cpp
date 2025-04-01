#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
int main()
{
    string input;

    while (true)
    {
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
        case 5:
            cout << "프로그램이 안전하게 종료되었습니다!" << endl;
            quick_exit(1);
            
        }
    }
    

}
