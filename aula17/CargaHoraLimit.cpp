#include "CargaHoraLimit.hpp"
 
 using namespace ufpr;

CargaHoraLimit::CargaHoraLimit(const unsigned short cargahora)
    :std::runtime_error{"Carga horaria invalida"}, cargahora{cargahora}{
}