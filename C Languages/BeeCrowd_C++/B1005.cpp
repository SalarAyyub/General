#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double A, B, MEDIA;
    cin>>A>>B;

    MEDIA = (A*3.5 + B*7.5)/(3.5+7.5);

    cout<<fixed<<setprecision(5)<<"MEDIA = "<<MEDIA<<endl;


    return 0;
}

