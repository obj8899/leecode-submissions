#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

class Solution {
private:
    const std::vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int toDays(const std::string& date) {
        int month = std::stoi(date.substr(0, 2));
        int day = std::stoi(date.substr(3, 2));
        
        int totalDays = day;
        for (int i = 0; i < month - 1; ++i) {
            totalDays += days[i];
        }
        return totalDays;
    }

public:
    int countDaysTogether(std::string arriveAlice, std::string leaveAlice, std::string arriveBob, std::string leaveBob) {
        int startA = toDays(arriveAlice);
        int endA = toDays(leaveAlice);
        int startB = toDays(arriveBob);
        int endB = std::move(toDays(leaveBob));

        int overlapStart = std::max(startA, startB);
        int overlapEnd = std::min(endA, endB);

        return std::max(0, overlapEnd - overlapStart + 1);
    }
};
