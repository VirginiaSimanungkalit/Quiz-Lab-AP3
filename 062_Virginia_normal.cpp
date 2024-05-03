#include <iostream>
using namespace std;

int EuclideanGCD(int m, int n) 
{
    while (n != 0) 
    {
        int r = m % n;
        m = n;         
        n = r;         
    }
    return m;
}

int main() 
{
    int m, n;
    cout << "Masukkan bilangan bulat positif m : ";
    cin >> m;
    cout << "Masukkan bilangan bulat positif n : ";
    cin >> n;

    int gcd = EuclideanGCD(m, n);

    cout << "FPB dari " << m << " dan " << n << " adalah: " << gcd << endl;

    return 0;
}