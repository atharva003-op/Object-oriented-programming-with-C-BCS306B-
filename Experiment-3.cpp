#include <iostream>
#include <string>

class Student {
    private:
    std::string name;
    int rollNumber;
    float marksSubject1;
    float marksSubject2;
    float totalScore;

    public:
    Student():
    name(""),
    rollNumber(0),
    marksSubject1(0.0),
    marksSubject2(0.0),
    totalScore(0.0) {}

    void inputDetails() {
        std::cout<<"Enter Student Name : ";
        std::getline(std::cin ,name);

        std::cout<<"Enter roll number : ";
        std::cin>>rollNumber;

        std::cout<<"Enter marks obtained in Subject 1 : ";
        std::cin>>marksSubject1;

        std::cout<<"Enter marks obtained in Subject 2 : ";
        std::cin>>marksSubject2;

        totalScore = marksSubject1 + marksSubject2;
    }

    void displayDetails() {
        std::cout<<"\nStudent Details : \n";
        std::cout<<"Name : "<<name<<"\n";
        std::cout<<"Roll No : "<<rollNumber<<"\n";
        std::cout<<"Marks in Subject 1 : "<<marksSubject1<<"\n";
        std::cout<<"Marks in Subject 2 : "<<marksSubject2<<"\n";
        std::cout<<"Total Score : "<<totalScore<<"\n";
    }
};

int main () {

    Student student;
    student.inputDetails();
    student.displayDetails();

    return 0;
}
