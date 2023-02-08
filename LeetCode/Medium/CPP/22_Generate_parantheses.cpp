#include<iostream>
#include<vector>
#include<stack>
#include<string>

using namespace std;

// after review the solution

class Solution
{
    private:
        vector<string> res;
        int N;
    public:
        void recu_func(string s, int l, int r)
        {
            string se;
            if (l == this->N && r == this->N)
            {
                this->res.push_back(s);
                return ; 
            }
            if (l < this->N)
            {
                se = s + "(";
                recu_func(se,l+1,r);
            }
            if (r < l)
            {
                se = s + ")";
                recu_func(se,l,r+1);
            }
        }
        vector<string> generateParenthesis(int n)
        {
            string su = "";
            this->N = n;
            this->recu_func(su,0,0);
            return (this->res);
        }
};

// My own solution

// class Solution {
//     vector<string> res;
// public:
//     void    func(string s, int l, int r)
//     {
//         int x;
//         string se;
//         if (l == 0 && r == 0)
//         {
//             res.push_back(s);
//             return ;
//         }
//         if (l == r)
//         {
//             x = l;
//             se = s + "(";
//             func(se, --x, r);
//         }
//         else
//         {
//             if (l != 0)
//             {   
//                 x = l;
//                 se = s + "(";
//                 func(se, --x, r);
//             }
//             if (r != 0)
//             {
//                 x = r;
//                 se = s + ")";
//                 func(se, l, --x);
//             }
//         }
//     }
//     vector<string> generateParenthesis(int n)
//     {
//         string uu = "(";
//         func(uu, n-1, n);
//         return (res);
//     }
// };

int main(void)
{
    Solution sol;
    vector<string> result = sol.generateParenthesis(3);

    for (int i = 0;i < result.size();i++)
    {
        cout << result[i] << endl;
    }
    return (0);
}
