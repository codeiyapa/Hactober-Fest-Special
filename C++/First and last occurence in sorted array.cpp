class Solution {
public:
    int firstoccurence(vector<int>& nums,int target){
        int s = 0;
        int e = nums.size()-1;
        int ans = -1;
        while(s<=e){
          int  mid = s + (e-s)/2;
            if(nums[mid] == target){
                ans = mid ; 
                e = mid - 1;
            }
            else if(target<nums[mid]){
                e = mid -1;
            }
            else
                s = mid +1;
            
        }
        return ans;
    }
    int lastoccurence(vector<int>& nums,int target){
        int s = 0;
        int e = nums.size()-1;
        int ans = -1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(nums[mid] == target){
                ans = mid ; 
                s = mid + 1;
            }
            else if(target<nums[mid]){
                e = mid -1;
            }
            else
                s = mid +1;
            
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2,-1);
        int first = firstoccurence(nums,target);
        if(first == -1)
            return ans;
        int last = lastoccurence(nums,target);
        ans[0]=first;
        ans[1]=last;
        
        return ans;
        
        
    }
};