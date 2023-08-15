#include<iostream>

using namespace std;

int main(void)
{
  string s;cin>>s;
  int size = s.size();
  int ans = 0;
  int curr = 1;
  int i = 0;
  while(i < size - 1)
  {
    if (s[i] == s[i+1])
    {
      curr++;
    }
    else
    {
      ans = max(ans, curr);
      curr = 1;
    }
    i++;
  }
  ans = max(ans, curr);
  cout << ans << endl;
  return (0);
}
