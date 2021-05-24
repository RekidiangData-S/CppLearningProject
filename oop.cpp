#include<iostream>
using std::string;

class AbstractEmploye {

    virtual void AskPromotion() = 0;

};


class Employe:AbstractEmploye {       // The class

private:
    int ID;        // Attribute (int variable)
    string Name;  // Attribute (string variable)
    int YearOfBirth;  // Attribute (int variable)
    int Age;  // Attribute (int variable)


public:             // Access specifier/modifier (private[by default], public, protected)
    
    void setId(int id) {
        ID = id;
    }
    int getId() {
        return ID;
    }
    
    void setName(string name) {
        Name = name;
    }
    string getName() {
        return Name;
    }

    void setYoB(int yearB) {
        YearOfBirth = yearB;
    }
    int getYoB() {
        return YearOfBirth;
    }

    void setAge(int age) {
        Age = age;
    }
    int getAge() {
        return Age;
    }


    void IntroduceYourSelf() {
        std::cout << "Employe Numero : " << ID << std::endl;
        std::cout << "***************************** " <<  std::endl;
        std::cout << "Name : " << Name << std::endl;
        std::cout << "Year Of Birth : " << YearOfBirth << std::endl ;
        Age = 2021 - YearOfBirth;
        std::cout << "Age : " << Age << std::endl<< std::endl;
    }

    void AskPromotion() {
        if (Age > 30)
            std::cout << Name << " You got a promotion !!!"<< std::endl << std::endl;
        else
            std::cout << Name << " Not  promotion for you !!!" << std::endl << std::endl;

    }

    Employe(int id, string name, int yearOfBirth) {
        ID = id;
        Name = name;
        YearOfBirth = yearOfBirth;
    }


};

    int main() {
        Employe employe1= Employe(1001, "Kiese", 2010);
        employe1.IntroduceYourSelf();
        employe1.AskPromotion();

        Employe employe2 = Employe(1002, "lomo", 1958);
        employe2.IntroduceYourSelf();
        employe2.AskPromotion();

        Employe employe3 = Employe(1003, "koplo", 1975);
        employe3.IntroduceYourSelf();
        employe3.AskPromotion();

       

    }