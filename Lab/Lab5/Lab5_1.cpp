#include <iostream>

int main() {
    // This variable will hold the total number of diamonds collected.
    // We use 'long long' because the total can get very large.
    long long total_diamonds = 0;

    // This variable will calculate the factorial for each island.
    long long factorial = 1;

    // Loop through each of the 10 islands.
    for (int i = 1; i <= 10; i++) {
        // Calculate the factorial for the current island (i!).
        factorial = factorial * i;

        // Add the diamonds from this island to the total pile.
        total_diamonds = factorial + total_diamonds;
    }

    // Find the remainder after dividing the total by 3 crew members.
    int remainder = total_diamonds % 3;

    // Print the final answer.
    std::cout << "Captain Jones has " << remainder << " diamonds left for himself." << std::endl;

    return 0;
}
