#include <iostream>
#include <fstream>

class IMediciones {
public:
    virtual void serializar(std::ostream& out) const = 0;
    virtual void deserializar(std::istream& in) = 0;
    virtual ~IMediciones() = default;
};
