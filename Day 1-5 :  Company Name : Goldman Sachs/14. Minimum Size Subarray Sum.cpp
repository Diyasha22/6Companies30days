class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0,sum=0,n=INT_MAX;
        while(j<nums.size())
        {
            
            if(sum<target)
            {
              sum+=nums[j];    
            }
            if(sum>=target)
            {
                while(i<=j && sum>=target)
                {
                n=min(n,j-i+1);
                 sum-=nums[i];
                    i++;
                }
            }
            j++;
        }
        if(n==INT_MAX)
            return 0;
        else
            return n;
    }
};
