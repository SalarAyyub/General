#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    float A, B, C, pi = 3.14159, triangle, circle, trapezium, square, rectangle;
    cin>>A>>B>>C;

    triangle = 0.5*A*C;
    circle = pi*C*C;
    trapezium = 0.5*(A+B)*C;
    square = B*B;
    rectangle = A*B;

    cout<<fixed<<setprecision(3)<<"TRIANGULO: "<<triangle<<endl;
    cout<<fixed<<setprecision(3)<<"CIRCULO: "<<circle<<endl;
    cout<<fixed<<setprecision(3)<<"TRAPEZIO: "<<trapezium<<endl;
    cout<<fixed<<setprecision(3)<<"QUADRADO: "<<square<<endl;
    cout<<fixed<<setprecision(3)<<"RETANGULO: "<<rectangle<<endl;

    return 0;
}

