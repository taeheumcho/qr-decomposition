#include <iostream>

#include "nvector.hpp"
#include "ops.hpp"

int main() {
    using std::cout;

    container<nvector<float>> basis;
    basis.push_back(nvector<float>(3, {12, 6, -4}));
    basis.push_back(nvector<float>(3, {-51, 167, 24}));
    basis.push_back(nvector<float>(3, {4, -68, -41}));

    cout << "Basis before orthonormalization: \n";
    for (auto i = basis.begin(); i != basis.end(); ++i) {
        cout << *i << "\n";
    }

    auto orthonormal = orthonormalize(basis);

    cout << "Orthonormalized Basis: \n";
    for (auto i = orthonormal.begin(); i != orthonormal.end(); ++i) {
        cout << *i << "\n";
    }
}