#include<iostream>
#include <vector>

using namespace std;


int evenCount(const int *a, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (*(a + i) % 2 == 0) {
            count++;
        }
    }
    return count;
}


bool isMirrored(const int *a, const int *b, int size) {
    for (int i = 0; i < size; i++) {
        if (*(a + i) != *(b + size - 1 - i)) {
            return false;
        }
    }
    return true;
}

void sumArrays(const double *arr1, const double *arr2, double *sum, int size) {
    for (int i = 0; i < size; i++) {
        *(sum + i) = *(arr1 + i) + *(arr2 + i);
    }
}

void swap(int *arr1, int *arr2, int size) {
    for (int i = 0; i < size; i++) {
        int temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
    }
}


bool is_in(const int *arr1, const int *arr2, int size1, int size2) {
    const int *p1 = arr1;
    const int *p2 = arr2;
    for (int i = 0; i < size1; i++) {
        bool equal = false;
        for (int j = 0; j < size2; j++) {
            if (*(p1 + i) == *(p2 + j)) {
                equal = true;
                break;
            }
        }
        if (!equal) {
            return false;
        }
    }
    return true;
}

void power(double *n, const int *p) {
    double res = 1.0;
    for (int i = 0; i < *p; i++) {
        res = res * *n;
    }
    *n = res;
}

vector<int> addOne(vector<int> &v) {
    int *ptr = &v[v.size() - 1];
    int carry = 1;
    while (ptr >= &v[0]) {
        int sum = *ptr + carry;
        *ptr = sum % 10;
        carry = sum / 10;
        if (carry == 0) {
            break;
        }
        ptr--;
    }
    if (carry > 0) {
        v.insert(v.begin(), carry);
    }

    return v;
}

int singleNum(vector<int> &vec) {
    if (vec[0] != vec[1]) {
        return vec[0];
    }
    if (vec[vec.size() - 1] != vec[vec.size() - 2]) {
        return vec[vec.size() - 1];
    }
    for (int i = 1; i < vec.size() - 1; i++) {
        if (vec[i] != vec[i - 1] && vec[i] != vec[i + 1]) {
            return vec[i];
        }
    }
    return -1;
}

int main() {

    //p1
    const int SIZE = 10;
    float *ptr, arr[SIZE];
    *ptr = arr[0];
    cout << "Enter 10 number: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> *(ptr + i);
    }
    for (int i = 0; i < SIZE; i++) {
        *(ptr + i) = *(ptr + i) * 0.3;
    }
    for (int i = SIZE - 1; i >= 0; i--) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    //p2
    int size2;
    cout << "Enter the size of numbers: ";
    cin >> size2;
    int arrf2[size2];
    int *a = arrf2;
    for (int i = 0; i < size2; i++) {
        cin >> *(a + i);
    }
    cout << evenCount(a, size2) << endl;

    //p3
    int size3;
    cout << "Enter the size of arrays: ";
    cin >> size3;
    int arr1[size3], arr2[size3];
    int *a3 = arr1;
    int *b3 = arr2;
    for (int i = 0; i < size3; i++) {
        cin >> *(a3 + i);
    }
    cout << endl;
    for (int i = 0; i < size3; i++) {
        cin >> *(b3 + i);
    }
    cout << endl;
    if (isMirrored(a3, b3, size3)) {
        cout << '1' << endl;
    } else {
        cout << '0' << endl;
    }

    //p4
    int size4;
    cout << "Enter the size of arrays: ";
    cin >> size4;
    double arr41[size4], arr42[size4], sum4[size4];
    double *arr41p = arr41;
    double *arr42p = arr42;
    double *sum4p = sum4;

    for (int i = 0; i < size4; i++) {
        cin >> *(arr41p + i);
    }
    cout << endl;
    for (int i = 0; i < size4; i++) {
        cin >> *(arr42p + i);
    }
    cout << endl;
    sumArrays(arr41p, arr42p, sum4p, size4);
    for (int i = 0; i < size4; i++) {
        cout << *(sum4p + i) << " ";
    }
    cout << endl;

    //p5;
    int size5;
    cout << "Enter the size of arrays: ";
    cin >> size5;
    int arr51[size5], arr52[size5];
    int *arr51p = arr51;
    int *arr52p = arr52;
    for (int i = 0; i < size5; i++) {
        cin >> *(arr51p + i);
    }
    cout << endl;
    for (int i = 0; i < size5; i++) {
        cin >> *(arr52p + i);
    }
    cout << endl;
    swap(arr51p, arr52p, size5);
    for (int i = 0; i < size5; i++) {
        cout << *(arr51p + i) << " ";
    }
    cout << endl;
    for (int i = 0; i < size5; i++) {
        cout << *(arr52p + i) << " ";
    }
    cout << endl;

    //p6
    int size1, size26;
    cout << "Enter the size 1: ";
    cin >> size1;
    int arr61[size1];
    int *p1 = arr61;
    for (int i = 0; i < size1; i++) {
        cin >> *(p1 + i);
    }
    cout << "Enter the size 2: ";
    cin >> size26;
    int arr62[size26];
    int *p2 = arr62;
    for (int i = 0; i < size26; i++) {
        cin >> *(p2 + i);
    }
    if (is_in(p1, p2, size1, size26)) {
        cout << '1' << endl;
    } else {
        cout << '0' << endl;
    }

    //p7
    double n7;
    int power7;
    double *pn7 = &n7;
    int *pp = &power7;
    cout << "Enter number and it's power: ";
    cin >> n7 >> power7;
    power(pn7, pp);
    cout << *pn7 << endl;

    //p8
    int size;
    cout << "Enter the size: ";
    cin >> size;

    vector<int> v(size);
    cout << "Enter the digits: ";
    for (int i = 0; i < size; i++) {
        cin >> v[i];
    }
    vector<int> result = addOne(v);
    cout << "Output: ";
    for (int i: result) {
        cout << i;
    }
    cout << endl;

    //p9
    int size9;
    cout << "Enter the size of array: ";
    cin >> size9;
    char arr9[size9];
    char *parr = arr9;
    for (int i = 0; i < size9; i++) {
        cin >> *(parr + i);
    }
    for (int i = 1; i < size9; i++) {
        if (*parr >= 'a' && *parr <= 'z') {
            *parr = *parr - 'a' + 'A';
        }
        if (*(parr + i) >= 'A' && *(parr + i) <= 'Z') {
            *(parr + i) = *(parr + i) - 'A' + 'a';
        }
    }
    for (int i = 0; i < size9; i++) {
        cout << *(parr + i);
    }
    cout << endl;


    //p10

    int size10;
    cout << "Enter the size: ";
    cin >> size10;
    vector<int> v10;
    int t;
    for (int i = 0; i < size10; i++) {
        cin >> t;
        v.push_back(t);
    }
    cout << singleNum(v10) << endl;


    return 0;
}