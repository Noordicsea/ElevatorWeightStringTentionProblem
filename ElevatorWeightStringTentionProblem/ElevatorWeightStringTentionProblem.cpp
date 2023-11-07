#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void explainEffectiveAcceleration() {
    cout << "Explanation: The effective acceleration is the net acceleration experienced by the object in the elevator. ";
    cout << "It is calculated by subtracting the elevator's acceleration from the acceleration due to gravity. ";
    cout << "If the elevator accelerates upward, the effective acceleration is gravity minus elevator's acceleration. ";
    cout << "If the elevator accelerates downward, it's gravity plus the elevator's acceleration (as it is negative).\n";
}

void explainTension() {
    cout << "Explanation: The tension in the string is the force that counters the object's weight adjusted by the effective acceleration. ";
    cout << "It is calculated by multiplying the mass of the object by the effective acceleration.\n";
}

int main() {
    double mass, elevator_acceleration, gravity = 9.8, effective_acceleration, tension;
    string input;

    do {
        cout << "Enter the mass of the object in kg: ";
        cin >> mass;

        cout << "Enter the acceleration of the elevator in m/s^2 (upward is positive, downward is negative): ";
        cin >> elevator_acceleration;

        effective_acceleration = gravity + elevator_acceleration; // Acceleration is negative if downward
        cout << "Calculating the effective acceleration...\n\n";
        cout << "Effective_acceleration = gravity + elevator_acceleration: \n\n";
        cout << "Effective acceleration = " << gravity << " m/s^2 (gravity) + (" << elevator_acceleration << ") m/s^2 (elevator acceleration) = " << effective_acceleration << " m/s^2\n";
        cout << "Do you understand this step? (Y/N): ";
        cin >> input;
        if (input == "N" || input == "n") {
            explainEffectiveAcceleration();
            continue;
        }

        tension = mass * fabs(effective_acceleration);
        cout << "\n\nCalculating the tension in the string...\n\n";
        cout << "\n\nTension = mass * |effective_acceleration|;\n\n";
        cout << "Tension = " << mass << " kg * |" << effective_acceleration << "| m/s^2 = " << tension << " N\n";
        cout << "Do you understand this step? (Y/N): ";
        cin >> input;
        if (input == "N" || input == "n") {
            explainTension();
            continue;
        }

        cout << "The tension in the string is: " << tension << " N\n";
        cout << "Would you like to calculate another problem? (Y/N): ";
        cin >> input;
    } while (input == "Y" || input == "y");

    return 0;
}
