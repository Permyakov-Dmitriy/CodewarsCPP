#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    string test = "12.4w12g3d";
    int sum = 0;
    string num;

    for (auto &&i : test) {
        if (isdigit(i)) {
            num += i;
        } else {
            if (!num.empty()) {
                sum += stoi(num);
                num = "";
            }
        }
    }

    if (!num.empty()) {
        sum += stoi(num);
    }

    cout << sum << endl;

    system("pause");

    return 0;
}
