#include<bits/stdc++.h>
using namespace std;

const int R = 6,C = 6;

void Sum(int arr[R][C])
{
  int max_sum = INT_MIN;
  for (int i = 0; i < R - 2; i++) {
    for (int j = 0; j < C - 2; j++) {
      int sum = (arr[i][j] + arr[i][j + 1] + arr[i][j + 2]) + (arr[i + 1][j + 1]) + (arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2]);
      max_sum = max(max_sum, sum);
    }
  }
  cout<<max_sum;
}

int main() {
  int arr[6][6];
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      cin >> arr[i][j];
    }
  }
  Sum(arr);
  return 0;
}
