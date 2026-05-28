#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>

using namespace std;

struct point
{
    double x, y;

};

int main()
{
    point p1, p2;
    cin>>p1.x>>p1.y;
    cin>>p2.x>>p2.y;

    double distance = sqrt((pow(p2.x - p1.x, 2)) + (pow(p2.y - p1.y, 2)));

    cout<<fixed<<setprecision(4)<<distance<<endl;

    return 0;
}

