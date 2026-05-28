#include <bits/stdc++.h>

using namespace std;

int main()
{
    string num;

    getline(cin, num);

    int len = num.length();

    for(int i=0; i<len; i++)
    {
        for(int j=i+1; j<len; j++)
        {
            if(num[i]>num[j])
            {
                swap<char>(num[i],num[j]);
            }
        }

    }

    int count=0, missNum[len];

    for(int i=0; i<len; i++)
    {
        for(int j=0; j<=9; j++)
        {
            if(num[i]!=j)
            {
                count++;
                cout<<j<<" ";
            }
        }

    }


    for(int i=0; i<len; i++)
    {
        cout<<count<<endl<<missNum[i]<<" ";
    }




    return 0;
}

