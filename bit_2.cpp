// getbit(),setbit() and clearbit().

#include <bits/stdc++.h>
using namespace std;

int getbit(int num, int pos) // it returns 1 or 0 on a particular position in a binary no.
{
  int mask = 1 << (pos - 1);
  return (mask & num);
}

int setbit(int num, int pos) // it set the bit which means change bit 0 to 1 in a binary no.
{
  int mask = 1 << (pos - 1);
  return (num | mask);
}

int clearbit(int num, int pos) // it unsets the bit which means change bit 1 to 0 in a binary no.
{
  int mask = ~(1 << (pos - 1));
  return (mask & num);
}

int main()
{

  int num;
  cin >> num;

  int pos;
  cin >> pos;

  // cout << getbit(num, pos) << endl;

  // cout << setbit(num, pos) << endl;

  cout << clearbit(num, pos) << endl;

  return 0;
}
