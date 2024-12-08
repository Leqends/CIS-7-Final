#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iomanip>

using namespace std;

// Vector list of languages
const vector<string> languages = {
    "English", "Spanish", "Mandarin Chinese", "Arabic", "Russian",
    "Hindi", "Bengali", "Portuguese", "French", "German",
    "Japanese", "Korean", "Italian", "Turkish", "Vietnamese",
    "Swahili", "Urdu", "Persian", "Tamil", "Thai",
    "Malay", "Indonesian", "Punjabi", "Dutch", "Greek"
};

// Vector list of countries
const vector<string> countries = {
    "USA", "Mexico", "China", "Egypt", "Russia", "Canada", "Brazil", "India",
    "France", "Germany", "Japan", "Australia", "South Korea", "Italy",
    "United Kingdom", "Spain", "Argentina", "South Africa", "Indonesia",
    "Turkey", "Saudi Arabia", "Sweden", "Norway", "Thailand", "Vietnam"
};

// Vector list of specializations
const vector<string> specializations = {
    "Cardiology", "Dermatology", "Endocrinology", "Gastroenterology", "Hematology",
    "Pulmonology", "Nephrology", "Neurology", "Oncology", "Pediatrics"
};

int main() {
    srand(time(nullptr)); // Use time for random number generation

    // Print the number of languages
    cout << "\nSelect your language:\n";
    for (size_t i = 0; i < languages.size(); ++i) {
        cout << i + 1 << ". " << languages[i] << "\n";
    }

    // Let the user choose a language
    int languageChoice;
    cout << "Enter your choice: ";
    cin >> languageChoice;

    // Check if the user entered a valid number
    if (languageChoice < 1 || languageChoice > languages.size()) {
        cin.clear();
        cout << "Invalid choice. Please enter a valid number between 1 and " << languages.size() << ": ";
        cin >> languageChoice;
    }

    // Display the selected language
    cout << "\nYou selected: " << languages[languageChoice - 1] << "\n";

    // Print the specializations
    cout << "\nSelect your medical specialization:\n";
    for (size_t i = 0; i < specializations.size(); ++i) {
        cout << i + 1 << ". " << specializations[i] << "\n";
    }

    // Let the user choose a specialization
    int specializationChoice;
    cout << "Enter your choice: ";
    cin >> specializationChoice;

    // Check if the user entered a valid number
    if (specializationChoice < 1 || specializationChoice > specializations.size()) {
        cin.clear();
        cout << "Invalid choice. Please enter a valid number between 1 and " << specializations.size() << ": ";
        cin >> specializationChoice;
    }

    // Display the selected specialization
    cout << "\nYou selected: " << specializations[specializationChoice - 1] << "\n";

    // Assign a country to the user
    string assignedCountry = countries[rand() % countries.size()];
    cout << "\nYou have been assigned to: " << assignedCountry << "\n";

    // Determine the probability by dividing 1 by the total number of languages and specializations
    // 1/(number of languages * number of specializations) * 100
    // Use a double to get a more accurate percentage
    double probability = ((1.0) / (languages.size() * specializations.size())) * 100.0;
    cout << fixed << setprecision(2);
    cout << "The probability of matching based on language and specialization is: " << probability
        << "%" << " or " << "1/" << languages.size() * specializations.size() << "\n";

    return 0;
}
