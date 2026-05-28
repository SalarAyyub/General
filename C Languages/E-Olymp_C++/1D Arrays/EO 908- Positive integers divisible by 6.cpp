#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n], sum=0, c=0;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        if(a[i]>0 && a[i]%6 == 0)
        {
           c++;
           sum+=a[i];

        }
    }

    cout<<c<<" "<<sum;


    return 0;
}


