#include <iostream>
using namespace std;
// create main array & temporary array
int arr[20], temp[20];
// n is array input size
int n;
void input() {
    while (true) {
        cout << "Masukkan Panjang elemnen array : ";
        cin >> n;
        if (n <= 20) {
            break;
        } else {
            cout << "\nMaksimal panjang array adalah 20";
        }
    }
    // tambahkan di dalam input(), setelah loop while(true)
    cout << "\n--------------------------" << endl;
    cout << "\nInputkan Isi elemnt array" << endl;
    cout << "\n--------------------------" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Masukkan elemen ke-" << i + 1 << " : ";
        cin >> arr[i];
    }

    // create function mergeSort
    void mergeSort(int low, int high)
    {
           if (low >= high) // step 1
    {
        return; // step 1.a
    }

    int mid = (low + high) / 2; // step 2

    // step 3
    // fungsi rekursi - memanggil diri sendiri
    mergeSort(low, mid);      // step 3.a
    mergeSort(mid + 1, high); // step 3.b 
    }

int main() {
    input();
}