#include <iostream>
#include <string>
using namespace std;

// 경로 탐색 전략 인터페이스
class RouteStrategy {
public:
    virtual ~RouteStrategy() = default;
    virtual void calculateRoute(const string& start, const string& end) const = 0;
};

// 도로 기반 경로 전략
class RoadRoute : public RouteStrategy {
public:
    void calculateRoute(const string& start, const string& end) const override {
        cout << "[도로 경로] " << start << " → " << end << " 까지 고속도로 및 국도를 통해 탐색합니다.\n";
    }
};

// 해양 기반 경로 전략
class SeaRoute : public RouteStrategy {
public:
    void calculateRoute(const string& start, const string& end) const override {
        cout << "[해양 경로] " << start << " → " << end << " 까지 항로를 따라 탐색합니다.\n";
    }
};

// 네비게이터 클래스 (Context)
class Navigator {
private:
    RouteStrategy* strategy_;  // 소유권 직접 관리

public:
    explicit Navigator(RouteStrategy* strategy = nullptr)
        : strategy_(strategy) {}

    ~Navigator() {
        delete strategy_;
    }

    void setStrategy(RouteStrategy* strategy) {
        if (strategy_ != nullptr) {
            delete strategy_;
        }
        strategy_ = strategy;
    }

    void navigate(const string& start, const string& end) const {
        if (strategy_) {
            strategy_->calculateRoute(start, end);
        } else {
            cout << "경로 탐색 전략이 설정되지 않았습니다.\n";
        }
    }
};

// 클라이언트 코드
void clientCode() {
    Navigator nav(new RoadRoute());
    nav.navigate("서울", "부산");

    cout << "\n전략 변경: 해양 경로 사용\n";
    nav.setStrategy(new SeaRoute());
    nav.navigate("부산", "제주도");
}

int main() {
    clientCode();
    return 0;
}
