#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float amount;
    cin>>amount;

    int notes = floor(amount), remainder, change;
    float coins = floor((amount - (float)notes)*100+1);

    cout<<"NOTAS:"<<endl<<notes/100<<" nota(s) de R$ 100.00"<<endl;
    remainder = notes%100;

    cout<<remainder/50<<" nota(s) de R$ 50.00"<<endl;
    remainder = remainder%50;

    cout<<remainder/20<<" nota(s) de R$ 20.00"<<endl;
    remainder = remainder%20;

    cout<<remainder/10<<" nota(s) de R$ 10.00"<<endl;
    remainder = remainder%10;

    cout<<remainder/5<<" nota(s) de R$ 5.00"<<endl;
    remainder = remainder%5;

    cout<<remainder/2<<" nota(s) de R$ 2.00"<<endl;
    remainder = remainder%2;


    cout<<"MOEDAS:"<<endl<<remainder/1<<" moeda(s) de R$ 1.00"<<endl;
    remainder = remainder%1;


    cout<<floor(coins/50.0)<<" moeda(s) de R$ 0.50"<<endl;
    change = (int)coins%50;

    cout<<floor(change/25.0)<<" moeda(s) de R$ 0.25"<<endl;
    change = (int)change%25;

    cout<<floor(change/10.0)<<" moeda(s) de R$ 0.10"<<endl;
    change = (int)change%10;

    cout<<floor(change/5.0)<<" moeda(s) de R$ 0.05"<<endl;
    change = (int)change%5;

    cout<<floor(change/1.0)<<" moeda(s) de R$ 0.01"<<endl;
    change = (int)change%1;


    return 0;
}


