#include <iostream>
using namespace std;

int main(){
  int elements, quantity, bufer, i;
  cout << "Введите количество элементов";
  cin >> elements;
  int array [elements];
  quantity = elements;

  for (i = 0; i < elements; ++i) {
    cout << "Введите " << i << " элемент массива";
    cin >> array [i];
  }
  
  for (i = 0; i < elements; ++i) { //Исходный массив
    cout << array [i];
  }

  while (quantity > 0) {
    for (i = 0; i < quantity; ++i) {
      if (array [i] > array [i + 1]) {
        bufer = array [i + 1];
        array [i + 1] = array [i];
        array [i] = bufer;
      }
    }
    --quantity;
  }
  
  for (i = 0; i < elements; ++i) {
    cout << array [i];
  }
}