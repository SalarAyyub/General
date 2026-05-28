#include <iostream>

using namespace std;

int main()
{
    int age, remainder;
    cin>>age;

    cout<<age/365<<" ano(s)"<<endl;
    remainder = age%365;

    cout<<remainder/30<<" mes(es)"<<endl;
    remainder = remainder%30;

    cout<<remainder<<" dia(s)"<<endl;

    return 0;
}

