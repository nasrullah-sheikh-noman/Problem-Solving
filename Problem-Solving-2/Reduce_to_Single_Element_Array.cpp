bool canReduce(int N, vector<int>& arr) {
    //write your code here
    sort(arr.begin(), arr.end());
    for(int i = 0; i < (arr.size()-1); i++) {
        if((arr[i+1] - arr[i]) > 1) {
            return false;
        }
    }
    return true;
}