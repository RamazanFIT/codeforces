#include <bits/stdc++.h>
#define ENDL "\n"
#define ff first 
#define ss second  
#define all(x) (x).begin(), (x).end()
#define endd return 0;
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        int sum_ = 0;
        for(int i = 0; i < nums.size(); i++){
            sum_ += nums[i];
        }
        int ans = sum_;
        while(right - left != 0){
            if(nums[left] < nums[right]){
                sum_ -= nums[left];
                ans = max(ans, sum_);
                left++;
            } else if(nums[left] > nums[right]){
                sum_ -= nums[right];
                ans = max(ans, sum_);
                right--;
            } else {
                if(nums[left + 1] < nums[right - 1]){
                    
                }
            }
        }
    }
};

