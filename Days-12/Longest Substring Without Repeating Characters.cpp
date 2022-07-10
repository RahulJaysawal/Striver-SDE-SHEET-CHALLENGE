#include <bits/stdc++.h> 
int uniqueSubstrings(string s)
{
    //Write your code here
//      int i = 0;
//     int j = 0;
//     unordered_map<char,int>mp;
//     int mini = -1;
//         if(s.length()==0){
//             return 0;
//         }
//     while(j<s.length()){
//         mp[s[j]]++;
//         // if(mp.size()<k){
//         //     j++;
//         // }
//         if(mp.size()==j-i+1){
//             mini = max(mini,j-i+1);
//             j++;
//         }
//         else if(mp.size()<=j-i+1){
//             while(mp.size()<j-i+1){
//                 mp[s[i]]--;
//                 if(mp[s[i]]==0){
//                     mp.erase(s[i]);
//                 }
//                 i++;
//             }
//             j++;
//         }
//     }
      
        int mini = 0;
    int n = s.length();
        for(int i = 0;i<n;i++){
            vector<bool>v(128,false);
                    int count = 0;                              
            for(int j = i;j<n;j++){                       
                if(v[s[j]]!=true){
                    v[s[j]]=true;
                    count++;
                }
                else{
                    break;
                }
            }
            mini = max(mini,count);
        }
        return mini;
    
    
    
    return mini;
}