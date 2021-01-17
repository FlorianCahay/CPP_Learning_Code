#include <iostream>
#include <string>

class Person {
    private:
        std::string _name;
        std::string _surname;
        unsigned short _age = 0u;
    
    public:
        Person(const std::string& name, const std::string& surname) 
            : _name { name }
            , _surname { surname } {

        }

        void wait(unsigned short years) {
            _age += years;
        }

        unsigned short get_age() const {
            return _age;
        }

        std::string get_full_name() const {
            return _name + " " + _surname;
        }
};

int main()
{
    Person p { "Bruce", "Wayne" };

    //p.set_name("Batman");
    p.wait(23);

    std::cout << "Person named '" << p.get_full_name() << "' is " << p.get_age() << " years old." << std::endl;

    return 0;
}
