#include<iostream>
using namespace std;

void merge(int arr[], int s, int e) {
    int mid = (s + e) / 2;
    int x1 = mid - s + 1;
    int x2 = e - mid;
    int *a = new int[x1];
    int *b = new int[x2];
    for (int i = 0; i < x1; i++) {
        a[i] = arr[s + i];
    }
    for (int i = 0; i < x2; i++) {
        b[i] = arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = s;

    while (i < x1 && j < x2) {
        if (a[i] < b[j]) {
            arr[k++] = a[i++];
        } else {
            arr[k++] = b[j++];
        }
    }

    while (i < x1) {
        arr[k++] = a[i++];
    }
    while (j < x2) {
        arr[k++] = b[j++];
    }

    delete[] a;
    delete[] b;
}

void merge_sort(int arr[], int s, int e) {
    if (s >= e) {
        return;
    }
    int mid = (s + e) / 2;
    merge_sort(arr, s, mid);
    merge_sort(arr, mid + 1, e);
    merge(arr, s, e);
}

int main() {
    int arr[6] = {3, 786, 4, 2, 6, 98};
    int size = 6;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    merge_sort(arr, 0, size - 1);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}