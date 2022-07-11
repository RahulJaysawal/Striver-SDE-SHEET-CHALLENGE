int longestSubSeg(vector<int> &nums , int n, int k){
    // Write your code here.
      int count = 0;
        int temp=0;
    int mini = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
               
            }
            if(count>k){
                while(count>k){
                    if(nums[temp]==0){
                        count--;
                    }
                    temp++;
//                 temp = max(temp,count);
//                 count = 0;
                }
            }
            mini = max(mini,i-temp+1);
        }
//         temp=max(temp,count);
        
        return mini;;
}

