#ifndef LEET_CODE_PRINTER_H
#define LEET_CODE_PRINTER_H

#include <vector>

using namespace std;

template<class ElemType>
class Printer {
public:
    static void print(vector<vector<ElemType>> matrix);
};

template<class ElemType>
void Printer<ElemType>::print(vector<vector<ElemType>> matrix) {
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

#endif