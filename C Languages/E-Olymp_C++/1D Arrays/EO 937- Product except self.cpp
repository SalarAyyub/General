#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <cmath>

using namespace std;

void outArray(int in[], int n)
{
    if(n==1)
    {
        cout<<0;
        return;
    }

    int out[n], prod=1;

    for(int j=0; j<n; j++)
    {
        out[j] = 1;
    }

    for(int i=0; i<n; i++)
    {
        out[i] = prod;
        prod*=in[i];
    }

    prod = 1;

    for(int i=n-1; i>=0; i--)
    {
        out[i]*= prod;
        prod*=in[i];
    }

    for(int i=0; i<n; i++)
    {
        cout<<out[i]<<" ";
    }

    return;
}

int main()
{
    int n;
    cin>>n;

    int in[n];

    for(int i=0; i<n; i++)
    {
        cin>>in[i];
    }

    outArray(in,n);

    return 0;
}



