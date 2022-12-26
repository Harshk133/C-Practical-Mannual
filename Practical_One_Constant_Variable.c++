// *Practical No 1: Develop minimum 2 programs using constants, variables, arithmetic expressions, operators, exhibiting data type conversion.
// ?Constants: A variable which does not change its value during execution of a program is known as a constant variable.
/*
const float PI = 3.1415;

const int Rate = 50;
const float PI = 3.1415;
const char CH = 'H'; 
*/
// ?Literal constants: can be classified into: integer, floating point, characters, strings, boolean, pointers, and user-defined literals.
// ?Other Literals: Three keyword literals exit in C++: true, false and nullptr: true and false are the two possible values for variables of type bool. nullptr is the null pointer value
/*
bool foo = true;
bool bar = false;
int *ptr = nullptr;
*/
/* Preprocessor definations (#define): Another mechanism to name constant values is the use of prepocessor definations. They have the following form: Syntax: #define identifier replacement
Example: #define PI 3.14159
         #define NEWLINE '\n'
*/
/*
+--------------+-----------------------------------+---------------+
|   Type       | Description                       | Size in bytes |
+--------------+-----------------------------------+---------------+
| Int          | Small Integer Number              |      2        |
| long int     | Large Integer Number              |      4        |
| float        | Small real Number                 |      4        |
| double       | Double precision real Number      |      8        |
| long double  | Long double precision real number |      8        |
| char         | A Single Character                |      1        |
+--------------+-----------------------------------+---------------+

*/
// ?Varible: Variable is a location in the computer memory which can store data and is given a symbolic name for easy reference. The Variable can be used to hold different values at different times during the execution of a program.
// Declaration of a variable and initialization:
// Example: float total;
//          int x, y;
//          int a = 20;
//          
//          Type Conversion: The Process in which one pre-defined type of expression is converted into another type is called conversion.
/*
1. Implicit Conversion
2. Explicit Conversion
*/
/*
Implicit Conversion: Data type can be mixed int the expression.
For example, 
double a;
int b = 5;
float c = 8.5;
a = b * c;
When two operands of different type are encountered in the same expression,

Explicit Conversion: It is also called type casting. It temporarily changes a variable data type from its declared data type to a new one.
Syntax: (type) expression;
Example: (float) (x + y / 2);
*/
#include<iostream>
#include<conio.h>
#define PI 3.14159
using namespace std;

int main(){
    float res;
    float f1 = 15.5, f2 = 2;
    float r = 2;
    float circle;

    res = (int) f1/ (int) f2;
    cout<<res<<endl;

    res = (int) (f1/f2);
    cout<<res<<endl;

    res = f1/ f2;
    cout<<res<<endl;

    circle = 2 * PI * r;
    cout<<circle;



    return 0;
}