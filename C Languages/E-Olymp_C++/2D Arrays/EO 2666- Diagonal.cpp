#include <iostream>

using namespace std;

int main()
{
	int n, x, y;
	cin >> n;

	x = n; y = 1;

	for(int i=1; i<=n; i++, x--, y++, cout<<endl)
	{
	    for (int j=1; j<=n; j++)
		{
			if(i <= y && j < x)
            {
                cout << 2;
            }
			else if(i >= y && j > x)
            {
                cout << 1;
            }
			else
            {
                cout << 0;
            }
		}
	}

    return 0;
}

