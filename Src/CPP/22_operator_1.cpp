using namespace std;

class Point {
public:
    int x, y;

    Point(int x = 0, int y = 0) : x(x), y(y) {}

    // + 연산자 오버로딩
    Point operator+(const Point& other) const {
        return Point(x + other.x, y + other.y);
    }
};

int main() {
    Point p1(1, 2);
    Point p2(3, 4);
    Point result = p1 + p2;

    cout << "result: (" << result.x << ", " << result.y << ")" << endl;
    return 0;
}
