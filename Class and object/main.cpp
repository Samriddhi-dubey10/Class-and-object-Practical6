#include <iostream>

using namespace std;
class student{
    int age;
    char first_name[70];
    char name[70];
    int Std;
public:
    void accept()
{
    cout<<"enter age , first_name ,name , Std"<<"\n";
    cin>>age>>first_name>>name>>Std;
}
void display(){
    cout<<age<<"\n";
    cout<<name << first_name<<"\n";
    cout<<Std<<"\n";

}

};


int main()
{
    student s;
    s.accept();
    s.display();
    return 0;
}
