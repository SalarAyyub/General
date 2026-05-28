#include <bits/stdc++.h>

using namespace std;

int main()
{
    float x1, x2, y1, y2, z1, z2;
    float determinant, determinantX, determinantY;
    float x1sign, x2sign, x, y;
    bool determinant_Index = false;

    cin>>x1>>y1>>z1;
    cin>>x2>>y2>>z2;

    x1sign = x1*(-1);
    x2sign = x2*(-1);

    determinant = (x1*y2)-(x2*y1);
    determinantX = (z1*y2)-(z2*y1);
    determinantY = (x1*z2)-(x2*z1);

    if(determinant == 0 && determinantX == 0 && determinantY == 0)
    {
        determinant_Index = true;
    }
    else if(determinant == 0 && (determinantX == 0 || determinantY == 0))
    {
        determinant_Index = true;
    }

    if(determinant_Index == true)
    {
        abort();
    }
    else if(determinant_Index == false)
    {
        x = (determinantX/determinant);
        y = (determinantY/determinant);

        cout<<fixed<<setprecision(3)<<x<<endl;
        cout<<fixed<<setprecision(3)<<y;
    }


    return 0;
}

