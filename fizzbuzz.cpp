#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[]) {
  if (argc < 2) {
    // Tell the user how to use the program
    cout << "Usage: " << argv[0] << " Integer" << endl;
    return 1;
  }

  // Run a loop from 1 to the value of argv[1], printing N plus "Fizz" for
  // multiples of 3, N plus "Buzz" for multiples of 5 and "FizzBuzz" for
  // multiples
  // of 3 and 5.

  int i;
  i = atoi(argv[1]);
  for (int a = 1; a < i; a = a + 1) {
    if (a % 3 == 0 && a % 5 == 0) {
      cout << a << " FizzBuzz!" << endl;
    } else if (a % 3 == 0) {
      cout << a << " Fizz" << endl;
    } else if (a % 5 == 0) {
      cout << a << " Buzz" << endl;
    } else {
      cout << a << endl;
    }
  }
  return 0;
}
