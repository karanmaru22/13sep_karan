#include <iostream>
#include <string>

using namespace std;

class cricketer {
protected:
    string name;
    int age;
public:
    void input_data(string n, int a) {
        name = n;
        age = a;
    }
    void display_data() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class batsman : public cricketer {
private:
    int total_runs;
    double average_runs;
    int best_performance;
public:
    void input_data(string n, int a, int runs, int best) {
        name = n;  
        age = a;
        total_runs = runs;
        best_performance = best;
        calculate_average_runs();
    }
    void calculate_average_runs() {
        average_runs = total_runs / 20.0; 
    }
    void display_data() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Total Runs: " << total_runs << endl;
        cout << "Average Runs: " << average_runs << endl;
        cout << "Best Performance: " << best_performance << endl;
    }
};

int main() {
    batsman player;
    player.input_data("karansinh rathore", 25, 1200, 150);
    player.display_data();
    return 0;
}