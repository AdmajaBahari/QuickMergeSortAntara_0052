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



int main() {
    input();
}