class Solution {
public:
    int maxProduct(vector<int>& A) {
    if(A.size()==1) return A[0];
    int pMax=0, nMax=0, m = 0;
    for(int i=0; i<A.size(); i++){
        if(A[i]<0) swap(pMax, nMax);
        pMax = max(pMax*A[i], A[i]);
        nMax = min(nMax*A[i], A[i]);
        m = max(m, pMax);
    }
    return m; 
    }
};
