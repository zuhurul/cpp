// Sum: Variable and constant in C++
// Out: Volume of Sphere is = 4188.786621
// Env: Run in windows

#include <iostream.h>
#include <conio.h>

void main()
{
  clrscr();
  float rad;
  const float PI = 3.14159;
  
  cout << "Enter Radius of Sphere ::: ";
  cin >> rad;
  
  float vol = (4.0 / 3.0) * PI * rad * rad * rad;
  
  cout << "\n Volume of Sphere is = " << vol;
  
  getch();
}
