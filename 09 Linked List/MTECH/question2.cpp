#include <bits/stdc++.h>
using namespace std;
struct Activity {
    int start;
    int end;
};
bool compare(Activity a, Activity b) {
    return a.end < b.end;
}

void maxActivities(vector<Activity>& activities) {
    sort(activities.begin(), activities.end(), compare);
    int count = 1;
    int lastEnd = activities[0].end;
    cout << "Selected activities are: " << endl;
    cout << "Activity 1: (" << activities[0].start << ", " << activities[0].end << ")" << endl;
    for (int i = 1; i < activities.size(); i++) {
        // If this activity starts after or when the last selected activity ends
        if (activities[i].start >= lastEnd) {
            count++;
            cout << "Activity " << count << ": (" << activities[i].start << ", " << activities[i].end << ")" << endl;
            lastEnd = activities[i].end;
        }
    }
    cout << "Maximum number of activities: " << count << endl;
}
int main() {
    int n;
    cout << "Enter the number of activities: ";
    cin >> n;

    vector<Activity> activities(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter start and end time for activity " << i + 1 << ": ";
        cin >> activities[i].start >> activities[i].end;
    }
    maxActivities(activities);
    return 0;
}
