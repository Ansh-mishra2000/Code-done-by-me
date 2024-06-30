#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int kthSmallestElement(vector<int> v, int k) {
  priority_queue<int> pq;
  int n = v.size();
  for (int i = 0; i < k; i++) {
    pq.push(v[i]);
  }
  for (int i = k; i < n; i++) {
    if (v[i] < pq.top()) {
      pq.pop();
      pq.push(v[i]);
    }
  }
  return pq.top();
}
int main() {
  vector<int> v = {7, 2, 6, 1, 9};
  int k = 3; // third smallest element we have to find out
  cout << kthSmallestElement(v, k);
}