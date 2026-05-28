#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, max, min;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    max = *max_element(a,a+n);
    min = *min_element(a, a+n);

    for(int i=0; i<n; i++)
    {
        if(a[i] == max)
        {
            a[i] = min;
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }


    return 0;
}

