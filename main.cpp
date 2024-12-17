// so here let's xstart with OOP

#include <iostream>

/*

for aclass we most udentifiy keyword class in cppp as in common characterestecs 
of some group (group of objects),
in other side the objects is in entry that is assosiated with class
for example (as we most always hear):
    >we can see in class like car (the full concept of car)
    >and objects like the part of the car (trunk, wiper, floor mats ...)
    
*/

class Rayn
{
    // the private class members (they are accessible only from member functions and friends of the class)
    private:
        unsigned int  wight;
        void pritnwight()
        {
            std::cout << "this is rayn's wight :" << wight << "\n";
        }
    public:
        int wights;
        Rayn();
        Rayn(int a);
        std::string name;
        int manyRaynexict()
        {
            return (wights * wight);
        }
   // protected:

};

Rayn::Rayn()
{
    wight = 10;
}
int main()
{
    
    Rayn letssee;
    letssee.wights = 10;
    std::cout << "this is an number of wight the rayns have :" <<letssee.manyRaynexict() << "\n";
    return (0);
}