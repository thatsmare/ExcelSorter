#include <iostream>
#include <cstring>
#include <fstream>

//klasa z funkcjami opdowiedzialnymi za caly proces
class excelsort {
    public:
    excelsort();
void readfiles();
void match();
void createfile();
private:
std::string tempforcheck;
std::string datafile1, datafile2;
std::string dataout;

};

excelsort::excelsort(){
    std::cout << "Start programu" << std::endl;
}

 void excelsort::readfiles(){
std::ifstream file1(datafile1);
std::fstream file2(datafile2);
}


int main(){

}