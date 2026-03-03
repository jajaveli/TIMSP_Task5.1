#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int arr[7][7];
    srand(time(0));

    
    for (int i = 0; i < 7; i++)
        for (int j = 0; j < 7; j++)
            arr[i][j] = rand() % 100;

  
    int minv = arr[0][0], maxv = arr[0][0];
    for (int i = 0; i < 7; i++)
        for (int j = 0; j < 7; j++) {
            if (arr[i][j] < minv) minv = arr[i][j];
            if (arr[i][j] > maxv) maxv = arr[i][j];
        }

    cout << "Min: " << minv << endl;
    cout << "Max: " << maxv << endl;

    
    int r, c;
    cout << "Vvedite stroka stolbec (0-6): ";
    cin >> r >> c;

   
    if (r >= 0 && r < 7 && c >= 0 && c < 7)
        arr[r][c] *= 2;


    cout << "\nMassiv:\n";
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++)
            cout << arr[i][j] << "\t";
        cout << endl;
    }

    return 0;
}
