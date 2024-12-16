#include <stdio.h>
struct Time {
    int hours;
    int minutes;
    int seconds;
};
struct Time calculateDifference(struct Time t1, struct Time t2) {
    struct Time diff;
    int t1InSeconds = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int t2InSeconds = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    int diffInSeconds = t1InSeconds - t2InSeconds;
    if (diffInSeconds < 0) {
        diffInSeconds = -diffInSeconds;
    }
    diff.hours = diffInSeconds / 3600;
    diffInSeconds %= 3600;
    diff.minutes = diffInSeconds / 60;
    diff.seconds = diffInSeconds % 60;
    return diff;
}

int main() {
    struct Time startTime, endTime, difference;
    printf("Enter start time (hours minutes seconds): ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);
    printf("Enter end time (hours minutes seconds): ");
    scanf("%d %d %d", &endTime.hours, &endTime.minutes, &endTime.seconds);
    difference = calculateDifference(startTime, endTime);
    printf("Difference: %02d:%02d:%02d\n", difference.hours, difference.minutes, difference.seconds);

    return 0;
}
