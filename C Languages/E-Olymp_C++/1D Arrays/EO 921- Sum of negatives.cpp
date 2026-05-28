#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    int n, c=0;
    cin>>n;

    float a[n], sum=0.0;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        if(a[i] < 0.0)
        {
            c++;
            sum+=a[i];
        }
    }

    cout<<c<<" ";
    printf("%0.2f", sum);

    return 0;
}



