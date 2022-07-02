#include <bits/stdc++.h>
int uniqueElement(vector<int> arr, int n)
{
	// Write your code here
//     int temp = 0;
//     unordered_map<int,int>mp;
//     for(int i = 0;i<n;i++){
//         mp[arr[i]]++;
//     }
//     for(auto it:mp)
//         if(it.second==1){
//             temp = it.first;
//         }
//     return temp;
//     sort(arr.begin(),arr.end());
    for(int i = 0;i<n;i=i+2){
       
            if(arr[i]!=arr[i+1]){
                return arr[i];
            }
        }
    
}
