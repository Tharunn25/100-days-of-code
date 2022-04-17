//day 31 out of 100

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int nums[5] = {1,2,42,52,53};
    int max = nums[0];
    for(int i=1;i<5;++i){
        if(nums[i]<max){
            max = nums[i];
        }
        cout<<"The smallest element among the following is : "<<max;
    }
    return 0;
}
