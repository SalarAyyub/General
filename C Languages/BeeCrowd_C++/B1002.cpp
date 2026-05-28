#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double A, n = 3.14159, R;
    cin>>R;

    A = n*R*R;

    cout<<fixed<<setprecision(4)<<"A="<<A<<endl;


    return 0;
}

