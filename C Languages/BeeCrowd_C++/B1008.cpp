#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int number, hours;
    float rate, salary;
    cin>>number>>hours>>rate;

    salary = hours * rate;

    cout<<"NUMBER = "<<number<<endl<<fixed<<setprecision(2)<<"SALARY = U$ "<<salary<<endl;

    return 0;
}
