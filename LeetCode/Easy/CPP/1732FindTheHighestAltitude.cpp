class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int highest = 0;
        for (int i = 1; i < gain.size(); i++)
        {
            gain[i] = gain[i - 1] + gain[i];
        }
        for (auto u:gain)
        {
            highest = max(u, highest);
        }
        return (highest);
    }
};