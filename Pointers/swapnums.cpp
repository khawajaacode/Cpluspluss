#include <iostream>

using namespace std;

void swap(int& num1, int& num2) {

  int temp;
   temp = num1;
  num1  = num2;
  num2 = temp;
}

int main()
{

    int var = 34;
    int var1 = 44;

   swap(var, var1);

    cout  << var << endl;
    cout << var1;


    return 0;
}

















