// vector<int> calculateSpan(vector<int>& prices) {
//     int n = prices.size();
//     vector<int> span(n);
//     stack<int> st; // stores indices

//     for (int i = 0; i < n; ++i) {
//         while (!st.empty() && prices[st.top()] <= prices[i])
//             st.pop();

//         span[i] = st.empty() ? (i + 1) : (i - st.top());
//         st.push(i);
//     }

//     return span;
// }
