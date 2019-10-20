// Sum: Arithmatic operators in C++

#include <iostream.h>
#include <conio.h>

void main()
{
  int a, b, res;
  clrscr();
  
  cout << "Enter two numbers ::: ";
  cin >> a >> b;
  
  res = a + b;
  cout << "\n" << a << " + " << b << " = " << res;
  
  res = a - b;
  cout << "\n" << a << " - " << b << " = " << res;
  
  res = a * b;
  cout << "\n" << a << " * " << b << " = " << res;
  
  res = a / b;
  cout << "\n" << a << " / " << b << " = " << res;
  
  res = a % b;
  cout << "\n" << a << " % " << b << " = " << res;
  
  getch();
}
