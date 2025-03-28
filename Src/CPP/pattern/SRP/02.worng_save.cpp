class User {
    string name;
public:
    User(const string& name) : name(name) {}

    //DB저장 기능은 분리할 수 있다.
    void saveToDatabase() {
        cout << name << "을(를) 데이터베이스에 저장합니다.\n";
    }
};
