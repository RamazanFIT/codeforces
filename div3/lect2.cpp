#include <iostream>
#include <string>

struct Student{
    private:
    std:: string name;
    std:: string group;
    int age;
    double * memory;
    public:
    Student(std:: string name_, std:: string group_, int age_){

        name = name_;
        group = group_;
        age = age_;
        std:: cout << "Hooooy, Today is my birthday! Me: " << name << " Today I am enrolled to a course\n"; 
        memory = new double[100];
    }

    ~Student(){
        std:: cout << "Oppps, Me: " << name << " I am dismissed from the course!\n";
        delete[] memory;
        // delete &group, &age, &name;
    }

    void print() const {
    std:: cout << name << " " << group;
    std:: cout << " " << age << "\n";
    }

    void ageing(){
        ++age;
        std:: cout << "Hooooy, Today is my birthday! Today I am " << age << " years old\n"; 
    }


};

// void student_print(const Student &obj);

// void student_init(Student &st);

// void student_ageing(Student &st);

int main(){

    Student a("Petya", "B02-322", 18), b("Ramazan", "B077-777", 17);
    
    // a.init();
    a.print();

    a.ageing(); 
    // a.name;
    // a.age--;
    
    a.print();

    b.print();
    b = a;
    b.print();
    return 0;
}

