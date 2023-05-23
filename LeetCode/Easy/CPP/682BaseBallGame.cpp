#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations)
    {
        vector<int> record;
        int track = 0;
        for (int i = 0; i < operations.size(); i++)
        {
            if (operations[i] == "C")
            {
                record.pop_back();
                track--;
            }
            else if (operations[i] == "D")
            {
                record.push_back(record[track - 1] * 2);
                track++;
            }
            else if (operations[i] == "+")
            {
                record.push_back(record[track - 1] + record[track - 2]);
                track++;
            }
            else
            {
                record.push_back(atoi(operations[i].c_str()));
                track++;
            }
        }
        return accumulate(record.begin(), record.end(), 0);
    }
};

int main(void)
{
    vector<int> vect;
    Solution s;

    vect.push_back("5");
    vect.push_back("2");
    vect.push_back("C");
    vect.push_back("D");
    vect.push_back("+");
    cout << s.calPoints(vect) << endl;
    return (0);
}