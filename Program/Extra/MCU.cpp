#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct MCUContent {
    string title;
    int year;
    string type;     // Movie / Series / Special
    int phase;
    int timelineOrder;
};

void displayMCU(const vector<MCUContent>& mcu) {
    cout << left << setw(5) << "No."
         << setw(45) << "Title"
         << setw(10) << "Year"
         << setw(12) << "Type"
         << setw(6) << "Phase"
         << "Timeline#" << endl;
    cout << string(90, '-') << endl;

    for (size_t i = 0; i < mcu.size(); ++i) {
        cout << left << setw(5) << i+1
             << setw(45) << mcu[i].title
             << setw(10) << mcu[i].year
             << setw(12) << mcu[i].type
             << "P" << mcu[i].phase << "      "
             << mcu[i].timelineOrder << endl;
    }
}

int main() {
    vector<MCUContent> mcuTimeline = {
        // Timeline Ordered List (All Phases)
        {"Captain America: The First Avenger", 2011, "Movie", 1, 1},
        {"Captain Marvel", 2019, "Movie", 3, 2},
        {"Iron Man", 2008, "Movie", 1, 3},
        {"Iron Man 2", 2010, "Movie", 1, 4},
        {"The Incredible Hulk", 2008, "Movie", 1, 5},
        {"Thor", 2011, "Movie", 1, 6},
        {"The Avengers", 2012, "Movie", 1, 7},
        {"Iron Man 3", 2013, "Movie", 2, 8},
        {"Thor: The Dark World", 2013, "Movie", 2, 9},
        {"Captain America: The Winter Soldier", 2014, "Movie", 2, 10},
        {"Guardians of the Galaxy", 2014, "Movie", 2, 11},
        {"Guardians of the Galaxy Vol. 2", 2017, "Movie", 3, 12},
        {"Avengers: Age of Ultron", 2015, "Movie", 2, 13},
        {"Ant-Man", 2015, "Movie", 2, 14},
        {"Captain America: Civil War", 2016, "Movie", 3, 15},
        {"Black Widow", 2021, "Movie", 4, 16},
        {"Black Panther", 2018, "Movie", 3, 17},
        {"Spider-Man: Homecoming", 2017, "Movie", 3, 18},
        {"Doctor Strange", 2016, "Movie", 3, 19},
        {"Thor: Ragnarok", 2017, "Movie", 3, 20},
        {"Ant-Man and the Wasp", 2018, "Movie", 3, 21},
        {"Avengers: Infinity War", 2018, "Movie", 3, 22},
        {"Avengers: Endgame", 2019, "Movie", 3, 23},
        {"Loki (Season 1)", 2021, "Series", 4, 24},
        {"What If...? (Season 1)", 2021, "Series", 4, 25},
        {"WandaVision", 2021, "Series", 4, 26},
        {"The Falcon and the Winter Soldier", 2021, "Series", 4, 27},
        {"Spider-Man: Far From Home", 2019, "Movie", 3, 28},
        {"Spider-Man: No Way Home", 2021, "Movie", 4, 29},
        {"Shang-Chi and the Legend of the Ten Rings", 2021, "Movie", 4, 30},
        {"Eternals", 2021, "Movie", 4, 31},
        {"Doctor Strange in the Multiverse of Madness", 2022, "Movie", 4, 32},
        {"Hawkeye", 2021, "Series", 4, 33},
        {"Moon Knight", 2022, "Series", 4, 34},
        {"Ms. Marvel", 2022, "Series", 4, 35},
        {"Thor: Love and Thunder", 2022, "Movie", 4, 36},
        {"She-Hulk: Attorney at Law", 2022, "Series", 4, 37},
        {"Werewolf by Night", 2022, "Special", 4, 38},
        {"The Guardians of the Galaxy Holiday Special", 2022, "Special", 4, 39},
        {"Black Panther: Wakanda Forever", 2022, "Movie", 4, 40},
        {"Ant-Man and the Wasp: Quantumania", 2023, "Movie", 5, 41},
        {"Secret Invasion", 2023, "Series", 5, 42},
        {"Guardians of the Galaxy Vol. 3", 2023, "Movie", 5, 43},
        {"Loki (Season 2)", 2023, "Series", 5, 44},
        {"Echo", 2024, "Series", 5, 45},
        {"What If...? (Season 2)", 2023, "Series", 5, 46},
        {"The Marvels", 2023, "Movie", 5, 47},
        {"Deadpool & Wolverine", 2025, "Movie", 5, 48},
        {"Captain America: Brave New World", 2025, "Movie", 5, 49},
        {"Thunderbolts", 2025, "Movie", 5, 50},
        {"Blade", 2025, "Movie", 5, 51},
        {"Agatha All Along", 2025, "Series", 5, 52},
        {"Daredevil: Born Again", 2025, "Series", 5, 53},
        {"Ironheart", 2025, "Series", 5, 54}
    };

    cout << "🎬 Ultimate Marvel Cinematic Universe Timeline Viewer 🎬\n\n";
    displayMCU(mcuTimeline);

    return 0;
}