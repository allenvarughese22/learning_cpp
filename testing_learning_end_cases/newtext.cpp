#include<iostream>
using namespace std;
void DisplayValue(int *p) {
   cout << "New size of array by passing the value : ";
   cout << sizeof(p) << endl;
}
void DisplayPointer(int (*p)[10]) {
   cout << "New size of array by passing the pointer : ";
   cout << sizeof(p) << endl;
}
int main() {
   int arr[10] = {1, 2, };
   cout << "Actual size of array is : ";
   cout << sizeof(arr) <endl;
   DisplayValue(arr);
   DisplayPointer(&arr);
   return 0;
}
}
}