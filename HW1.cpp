#include <iostream>
#include <vector>
using namespace std;
int main() {
    int k = 0;
    int n = 0;
    int sum = 0;
    int m = 0;
    vector<int> arr;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        arr.push_back(k);
    }
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    while (true) {
        cout << "�������������� 1, �������������� 2, ������ ������ ������ 3�� �Է����ּ���." << endl;
        if (m == 1) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (arr[i] < arr[j]) {
                        swap(arr[i], arr[j]);
                    }
                }
            }
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
        }
        else if (m == 2) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (arr[i] > arr[j]) {
                        swap(arr[i], arr[j]);
                    }
                }
            }
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
        }else if (m == 3) {
            break;
        }else {
            cout << "�ٽ� �Է����ּ���";
        }

        cin >> m;
    }
    cout << "�� : " << sum << endl;
    cout << "��� : " << sum/n << endl;
}
