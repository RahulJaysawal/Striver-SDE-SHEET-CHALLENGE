#include<bits/stdc++.h>
using namespace std;

struct meeting{
    int start_;
    int end_;
    int pos;
};

bool comparator(struct meeting m1, meeting m2){
    if(m1.end_<m2.end_) return true;
    else if(m1.end_>m2.end_) return false;
    else if(m1.pos<m2.pos) return true;
    return false;
}
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    int n = start.size();
    struct meeting meet[n];
    for(int i=0; i<start.size(); i++){
        meet[i].start_= start[i];
        meet[i].end_ = end[i];
        meet[i].pos = i+1;
    }    
    sort(meet, meet+n, comparator);
    
    
    //     int n = start.size();
//       vector<pair<int,int>>v;
//       for(int i = 0;i<n;i++){
//           v.push_back({end[i],start[i]});
//       }
      
//       sort(v.begin(),v.end());
//       int count = 1;
//       int temp = v[0].first;
//       for(int j = 1;j<n;j++){
//                  if(v[j].second>temp){
//                      count++;
//                      temp = v[j].first;
//                  }          
//       }
//       return count;
    
    
    vector<int> ans;
    int limit = meet[0].end_;
    ans.push_back(meet[0].pos);
    for(int i=1; i<n; i++){
        if(meet[i].start_>limit){
            limit = meet[i].end_;
            ans.push_back(meet[i].pos);
        }
    }
    return ans;
}