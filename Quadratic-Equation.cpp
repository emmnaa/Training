
/*                 Quadratic Equation          */

/* Implement the function findRoots to find the roots of the quadratic equation: ax2 + bx + c = 0.  The function should return a pair containing both roots in any order. If the equation has only one solution, the function should return that solution as both elements of the pair. The equation will always have at least one solution.

The roots of the quadratic equation can be found with the following formula: A quadratic equation.

For example, findRoots(2, 10, 8) should return a pair containing (-1, -4) or (-4, -1) as the roots of the equation 2x2 + 10x + 8 = 0 are -1 and -4.*/



#include <tuple>
#include <stdexcept>
#include <iostream>
#include <string>
#include <bits/stdc++.h>

std::pair<double, double> findRoots(double a, double b, double c)
{
  std::pair<double,double> roots;
    // If a is 0, then equation is not quadratic, but
    // linear
    if (a == 0) {
        cout << "Invalid";
        //return;
    }
 
    int d = b * b - 4 * a * c;
    double sqrt_val = sqrt(abs(d));
 
    if (d > 0) {
       // cout << "Roots are real and different \n";
      roots.first = (-b + sqrt_val) / (2 * a) ;
      roots.second = (-b - sqrt_val) / (2 * a);
       // cout << (double)(-b + sqrt_val) / (2 * a) << "\n"
        //     << (double)(-b - sqrt_val) / (2 * a);
    }
    else if (d == 0) {
       // cout << "Roots are real and same \n";
      roots.first = -b / (2 * a);
      roots.second = -b / (2 * a);
    }
  else
  {
    cout << "Complex numbers";
  }
    return roots;

}

int main()
{
    std::pair<double,double> roots = findRoots(2, 10, 8);
    std::cout << "Roots: " + std::to_string(roots.first) + ", " + std::to_string(roots.second);
}
