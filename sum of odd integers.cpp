 #include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }
    cout << "Sum of alternate integers = " << sum;
    return 0;
}




