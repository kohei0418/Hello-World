#include <iostream>

using namespace std;

int fib(int n) {
  if(n <= 1) return 0;
  else return fib(n-1) + fib(n-2);
}

int main()
{
  cout << "Hello, World!" << endl;

  return 0;
}
