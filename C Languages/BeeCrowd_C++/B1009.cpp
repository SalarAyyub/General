#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string name;
    double salary, sales, total;
    cin>>name>>salary>>sales;

    total = salary + (0.15*sales);

    cout<<fixed<<setprecision(2)<<"TOTAL = R$ "<<total<<endl;


    return 0;
}

