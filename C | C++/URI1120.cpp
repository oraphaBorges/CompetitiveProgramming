#include<iostream>
#include<string>

using namespace std;

int main(){
    string num;
    char d;
    int tam_string,i;
    bool zeroFinal;
        while(std::cin >> d >> num){
        tam_string=0;zeroFinal=true;
        if(d=='0') break;
        for(i=0;num[i]!='\0';i++){
            if(num[i]==d)tam_string++;
            else{
                if(num[i]!='0')zeroFinal=false;
                if(!zeroFinal) std::cout << num[i];
                else if(zeroFinal && num[i+1]=='\0')
                    std::cout << 0;
            }
        }
        if(tam_string==i)std::cout << 0;
        std::cout << endl;
    }
    return 0;
}
