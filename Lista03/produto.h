#ifndef __PRODUTO_H__
#define __PRODUTO_H__
#include <ctime>

struct Produto{
    char marca;
    time_t data;
    int estante;
    int prateleira;
    int gaveta;
};

#endif
