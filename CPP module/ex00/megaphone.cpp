#include <iostream>
#include <string>
#include <cctype>


void megaphone(int ac,char* av[])
{
        for(int i =1 ;i<ac;i++)
        {
                for(int j = 0 ; av[i][j]; j++)
                {
                        std::cout <<(char) toupper(av[i][j]);

                }
        }
        std::cout << std::endl;
}

int main(int ac,char* av[])
{
        if(ac > 1)
        {
                megaphone(ac,av);
	}
        else
                return 0;
	return 0;

}

