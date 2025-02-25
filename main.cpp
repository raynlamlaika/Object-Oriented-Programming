// so here let's xstart with OOP

#include <iostream>
using namespace std;
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
        int getValue;
        void pritnwight()
        {
            std::cout << "this is rayn's wight :" << wight << "\n";
        }
        //lest see some gettters and setters "to gitting in private accesse to data"
        getValue = 90;
        string setValue = "this is what we need";
    public:
        int wights;
        Rayn();
        string str;
        std::string name;
        int manyRaynexict()
        {
            return (wights * wight);
        }
        void func(string str)
        {
            int i = 0;
            while (str[i])
                str[i++] += 45;
        }
        //from here we goona set and get some private data in class
        string settValue;
        int getPrivate(){return getValue;}
        int serPrivate(string settValue){settValue = setValue;}

   // protected:

};
Rayn::Rayn()
{
    wight = 10;
}

int main()
{
    // so here Rayn is in class and letssee is in object
    Rayn letssee;
    letssee.wights = 10;
    cout << "this is an number of wight the rayns have :" <<letssee.manyRaynexict() << endl;
    cout << "this is in getter :" << letssee.getPrivate() <<endl;
    return (0);
}