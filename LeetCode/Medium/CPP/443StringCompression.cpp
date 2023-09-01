class Solution {
public:
    int compress(vector<char>& chars) {
        int size = chars.size();
        int left = 0;
        int right = 0;
        int count;
        char c;

        while (right < size)
        {
            c = chars[right];
            count = 0;
            while (right < size && c == chars[right])
            {
                count++;
                right++;
            }
            chars[left] = c;
            if (count > 1)
            {
                string n = to_string(count);
                for (int i = 0;i<n.size();i++)
                {
                    chars[left+i+1] = n[i];
                }
                left += n.size() + 1;
            }
            else
                left++;
        }
        return left;
    }
};
