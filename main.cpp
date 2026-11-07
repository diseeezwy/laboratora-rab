/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

void if2() {
    int n;
    cout << "If2. Введіть ціле число: ";
    cin >> n;

    if (n > 0)
        n -= 8;
    else
        n += 6;

    cout << "Результат: " << n << endl;
}

void if5() {
    int a, b, c;
    cout << "If5. Введіть три цілих числа: ";
    cin >> a >> b >> c;

    int pos = 0, neg = 0;

    if (a > 0) pos++;
    if (b > 0) pos++;
    if (c > 0) pos++;

    if (a < 0) neg++;
    if (b < 0) neg++;
    if (c < 0) neg++;

    cout << "Додатних: " << pos << endl;
    cout << "Від'ємних: " << neg << endl;
}

void if7() {
    double a, b;
    cout << "If7. Введіть два числа: ";
    cin >> a >> b;

    if (a < b)
        cout << "Менше число має номер 1" << endl;
    else if (b < a)
        cout << "Менше число має номер 2" << endl;
    else
        cout << "Числа рівні" << endl;
}

int main() {
    if2();
    cout << endl;
    if5();
    cout << endl;
    if7();
    return 0;
}