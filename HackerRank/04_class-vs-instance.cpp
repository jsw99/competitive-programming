#include <iostream>

class Person{
public:
    int age;
    Person(int initial_age);
    void yearPasses();
    void amIOld();
};

Person::Person(int initial_age){
    if(initial_age < 0){
        std::cout << "Age is not valid, setting age to 0." << std::endl;
        age = 0;
    }
    else{
        age = initial_age;
    }
}

void Person::yearPasses(){
    age++;
}

void Person::amIOld(){
    if(age < 13){
        std::cout << "You are young." << std::endl;
    }

    else if(age >= 13 && age < 18){
        std::cout << "You are a teenager." << std::endl;
    }

    else{
        std::cout << "You are old." << std::endl;
    }
}

int main(){
    int T;

    std::cin >> T;

    int test[T];

    for(int i=0; i<T; ++i){
        std::cin >> test[i];
    }

    for(int i=0; i<T; ++i){
        Person person(test[i]);
        person.amIOld();
        person.yearPasses();
        person.yearPasses();
        person.yearPasses();
        person.amIOld();
        std::cout << std::endl;
    }

    return 0;
}