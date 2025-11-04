#include <iostream>

int main() {
    // The number of mages and wards from the story.
    const int NUM_MAGES = 10;
    const int NUM_WARDS = 7;

    // This will store the final answer.
    int total_remainder = 0;

    // Loop for each mage, from the 1st to the 10th.
    for (int j = 1; j <= NUM_MAGES; j++) {

        // This variable will calculate (i^10) for the current mage.
        long long energy_contribution = 1;

        // This inner loop calculates the power (i^10).
        for (int i = 1; i <= 10; i++) {
            // Multiply by the mage's number.
            // We use the modulo operator (%) here to keep the number small.
            energy_contribution = (energy_contribution * j) % NUM_WARDS;
        }

        // Add the current mage's remainder to the total remainder.
        total_remainder = (total_remainder + energy_contribution) % NUM_WARDS;
    }

  
    std::cout << "The number of energy units left over is: " << total_remainder << std::endl;

    return 0;
}
