#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double pi = 3.14159, R, volume;
    cin>>R;

    volume = (4.0/3)*pi*R*R*R;

    cout<<fixed<<setprecision(3)<<"VOLUME = "<<volume<<endl;


    return 0;
}

