#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of trailing zeros: ";
    cin >> n;

    int low = 0, high = 5 * n;
    int ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        // Calculate trailing zeros of mid!
        int temp = mid, count = 0;
        while (temp >= 5) {
            count += temp / 5;
            temp /= 5;
        }

        if (count >= n) {
            ans = mid;           // valid answer
            high = mid - 1;      // try smaller
        } else {
            low = mid + 1;       // need more zeros
        }
    }

    cout << "Smallest number whose factorial has at least " << n << " trailing zeros is: " << ans << endl;
    return 0;
}