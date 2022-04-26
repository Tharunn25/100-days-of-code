// day 84 out of 100

// leet code 2114

class Solution
{
public:
    // This function gives the number of words in a sentence
    int wordCount(string &s)
    {
        int i = 0, count = 0;
        while (i < s.length())
        {
            bool found = false;
            while (i < s.length() && s[i] != ' ')
            {
                found = true;
                i++;
            }
            if (found)
            {
                count++;
            }
            i++;
        }
        return count;
    }
    int mostWordsFound(vector<string> &sentences)
    {
        int ans = 0;
        for (auto it : sentences)
        {
            ans = max(ans, wordCount(it));
        }
        return ans;
    }
};