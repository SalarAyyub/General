#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r1, c1, r2, c2, r3, c3;

    cin>>r1>>c1;

    int a[r1][c1];

    for(int i=0; i<r1; ++i)
    {
        for(int j=0; j<c1; ++j)
        {
            cin>>a[i][j];
        }
    }

    cin>>r2>>c2;

    int b[r2][c2];

    for(int i=0; i<r2; ++i)
    {
        for(int j=0; j<c2; ++j)
        {
            cin>>b[i][j];
        }
    }

    if(c1 != r2)
    {
        cout<<"-1";
    }
    else
    {
        r3 = r1;
        c3 = c2;

        int c[r3][c3];

        cout<<r3<<" "<<c3<<endl;

        for(int i=0; i<r3; i++)
        {
            for(int j=0; j<c3; j++)
            {
                c[i][j] = 0;
            }
        }

        for(int i=0; i<r3; ++i)
        {
            for(int j=0; j<c3; ++j)
            {
                for(int k=0; k<c1; ++k)
                {
                    c[i][j] += (a[i][k] * b[k][j]);
                }
            }
        }

        for(int i=0; i<r3; ++i)
        {
            for(int j=0; j<c3; ++j)
            {
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}

