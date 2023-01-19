
#include "MenorqZeroException.hpp"

MenorqZeroException::MenorqZeroException(const unsigned valor): std::runtime_error{"valor deve ser menor que 0"} , valor{valor}{

}