#include <bits/stdc++.h>

using namespace std;

long distance(long x1, long y1, long x2, long y2)
{
    return (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
}

int main(int argc, int argv[])
{
    long n, d;
    cin>>n>>d;

    long a[10000], b[10000], c[1000];

    bool flag = 0;

    for(int i=0; i<n; i++)
    {
        cin>>a[i]>>b[i]>>c[i];
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(c[i] != c[j])
            {
                if(d*d == distance(a[i], b[i], a[j], b[j]))
                {
                    flag = 1;
                    break;
                }
            }
        }
    }

    if(flag == 0)
    {
        cout<<"No";
    }
    else
    {
        cout<<"Yes";
    }

    return 0;
}


