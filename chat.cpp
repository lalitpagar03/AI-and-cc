#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name;
    cout<<"Hi am a chatbot ! What is ur name name?" << endl;
    getline(cin , name);
    cout<<"Nice to meet u" << name << "!" <<endl;
    string input;

    cout<<"How are feelig today " << name << endl;
    getline(cin , input);

    if(input.find("good") != string::npos || input.find("fine") !=string::npos)
    {
        cout<<"I am glad to hear that"<<endl;
    }
    else if(input.find("not good") !=string::npos || input.find("bad") != string::npos)
    {
        cout<<"Oh,no Sorry to hear that" <<endl;
    }

}
