#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int time, speed;
    cin>>time>>speed;

    int distance = speed*time;

    double liters = (double)distance/12;

    cout<<fixed<<setprecision(3)<<liters<<endl;

    return 0;
}

