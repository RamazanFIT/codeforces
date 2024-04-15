#include <iostream>
#include <string>

enum AutomataState{
    out_of_word = 0,
    in_word = 1
};
inline bool is_alpha(char symbol){
    return ((symbol >= 'a' and symbol <= 'z') or 
           (symbol >= 'A' and symbol <= 'Z'));
}



int main(){
    std:: string s;
    getline(std:: cin, s);
    AutomataState state = out_of_word;
    
    int word_len = 0;

    for(int pos = 0; pos < s.length(); pos++){
    switch(state){
        case out_of_word:
            // if(pos >= s.length()) goto the_end;
            if(is_alpha(s[pos])) {
                // pos++;
                word_len = 1;
                state = in_word;
            }
            else {
                // pos++;
                state = out_of_word;

            }
            break;

        case in_word:
            // if(pos >= s.length()) goto the_last_bug;
            if(is_alpha(s[pos])) {
                // pos++;
                word_len++;
                state = in_word;
            }
            else {
                // the_last_bug: 
                // pos++;
                std:: cout << "Word lenght: " << word_len << std:: endl; 
                state = out_of_word;

            }
            break;

            //std:: cout << s << "\n";
    }
    }
// the_end:

    return 0;
}