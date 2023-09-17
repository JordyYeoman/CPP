#include <iostream>
#include <vector>
#include <chrono>
#include <thread>

using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds

void createVector() {
    int sleepFor = 3;
    int dataPointsPerSave = 5000;
    std::vector<int> dataPoints;

    for (int i = 0; i < dataPointsPerSave; i++) {
        dataPoints.push_back(i);
    }

    // std::cout << "DataPoints: " << dataPoints << std::endl;
    std::cout << "DataPointsSize: " << dataPoints.size() << std::endl;
    sleep_for(seconds(sleepFor));
    std::cout << "Slept for: " << sleepFor << std::endl;

    // Loop over all the data points
    std::cout << "Looping datapoints: " << std::endl;
    for (int k = 1; k < dataPoints.size(); k++ ) {
        std::cout << "DataPoint " << k << ": " << dataPoints[k] << std::endl;
    }
}

int main() {
    while (true) {
        createVector();
    }

    return 0;
}