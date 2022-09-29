#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void)
{
    ofstream fout("test.out");
    ifstream fin("test.in");

    int a,b;
    fin >> a >> b;
    fout << a+b << endl;
    return (0);
}