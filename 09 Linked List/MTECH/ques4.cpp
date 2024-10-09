#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Mobile {
    string name;
    int count;
    int profit;
    
    Mobile(string n, int c, int p) : name(n), count(c), profit(p) {}
};

bool compare(Mobile& m1, Mobile& m2) {
    double r1 = (double)m1.profit / m1.count;
    double r2 = (double)m2.profit / m2.count;
    return r1 > r2;
}

void maximizeProfit(vector<Mobile>& mobiles, int maxCapacity) {
    sort(mobiles.begin(), mobiles.end(), compare);

    int currentCount = 0;
    int totalProfit = 0;
    
    cout << "Selected Mobiles: " << endl;
    
    for (Mobile& mobile : mobiles) {
        if (currentCount + mobile.count <= maxCapacity) {
            currentCount += mobile.count;
            totalProfit += mobile.profit;
            cout << mobile.name << " - Count: " << mobile.count << ", Profit: " << mobile.profit << endl;
        } else {
            break;
        }
    }
    
    cout << "Total Profit: " << totalProfit << endl;
    cout << "Total Items Selected: " << currentCount << endl;
}

int main() {
    int maxCapacity = 40;

    vector<Mobile> mobiles = {
        {"Redme Note 9", 10, 20000},
        {"Samsung Galaxy M12", 5, 10500},
        {"OnePlus 5", 26, 89000},
        {"Realme Narzo 20 Pro", 8, 4000},
        {"Xiaomi Poco M3", 12, 23000}
    };

    maximizeProfit(mobiles, maxCapacity);

    return 0;
}
