#include <iostream>

using namespace std;


void selectSort(float arr[], int n) {
    int pos_min;
    float temp;
    for (int i=0; i < n-1; i++) {
        pos_min = i;
        for (int j=i+1; j < n; j++) {
            if (arr[j] < arr[pos_min])
                pos_min=j;
        }
        if (pos_min != i) {
            temp = arr[i];
            arr[i] = arr[pos_min];
            arr[pos_min] = temp;
        }
    }
}

void print_array(float arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
}


int main()
{
    int n = 5;
    float arr[5] = {3.8, 2.9, 3.3, 4.0, 2.4};

    cout << "Data sebelum diurutkan :\n";
    print_array(arr, n);
    cout << "\nData yang Sudah Diurutkan :\n";
    selectSort(arr, n);
    print_array(arr, n);


    return 0;
}
