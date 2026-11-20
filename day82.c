#include <stdio.h>

int main() {
    enum TrafficLight {//Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value
        RED,
        YELLOW,
        GREEN
    };

    enum TrafficLight light;

    light = RED;

    switch (light) {
        case RED:
            printf("Stop");
            break;

        case YELLOW:
            printf("Wait");
            break;

        case GREEN:
            printf("Go");
            break;
    }

    return 0;
}