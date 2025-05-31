#pragma once
#include "generadorVectores.h"
#include <iostream>
#include <sstream>

class JsonBuilder {
private:
    DataBuilder& data;

    string serialize_doubles(const vector<double>& vec);
    string serialize_strings(const vector<string>& vec);
    string serialize_lists(const vector<vector<int>>& lists);

public:
    JsonBuilder(DataBuilder& builder);
    void print_json();
};