﻿#include <iostream>
using namespace std;
int main() {
  int num;
  cin >> num;
  for (int i = 1; i < num + 1; i++){
    for (int j = 8 - i; j > -1; j--){
      cout << " ";
    }
    for (int k = 1; k < i + 1; k++){
      cout << "#";
    }
    cout << "\n";
  }
}
