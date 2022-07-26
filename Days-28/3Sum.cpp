#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	
        vector< vector<int> > answer;
    // Write your code here.
    sort(arr.begin(),arr.end());
    int i =0;
    int j;
    int k;
    while(i<n){
        j=i+1;
        k=n-1;
        while(j<k){
            int sum= arr[i]+arr[j]+arr[k];
            if(sum == K){
                answer.push_back({arr[i],arr[j],arr[k]});
                j++;
                while(arr[j] == arr[j-1])
                    j++;
            }
            else if(sum<K){
                j++;
                while(arr[j] == arr[j-1])
                    j++;
            }
            else{
                k--;
                while(arr[k] == arr[k+1])
                    k--;
            }
            }
        i++;
         while(arr[i] == arr[i-1])
                    i++;
        }
    return answer;
}