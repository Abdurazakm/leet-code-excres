#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> vowelStrings(vector<string> &words, vector<vector<int>> &queries)
    {
        vector<int> list;
        list.push_back(0);

        int wsize = words.size();
        for (int j = 0; j < wsize; j++)
        {

            int x = 0;

            int lastindex = words[j].size() - 1;
            if ((words[j][0] == 'a' || words[j][0] == 'e' || words[j][0] == 'i' || words[j][0] == 'o' || words[j][0] == 'u') && (words[j][lastindex] == 'a' || words[j][lastindex] == 'e' || words[j][lastindex] == 'i' || words[j][lastindex] == 'o' || words[j][lastindex] == 'u'))
            {
                x = 1;
            }

            else
            {
                x = 0;
            }
            int a = j + 1;
            list.push_back(list[a] + x);  // calculates the prefix sum;
        }

        int qsize = queries.size();
        vector<int> output;

        for (int i = 0; i < qsize; i++)
        {
            output.push_back(list[queries[i][1] + 1] - list[queries[i][0]]) ;
        }
        return list;
    }
};

int main()
{

    return 0;
}