#include "../header/asociadorEtiquetas.h"

JsonBuilder::JsonBuilder(DataBuilder& builder) : data(builder) {}

string JsonBuilder::serialize_doubles(const vector<double>& vec) {
    ostringstream oss;
    oss << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        oss << vec[i];
        if (i < vec.size() - 1) oss << ", ";
    }
    oss << "]";
    return oss.str();
}

string JsonBuilder::serialize_strings(const vector<string>& vec) {
    ostringstream oss;
    oss << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        oss << "\"" << vec[i] << "\"";
        if (i < vec.size() - 1) oss << ", ";
    }
    oss << "]";
    return oss.str();
}

string JsonBuilder::serialize_lists(const vector<vector<int>>& lists) {
    ostringstream oss;
    oss << "[\n";
    for (size_t i = 0; i < lists.size(); ++i) {
        oss << "  [";
        for (size_t j = 0; j < lists[i].size(); ++j) {
            oss << lists[i][j];
            if (j < lists[i].size() - 1) oss << ", ";
        }
        oss << "]";
        if (i < lists.size() - 1) oss << ",";
        oss << "\n";
    }
    oss << "]";
    return oss.str();
}

void JsonBuilder::print_json() {
    cout << "{\n";
    cout << "  \"vec_doubles\" : " << serialize_doubles(data.vec_doubles) << ",\n";
    cout << "  \"palabras\" : " << serialize_strings(data.palabras) << ",\n";
    cout << "  \"listas\" : " << serialize_lists(data.listas) << "\n";
    cout << "}\n";
}