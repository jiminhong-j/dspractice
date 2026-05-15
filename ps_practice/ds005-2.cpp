#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main(){

    string str;

    getline(cin, str);

    int n = 26;
    int blanks = 0;

    int *alpha = new int[n];

    for(int i = 0; i < n; i++){
        alpha[i] = 0;
    }

    for(int i = 0; i < str.length(); i++){
        if(str[i] == ' '){
            blanks++;
        } else if(isalpha(str[i])){
            char c = toupper(str[i]);
            alpha[c - 'A']++;
        }
    }

    cout << "blanks : " << blanks << endl;

    for(int i = 0; i < n; i++){
        if(alpha[i] > 0){
            cout << char(i + 'A') << " : " << alpha[i] << endl;
        }
    }
    delete[] alpha;
    return 0;
}
