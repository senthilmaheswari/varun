include <stdio.h>
  int main() {
        int hour, minute, second, timeinsec;

        printf("Enter the value for hour:");
        scanf("%d", &hour);

        printf("Enter the value for minute:");
        scanf("%d", &minute);

        printf("Enter the value for seconds:");
        scanf("%d", &second);
        timeinsec = second + (minute * 60) + (hour * 60 * 60);
        printf("Total seconds in %02dH:%02dM:%02dS is %d\n",
                hour, minute, second, timeinsec);
        return 0;
  }
