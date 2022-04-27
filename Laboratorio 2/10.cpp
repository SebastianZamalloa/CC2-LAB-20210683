#include<iostream>
using namespace std;
int main()
{
    string word;
    cout<<"Ingrese una palabra: ",cin>>word;
    for(int i=word.size()-1; i>=0;i--)
    {
        if(i == word.size()-1)
            cout<<word[i];
        else
            cout<<"\t"<<word[i];
    }
}