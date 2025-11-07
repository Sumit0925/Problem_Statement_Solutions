// Problem-3: With a single integer as the input, generate the following until a
// = x [series of numbers as shown in below examples]

//   Output: (examples)
//     1) input a = 1, then output : 1
//     2) input a = 2, then output : 1
//     3) input a = 3, then output : 1, 3, 5
//     4) input a = 4, then output : 1, 3, 5
//     5) input a = 5, then output : 1, 3, 5, 7, 9
//     6) input a = 6, then output : 1, 3, 5, 7, 9
//     .
//     .
//     7) input a = x, then output : 1, 3, 5, 7, .......

#include <bits/stdc++.h>
using namespace std;

void generateOddSeries(int a) {
  int count;
  if (a % 2 == 0)
    count = a - 1;
  else
    count = a;

  cout << "Output : ";
  for (int i = 1; i <= count; i++) {
    cout << (2 * i - 1);
    if (i != a) cout << ", ";
  }
}

int main() {
  cout << "=============Odd Series Generater=============" << endl;
  int a;
  cout << "Enter the value of a: ";
  cin >> a;
  if (a < 0) {
    cout << "Please Enter positve integer !!" << endl;
  } else if (a == 0) {
    cout << "Please Enter a integer greater than 0 !!" << endl;
  } else {
    cout << "Input a = " << a << ", ";
    generateOddSeries(a);
  }

  return 0;
}