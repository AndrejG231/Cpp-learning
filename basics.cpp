#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;

void someFunction(string name, int defaultParam = 0)
{
  cout << "Called function" << name << endl;
}

//Overloading
int sum(int a, int b)
{
  return a + b;
}

float sum(double a, double b)
{
  return 12.321480;
}

//OOP
class Triangle
{
public:
  int a;
  int b;
  double c;
  Triangle(int x, int y)
  {
    a = x;
    b = y;
    c = hypot(x, y);
  }
  int getSumOfSides()
  {
    return a + b + c;
  }
};

class EvenTriangle : public Triangle
{
public:
  EvenTriangle(int x) : Triangle(x, x) { c = x; }
};

int main()
{
  //variables
  int variable = 10;
  const int unchangeableInt = 10;

  cout << "Enter a number \n";
  cin >> variable;

  cout << unchangeableInt << endl;

  //Data types
  int integer = 10;
  float smallFloat = 10.214;
  double bigFloat = 10.214419;
  float scientificFloat = 35e3;
  double scientificDouble = 12E4;

  bool codingIsFun = true;

  char singleCharacter = 's';
  char fromASCII = 54;

  string someText = "Looks good";
  cout << someText << endl;

  //Operators

  int x = 100 + 50;
  x += 50;
  x -= 40;
  x++;

  cout << x << endl;

  x = x & 3;
  //Memory address of operator;

  bool comparison = 2 > 1 && 3 < 2;

  cout << comparison << endl;

  //Strings:
  string str1 = "Hello ";
  string str2 = "World";
  string joined = str1 + str2;

  cout << joined << endl;
  cout << "Length: ";
  cout << joined.length() << endl;

  char firstChar = joined[0];
  cout << firstChar << endl;

  //Math
  x = 21;
  float y = 2.23;
  float z = 3.5;

  cout << abs(x) << endl;       //Returns the absolute value of x
  cout << acos(x) << endl;      //Returns the arccosine of x
  cout << asin(x) << endl;      //Returns the arcsine of x
  cout << atan(x) << endl;      //Returns the arctangent of x
  cout << cbrt(x) << endl;      //Returns the cube root of x
  cout << ceil(x) << endl;      //Returns the value of x rounded up to its nearest integer
  cout << cos(x) << endl;       //Returns the cosine of x
  cout << cosh(x) << endl;      //Returns the hyperbolic cosine of x
  cout << exp(x) << endl;       //Returns the value of Ex
  cout << expm1(x) << endl;     //Returns ex -1
  cout << fabs(x) << endl;      //Returns the absolute value of a floating x
  cout << fdim(x, y) << endl;   //Returns the positive difference between x and y
  cout << floor(x) << endl;     //Returns the value of x rounded down to its nearest integer
  cout << hypot(x, y) << endl;  //Returns sqrt(x2 +y2) without intermediate overflow or underflow
  cout << fma(x, y, z) << endl; //Returns x*y+z without losing precision
  cout << fmax(x, y) << endl;   //Returns the highest value of a floating x and y
  cout << fmin(x, y) << endl;   //Returns the lowest value of a floating x and y
  cout << fmod(x, y) << endl;   //Returns the floating point remainder of x/y
  cout << pow(x, y) << endl;    //Returns the value of x to the power of y
  cout << sin(x) << endl;       //Returns the sine of x (x is in radians)
  cout << sinh(x) << endl;      //Returns the hyperbolic sine of a double value
  cout << tan(x) << endl;       //Returns the tangent of an angle
  cout << tanh(x) << endl;      //Returns the hyperbolic tangent of a double value

  //Conditions

  int myAge;
  cout << "Enter your age: ";
  cin >> myAge;

  if (myAge > 18)
  {
    cout << endl
         << "You are over 18";
  }
  else if (myAge == 18)
  {
    cout << endl
         << "You are exactly 18";
  }
  else
  {
    cout << endl
         << "You are not over 18";
  }

  cout << endl
       << (myAge >= 18)
      ? "you are adult"
      : "you are not adult";

  cout << endl
       << "Switch test: enter 0 or 1" << endl;

  int bit;
  cin >> bit;

  //Switch

  switch (bit)
  {
  case 1:
    cout << "You entered one" << endl;
    break;
  case 0:
    cout << "You entered zero" << endl;
    break;
  default:
    cout << "You entered neither 0 or 1" << endl;
  }

  //While
  int i = 0;
  while (i < 10)
  {
    cout << i << endl;
    i++;
  }

  do
  {
    cout << i << endl;
    i++;
  } while (i < 11);

  //For
  for (int j = 0; j < 10; j++)
  {
    cout << j;
  }

  //Break
  for (int j = 0; j < 20; j++)
  {
    cout << j;
    if (j % 11 == 1)
    {
      break;
    }
  }

  //Arrays

  string names[4] = {"John",
                     "Jake",
                     "Anna",
                     "Paul"};

  int numbers[5] = {
      10,
      20,
      30,
      40,
      50};

  cout << names[3] << endl;
  cout << numbers[3] << endl;

  string cars[3];

  cars[0] = "Mazda";
  cars[1] = "Nissan";
  cars[2] = "Dodge";

  string tools[] = {"Hammer",
                    "Shears"};

  //References

  string color = "red";
  string &myColor = color;

  //Memory address

  cout << color << endl;
  cout << &color << endl;
  cout << myColor << endl;

  //Pointers

  string *newColor = &color;

  cout << newColor << endl;

  someFunction("Some Name");

  int realSum = sum(1, 2);
  float funcRes = sum(12.2123, 13.2123);

  cout << realSum << endl;
  cout << funcRes << endl;

  Triangle triangleOne(4, 4);
  cout << "Normal triangle" << endl;

  cout << "A:";
  cout << triangleOne.a << endl;
  cout << "B:";
  cout << triangleOne.b << endl;
  cout << "C:";
  cout << triangleOne.c << endl;
  cout << triangleOne.getSumOfSides() << endl;

  EvenTriangle triangleTwo(5);
  cout << endl
       << "Even triangle" << endl
       << endl;

  cout << "A:";
  cout << triangleTwo.a << endl;
  cout << "B:";
  cout << triangleTwo.b << endl;
  cout << "C:";
  cout << triangleTwo.c << endl;
  cout << triangleTwo.getSumOfSides() << endl;

  //Files

  string myText;

  ifstream readme("README.md");

  while (getline(readme, myText))
  {
    cout << myText;
  }

  readme.close();

  return 0;
}
