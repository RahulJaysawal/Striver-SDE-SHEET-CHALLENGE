#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
    priority_queue<int>pq;
    vector<int>v;
    for(int i = 0;i<m;i++){
//         int x = arr1[i];
//         pq.push(x);
        v.push_back(arr1[i]);
        
    }
    for(int i = 0;i<n;i++){
      v.push_back(arr2[i]);
    }
//     for(int i = 0;i<pq.size();i++){
//         int temp = pq.top();
//         v.push_back(temp);
//         pq.pop();
//     }
    sort(v.begin(),v.end());
//     reverse(v.begin(),v.end());
    return v;
}
