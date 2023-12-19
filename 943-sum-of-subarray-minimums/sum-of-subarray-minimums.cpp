


class Solution {
public:
    vector<int> nsl(vector<int>& arr, int n) {
        vector<int> result;
        result.reserve(n);
        stack<int> st;

        for (int i = 0; i < n; i++) {
            if (st.empty()) result.push_back(-1);
            else {
                while (!st.empty() && arr[st.top()] >= arr[i])
                    st.pop();
                result.push_back(st.empty() ? -1 : st.top());
            }
            st.push(i);
        }
        return result;
    }

    vector<int> nsr(vector<int>& arr, int n) {
        vector<int> result;
        result.reserve(n);
        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {
            if (st.empty()) result.push_back(n);
            else {
                while (!st.empty() && arr[st.top()] > arr[i])
                    st.pop();
                result.push_back(st.empty() ? n : st.top());
            }
            st.push(i);
        }
        reverse(result.begin(), result.end()); // Reverse the result vector
        return result;
    }

    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> nslre = nsl(arr, n);
        vector<int> nsrre = nsr(arr, n);

        long long sum = 0;
        int m = 1e9 + 7;

        for (int i = 0; i < n; i++) {
            long long nl = i - nslre[i];
            long long nr = nsrre[i] - i;
            long long totalway = nl * nr;
            long long totalsum = arr[i] * totalway;
            sum = (sum + totalsum) % m;
        }
        return sum;
    }
};