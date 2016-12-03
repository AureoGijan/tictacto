#include <iostream>
#include "tictacto.h"

tictacto::tictacto() {
    for(int i = 0; i < 9; i++) {
        box[i] = static_cast<char>(i+1);
        //override assignment operator in class cell
    }
}

tictacto::~tictacto() {
    std::cout << "destructor is called";
}

tictacto::printTable() {
    std::cout << "      |       |      " << std::endl;
    std::cout << "  " << box[0].putMark() << "   |   " << box[1].putMark() << "   |   " << box[2].putMark() << "  " << std::endl;
    std::cout << "______|_______|______" << std::endl;
    std::cout << "      |       |      " << std::endl;
    std::cout << "  " << box[3].putMark() << "   |   " << box[4].putMark() << "   |   " << box[5].putMark() << "  " << std::endl;
    std::cout << "______|_______|______" << std::endl;
    std::cout << "      |       |      " << std::endl;
    std::cout << "  " << box[6].putMark() << "   |   " << box[7].putMark() << "   |   " << box[8].putMark() << "  " << std::endl;
    std::cout << "______|_______|______" << std::endl;
}

bool tictacto::tableAlign() {
    if(box[0].getMark() == box[1].getMark() == box[2].getMark())
        return true;
    else if (box[0].getMark() == box[3].getMark() == box[6].getMark())
        return true;
    else if (box[6].getMark() == box[7].getMark() == box[8].getMark())
}