#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;

long long MaxPairwiseProduct(const vector<int>& numbers) {
  int n = numbers.size();
  
  int idx0 = -1;
  for (int i = 0; i < n; ++i) {
    if(idx0 == -1 || numbers[idx0] < numbers[i]){
      idx0 = i;
    }
  }

  int idx1 = -1;
  for (int j = 0; j < n; ++j) {
    if((idx1 == -1 || numbers[idx1] < numbers[j]) && j != idx0 ){
      idx1 = j;
    }
  }
  return ((long long)numbers[idx0]) * numbers[idx1];
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    long long result = MaxPairwiseProduct(numbers);
    cout << result << "\n";
    return 0;
}
