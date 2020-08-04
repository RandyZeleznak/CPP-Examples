#include<iostream>

using namespace std;

int main(){

    string inputText{};

    cout<<"Hello Pyramid User"<<endl;
    cout<<"Please input string to pyramidtize:";
    getline(cin,inputText);
    cout<<"This is your input text :"<<inputText<<endl;

        int j, k;
    for(int i = 0; i<inputText.length(); i++){
        for(k = inputText.length()-i; k >= 0; k--){
                cout<<" ";
            }
        for(j=0;j<=i;j++){
            cout<<inputText[j];
        }
        for(k = j-2; k >= 0; k--){
            cout<<inputText[k];
        }
        cout<<"\n";
    }

    return 0;

}
