#include <iostream>
using namespace std;

int main() {
    int n;

    
    cout << "Vvedite kolichestvo elementov: ";
    cin >> n;

    int arr[100]; 

   
    cout << "Vvedite " << n << " chisel:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    int choice;
    cout << "\nVyberite sortirovku:\n";
    cout << "1 - Po vozrastaniyu\n";
    cout << "2 - Po ubyvaniyu\n";
    cout << "Vash vybor: ";
    cin >> choice;

    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (choice == 1) {
                
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
            else {
               
                if (arr[j] < arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

  
    cout << "\nOtsortirovannyi massiv:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
