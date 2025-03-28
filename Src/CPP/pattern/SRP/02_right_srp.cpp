class User {
    string name;
public:
    User(const string& name) : name(name) {}

    string getName() const { return name; }
};

class UserRepository {
public:
    void save(const User& user) {
        cout << user.getName() << "을(를) 데이터베이스에 저장합니다.\n";
    }
};
