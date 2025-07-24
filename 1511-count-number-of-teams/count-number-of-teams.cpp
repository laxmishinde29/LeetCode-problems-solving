class Solution 
{
public:
    int numTeams(vector<int>& rating) 
    {
        int n = rating.size();
        bool decreasing = false;
        int count = 0;
        for (int i = 0; i < n-2; i++)
        {
            for (int j = i+1; j < n-1; j++)
            {
                decreasing = false;
                if (rating[j] < rating[i])
                    decreasing = true;
                for (int k = j+1; k < n; k++)
                {
                    if (decreasing)
                    {
                        if (rating[k] < rating[j])
                            count++;
                    }
                    else
                    {
                        if (rating[k] > rating[j])
                            count++;
                    } 
                }
            }
        }
        return count;
    }
};