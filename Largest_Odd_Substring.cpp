void findLargestOddSubstring(string num) {
  int n = num.size();
  for(int i = n - 1; i >= 0; i--) {
        if((num[i] - '0') % 2 == 1) {
            cout << num.substr(0, i + 1) << endl;
            return;
        }
    }

    cout << -1 << endl;
}