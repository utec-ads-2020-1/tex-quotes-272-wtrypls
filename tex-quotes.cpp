#include <iostream>
#include <string>

using namespace std;

int main(){
    string text;
    int status = 0;
    int itr = 0;
    while (getline(cin, text)){
        string::iterator txtinit = text.begin(), txtend = text.end(), i;
        i = txtinit;
        while (i != txtend){
            if (*i == '\"'){
                if((status==0)||(status%2==0)){
                    *i = '`';
                    text.insert(i,'`');
                }
                else
                {
                    *i = '\'';
                    text.insert(i,'\'');
                }
            status++;
            txtinit = text.begin();
            txtend = text.end();
            i = txtinit+itr; 
            }
        i++;
        itr++;
        }
        itr = 0; 
        cout << text << endl;
    }
}



