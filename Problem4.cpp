// Problem-4: Get the total count of number listed in the dictionary which is
// multiple of [1,2,3,4,5,6,7,8,9]
//   (examples)
//   input: [1,2,8,9,12,46,76,82,15,20,30]
//   Output:
//     {1: 11, 2: 8, 3: 4, 4: 4, 5: 3, 6: 2, 7: 0, 8: 1, 9: 1}

#include <iostream>
#include <map>
#include <vector>
using namespace std;

void countMultiples(vector<int> nums) {
  map<int, int> result;

  for (int i = 1; i <= 9; i++) {
    int count = 0;
    for (int n : nums) {
      if (n % i == 0) count++;
    }
    result[i] = count;
  }

  // Output
  cout << "Output : ";
  cout << "{";
  for (int i = 1; i <= 9; i++) {
    cout << i << ": " << result[i];
    if (i != 9) cout << ", ";
  }
  cout << "}" << endl;
}

void displayInput(vector<int> numbers) {
  cout << "Input : {";
  for (int i = 0; i < numbers.size(); i++) {
    cout << numbers[i];
    if (i != numbers.size() - 1) {
      cout << ", ";
    }
  }
  cout << "}" << endl;
}

int main() {
  cout << "==============Multiple Counter===========" << endl;
  int n;
  cout << "Enter the no. of digits you want to enter : ";
  cin >> n;
  if (n < 0) {
    cout << "Please Enter positve integer !!" << endl;
  } else if (n == 0) {
    cout << "Please Enter a integer greater than 0 !!" << endl;
  } else {
    vector<int> nums;
    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++) {
      int num;
      cout << "Number " << i + 1 << ": ";
      cin >> num;
      nums.push_back(num);
    }
    cout << endl;
    displayInput(nums);
    countMultiples(nums);
  }
  return 0;
}
