#include<bits/stdc++.h>
using namespace std;

int longestSubarrayWithKOccurrences(const vector<int>& A, int k) {
    unordered_map<int, int> count;
    int left = 0, right = 0, maxLength = 0;

    while (right < A.size()) {
        count[A[right]]++;
        
        while (count[A[right]] > k) {
            count[A[left]]--;
            left++;
        }
        
        maxLength = max(maxLength, right - left + 1);
        right++;
    }

    return maxLength;
}
    int n,x,k;
int main() {
    vector<int> A ;
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen("MAXSEQ.inp","r",stdin);
    freopen("MAXSEQ.out","w",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        A.push_back(x);
    }
   
    cout <<  longestSubarrayWithKOccurrences(A, k) << endl;
    return 0;
}
