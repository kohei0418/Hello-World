#include <iostream>

using namespace std;

int fib(int n) {
  if(n <= 1) return 1;
  else return fib(n-1) + fib(n-2);
}

int prod(int n) {
  if(n <= 1) return 1;
  else return n * prod(n-1);
}

int main()
{
  cout << "Hello, World!" << endl;

  int n;
  cin >> n;

  for(int i = 1; i <= n; i++)
    cout << "fib(" << i << ") = " << fib(i) << endl;

  cout << "That's it!" << endl;

  return 0;
}
