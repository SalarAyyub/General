#include <iostream>

using namespace std;

int main()
{
	int row, col, a[50][50];
	cin>>row>>col;

	for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>a[i][j];
        }
    }

	cout<<col<<" "<<row<<endl;

	for(int i=0; i<col; i++)
	{
		cout<<a[row-1][i];

		for(int j = row-2; j>=0; j--)
        {
            cout<<" "<<a[j][i];
        }
		cout<<endl;
	}

	return 0;
}

