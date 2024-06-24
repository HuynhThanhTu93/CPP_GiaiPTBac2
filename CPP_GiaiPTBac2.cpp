// CPP_GiaiPTBac2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
double TinhPTBac1(double a, double b)
double x;
{
    if (a == 0)

    {
        if (b == 0)
        {
            cout << "PT vo nghiem";
        }
        else {
            x = -b / a;
            cout << x;
}
int main()
{
    cout << "Giai phuong trinh bac: \n";
    cout << "Nhap a: \n";
    double a; cin >> a;
    cout << "Nhap b: \n";
    double b; cin >> b;
    cout << "Nhap c: \n";
    double c; cin >> c;
    double x1;
    double x2;
    double detla;
    if (a == 0)
    {
        if (b == 0, c != 0)
        {
            cout << "PT vo nghiem";
        }
        else if (c == 0) {
            cout << "PT vo so nghiem";
        }
        else {
             x1 = -c / b;
             cout << x1;
        }
    }
    else
    {
        detla = b * b - 4 * a * c;
        if (detla < 0)
        {
            cout << "PT vo nghiem";
        }
        else if (detla == 0) {
            x1 = x2 = -b / 2*a;
            cout << x1;
        }
        else {
            if (detla >= 0) {
                x1 = (-b + sqrt(detla)) / (2 * a);
                x2 = (-b - sqrt(detla)) / (2 * a);
                cout << "x1 = " << x1 << "\n";
                cout << "x2 = " << x2;
            }
            else {
                cout << "PT vo nghiem";
            }
        }
    }
    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
