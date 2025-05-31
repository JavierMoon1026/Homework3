#pragma once
#include "generadorVectores.h"
#include <iostream>
#include <sstream>

class Asociador{
    private:
        Generador& data;

        string serializar_doubles(const vector<double>& vec);
        string serializar_strings(const vector<string>& vec);
        string serializar_lists(const vector<vector<int>>& lists);

    public:
        Asociador(Generador& builder);
        void print_json();
    };