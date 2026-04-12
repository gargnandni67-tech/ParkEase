#include <stdio.h>
#include <string.h>

// Structure to define a Parking Spot with Location Type
struct ParkingSpot {
    int id;
    char type[20];   // Mall, Hospital, or Hotel
    int isOccupied;  // 0 for Available, 1 for Occupied
    float ratePerHour;
};

void displayStatus(struct ParkingSpot spots[], int total) {
    printf("\n==========================================\n");
    printf("       PARKEASE LIVE BACKEND SYSTEM       \n");
    printf("==========================================\n");
    printf("%-10s | %-12s | %-10s | %-8s\n", "Spot ID", "Location", "Status", "Rate/hr");
    printf("------------------------------------------\n");

    for(int i = 0; i < total; i++) {
        printf("%-10d | %-12s | %-10s | $%.2f\n", 
               spots[i].id, 
               spots[i].type,
               spots[i].isOccupied ? "OCCUPIED" : "AVAILABLE", 
               spots[i].ratePerHour);
    }
    printf("==========================================\n");
}

int main() {
    // Array of parking spots representing your new categories
    struct ParkingSpot parkingLot[] = {
        {101, "Mall", 0, 5.0},
        {102, "Hospital", 0, 0.0}, // Emergency/Hospital spots can be free or subsidized
        {103, "Hotel", 1, 10.0},
        {104, "Mall", 1, 5.0},
        {105, "Hospital", 0, 0.0}
    };

    int totalSpots = sizeof(parkingLot) / sizeof(parkingLot[0]);

    displayStatus(parkingLot, totalSpots);

    return 0;
}
