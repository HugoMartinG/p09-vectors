#include <iostream>
#include <vector>
using namespace std;
vector<double> GenerateVector(const int size, const double lower, const double upper);
int main () {
    vector<double> my_vector = GenerateVector(30, 5.0, 10.0);
    for (const auto& value: my_vector) {
        cout << "Component: " << value << endl;
    }
    return 0;
}
vector<double> GenerateVector(const int size, const double lower, const double upper){
    

}
