#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
     int n = matrix.size();
        
        vector<pair<int,int>>v;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    v.push_back({i,j});
                    // v.push_back(j);
                }
            }
        }
            int m=0;
           while(m<v.size()){
               int r= v[m].first;
               int c= v[m].second;
            for(int j = 0;j<matrix[0].size();j++){
                matrix[r][j]=0;
            }
            for(int j = 0;j<matrix.size();j++){
                matrix[j][c]=0;
            }
               m++;
        }
    
    
    
}