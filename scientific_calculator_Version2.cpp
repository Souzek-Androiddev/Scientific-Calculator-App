#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

void displayMenu() {
    cout << "\n--- Scientific Calculator ---\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Power (x^y)\n";
    cout << "6. Square root\n";
    cout << "7. Logarithm (base 10)\n";
    cout << "8. Natural Logarithm (ln)\n";
    cout << "9. Sine\n";
    cout << "10. Cosine\n";
    cout << "11. Tangent\n";
    cout << "12. Exit\n";
    cout << "Choose an operation (1-12): ";
}

double getNumber(const string& prompt) {
    double num;
    cout << prompt;
    while (!(cin >> num)) {
        cout << "Invalid input. Try again.\n" << prompt;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return num;
}

int main() {
    int choice;
    do {
        displayMenu();
        while (!(cin >> choice) || choice < 1 || choice > 12) {
            cout << "Invalid choice. Try again.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            displayMenu();
        }

        double a, b, result;

        switch (choice) {
            case 1: // Addition
                a = getNumber("Enter first number: ");
                b = getNumber("Enter second number: ");
                result = a + b;
                cout << "Result: " << result << endl;
                break;
            case 2: // Subtraction
                a = getNumber("Enter first number: ");
                b = getNumber("Enter second number: ");
                result = a - b;
                cout << "Result: " << result << endl;
                break;
            case 3: // Multiplication
                a = getNumber("Enter first number: ");
                b = getNumber("Enter second number: ");
                result = a * b;
                cout << "Result: " << result << endl;
                break;
            case 4: // Division
                a = getNumber("Enter numerator: ");
                b = getNumber("Enter denominator: ");
                if (b == 0) {
                    cout << "Error: Division by zero!" << endl;
                } else {
                    result = a / b;
                    cout << "Result: " << result << endl;
                }
                break;
            case 5: // Power
                a = getNumber("Enter base: ");
                b = getNumber("Enter exponent: ");
                result = pow(a, b);
                cout << "Result: " << result << endl;
                break;
            case 6: // Square root
                a = getNumber("Enter number: ");
                if (a < 0) {
                    cout << "Error: Negative input for square root!" << endl;
                } else {
                    result = sqrt(a);
                    cout << "Result: " << result << endl;
                }
                break;
            case 7: // Logarithm base 10
                a = getNumber("Enter number: ");
                if (a <= 0) {
                    cout << "Error: Non-positive input for logarithm!" << endl;
                } else {
                    result = log10(a);
                    cout << "Result: " << result << endl;
                }
                break;
            case 8: // Natural logarithm
                a = getNumber("Enter number: ");
                if (a <= 0) {
                    cout << "Error: Non-positive input for natural logarithm!" << endl;
                } else {
                    result = log(a);
                    cout << "Result: " << result << endl;
                }
                break;
            case 9: // Sine
                a = getNumber("Enter angle (in degrees): ");
                result = sin(a * M_PI / 180.0);
                cout << "Result (sin(" << a << ")): " << result << endl;
                break;
            case 10: // Cosine
                a = getNumber("Enter angle (in degrees): ");
                result = cos(a * M_PI / 180.0);
                cout << "Result (cos(" << a << ")): " << result << endl;
                break;
            case 11: // Tangent
                a = getNumber("Enter angle (in degrees): ");
                result = tan(a * M_PI / 180.0);
                cout << "Result (tan(" << a << ")): " << result << endl;
                break;
            case 12: // Exit
                cout << "Exiting calculator. Goodbye!\n";
                break;
        }
    } while (choice != 12);

    return 0;
}