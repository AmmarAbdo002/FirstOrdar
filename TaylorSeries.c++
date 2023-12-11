#include <iostream>
#include <cmath>
using namespace std;
void TaylorSeries();
int main()
{
    TaylorSeries();
    return 0;
}
double setData(string str)
{
    double value;
    cout << str;
    cin >> value;
    return value;
}
void TaylorSeries()
{
    double X;
    for(int i=0 ; i<pow(10,8)*2; i++)
    {
        double X=X;
    }
    cout << "<< Enter your Equation (y`) >>" << endl;
    double p_x = setData("parameter X :");
    double pow_x = setData("power X :");
    double p_y = setData("parameter y :");
    double pow_y = setData("power y:");
    cout << endl;

    double h = setData("Enter The began step (h) :");
    cout << endl;

    cout << "<< Enter the initial point ( y(xo)=y ) >>" << endl;
    float x = setData("Xo :");
    double y = setData("Yo :");
    cout << endl;

    float final_x = setData("You want compute y at --> x = ");
    cout << endl;

    while (x != final_x)
    {
        double dy = (p_x * pow(x, pow_x)) + (p_y * pow(y, pow_y));
        y = y + h * dy;
        x += h;
    } 

cout<<endl;
    cout << "y(" << final_x << ") = " << y;
}