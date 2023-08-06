#include <iostream>
#include <list>
#include <algorithm>



void precedure(int x){
    std:: cout << x << "\n";
}
int main() {
    
    std:: list<int> A;

    for(int i = 0; i < 10; i++) 
    A.push_back(i);
    // Не уклюая версия
    std:: list<int>::iterator it1 = A.begin();

    while(it1 != A.end()){
        std:: cout << *it1 << "\n";
        ++it1;
        // it1 += 3;
    }




    auto it2 = A.begin();

    while(it2 != A.end()){
        std:: cout << *it2 << "\n";
        ++it2;
        // it1 += 3;
    }
    for(auto it3 = A.begin(); it3 != A.end(); ++it3){
        std:: cout << *it3 << "\n";
    }
    std:: cout << "with using for_each\n";
    std:: for_each(A.begin(), A.end(), precedure);

    for(auto x : A){
        std:: cout << x << " ";
    }
    
    return 0;
}