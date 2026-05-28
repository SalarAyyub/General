#include <bits/stdc++.h>

using namespace std;

void SumDob(double x, double y)
{
    double sum = x+y;
    double prod = x*y;

    printf("%0.4f ", sum);
    printf("%0.4f ", prod);
    cout<<endl;

}

int main()
{
    int N;
    cin>>N;

    double x, y;

    for(int i=0; i<N; i++)
    {
        cin>>x>>y;

        SumDob(x,y);
    }

    return 0;
}

