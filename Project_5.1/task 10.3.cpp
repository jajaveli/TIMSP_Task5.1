#include <iostream>
using namespace std;


int nod(int a, int b) {
    if (b == 0) {
        return a;  
    }
    else {
        return nod(b, a % b);  
    }
}

int main() {
    int x, y;

    cout << "Vvedite 2 chisla: ";
    cin >> x >> y;

    
    int result = nod(x, y);

    cout << "NOD(" << x << ", " << y << ") = " << result << endl;

    return 0;
}
