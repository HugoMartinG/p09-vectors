/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Hugo Martin Gamez
 * @date 28 Nov 2022
 * A program that reads a non-empty sequence of integer numbers, and tells how many of them are equal to the last one.
 *
 * @see http://www.cplusplus.com/doc/tutorial/program_structure/
 * @see http://cpp.sh/2dd
 */
#include<iostream>
#include<vector>
using namespace std;
int main() {
  int number;
  int counter{0};
  cin >> number;
  //Declaro el vector de tamanio number.
  vector<int> cadena(number);
  //Pido los elementos del vector.
  for (int i = 0; i < number; i++){
    cin >> cadena[i];
  }
  //Comparo cada elemento dedeector con el ultimo.
  for (int j = 0; j < cadena.size()-1 ; j++){
    if (cadena[j] == cadena[number-1]) {
      counter++;
    }
  }
  cout << counter << endl;
  return 0;
 }
