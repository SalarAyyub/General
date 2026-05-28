#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    int n, a, b, c, d, temp;
    cin>>n>>a>>b>>c>>d;

    int m[n+1];

    for(int i=1; i<=n; i++)
    {
        m[i]=i;
    }

    for(; a<b; a++,b--)
    {
        temp = m[a];
        m[a] = m[b];
        m[b] = temp;
    }

    for(; c<d; c++,d--)
    {
        temp = m[c];
        m[c] = m[d];
        m[d] = temp;
    }

    cout<<m[1]<<" ";
    for(int i=2; i<=n; i++)
    {
        cout<<m[i]<<" ";
    }

    return 0;
}

