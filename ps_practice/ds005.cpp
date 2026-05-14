#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string str;

    // 입력
    getline(cin, str);

    int* alphabet = new int[26];

    for(int i = 0; i < 26; i++){
        alphabet[i] = 0;
    }

    int blanks = 0;

    for(int i = 0; i < str.length(); i++){
        if(str[i] == ' '){
            blanks++;
        } else if(isalpha(str[i])){
            char c = toupper(str[i]);
            alphabet[c - 'A']++;
        }
    }


    // 출력
    cout << "blanks : " << blanks << endl;
    
    for(int i = 0; i < 26; i++){
        if(alphabet[i] > 0){
            cout << char(i + 'A') << " : " << alphabet[i] << endl;
        }
    }


    delete[] alphabet;
    return 0;
}