#include <bits/stdc++.h>

using namespace std;


struct Point
{
    double x, y;
};

double crossProd(Point p, Point q)
{
    return p.x * q.y - p.y * q.x;
}

double areaOfPolygon(Point vertices[], int n)
{
    double sum = 0.0;

    for(int i=0; i<n; i++)
    {
        sum = sum + crossProd(vertices[i], vertices[(i+1)%n]);
    }

    return abs(sum)/2.0;
}

int main()
{
    int n;
    cin>>n;

    Point vertices[n];

    for(int i=0; i<n; i++)
    {
        cin>>vertices[i].x>>vertices[i].y;
    }

    double area = areaOfPolygon(vertices, n);

    cout<<fixed<<setprecision(3)<<area;


   return 0;
}

