#include <iostream>
#include <string>


inline bool is_alpha(char symbol){
    return ((symbol >= 'a' and symbol <= 'z') or 
           (symbol >= 'A' and symbol <= 'Z'));
}



int main(){
    std:: string s;
    getline(std:: cin, s);

    int word_len = 0;

    int pos = 0;
out_of_word:
    if(pos >= s.length()) goto the_end;
    if(is_alpha(s[pos])) {
        pos++;
        word_len = 1;
        goto in_word;
    }
    else {
        pos++;
        goto out_of_word;

    }


in_word:
    if(pos >= s.length()) goto the_last_bug;
    if(is_alpha(s[pos])) {
        pos++;
        word_len++;
        goto in_word;
    }
    else {
        the_last_bug:
        pos++;
        std:: cout << "Word lenght: " << word_len << std:: endl; 
        goto out_of_word;

    }

    std:: cout << s << "\n";

the_end:

    return 0;
}