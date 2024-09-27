class Solution
{
    public:
    long long f(int n, long long a[]) {
        vector<long long> ls(n), rs(n);
        stack<int> st;
        
        for(int i = 0; i < n; ++i) {
            while(!st.empty() && a[st.top()] >= a[i]) st.pop();
            
            if(st.empty()) ls[i] = 0;
            else ls[i] = st.top() + 1;
            st.push(i);
        }
        
        while(st.size()) st.pop();
        
        for(int i = n - 1; i > -1; --i) {
            while(!st.empty() && a[st.top()] >= a[i]) st.pop();
            
            if(st.empty()) rs[i] = n - 1;
            else rs[i] = st.top() - 1;
            st.push(i);
        }
        
        long long ans = 0;
        for(int i = 0; i < n; ++i) {
            ans = max(ans, a[i] * (rs[i] - ls[i] + 1));
        }
        return ans;
    }
    
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        return f(n,arr);

}

};
