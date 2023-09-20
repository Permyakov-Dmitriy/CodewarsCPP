#include <iostream>

using namespace std;

int nbYear(int p0, double percent, int aug, int p){
    int y{0};
    
    while(p0 < p){
      p0 += p0 * (percent * 0.01) + aug;
      y++;
    }
    
    return y;
}

int main() {
    cout << nbYear(1500, 5, 100, 5000);
}