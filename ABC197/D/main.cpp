#include<bits/stdc++.h>
using namespace std;

//ライブラリを作る
#define EPS (1e-10)
#define equals(a, b) (fabs((a) - (b)) < EPS)

class Point {
public:
    double x, y;

    Point(double x = 0, double y = 0) : x(x), y(y) {}

    Point operator + (Point p) { return Point(x + p.x, y + p.y); }
    Point operator - (Point p) { return Point(x - p.x, y - p.y); }
    Point operator * (double a) { return Point(a * x, a * y); }
    Point operator / (double a) { return Point(x / a, y / a); }

    double abs() { return sqrt(norm()); }
    double norm() { return x * x + y * y; }

    bool operator < (const Point &p) const {
        return x != p.x ? x < p.x : y < p.y;
    }

    bool operator == (const Point &p) const {
        return fabs(x - p.x) < EPS && fabs(y - p.y) < EPS;
    }
};
typedef Point Vector;

double dot(Vector a, Vector b){
    return a.x * b.x + a.y * b.y;
}

Point rotate(Point p, double angle){
    double x_new = p.x * cos(angle) - p.y * sin(angle);
    double y_new = p.x * sin(angle) + p.y * cos(angle);

    return Point(x_new, y_new);
}

//inputs
int N;
int x_0, y_0, x_2n, y_2n;

int main(){
    cin >> N;
    cin >> x_0 >> y_0;
    cin >> x_2n >> y_2n;

    Point p_0 = Point(x_0, y_0);
    Point p_2n = Point(x_2n, y_2n);

    Point center = (p_0 + p_2n) / 2;
    Point p_1 = rotate(p_0 - center, 2 * M_PI / N) + center;

    cout << setprecision(12) << p_1.x << " " << p_1.y << endl;
    return 0;
}
