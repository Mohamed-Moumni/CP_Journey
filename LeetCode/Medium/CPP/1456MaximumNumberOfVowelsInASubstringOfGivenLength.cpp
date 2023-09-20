class Solution {
public:
    bool alpha[128];

    int maxVowels(string s, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int maxVowels = 0;
        int ans;
        alpha['a'] = true;
        alpha['o'] = true;
        alpha['i'] = true;
        alpha['e'] = true;
        alpha['u'] = true;
        for (int i = 0; i < k; i++)
        {
            if (alpha[s[i]])
                maxVowels++;
        }
        int left = 0;
        ans = maxVowels;
        while (left + k < s.size())
        {
            maxVowels += alpha[s[left + k]] ? 1 : 0;
            maxVowels -= alpha[s[left]] ? 1 : 0;
            if (ans < maxVowels)
                ans = maxVowels;
            left++;
        }
        return ans;
    }
};