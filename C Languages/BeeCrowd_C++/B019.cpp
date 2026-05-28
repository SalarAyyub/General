#include <iostream>

using namespace std;

int main()
{
    int N, hours, minutes, seconds;
    cin>>N;

    hours = N/3600;
    int remainder = N%3600;

    minutes = remainder/60;
    remainder = remainder%60;

    seconds = remainder;

    cout<<hours<<":"<<minutes<<":"<<seconds<<endl;


    return 0;
}

