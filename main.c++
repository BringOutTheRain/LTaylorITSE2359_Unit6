#include <iostream>
#include <memory>
#include <vector>
#include <string>

class Country {
public:
    virtual void displayInfo() const = 0; 
    virtual ~Country() {} 
};

class USA : public Country {
public:
    void displayInfo() const override {
        std::cout << "Country Name: USA\n"
                  << "Capital: Washington, D.C.\n"
                  << "Population: 331 million\n";
    }
};

class Japan : public Country {
public:
    void displayInfo() const override {
        std::cout << "Country Name: Japan\n"
                  << "Capital: Tokyo\n"
                  << "Population: 126 million\n";
    }
};

class Germany : public Country {
public:
    void displayInfo() const override {
        std::cout << "Country Name: Germany\n"
                  << "Capital: Berlin\n"
                  << "Population: 83 million\n";
    }
};

class India : public Country {
public:
    void displayInfo() const override {
        std::cout << "Country Name: India\n"
                  << "Capital: New Delhi\n"
                  << "Population: 1.366 billion\n";
    }
};

int main() {
    int numCountries;
    std::cout << "Enter the number of countries: ";
    std::cin >> numCountries;

 
    std::vector<std::unique_ptr<Country>> countries;

    
    countries.push_back(std::make_unique<USA>());
    countries.push_back(std::make_unique<Japan>());
    countries.push_back(std::make_unique<Germany>());
    countries.push_back(std::make_unique<India>());

    
    for (const auto& country : countries) {
        country->displayInfo();
        std::cout << std::endl; 
    }

   
    return 0;
}
