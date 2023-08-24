#include<iostream>
#include<fstream>

using namespace std;

int main(void)
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   ifstream fin("mixmilk.in");
   ofstream fout("mixmilk.out");

   int oper = 0;
   int diff;
   int c[3];
   int m[3];

   fin >> c[0] >> m[0] >> c[1] >> m[1] >> c[2] >> m[2];
   for (int i = 0; i < 100; i++)
   {
        if (oper == 0)
        {
            diff = c[1] - m[1];
            if (m[0] < diff)
            {
                m[1] += m[0];
                m[0] = 0;
            }
            else
            {
                m[1] = c[1];
                m[0] -= diff;
            }
            oper = 1;
        }
        else if (oper == 1)
        {
            diff = c[2] - m[2];
            if (m[1] < diff)
            {
                m[2] += m[1];
                m[1] = 0;
            }
            else
            {
                m[2] = c[2];
                m[1] -= diff;
            }
            oper = 2;
        }
        else
        {
             diff = c[0] - m[0];
            if (m[2] < diff)
            {
                m[0] += m[2];
                m[2] = 0;
            }
            else
            {
                m[0] = c[0];
                m[2] -= diff;
            }
            oper = 0;
        }
   }
   fout << m[0] << "\n" << m[1] << "\n" << m[2] << endl;
   return (0);
}
