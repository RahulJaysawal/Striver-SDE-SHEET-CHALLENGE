#include <bits/stdc++.h>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
    sort(arr.begin(),arr.end());
    vector<int>v;
    int temp1 = arr[k-1];
    int temp2 = arr[n-k];
    v.push_back(temp1);
    v.push_back(temp2);
    return v;
}
