#include <iostream>
using namespace std;
    class student {
        private:
        string name;
        int age, roll_no;
        string grade;
        // Function Getter and setter 
        public: 
        // Using the function
        void setname(string s)
        {
            if (s.size()==0)
            {
                cout<<"Invalid Name:";
                return ;
            }
            name = s;
        }
        void setage(int a)
        {
            if(age < 0 || age > 20)
            {
                cout<<"The age is less than 20"<<endl; 
                return;
            }
            age = a;
        }

        void setroll_no(int r) //Rollno function
        {
            roll_no = r;
        }
        void setgrade(string s)  //Grade function
        {
            cout<<"A+";
        }
        void getname()
        {
            cout<<name<<endl;
        } 
        void getage()
        {
            cout<<age<<endl; 
        }
        void getroll_no()
        {  
            cout<<roll_no<<endl; 
        } 
        string getgrade(int pin)
        {
            if (pin=98)
            return grade;

            return "invalid";
            cout<<grade<<endl;
        }
}; 
    int main() { 
        student s;
        s.setname("Aawesh");
        s.setage (21);
        s.setroll_no(001);
        s.getname();
        s.getage();
        s.getroll_no();
        cout<<s.getgrade(98)<<endl;
} 