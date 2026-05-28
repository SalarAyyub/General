#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;

    float a[n];
    float c=0, sum=0.0, mean=0.00;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        if(a[i] > 0.0)
        {
            c++;
            sum+=a[i];
        }
    }

    mean = sum/c;

    if(isnan(mean))
    {
        cout<<"Not Found";
    }
    else
    {
        printf("%0.2f", mean);
    }

    return 0;
}



