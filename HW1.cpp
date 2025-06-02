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
        cout << "오름차순정렬은 1, 내림차순정렬은 2, 정렬을 원하지 않으면 3을 입력해주세요." << endl;
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
            cout << "다시 입력해주세요";
        }

        cin >> m;
    }
    cout << "합 : " << sum << endl;
    cout << "평균 : " << sum/n << endl;
}
