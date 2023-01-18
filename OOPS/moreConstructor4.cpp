#include <iostream>
#include<cmath>
using namespace std;
class point
{
private:
    int x, y;
    friend int pointDistance(point p1, point p2);
public:
point (int a, int b)
{
    x=a;
    y=b;
}
void displaypoint()
{
    cout<<"The point is ("<<x<<", "<<y<<") "<<endl;
}
};
int pointDistance(point p1, point p2)
{
    int dis;
    dis = sqrt(pow((p1.x-p2.x),2) + pow((p1.y-p2.y),2));
    cout<<"The distance between 2 points are: "<<dis<<endl;
    return dis;
};
int main()
{
    point p(4, -2);
    point q = point(1, 4);
    p.displaypoint();
    q.displaypoint();
    pointDistance(p,q);

    return 0;
}
