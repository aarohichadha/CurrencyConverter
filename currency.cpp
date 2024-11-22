#include <iostream>
using namespace std;

// Global variable for user option
int user_option;

// Function for currency conversion operations
void convert_currency() {
    cout << "Available options for currency conversion are:" << endl;
    cout << "1. Convert to USD (United States Dollar)" << endl;
    cout << "2. Convert to Euro (EUR)" << endl;
    cout << "3. Convert to Japanese Yen (JPY)" << endl;
    cout << "4. Convert to British Pound (GBP)" << endl;
    cout << "5. Convert to Australian Dollar (AUD)" << endl;
    cout << "6. Convert to Canadian Dollar (CAD)" << endl;
    cout << "7. Convert to Swiss Franc (CHF)" << endl;
    cout << "8. Convert to Russian Ruble (RUB)" << endl;
    cout << "9. Convert to Chinese Yuan (CNY)" << endl;
    cout << "10. Convert to Singapore Dollar (SGD)" << endl;
    cout << "11. Convert to New Zealand Dollar (NZD)" << endl;
    cout << "12. Convert to South Korean Won (KRW)" << endl;
    cout << "13. Convert to Brazilian Real (BRL)" << endl;
    cout << "14. Convert to South African Rand (ZAR)" << endl;
    cout << "15. Convert to Mexican Peso (MXN)" << endl;
    cout << "\n";

    int selection;
    cout << "Select an option: ";
    cin >> selection;

    float inr;

    // Switch case to handle different currencies
    switch(selection) {
        case 1: // INR to USD
            cout << "\nEnter the INR amount to convert to USD: ";
            cin >> inr;
            inr *= 0.012;
            cout << "Converted USD amount: " << inr << endl;
            break;

        case 2: // INR to Euro
            cout << "\nEnter the INR amount to convert to Euro: ";
            cin >> inr;
            inr *= 0.011;
            cout << "Converted Euro amount: " << inr << endl;
            break;

        case 3: // INR to Japanese Yen
            cout << "\nEnter the INR amount to convert to JPY: ";
            cin >> inr;
            inr *= 1.61;
            cout << "Converted Japanese Yen amount: " << inr << endl;
            break;

        case 4: // INR to GBP
            cout << "\nEnter the INR amount to convert to GBP: ";
            cin >> inr;
            inr *= 0.0095;
            cout << "Converted GBP amount: " << inr << endl;
            break;

        case 5: // INR to AUD
            cout << "\nEnter the INR amount to convert to AUD: ";
            cin >> inr;
            inr *= 0.019;
            cout << "Converted AUD amount: " << inr << endl;
            break;

        case 6: // INR to CAD
            cout << "\nEnter the INR amount to convert to CAD: ";
            cin >> inr;
            inr *= 0.016;
            cout << "Converted CAD amount: " << inr << endl;
            break;

        case 7: // INR to CHF
            cout << "\nEnter the INR amount to convert to CHF: ";
            cin >> inr;
            inr *= 0.011;
            cout << "Converted CHF amount: " << inr << endl;
            break;

        case 8: // INR to RUB
            cout << "\nEnter the INR amount to convert to RUB: ";
            cin >> inr;
            inr *= 1.14;
            cout << "Converted RUB amount: " << inr << endl;
            break;

        case 9: // INR to CNY
            cout << "\nEnter the INR amount to convert to CNY: ";
            cin >> inr;
            inr *= 0.087;
            cout << "Converted CNY amount: " << inr << endl;
            break;

        case 10: // INR to SGD
            cout << "\nEnter the INR amount to convert to SGD: ";
            cin >> inr;
            inr *= 0.016;
            cout << "Converted SGD amount: " << inr << endl;
            break;

        case 11: // INR to NZD
            cout << "\nEnter the INR amount to convert to NZD: ";
            cin >> inr;
            inr *= 0.019;
            cout << "Converted NZD amount: " << inr << endl;
            break;

        case 12: // INR to KRW
            cout << "\nEnter the INR amount to convert to KRW: ";
            cin >> inr;
            inr *= 16.32;
            cout << "Converted KRW amount: " << inr << endl;
            break;

        case 13: // INR to BRL
            cout << "\nEnter the INR amount to convert to BRL: ";
            cin >> inr;
            inr *= 0.059;
            cout << "Converted BRL amount: " << inr << endl;
            break;

        case 14: // INR to ZAR
            cout << "\nEnter the INR amount to convert to ZAR: ";
            cin >> inr;
            inr *= 0.23;
            cout << "Converted ZAR amount: " << inr << endl;
            break;

        case 15: // INR to MXN
            cout << "\nEnter the INR amount to convert to MXN: ";
            cin >> inr;
            inr *= 0.22;
            cout << "Converted MXN amount: " << inr << endl;
            break;

        default:
            cout << "Invalid selection. Please choose a valid option." << endl;
            return;
    }

    // Ask if user wants to convert to another currency
    cout << "Do you want to convert to another currency? (1 for Yes, 2 for No): ";
    cin >> user_option;

    if (user_option == 1) {
        convert_currency();
    }
}

int main() {
    convert_currency();
    cout << "Thank you for using the Currency Converter!" << endl;
    return 0;
}
