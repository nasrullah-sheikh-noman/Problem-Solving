bool canWin(int a, int b, int w) {
    // Write your code here
    int all = a+b;
    if(all >= w) {
        return true;
    } else return false;
}