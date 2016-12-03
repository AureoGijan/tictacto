#ifndef TICTACTO_H
#define TICTACTO_H
#include "cell.h"
class tictacto {
public:
    void printTable();
    bool tableAlign();
    bool tableFull();
    void gamePrompt();
    tictacto();
    ~tictacto();
private:
    cell box[9];
};


#endif /* TICTACTO_H */

