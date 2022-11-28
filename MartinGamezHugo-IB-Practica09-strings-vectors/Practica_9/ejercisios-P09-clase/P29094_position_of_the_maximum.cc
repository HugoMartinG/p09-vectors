/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Hugo Martin Gamez
 * @date 28 Nov 2022
 * @brief A function that returns the position of the maximum element of v[0..m]. If there is a tie, the smaller position must be returned.
 *
 * @see http://www.cplusplus.com/doc/tutorial/program_structure/
 * @see http://cpp.sh/2dd
 */
#include<iostream>
#include<vector>
using namespace std;
int PositionOfMaximum(const vector<double>& vector1, int number);
int main(){
  int number;
  cin >> number;
  vector<double> vector1(number);
  for (int i = 0; i < number; i++){
    cin >> vector1[i];
  }
  cout << PositionOfMaximum(vector1, number) << endl;
  return 0;
}
int PositionOfMaximum(const vector<double>& vector1, int number){
  double max = vector1[0];
  int max_value = 0;
  for (int i = 0; i <= number; i++) {
    if (vector1[i] > max) {
      max = vector1[i];
      max_value = i;
    }
  }
  return max_value;
}

