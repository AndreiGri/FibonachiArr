#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("chcp 1251 > nul");
    int n = 0, j = 0;
    const int i = 10;
    int arr[i];
    while (j < i) {
        if (j == 0) {
            arr[j] = 1;
            cout << arr[j] << " ";
        }
        else {
            if (j == 1) {
                arr[j] = 1;
                cout << arr[j] << " ";
            }
            else {
                arr[j] = arr[j - 1] + arr[j - 2];
                cout << arr[j] << " ";
            }
        }
        j++;
    }
    system("pause > nul");
    return 0;
}
