
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double S, P, result;
    int n, k;

    // 1. while + while
    result = 0;
    n = 1;

    while (n <= 10)
    {
        P = 1;
        k = 1;

        while (k <= n)
        {
            P *= sin(k + n);
            k++;
        }

        S = sqrt(1 + pow(cos(n), 2) + P);
        result += S;
        n++;
    }

    cout << fixed << setprecision(8);
    cout << "1. while + while: " << result << endl;

    // 2. do while + do while
    result = 0;
    n = 1;

    do
    {
        P = 1;
        k = 1;

        do
        {
            P *= sin(k + n);
            k++;
        } while (k <= n);

        S = sqrt(1 + pow(cos(n), 2) + P);
        result += S;
        n++;
    } while (n <= 10);

    cout << "2. do while + do while: " << result << endl;

    // 3. for + for (ascending)
    result = 0;

    for (n = 1; n <= 10; n++)
    {
        P = 1;

        for (k = 1; k <= n; k++)
        {
            P *= sin(k + n);
        }

        S = sqrt(1 + pow(cos(n), 2) + P);
        result += S;
    }

    cout << "3. for + for (++): " << result << endl;

    // 4. for + for (descending)
    result = 0;

    for (n = 10; n >= 1; n--)
    {
        P = 1;

        for (k = n; k >= 1; k--)
        {
            P *= sin(k + n);
        }

        S = sqrt(1 + pow(cos(n), 2) + P);
        result += S;
    }

    cout << "4. for + for (--): " << result << endl;

    return 0;
}
