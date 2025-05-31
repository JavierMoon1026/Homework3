#pragma once
#include <iostream>
#include <vector>

using namespace std;

class DataBuilder {
public:
    vector<double> vec_doubles;
    vector<string> palabras;
    vector<vector<int>> listas;

    // Método genérico para agregar elementos
    template <typename T>
    void add(const T& value) {
        if constexpr (is_same_v<T, double>) {
            vec_doubles.push_back(value);
        } else if constexpr (is_same_v<T, string>) {
            palabras.push_back(value);
        } else {
            throw invalid_argument("Tipo no soportado por DataBuilder::add()");
        }
    }

    void add_list(const vector<int>& lista);
};