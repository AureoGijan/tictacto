#ifndef CELL_H
#define CELL_H
class cell {
public:
    void setMark(char);
    void putMark();
    char getMark();
    cell();
    ~cell();
private:
    char choice;
};


#endif /* CELL_H */

