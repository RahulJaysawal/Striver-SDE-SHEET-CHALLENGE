/*
	This is signature of helper function 'knows'.
	You should not implement it, or speculate about its implementation.

	bool knows(int A, int B); 
	Function 'knows(A, B)' will returns "true" if the person having
	id 'A' know the person having id 'B' in the party, "false" otherwise.
*/
#include<bits/stdc++.h>

int findCelebrity(int n) {
     // Write your code here.
    stack<int> st;
    int possibleCandidate=-1;
    for(int i=0; i<n; i++)
    {
        st.push(i);
    }
    while(st.size()>1)
    {
        int temp1=st.top();
        st.pop();
        if(!st.empty())
        {
            int temp2=st.top();
            st.pop();
            if(knows(temp1, temp2) && !knows(temp2, temp1))
            {
                st.push(temp2);
            }
            else if(!knows(temp1, temp2) && knows(temp2, temp1))
            {
                st.push(temp1);
            }
        }
        else
            possibleCandidate=temp1;
    }
    if(!st.empty()) possibleCandidate=st.top();
    for(int i=0; i<n; i++)
    {
        if(i!=possibleCandidate && !knows(i, possibleCandidate))
        {
            return -1;
        }
    }
    return possibleCandidate;
}