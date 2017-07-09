


int bit(vector<int> &A) {
    if (A.size() <= 1)
        return (A.size() == 1) ? A[0] : 0;
    //sort(A.begin(), A.end());
    int ret = 0;
    for (int i = 0; i < A.size(); ++i) {
        ret = ret ^ A[i];


    }
    return ret;
}

