class Solution {
public:
    string reverseWords(string s) {
        int     i = 0;
        int     start;
        int     end;
        int     size = s.size();
        vector<string> vect;
        string ans = "";

        while (i < size)
        {
            if (s[i] != ' ')
            {
                start = i;
                while (i < size && s[i] != ' ')
                    i++;
                end = i;
                vect.push_back(s.substr(start, end - start));
            }
            i++;
        }
        reverse(vect.begin(), vect.end());
        for (int i = 0; i < vect.size() - 1; i++)
        {
            ans += vect[i];
            ans += " ";
        }
        ans += vect[vect.size() - 1];
        return ans;
    }
};
