#include <iostream>

using namespace std;

int main()
{
    int x, y, n, m;
    cin>>n>>m>>x>>y;

	if(x > 1)
    {
        cout<<x-1<<" "<<y<<endl;
    }

	if(x < n)
    {
        cout<<x+1<<" "<<y<<endl;
    }

	if(y > 1)
    {
        cout<<x<<" "<<y-1<<endl;
    }

	if(y < m)
    {
        cout<<x<<" "<<y+1<<endl;
    }

    return 0;
}

