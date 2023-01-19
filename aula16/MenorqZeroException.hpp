#ifndef MENOR_Q_ZERO_EXCEPTION
#define MENOR_Q_ZERO_EXCEPTION

#include <stdexcept>

class MenorqZeroException: public std::runtime_error{
    public:
        const unsigned long valor;

        MenorqZeroException(const unsigned valor);
        virtual ~MenorqZeroException() = default;

};

#endif