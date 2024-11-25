#include <stdio.h>

// Structure to represent a job
struct Job {
    int id;
    int deadline;
    int profit;
};

// Function prototypes
void jobScheduling(struct Job jobs[], int n);

int main() {
    struct Job jobs[] = {{1, 4, 20}, {2, 1, 10}, {3, 1, 40}, {4, 1, 30}};
    int n = sizeof(jobs) / sizeof(jobs[0]);

    jobScheduling(jobs, n);

    return 0;
}
