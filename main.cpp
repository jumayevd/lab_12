#include<iostream>

using namespace std;


int evenCount(const int* a, int size){
    int count = 0;
    for (int i = 0; i < size; i++){
        if (*(a + i) % 2 == 0){
            count ++;
        }
    }
    return count;
}

bool isMirrored(const int* a, const int* b,int size){
    for (int i = 0; i < size; i++){
        if (*(a+i) != *(b + size - 1 - i)){
            return false;
        }
    }
    return true;
}

void sumArrays(const double* arr1,const double* arr2, double* sum,int size){
    for (int i = 0; i < size; i++){
        *(sum + i) = *(arr1 + i) + *(arr2 + i);
    }
}

void swap(int* arr1,int* arr2,int size){
    for (int i = 0; i < size; i++){
        int temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
    }
}


bool is_in(const int* arr1,const int* arr2, int size1,int size2){
    const int *p1=arr1;
    const int *p2=arr2;
    for (int i = 0; i < size1; i++){
        bool equal = false;
        for (int j = 0; j < size2; j++){
            if (*(p1 + i) == *(p2 + j)){
                equal = true;
                break;
            }
        }
        if (!equal){
            return false;
        }
    }
    return true;
}

void power(double* n,const int* p){
    double res  = 1.0;
    for (int i = 0; i < *p; i++){
         res = res * *n;
    }
    *n = res;
}
void power(double* n,const int* p){
    for (int i = 0; i < *p; i++){
        *n = *n * *n;
    }
}

vector < int > addOne(vector < int > &v){

}
int main(){

    //p1
//    const int SIZE = 10;
//    float *ptr, arr[SIZE];
//    *ptr = arr[0];
//    cout << "Enter 10 number: ";
//    for (int i = 0; i < SIZE; i++){
//        cin >> *(ptr + i);
//    }
//    for (int i = 0; i < SIZE; i++){
//        *(ptr + i) = *(ptr + i) * 0.3;
//    }
//    for (int i = SIZE - 1; i >= 0; i--){
//        cout << *(ptr + i) << " ";
//    }
//    cout << endl;

//    //p2
//    int size2;
//    cout << "Enter the size of numbers: ";
//    cin >> size2;
//    int arr2[size2];
//    int *a = arr2;
//    for (int i = 0; i < size2; i++){
//        cin >> *(a + i);
//    }
//    cout << evenCount(a, size2) << endl;

//      //p3
//      int size3;
//      cout << "Enter the size of arrays: ";
//      cin >> size3;
//      int arr1[size3], arr2[size3];
//      int *a3 = arr1;
//      int *b3 = arr2;
//      for (int i = 0; i < size3; i++){
//          cin >> *(a3 + i);
//      }
//      cout << endl;
//      for (int i = 0; i < size3; i++){
//          cin >> *(b3 + i);
//      }
//      cout << endl;
//      if (isMirrored(a3, b3, size3) == true){
//          cout << '1' << endl;
//      }else{
//          cout << '0' << endl;
//      }

//      //p4
//      int size4;
//      cout << "Enter the size of arrays: ";
//      cin >> size4;
//      double arr41[size4], arr42[size4], sum4[size4];
//      double *arr41p = arr41;
//      double *arr42p = arr42;
//      double *sum4p = sum4;
//
//      for (int i = 0; i < size4; i++){
//          cin >> *(arr41p + i);
//      }
//      cout << endl;
//      for (int i = 0; i < size4; i++){
//          cin >> *(arr42p + i);
//      }
//      cout << endl;
//      sumArrays(arr41p, arr42p, sum4p, size4);
//      for (int i = 0; i < size4; i++){
//          cout << *(sum4p + i) << " ";
//      }
//      cout << endl;

//      //p5;
//      int size5;
//      cout << "Enter the size of arrays: ";
//      cin >> size5;
//      int arr51[size5], arr52[size5];
//      int *arr51p = arr51;
//      int *arr52p = arr52;
//          for (int i = 0; i < size5; i++){
//          cin >> *(arr51p + i);
//      }
//      cout << endl;
//      for (int i = 0; i < size5; i++){
//          cin >> *(arr52p + i);
//      }
//      cout << endl;
//      swap(arr51p, arr52p, size5);
//      for (int i = 0; i < size5; i++){
//          cout << *(arr51p + i) << " ";
//      }
//      cout << endl;
//     for (int i = 0; i < size5; i++){
//        cout << *(arr52p + i) << " ";
//     }
//     cout << endl;
//
//     //p6
//     int size1, size2;
//     cout << "Enter the size 1: ";
//     cin >> size1;
//    int arr61[size1];
//     int *p1 = arr61;
//     for (int i = 0; i < size1; i++){
//         cin >> *(p1 + i);
//     }
//     cout << "Enter the size 2: ";
//     cin >> size2;
//     int arr62[size2];
//     int *p2 = arr62;
//     for (int i = 0; i < size2; i++){
//        cin >> *(p2 + i);
//     }
//     if (is_in(p1, p2, size1, size2) == true){
//         cout << '1' << endl;
//     }else{
//         cout << '0' << endl;
//     }

//     //p7
//     double n7;
//     int power7;
//     double *pn7 = &n7;
//     int *pp = &power7;
//     cout << "Enter number and it's power: ";
//     cin >> n7 >> power7;
//     power(pn7, pp);
//     cout << *pn7 << endl;

     //p8












    return 0;
}