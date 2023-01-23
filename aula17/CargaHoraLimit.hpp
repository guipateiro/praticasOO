#ifndef CARGA_HORA_LIMIT
#define CARGA_HORA_LIMIT

#include <stdexcept>
namespace ufpr {
class CargaHoraLimit : public std::runtime_error{
    public:
        const unsigned short cargahora;

        CargaHoraLimit(const unsigned short cargahora);
        virtual ~CargaHoraLimit() = default;
};
}
#endif