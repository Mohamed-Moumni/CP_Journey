#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std;

string  solve(string & s1, int k)
{
    string result = "";
    for (int i=0;i<s1.size();i++)
    {
        for (int j=0;j<k;j++)
        {
            result += s1[i];
        }
    }
    return result;
}

int main(void)
{
    int m,n,k;

    ifstream fin("cowsignal.in");
    ofstream fout("cowsignal.out");
    fin >> m >> n >> k;
    vector<string> mp(m);
    for (int i=0;i<m;i++)
    {
        fin >> mp[i];
    }
    vector<string> mp2(m*k);
    int j=0;
    for (int i = 0; i < m * k ; i += 2)
    {
        mp2[i] = solve(mp[j],k);
        mp2[i+1] = solve(mp[j],k);
        j++;
    }
    for (int i=0;i<m*k;i++)
    {
        fout << mp2[i] << "\n";
    }
}