#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int X;
    float Y, mean;
    cin>>X>>Y;

    mean = (float)X/Y;

    cout<<fixed<<setprecision(3)<<mean<<" km/l"<<endl;



    return 0;
}

