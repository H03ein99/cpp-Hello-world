#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;
int main(){
    string correct = "Hello World!", res;
    string temp = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ !";
    int index = 0;
    while (true){
        for (int i = 0; i < 55; i++)
        {
            res += temp[i];
            cout<<res<<endl;
            if(res == correct.substr(0, res.length()))
                break;
            else{
                std::system("clear");
                res = res.substr(0, res.length() - 1);
            }    

        }
        if(res == correct)
            break;
        

    }
    
    
    return 0;

}