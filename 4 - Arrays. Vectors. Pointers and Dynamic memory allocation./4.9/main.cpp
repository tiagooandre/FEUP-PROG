#include <iostream>

using namespace std;

int x = 1, y = 2;
int &ref_x = x, &ref_y = y;
ref_x = ref_y; //Altera o valor de x na memória para o valor de ref_y que neste caso é 2;
cout << "x = " << x << "; y = " << y << endl;
cout << "ref_x = " << ref_x << "; ref_y = " << ref_y << endl;

// x = 2; y = 2
// ref_x = 2; ref_y = 2;

int x = 1, y = 2;
int *ptr_x = &x, *ptr_y = &y;
ptr_x = ptr_y;
cout << "x = " << x << "; y = " << y << endl;
cout << "ptr_x = " << ptr_x << "; ptr_y = " << ptr_y << endl; cout << "*ptr_x = " << *ptr_x << "; *ptr_y = " << *ptr_y << endl;

// x = 1; y = 2;
// ptr_x = address of y; ptr_y = address of y; *ptr_x = 2; *ptr_y = 2;
//o apontador x fica com o endereço de memória de x
//o apontador y fica com a endereço de memória de y
//ao fazer ptr x= ptr y, o apontador de x fica a apontar para o endereço de memória de y, sem mudar o valor de memória de x