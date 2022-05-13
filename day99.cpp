// day 99 out of 100
// gfg problem

// find index

public:
vector<int> findIndex(int a[], int n, int key)
{

    vector<int> ans, ans2;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            ans.push_back(i);
            flag++;
        }
    }
    if (flag == 1)
    {
        ans.push_back(ans[0]);
    }
    else if (flag == 0)
    {
        ans.push_back(-1);
        ans.push_back(-1);
    }
    ans2.push_back(ans.front());
    ans2.push_back(ans.back());
    return ans2;
}