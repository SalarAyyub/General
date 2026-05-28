#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    int n, count=0;
    cin>>n;

    float a[n+1], sum=0;

    for(int i=1; i<n+1; i++)
    {
        cin>>a[i];
    }

    for(int i=1; i<n+1; i++)
    {
        if( a[i]>0.0 && i%3 == 0)
        {
            count++;
            sum+=a[i];
        }
    }

    cout<<count<<" ";
    printf("%0.2f", sum);

    return 0;
}



