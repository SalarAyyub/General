#include <iostream>

using namespace std;

int main()
{
    int amount, remainder;
    cin>>amount;

    cout<<amount<<endl<<amount/100<<" nota(s) de R$ 100,00"<<endl;
    remainder = amount%100;

    cout<<remainder/50<<" nota(s) de R$ 50,00"<<endl;
    remainder = remainder%50;

    cout<<remainder/20<<" nota(s) de R$ 20,00"<<endl;
    remainder = remainder%20;

    cout<<remainder/10<<" nota(s) de R$ 10,00"<<endl;
    remainder = remainder%10;

    cout<<remainder/5<<" nota(s) de R$ 5,00"<<endl;
    remainder = remainder%5;

    cout<<remainder/2<<" nota(s) de R$ 2,00"<<endl;
    remainder = remainder%2;

    cout<<remainder/1<<" nota(s) de R$ 1,00"<<endl;
    remainder = remainder%1;


    return 0;
}

