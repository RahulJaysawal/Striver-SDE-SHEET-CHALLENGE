#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
//     M-1
//     sort(arr.begin(),arr.end());
//     for(int i = 0;i<n;i++){
//         if(abs(arr[i]-arr[i+1]==0)){
//             return arr[i];
//         }
//     }
    
//     M-2
//     for(int i = 0;i<n;i++){
//         for(int j = i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 return arr[i];
//             }
//         }
//     }
    
//     M-3
    unordered_map<int,int>mp;
    for(int i = 0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto x:mp)
        if(x.second>1){
            return x.first;
        }
}
           

