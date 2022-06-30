#include<algorithm>
double median(vector<int> a, vector<int> b)
{
    // Write your code here.
    vector<double>v;
    double ans = 0;
    double x = 0;
    for(int i = 0;i<a.size();i++){
        v.push_back(a[i]);
    }
    for(int i = 0;i<b.size();i++){
        v.push_back(b[i]);
    }
//     for(int i = 0;i<v.size();i++){
//         temp+=v[i];
//     }
//     x = float(temp/v.size());
//     return x;
   std::sort(v.begin(),v.end());

//    int start=0;

//    int end=v.size()-1;

//    int mid=start+(end-start)/2;

//    if(end%2==0)

//    {

//        ans=v[mid];

//    }

//    else

//    {

//        ans=v[mid]+v[++mid];

//        ans=ans/2;

//    }
    int n=v.size();
    if(n%2==1)
    {
        return v[(n)/2];
    }
    else{
        return (v[(n)/2]+v[((n)/2)-1])/2;
    }

//    return ans;
}
