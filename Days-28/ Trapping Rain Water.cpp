#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    // Write your code here.
     long left[n];
       long right[n];
        left[0]=arr[0];
        right[n-1]=arr[n-1];
        for(long i=1;i<n;i++)
            left[i]=max(left[i-1],arr[i]);
         for(long i=n-2;i>=0;i--)
            right[i]=max(right[i+1],arr[i]);       
        long ans=0;
        for(long i=0;i<n;i++)
        {
            ans+=min(left[i],right[i])-arr[i];
        }
        return ans; 
}