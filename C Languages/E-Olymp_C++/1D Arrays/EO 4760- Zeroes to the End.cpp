#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];

    int nonZero = 0;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        if(a[i] != 0)
        {
            swap(a[nonZero], a[i]);
            nonZero++;
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}


