#include <iostream>
#include <vector>

using namespace std;

const double L = 0.1;   // Length of the rod (m)
const double dleft = 0.04;  // Diameter at the left end (m)
const double d_right = 0.02;  // Diameter at the right end (m)
const int N = 10;  // Number of control volumes
const double delta_x = L / N;  // Length of each control volume
const double T_A = 80.0;  // Temperature at wall A
const double T_B = 40.0;  // Temperature at wall B
const double T_infinity = 25.0;  // Fluid temperature
const double h = 150.0;  // Heat transfer coefficient (W/m^2 K)

double calculateArea(double diameter) {
    return 3.14159265359 * diameter * diameter / 4.0;
}

double calculatePerimeter(double diameter) {
    return 3.14159265359 * diameter;
}

void solveTemperatureDistribution(double k) {
    vector<double> T(N + 2, 0.0);  // Initialize temperature array

    // Apply boundary conditions
    T[0] = T_A;
    T[N+1] = T_B;

    // Gauss-Seidel iteration
    for (int iter = 0; iter < 1000; ++iter) {
        for (int i = 1; i <= N; ++i) {
            double A_iplushalf = calculateArea(d_left + (i-1) * delta_x + delta_x / 2.0);
            double A_iminushalf = calculateArea(d_left + i * delta_x - delta_x / 2.0);
            double P_i = calculatePerimeter(d_left + (i-0.5) * delta_x);

            double a = k * A_iplushalf / delta_x;
            double b = k * A_iminushalf / delta_x;
            double c = h * P_i * delta_x;

            T[i] = (a * T[i+1] + b * T[i-1] + c * T_infinity) / (a + b + c);
        }
    }

    // Print temperature distribution
    cout << "Temperature distribution for k = " << k << " W/mK:\n";
    for (int i = 1; i <= N; ++i) {
        cout << "T" << i << " = " << T[i] << "Â°C\n";
    }
    cout << endl;
}

int main() {
    // Choose a value of thermal conductivity (k)
    double k_values[] = {50.0, 100.0, 200.0};

    // Iterate for different values of k
    for (double k : k_values) {
        solveTemperatureDistribution(k);
    }

}
