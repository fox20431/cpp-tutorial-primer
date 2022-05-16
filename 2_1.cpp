// What are the differences between int, long, long long, and short? Between an unsigned and a signed type? Between a float and a double?
#include <iostream>
#include <math.h>
// using-directives for namespaces, then omit the namespace
using namespace std;

// utility function which calculate roots of 
// quadratic equation using float values
void float_solve(float a, float b, float c){
    float d = b*b - 4.0f*a*c;
    float sd = sqrtf(d);
    float r1 = (-b + sd) / (2.0f*a);
    float r2 = (-b - sd) / (2.0f*a);
    printf("%.5f\t%.5f\n", r1, r2);
    // printf("%.60f\t%.60f\n", r1, r2);
}

// utility function which calculate roots of 
// quadratic equation using double values
void double_solve(double a, double b, double c){
    double d = b*b - 4.0*a*c;
    double sd = sqrt(d);
    double r1 = (-b + sd) / (2.0*a);
    double r2 = (-b - sd) / (2.0*a);
    printf("%.5f\t%.5f\n", r1, r2);
    // printf("%.60f\t%.60f\n", r1, r2);
}

int main()
{
    // compare their size
    cout << "char: " << sizeof(char) << " bytes" << endl;
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "long long: " << sizeof(long long) << " bytes" << endl;
    cout << "float: " << sizeof(float) << " bytes" << endl;
    cout << "double: " << sizeof(double) << " bytes" << endl;

    // default arithmetic type is sign, unsigned type can't express the negative.
    int intValue = -1;
    unsigned int unsignedIntValue = -1;
    cout << "signed type: " << intValue << endl;
    cout << "unsigned type: " << unsignedIntValue << endl;

    // double has 2x more precision than float.
    float fa = 1.0f;
    float fb = -4.0000000f;
    float fc = 3.9999999f;
    double da = 1.0;
    double db = -4.0000000;
    double dc = 3.9999999;
  
    printf("roots of equation x^2 - 4.0000000 x + 3.9999999 = 0 are : \n");
    printf("for float values: \n");
    float_solve(fa, fb, fc);
  
    printf("for double values: \n");
    double_solve(da, db, dc);
    return 0;
}

