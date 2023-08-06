#include <stack>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main(){
    // cout << stoi("-12") / 2;
    // vector<string> tokens{"4","13","5","/","+"};
    // stack <int> some_stack;
    //     // some_stack.push(stoi(tokens[0]));
    //     // some_stack.push(stoi(tokens[1]));
    //     for(int i = 0; i < tokens.size(); i++){
    //         if(tokens[i] == "+" or tokens[i] == "-" or tokens[i] == "/" or tokens[i] == "*"){
    //             int tmp = some_stack.top();
    //             some_stack.pop();
    //             int tmp1 = some_stack.top();
    //             cout << tmp << " " << tmp1 << "\n";
    //             some_stack.pop();
    //             if(tokens[i] == "+"){
    //                 some_stack.push(tmp1 + tmp);
    //             } else if(tokens[i] == "-"){
    //                 some_stack.push(tmp1 - tmp);
    //             } else if(tokens[i] == "/"){
    //                 some_stack.push(tmp1 / tmp);
    //             } else{
    //                  some_stack.push(tmp1 * tmp);
    //             }
    //         } else{
    //             some_stack.push(stoi(tokens[i]));
    //         }
    //     }
    // cout << some_stack.top();
    // cout << "Hello world";
    // for(;;) cout << "HI\n";
    bool flag = true;
    for(int i = 0; flag; i += 2){
        cout << i << "\n";
        if(i >= 10) flag = false;
    }
    // cout << (10 >= 10);
}