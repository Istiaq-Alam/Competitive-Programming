#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int daysInMonth(int month, int year) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

int getDayOfWeek(int day, int month, int year) {
    if (month < 3) {
        month += 12;
        year--;
    }
    int k = year % 100;
    int j = year / 100;
    int dayOfWeek = (day + 13 * (month + 1) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;
    return (dayOfWeek + 5) % 7; // Adjust to have Sun as 0, Mon as 1, ..., Sat as 6
}

void printCalendar(int day, int month, int year, const std::string& dayName) {
    std::vector<std::vector<std::string>> calendar(5, std::vector<std::string>(7, "-"));

    int currentDay = 1;
    int firstDayOfWeek = getDayOfWeek(1, month, year);

    for (int i = firstDayOfWeek; i < 7 && currentDay <= daysInMonth(month, year); ++i) {
        calendar[0][i] = std::to_string(currentDay++);
    }

    for (int week = 1; week < 5; ++week) {
        for (int i = 0; i < 7 && currentDay <= daysInMonth(month, year); ++i) {
            calendar[week][i] = std::to_string(currentDay++);
        }
    }

    // Print calendar
    std::cout << std::setw(20) << std::right << month << " " << year << "\n";
    std::cout << std::setw(3) << std::left << "Sun" << std::setw(3) << "Mon" << std::setw(3) << "Tue"
              << std::setw(3) << "Wed" << std::setw(3) << "Thu" << std::setw(3) << "Fri"
              << std::setw(3) << "Sat" << "\n";

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 7; ++j) {
            std::cout << std::setw(3) << std::left << calendar[i][j];
        }
        std::cout << "\n";
    }

    std::cout << "\n";
}

int main() {
    int T;
    std::cin >> T;

    for (int t = 0; t < T; ++t) {
        int day, month, year;
        std::string dayName;
        char slash;
        std::cin >> day >> slash >> month >> slash >> year >> dayName;

        printCalendar(day, month, year, dayName);
    }

    return 0;
}

