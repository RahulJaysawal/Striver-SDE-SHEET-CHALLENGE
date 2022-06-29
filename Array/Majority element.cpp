#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	// Write your code here.
     int temp = -1;
    unordered_map<int,int>mp;
    for(int i = 0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto x:mp){
        if(x.second>n/2){
//             pq.push({x.second,x.first});
            temp = x.first;
           break;
        }
    }
    return temp;
}
