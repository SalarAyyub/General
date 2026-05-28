#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    long n;
    int symmetry=0;
	cin>>n;

	int length = to_string(n).length();
	int a[length];

	for(int i=length-1; i>=0; i--)
    {
        a[i] = n%10;
        n/=10;
    }

	if(length%2==0)
    {
        for(int i=0,j=length-1; i<=length/2,j>=length/2; i++,j--)
        {
            if(a[i]==a[j])
            {
                symmetry++;
            }
        }
    }
    else
    {
        for(int i=0,j=length-1; i<length/2,j>length/2; i++,j--)
        {
            if(a[i]==a[j])
            {
                symmetry++;
            }
        }
        symmetry++;
    }

    cout<<symmetry;



    return 0;
}


