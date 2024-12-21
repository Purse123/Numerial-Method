// biscetion method
#include <cmath>
#include <iostream>
using namespace std;

class algo {
  double x0, x1, x2;
  double a, b, c;
  double e = 0.001;

public:
  void getData() {
    cout << "Enter two guess values: " << endl;
    cin >> x1 >> x2;
  }

  double fx(double x) { return pow(x, 3) - x - 3; }

  void process() {
    a = fx(x1), b = fx(x2);

    if ((a * b) > 0) {
      cout << "The values " << x1 << " and " << x2
           << " do not bracket any root." << endl;
    } else {
      while ( abs( (x2 - x1) / x2 ) >= e ) {
        x0 = (x1 + x2) / 2;
        c = fx(x0);

        if (abs(c) <= e) {
          cout << "The required root of the given equation is: " << x0 << endl;
          break;
        }

        if ((fx(x0) * fx(x1)) < 0) {
          x2 = x0;
        } else {
          x1 = x0;
        }
      }

      cout << "The required root of the given equation is: " << x0 << endl;
    }
  }
};

int main() {
  algo a;
  a.getData();
  a.process();
  
  cout << "___________________________________" << endl;
  cout << "Programmed By : Pierce Neupane" << endl;
}
