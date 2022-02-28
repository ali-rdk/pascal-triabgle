#include <iostream>

using namespace std;

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int binomial(int n, int k)
{
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main(void)
{
    int row = 5;

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < i+1; j++)
        {
            cout << binomial(i, j) << " ";
        }
        cout << endl;
    }
}

