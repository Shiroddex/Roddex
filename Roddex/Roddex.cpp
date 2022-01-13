#include <iostream>

using namespace std;

int main() {
    float Far, Cel;
    cout << "Far = "; cin >> Far;
    Cel = (Far - 32) * 5 / 9;
    cout << "Cel = " << Cel << endl;
    cout << "Cel = "; cin >> Cel;
    Far = Cel * 9 / 5 + 32;
    cout << "Far = " << Far << endl;
    return 0;
}