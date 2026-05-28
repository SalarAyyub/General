#include<bits/stdc++.h>

using namespace std;

void combinationUtil(int arr[],int data[],int start,int end,int index, int r)
{
    if (index == r)
    {
        for (int j = 0; j < r; j++)
        {
            cout << data[j] << " ";
        }
        cout << endl;

        return;
    }

    for(int i = start; i <= end && end - i + 1 >= r - index; i++)
    {
        data[index] = arr[i];
        combinationUtil(arr, data, i+1, end, index+1, r);
    }
}

void printCombination(int arr[], int n, int r)
{
    int data[r];
    combinationUtil(arr, data, 0, n-1, 0, r);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int r;
    cout<<"Input r: ";
    cin>>r;
    int n = sizeof(arr)/sizeof(arr[0]);
    printCombination(arr, n, r);

    return 0;
}


/*#include <bits/stdc++.h>

using namespace std;

void inManats(float bdt)
{
    float usdbdt = 87.5, gbpbdt = 109.3, eurbdt = 92.4;
    float usdazn = 1.7020, gbpazn = 2.1470, eurazn = 1.8280;

    float trans1USD = bdt/usdbdt;
    float trans2GBP = bdt/gbpbdt;
    float trans3EUR = bdt/eurbdt;

    cout<<"In AZN by USD: "<<trans1USD*usdazn<<endl;
    cout<<"In AZN by GBP: "<<trans2GBP*gbpazn<<endl;
    cout<<"In AZN by EUR: "<<trans3EUR*eurazn<<endl<<endl;


}

int main()
{
    float bdt;

    cin>>bdt;

    inManats(bdt);

    //cout<<"In USD: "<<bdt/usdbdt<<endl;
    //cout<<"In Pounds: "<<bdt/gbpbdt<<endl;
    //cout<<"In Euros: "<<bdt/eurbdt<<endl<<endl;


    return 0;

}
*/
/*template <typename anyType>  anyType sum(anyType x, anyType y)
{
      return (x+y);
}
int main()
{
      cout<<"Int sum: "<<sum(10, 20)<<endl;
      cout<<"Float sum: "<<sum(3.142, 2.718);
      return 0;
}

#include <iostream>
using namespace std;
int sum(int x, int y)
{
       return (x+y);
}
double sum(double x, double y)
{
     return (x+y);
}
int main()
{
     cout<<"Int sum: "<<sum(10, 20)<<endl;
     cout<<"Float sum: "<<sum(3.142, 2.718);
     return 0;
}

#include <bits/stdc++.h>

using namespace std;

template <class T> class classMax
{
    T x, y;

    public:

    classMax()
    {

    }

    classMax (T a, T b)
    {
        x = a;
        y = b;
    }
    T getMax()
    {
        return (x>y)? x: y;
    }
};
int main()
{
    classMax<int> intMax;
    classMax<double>floatMax;
    int i;
    double f;
    intMax = classMax<int>(10,20);
    i = intMax.getMax();
    floatMax = classMax<double>(3.142, 2.718);

    f = floatMax.getMax();

    cout<<"Int max: "<<i<<endl;
    cout<<"Float max: "<<f<<endl;

    return 0;
}
*/
/*
#include<iostream>
using namespace std;

template<class T, class U>
class A {
	T x;
	U y;
public:
	A() { cout<<"Constructor Called"<<endl; }
};

int main() {
A<char, char> a;
A<int, double> b;
return 0;
}
*/
/*
#include <bits/stdc++.h>
using namespace std;
template <class T > class aSet
{
    T element;
public:
    aSet(T arg)
    {
        element = arg;
    }
    T increase()
    {

        return ++element;
    }
};
template <> class aSet<char>
{
    char symbol;
public:
    aSet(char arg)
    {
        symbol = arg;
    }
    char upperCase()
    {
        if((symbol >= 'a') && (symbol <= 'z'))
        {
            symbol += 'A' - 'a';
            return symbol;
        }
    }
};
int main()
{

    aSet<int>myInt(10);
    aSet<double>myFloat(3.142);
    aSet<char>myChar('c');
    cout<<"My int: "<<myInt.increase()<<endl;
    cout<<"My float: "<<myFloat.increase()<<endl;
    cout<<"My char: "<<myChar.upperCase()<<endl;
    return 0;
}
*/
/*
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string input_string;
    getline(cin, input_string);

    cout<<"Hello, World."<<endl<<input_string;


    return 0;
}
*/
