#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    int n, c;
    cin>>n;

    float a[n];

    for(int i=0; i<=n-1; i++)
    {
        cin>>a[i];
    }

    c = a[n-1];

    for(int i=n-2; i>=0; i--)
    {
        a[i+1] = a[i];
    }

    a[0] = c;

    for(int i=0; i<=n-1; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}



