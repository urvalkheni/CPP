#include <iostream>
using namespace std;

int main() {
    double distance_light_years;
    double speed_percent;

    const double SPEED_OF_LIGHT_KMPS = 299792.458;         // in km/s
    const double SECONDS_IN_YEAR = 31557600;               // average year (365.25 days)
    const double KM_PER_LIGHT_YEAR = SPEED_OF_LIGHT_KMPS * SECONDS_IN_YEAR;

    cout << "Enter distance between stars (in light-years): ";
    if (!(cin >> distance_light_years) || distance_light_years <= 0) {
        cout << "Invalid distance." << endl;
        return 1;
    }

    cout << "Enter speed of spacecraft (% of speed of light): ";
    if (!(cin >> speed_percent) || speed_percent <= 0 || speed_percent >= 100) {
        cout << "Speed must be > 0 and < 100." << endl;
        return 1;
    }

    // Convert input to actual speed in km/s
    double speed_kmps = (speed_percent / 100.0) * SPEED_OF_LIGHT_KMPS;
    double distance_km = distance_light_years * KM_PER_LIGHT_YEAR;

    // Time = distance / speed
    double time_seconds = distance_km / speed_kmps;
    double time_years = time_seconds / SECONDS_IN_YEAR;

    cout << "\nEstimated Travel Time: " << time_years << " years" << endl;

    return 0;
}
