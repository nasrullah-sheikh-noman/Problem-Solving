bool foundTarget(vector<vector<int>>& matrix, int row, int tar) {
  int n = matrix[0].size();
  int stcol = 0, endcol = n - 1;
  while(stcol<=endcol) {
    int mid = stcol + (endcol - stcol) / 2;
    if(matrix[row][mid]==tar)
      return true;
    else if(matrix[row][mid]>tar)
      endcol = mid-1;
    else
      stcol = mid+1;
  }
  return false;
}

int m = matrix.size();
int n = matrix[0].size();
int strow = 0, endrow = m - 1;
while(strow<=endrow) {
  int mid = strow + (endrow - strow) / 2;
  if(target>=matrix[mid][0] && target<=matrix[mid][n-1]) {
    if(foundTarget(matrix, mid, target))
      return true;
  } else if(target >= matrix[mid][n-1]) {
    strow = mid + 1;
  } else
    endrow = mid - 1;
}
return false;