#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

    int a, b, c, AB, CAB;
    cin>>a>>b>>c;

    AB = (a+b+abs(a-b))/2;
    CAB = (AB + c + abs(AB-c))/2;

    if(a == AB && a > c)
    {
        cout<<a<<" eh o maior"<<endl;
    }
    else if(a != AB && AB > c)
    {
        cout<<b<<" eh o maior"<<endl;
    }
    else
    {
        cout<<c<<" eh o maior"<<endl;
    }

    return 0;
}

