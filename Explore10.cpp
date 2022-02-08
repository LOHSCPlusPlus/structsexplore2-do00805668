#include <iostream>
using namespace std;
struct Broken {
    int values[4];
    Broken();
    Broken(int initialValues[4]);
};
Broken::Broken() {
    for(int i = 0; i<4; i++)
    {
      values[i] = 0;
    }
}
Broken::Broken(int initialValues[4]) {
    // Change only this code so that values will hold the
    // values in initialValues
    //values = initialValues;
    for(int i = 0; i < 4; i++)
    {
      values[i] = initialValues[i];
    }
}

void PrintBroken(Broken x) {
    cout << "[" << x.values[0];
    for (int index = 1; index < 4; index++) {
        cout << ", " << x.values[index];
    }
    cout << "]";
}

int main() {
    int x[] = {1, 2, 3, 4};
    Broken a;
    PrintBroken(a);
    Broken b(x);
    PrintBroken(b);
}
