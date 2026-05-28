#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int j;
    double k;
    string t;

    cin>>j>>k;
    cin.ignore();
    getline(cin, t);

    s = s+t;

    cout<<i+j<<endl;
    cout<<fixed<<setprecision(1)<<d+k<<endl;
    cout<<s;


    return 0;
}
