#include <iostream>


// void foo(int x){
//     std:: cout << "foo(int) is called\n";
// }

// void foo(double x){
//     std:: cout << "foo(double) is called\n";
// }

// void foo(unsigned char x){
//     std:: cout << "foo(unsigned char) is called\n";
// }
template <typename T>

T my_abs(T x){
    if(x < 0){
        return -x;
    } else return x;
}



int main(){
    // foo(1);
    // foo(2);
    // foo(3.5);
    // // foo('a');
    // foo(23U);

    std:: cout << my_abs('A') << "\n";
    std:: cout << my_abs(-1) << "\n";
    std:: cout << my_abs(1) << "\n";
    std:: cout << my_abs(-3.5) << "\n";
    return 0;
}