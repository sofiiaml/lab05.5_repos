#include <iostream>
using namespace std;
double bn(int b1, int q, int n) 
{
    if (n == 1) 
        return b1;  
    else 
        return q * bn(b1, q, n - 1); 
}

double S(int b1, int q, int n) {
    if (n == 1) {
        return b1;  
    }
    else {
        double t = bn(b1, q, n); 
        return t + S(b1, q, n - 1); 
    }
}

int main() 
{
    int b1, q, n;
    cout << "b1= "; cin >> b1;
    cout << "q= "; cin >> q;
    cout << "n= "; cin >> n;
    double t = bn(b1, q, n);
    cout << "bn=" << t << endl;
    double sum = S(b1, q, n);
    cout << "S= " << sum << endl;

    return 0;
}