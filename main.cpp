#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <string>

// Function to generate a random password
std::string generatePassword(int length) {
    const std::string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    const int charsetLength = charset.length();
    std::string password;

    for (int i = 0; i < length; ++i) {
        password += charset[rand() % charsetLength];
    }

    return password;
}

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned>(time(nullptr)));

    // File stream to save passwords
    std::ofstream outputFile("passwords.txt", std::ios::app);

    if (!outputFile.is_open()) {
        std::cerr << "Failed to open passwords.txt for writing." << std::endl;
        return 1;
    }

    // Get the current date and time
    time_t now = time(nullptr);
    struct tm timeinfo;
    localtime_s(&timeinfo, &now);
    char timeBuffer[80];
    strftime(timeBuffer, sizeof(timeBuffer), "%Y-%m-%d %H:%M:%S", &timeinfo);

    // Number of passwords to generate
    int numPasswords = 10;

    // Generate and save passwords
    for (int i = 0; i < numPasswords; ++i) {
        std::string password = generatePassword(12);
        outputFile << "Date/Time: " << timeBuffer << " Password: " << password << std::endl;
        std::cout << "Generated Password: " << password << std::endl;
    }

    // Close the output file
    outputFile.close();

    return 0;
}

