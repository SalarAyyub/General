#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <cmath>

using namespace std;

int largestValue(int p[], int k)
{
    int large = p[0];

    for(int i=0; i<k; i++)
    {
        if(large<p[i])
        {
            large = p[i];
        }
    }

    return large;
}

int smallestValue(int p[], int k)
{
    int small = p[0];

    for(int i=0; i<k; i++)
    {
        if(small>p[i])
        {
            small = p[i];
        }
    }

    return small;
}

int main()
{
    int n, max, min;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    max = largestValue(a,n);
    min = smallestValue(a,n);

    cout<<max+min;

    return 0;
}



