#include<iostream>
#include<cmath>
using namespace std;
class Student {
    public : string usn,name;
            float maths,science,english;
            Student(){}
            Student(string USN,string NAME,float ENGLISH ,float MATHS,float SCIENCE) {
                this->usn = USN;
                this->name = NAME;
                this->english =  ENGLISH;
                this->maths = MATHS;
                this->science = SCIENCE;
            }
            float bestoftwo() {
                float total =  english + maths + science ;
                total = total - min(english,min(maths,science));
                return (total/2);
            }
};

int main() {
    Student arr[10];
    string USN, NAME;
    float ENGLISH, MATHS, SCIENCE;
    cout<<"Enter a total of 10 Student details"<<endl;
    for(int i=0;i<10;i++) {
        cout<<"\nenter details of Student "<<(i+1)<<" :"<<endl;
        cout<<"\nenter USN: ";
        cin>>USN;
        cout<<"\nenter name: ";
        cin>>NAME;
        cout<<"\nenter marks obtained in English: ";
        cin>>ENGLISH;
        cout<<"\nenter marks obtained in Maths: ";
        cin>>MATHS;
        cout<<"\nenter marks obtained in Science: ";
        cin>>SCIENCE;
        arr[i] = Student(USN,NAME,ENGLISH,MATHS,SCIENCE);
        cout<<endl;
    }
    cout<<"\nDisplaying Student Details"<<endl;
    cout<<"USN\tName\tAverage Marks"<<endl;
    for(int i=0;i<10;i++) {
        cout<<arr[i].usn<<"\t"<<arr[i].name<<"\t"<<arr[i].bestoftwo()<<endl;
    }
    return 0;
}
