#include<iostream>
using namespace std;

int main()
{
    float cube(float);

    cout << "\nEnter any number :: ";
    cin >> a;

    cu=cube(a);

    cout << "\nThe Cube of Number [ "<<a<<" ] is :: "<<cu<<"\n";

    return 0;
}

float cube(float a)
{
    float cu;
    cu = a * a * a;
    return(cu);
}
