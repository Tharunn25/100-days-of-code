//day 18 out of 100
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            ans[i] = nums[nums[i]];
        }
        return ans;
    }
};
int main(){
    return 0;
}