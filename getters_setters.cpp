//Abstraction - Hiding unnecessary data from outside a class
//getter - function that makes a private attribute READABLE
//setter - function that makes a private attribute WRITEABLE    

#include <iostream>

class Stove{
    // public:
    //     int temperature = 0;       this can be changed in main code
    private:
        int temperature = 0;

    public:
        int gettemperature(){       //makes the attribute readable
            return temperature;
        }

        void settemperature(int temperature){      //makes it writeable
            // this->temperature = temperature;

            if (temperature < 0) {
                this->temperature = 0;
            } else if (temperature >=30) {
                this->temperature = 30;
            } else {
                this->temperature = temperature;
            }
        }
};

int main() {

    Stove stove;
    // stove.temperature = 378128;  

    stove.settemperature(2000);

    std::cout << stove.gettemperature() << '\n';  

    return 0;
}