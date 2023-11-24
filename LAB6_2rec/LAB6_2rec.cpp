#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

double averageIndexOfEvenElementsRecursive(int a[], int n, int index, int sum, int count) {
    if (index == n) {
        if (count == 0) {
            cout << "No even elements in the array." << endl;
            return 0.0;
        }
        return static_cast<double>(sum) / count;
    }

    if (a[index] % 2 == 0) {
        sum += index;
        count++;
    }

    return averageIndexOfEvenElementsRecursive(a, n, index + 1, sum, count);
}

int main() {
    int n;

    cout << "Array Size = ";
    cin >> n;

    int* a = new int[n];

    srand(time(0));

    for (int i = 0; i < n; ++i) {
        a[i] = rand() % 100;
    }

    cout << "Array: ";
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    double result = averageIndexOfEvenElementsRecursive(a, n, 0, 0, 0);
    if (result != 0.0) {
        cout << "The average index of even elements = " << result << endl;
    }

    delete[] a;

    return 0;
}
