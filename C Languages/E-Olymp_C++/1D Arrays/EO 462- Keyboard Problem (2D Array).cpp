#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int total,k,n,c[100000], p[100000];
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>p[i];
    }

    cin>>k;

    for(int j=1; j<=k; j++)
    {
        cin>>c[j];
    }

    sort(c,c+k);

    for(int i=1; i<=n ; i++)
    {
        total=0;

        for(int j=1; j<=k; j++)
        {
            if(c[j]==i) total=total+1;
        }

        if(total<=p[i])
        {
            cout<<"no"<<endl;
        }
        else
        {
            cout<<"yes"<<endl;
        }
    }

    return 0;
}
