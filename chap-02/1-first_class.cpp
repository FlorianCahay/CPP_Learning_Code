#include <iostream>

class Person {
    private:
        std::string _name;
        unsigned short _age = 0u;
    
    public:
        void set_name(const std::string& name) { // référence constante
            _name = name;
        }

        void set_age(unsigned short age) {
            _age = age;
        }

        unsigned short get_age() const {
            return _age;
        }

        const std::string& get_name() const {
            return _name;
        }
};

int main()
{
    Person p;

    p.set_name("Batman");
    p.set_age(23);

    std::cout << "Person named '" << p.get_name() << "' is " << p.get_age() << " years old." << std::endl;

    return 0;
}
