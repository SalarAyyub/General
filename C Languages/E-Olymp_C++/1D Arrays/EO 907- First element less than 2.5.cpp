#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    float a[n], num;

    bool found = false;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        if(a[i] <= 2.50)
        {
            found = true;
            cout<<i+1<<" ";
            printf("%0.2f", a[i]);
            break;
        }

    }

    if(found == false)
    {
        cout<<"Not Found";
    }

    return 0;
}

