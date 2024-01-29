#include <iostream>
#include <cmath>

float distanceFallen(float time) {
    float distance;
    distance = pow(time, 2) * 9.8 / 2;
    return distance;
}

float ballHeight(float towerHeight, float time) {
    float ballHeight;
    ballHeight = towerHeight - distanceFallen(time);
    return ((ballHeight < 0) ? 0 : ballHeight);
    
}

int printHeight(float towerHeight, float time) {
    float currentBallHeight;
    currentBallHeight = ballHeight(towerHeight, time);
    if (currentBallHeight == 0) {
        std::cout << "at " << time << " seconds, the ball is on the ground.\n";
    }
    else {
        std::cout << "at " << time << " seconds, the ball is at height: " << currentBallHeight << " meters\n";
    }

    return 0;
}


int main() {
    std::cout << "Enter the height of the tower in meters: ";
    float towerHeight;
    std::cin >> towerHeight;

    printHeight(towerHeight, 0);
    printHeight(towerHeight, 1);
    printHeight(towerHeight, 2);
    printHeight(towerHeight, 3);
    printHeight(towerHeight, 4);
    printHeight(towerHeight, 5);

    return 0;
}