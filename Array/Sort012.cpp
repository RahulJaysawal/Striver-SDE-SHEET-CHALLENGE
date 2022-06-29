#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
//     M-1
  for(int i = 0;i<n-1;i++){
      if(arr[i]>arr[i+1]){
          swap(arr[i],arr[i+1]);
          i=-1;
      }
  }
//     M-2
//     sort(arr,arr+n);
    
//     M-3
//     priority_queue <int, vector<int>, greater<int> > pq;
//         vector<int>v;
//     for(int i = 0;i<n;i++){
//         pq.push(arr[i]);
//     }
//         while(!pq.empty()){
//             int temp = pq.top();
// //             int k = 0;
//             pq.pop();
//             v.push_back(temp);
            
//         }
//     for(int i = 0;i<v.size();i++){
//         arr[i]=v[i];
//     }

//     reverse(pq.begin(),pq.end());
}
