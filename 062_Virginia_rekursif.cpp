#include <iostream>
using namespace std;

int EuclideanGCD (int m, int n) 
{
    if (n == 0) 
    {
        return m;
        return EuclideanGCD(n, m % n);
    }
    return EuclideanGCD(n, m % n);
}

int main() {
    int m, n;

    cout << "Masukkan bilangan bulat positif m: ";
    cin >> m;
    cout << "Masukkan bilangan bulat positif n: ";
    cin >> n;

    int gcd = EuclideanGCD(m, n);

    cout << "FPB dari " << m << " dan " << n << " adalah: " << gcd << endl;

    return 0;
}
