#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result_gcd = arr[0];
    int result_lcm = arr[0];
    for (int i = 1; i < n; i++) {
        result_gcd = gcd(result_gcd, arr[i]);
        result_lcm = lcm(result_lcm, arr[i]);
    }
    cout << "GCD is " << result_gcd << endl;
    cout << "LCM is " << result_lcm << endl;
    return 0;
}
