#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Constants
const double G = 6.67430e-11; // Gravitational constant (N·m²/kg²)
const double K = 8.98755e9;   // Coulomb's constant (N·m²/C²)

void calculateGravitationalForce() {
    double m1, m2, r;
    cout << "\n--- Gravitational Force Calculation ---\n";
    cout << "Enter mass 1 (kg): ";
    cin >> m1;
    cout << "Enter mass 2 (kg): ";
    cin >> m2;
    cout << "Enter distance between masses (m): ";
    cin >> r;

    if (r == 0) {
        cout << "Distance cannot be zero. Division by zero error.\n";
        return;
    }

    double force = (G * m1 * m2) / (r * r);
    cout << fixed << setprecision(10);
    cout << "Gravitational Force (N): " << force << "\n";
}

void calculateElectrostaticForce() {
    double q1, q2, r;
    cout << "\n--- Electrostatic Force Calculation ---\n";
    cout << "Enter charge 1 (Coulombs): ";
    cin >> q1;
    cout << "Enter charge 2 (Coulombs): ";
    cin >> q2;
    cout << "Enter distance between charges (m): ";
    cin >> r;

    if (r == 0) {
        cout << "Distance cannot be zero. Division by zero error.\n";
        return;
    }

    double force = (K * q1 * q2) / (r * r);
    cout << fixed << setprecision(4);
    cout << "Electrostatic Force (N): " << force << "\n";
}

int main() {
    int choice;
    cout << "Force Calculator:\n";
    cout << "1. Gravitational Force (F = G * m1 * m2 / r^2)\n";
    cout << "2. Electrostatic Force (E = k * q1 * q2 / r^2)\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1)
        calculateGravitationalForce();
    else if (choice == 2)
        calculateElectrostaticForce();
    else
        cout << "Invalid choice.\n";

    return 0;
}