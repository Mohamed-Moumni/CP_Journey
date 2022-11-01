#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(void)
{
    int a,b;
    cin >> a >> b;
    int count = 1;
    while (a != 0 && b != 0)
    {
        vector<string> s(a);
        for (int i=0;i<a;i++)
        {
            cin >> s[i];
        }
        for (int i=0;i<a;i++)
        {
            for (int j=0;j<b;j++)
            {
                if (s[i][j] != '*')
                    s[i][j] = '0';
            }
        }
        for (int i=0;i<a;i++)
        {
            for (int j=0; j<b;j++)
            {
                if (s[i][j] == '*')
                {
                    if (i - 1 >= 0 && s[i-1][j] != '*')
                        s[i - 1][j]++;
                    if (j - 1 >= 0 && s[i][j-1] != '*')
                        s[i][j-1]++;
                    if (i - 1 >= 0 && j - 1 >= 0 && s[i-1][j-1] != '*')
                        s[i-1][j-1]++;
                    if (i + 1 < a && s[i+1][j] != '*')
                        s[i + 1][j]++;
                    if (j + 1 < b  && s[i][j+1] != '*')
                        s[i][j+1]++;
                    if (i + 1 < a && j + 1 < b && s[i+1][j+1] != '*')
                        s[i+1][j+1]++;
                    if (i + 1 < a && j - 1 >= 0 && s[i + 1][j - 1] != '*')
                        s[i + 1][j - 1]++;
                    if (i - 1 >= 0 && j + 1 < b && s[i -1][j+1] != '*')
                        s[i-1][j+1]++;
                }
            }
        }
        cout << "Field #"<<count<<":"<<endl;
        for (int i=0;i<a;i++)
        {
            cout << s[i] << "\n";
        }
        cout << "\n";
        count++;
        cin >> a >> b;
    }   
}