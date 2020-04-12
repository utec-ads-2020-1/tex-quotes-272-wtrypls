#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string text;
    bool status = true;
    int itr = 0;
    while (getline(cin, text)){
        string::iterator init = text.begin(), end = text.end(), i;
        i = init;
        while (i != end){
            init = text.begin();
            end = text.end();
            if (*i == '\"'){
                if(status){
                    *i = '`';
                    text.insert(i,'`');
                    status = false;
                }
                else
                {
                    *i = '\'';
                    text.insert(i,'\'');
                    status = true;
                }
            i = init+itr; 
            }
        i++;
        itr++;
        }
        itr = 0; 
        cout << text << endl;
    }
}



