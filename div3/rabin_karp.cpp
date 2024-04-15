#include <iostream>
#include <string>

const int P = 256;

uint32_t hash(std:: string s){
    uint32_t sum = 0;
    uint32_t factor = 1;

    for(int i = s.size() - 1; i >= 0; i--){
        sum += (factor * s[i]);
        factor *= P;
    }
    return sum % INT64_MAX;
}

bool checking(std:: string text, std::string str_to_check, int i){
    for(int ind = 0; ind < str_to_check.size(); ind++){
        if(str_to_check[ind] != text[i + ind]) return false;
    }
    return true;
}


// searching_the_substring_of_some_text_algorithm

int main(){
    std:: string s;
    std::getline(std:: cin, s);
    std:: string pattern;
    std:: getline(std:: cin, pattern);
    uint32_t M = pattern.size();
    uint32_t patter_hash = hash(pattern);
    std:: string first_elements_of_s = "";
    uint32_t maxPower = 1;
    for(int i = 0; i < M; i++){
        first_elements_of_s += s[i];
        maxPower *= P;
    }
    maxPower /= P;
    // std:: cout << "MAXPOWER\t" << 
    // maxPower << "\n";
    uint32_t hash_of_s_part = hash(first_elements_of_s);
    for(int i = 0; i < s.size() - M + 1; i++){
        // std:: cout << "hash_of_s_part\t" << hash_of_s_part << " " << "patter_hash\t" << patter_hash << "\n";
        if(hash_of_s_part == patter_hash){
            if(checking(s, pattern, i)) std:: cout << i << "\t" << i + M - 1 << "\n";
        }
        hash_of_s_part = ((hash_of_s_part - s[i] * maxPower) * P + s[i + M]) % INT64_MAX;
    }

    return 0;
}