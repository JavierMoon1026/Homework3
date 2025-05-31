#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class IMediciones {
    public:
        virtual void serializar(ostream& out) const = 0;
        virtual void deserializar(istream& in) = 0;
        virtual ~IMediciones() = default;
};
