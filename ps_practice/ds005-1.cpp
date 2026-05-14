#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){

    string str;

    getline(cin, str);

    int* alpha = new int[26];

    for(int i = 0; i < 26; i++){
        alpha[i] = 0;
    }

    int blanks = 0;

    for(int i = 0; i < str.length(); i++){
        if(str[i] == ' '){
            blanks++;
        } else if(isalpha(str[i])){
            char c = toupper(str[i]);
            alpha[c - 'A']++;
        }
    }

    // 출력

    cout << "blanks : " << blanks << endl;

    for(int i = 0; i < 26; i++){
        if(alpha[i] > 0){
            cout << char(i + 'A') << " : " << alpha[i] << endl;
        }
    }

    delete[] alpha;

    return 0;
}