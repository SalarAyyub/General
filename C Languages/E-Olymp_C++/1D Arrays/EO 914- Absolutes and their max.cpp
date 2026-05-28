#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;

    float a[n], b[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        b[i] = abs(a[i]);
    }

    float max = b[0];

    for(int i=1; i<n; ++i)
    {
        if(max<b[i])
        {
            max = b[i];
        }
    }

    printf("%0.2f", max);

    return 0;
}



