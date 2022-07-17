    #include<algorithm>
void solve( int index ,vector<int>&num, vector<int>&ans,int sum){
    if(index==num.size()){
        ans.push_back(sum);
        return;
    }
      //element is picked
    solve(index+1,num,ans,sum+num[index]);
     //element is not picked
    solve(index+1,num,ans,sum);
}

vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
//     vector<int>v;
//     int sum = 0;
//     int count = 0;
//     int n = num.size();
    
//      for(int k = 0;k<n;k++){
//         v[k]=num[k];
//     }
    
//     for(int m = 0;m<n;m++){
//         count = count+num[m];
//     }
//     for(int i = 0;i<n;i++){
//         for(int j = i+1;j<n;j++){
//             v.push_back(sum);
//             sum+=num[i]+num[j];
//         }
//     }
//     v.push_back(count);
//     sort(v.begin(),v.end());
//     return v;
    vector<int>ans;
    solve(0,num,ans,0);
       sort(ans.begin(),ans.end()); 
        return ans;
}