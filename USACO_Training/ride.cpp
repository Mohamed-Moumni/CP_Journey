#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void)
{
    ofstream fout("ride.out");
    ifstream fin("ride.in");

    string a,b;
    long long      num1,num2;

    num1= 1, num2 = 1;
    fin >> a >> b;
    for (int i = 0 ; i < 6; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
            num1 *= ((a[i] - 'A') + 1);
        else
            num1 *= ((a[i] - 'a') + 1);
        if (b[i] >= 'A' && b[i] <= 'Z')
            num2 *= ((b[i] - 'A') + 1);
        else
            num2 *= ((b[i] - 'a') + 1);
        // cout << num1 << " " << num2 << endl;
    }
    // cout << num1 << " " << num2 << endl;
    if (num1 % 47 == num2 % 47)
        fout << "GO" << endl;
    else
        fout << "STAY" << endl;
}