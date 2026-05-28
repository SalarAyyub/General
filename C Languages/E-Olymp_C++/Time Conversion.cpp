#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string>

using namespace std;

string timeConversion(string time)
{
    int h1 = (int)time[1] - '0';
    int h2 = (int)time[0] - '0';
    int hh = (h2*10 + h1%10);

    if(time[8] == 'A')
    {
        if (hh == 12)
        {
            printf()
        }
    }
    return;
}

int main()
{
    string time;
    getline(cin, time);

    string time24 = timeConversion(time);

    return 0;
}
