#include <iostream>
#include "Point.hpp"

// Supposons que bsp(A, B, C, P) renvoie true si P est strictement à l'intérieur du triangle ABC
int main() {
    Point a(0.0f, 0.0f);
    Point b(4.0f, 0.0f);
    Point c(2.0f, 3.0f);

    // Tableau de points à tester
    Point testPoints[] = {
        Point(2.0f, 1.0f),   // à l'intérieur
        Point(0.0f, 0.0f),   // sur le sommet A
        Point(2.0f, 0.0f),   // sur le côté AB
        Point(4.0f, 3.0f),   // à l'extérieur
        Point(2.5f, 1.5f),   // à l'intérieur
        Point(1.5f, 1.0f),   // à l'intérieur
        Point(-1.0f, 0.0f),  // à l'extérieur
        Point(2.0f, 3.0f),   // sur le sommet C
        Point(1.0f, 1.0f)    // à l'intérieur
    };

    // Valeurs attendues pour chaque point
    bool expected[] = {
        true,   // (2.0,1.0) à l'intérieur
        false,  // (0.0,0.0) sommet
        false,  // (2.0,0.0) sur le côté
        false,  // (4.0,3.0) à l'extérieur
        true,   // (2.5,1.5) à l'intérieur
        true,   // (1.5,1.0) à l'intérieur
        false,  // (-1.0,0.0) à l'extérieur
        false,  // (2.0,3.0) sommet
        true    // (1.0,1.0) à l'intérieur
    };

    for (int i = 0; i < 9; ++i) {
        std::cout << "Test point " << i+1 << ": " << testPoints[i] 
                  << " -> bsp = " << bsp(a, b, c, testPoints[i]) 
                  << ", attendu = " << expected[i] << std::endl;
    }

    return 0;
}
