#include <cmath>
#include <iostream>

int main() {
  double x = 3;
  double y = 4;
  double z;    // result

  // max
  z = max(x, y);

  // min
  z = min(x, y);

  // power
  z = pow(2, 3); // 8

  // square root
  z = sqrt(9); // 3

  // Absolute value
  z = abs(-100);

  // Round up
  z = round(3.14);

  // Ceil 올림
  z = ceil(3.14);

  // floor 내
  z = floor(3.99);
  return 0;
}
