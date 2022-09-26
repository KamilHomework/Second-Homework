#include <iostream>
using namespace std;
int main() {
    //const int m = 10;
    //const int n = 10;
    int m,n;
    cin >> m >> n;
    int a[m][n];
    int count = 0;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin >> a[i][j];
            if ((a[i][j] < 0) && (a[i][j] > -9)){
                count++;
            }
        }
    }
    cout << count;
    return 0;
}
