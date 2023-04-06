#include <iostream>

// 1. Algoritma bisa mempermudah dalam memecahkan segala permasalahan yang berkaitan dengan suatu program dan tidak dapat diselesaikan dengan mudah dan menyederhakannya.
// 2.  Liner dan non-linear atau statik dan dinamis
// 3.  Execution time, stprage space dan progamming effort
// 4.  insertion sort karena bisa memenuhi kebutuhan data yang jumlahnya terlalu besar. dan prosesnya pemogramannya tidak terlalu rumit 
// 5.  Loglinear: bubble sort, quick sort, insertionsort dan selectionsort
//     Quadratic: switch case, double

using namespace std;

int wira[20];
int n;



void input() {
    while (true) {
        cout << " Masukkan jumlah data array : ";
        cin >> n;
        if (n <= 20)
            break;
        else
            cout << "\narray yang anda masukkan maksimal 20 elemen.\n";
        
    }
    cout << "\n_______________________" << endl;
    cout << "\nEnter Array element" << endl;
    cout << " \n______________________" << endl;
    for (int i = 0; i < n; i++) {
        cout << " Data ke-" << (i + 1) << " : ";
        cin >> wira[i];
    }
}

void swap(int x, int y) 
{
    int temp;
    temp = wira[x];
    wira[x] = wira[y];
    wira[y] = temp;
}

void selectionsort() {
    int i;
    int j;
    int min_idx;

    for (j = 0; j < n-2;j++) {
        min_idx = j;
        for (j = i + 1; j < n-1; j++) {
            min_idx = j;
            if (wira[i] < wira[j])
                min_idx = i;
        } 
        if (min_idx = i)
            swap(wira[j], wira[min_idx]);
    }
}

void display() {
    cout << endl;
    cout << "\ntotal element movement = " << n - 1 << endl;
    cout << "\n====================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "====================================" << endl;
    for (int j = 0; j < n; j++)
    {
        cout << wira[j] << "";
    }
    cout << endl;
}

int main()
{
    input();
    selectionsort();
    display();
    system("Pause");

    return 0;
}

