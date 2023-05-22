#include<iostream>

using namespace std;

int main(void)
{
    int a,b;

    a = 1;
    for (;a <= 1000; a++)
    {
        b = 1;
        for (;b < a; b++)
        {
            int c = 1000 - b - a;
            if (c > 0 && (a*a + b*b) == c*c)
            {
                cout << a * b * c << endl;
                exit(0);
            }
        }
    }
    return (0);
}