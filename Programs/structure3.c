#include <stdio.h>
typedef struct timestamp
{
    int date;
    int month;
    int year;
    int hour;
    int min;
    int sec;
} timestamp;

void display(timestamp d)
{
    printf(" the timestamp is: %d-%d-%d %d:%d:%d\n", d.year, d.month, d.date,d.hour,d.min,d.sec);
}

int timestampcmp(timestamp d1, timestamp d2)
{
    if (d1.year > d2.year)
    {
        return 1;
    }
    if (d1.year < d2.year)
    {
        return -1;
    }
    if (d1.month > d2.month)
    {
        return 1;
    }
    if (d1.month < d2.month)
    {
        return -1;
    }
    if (d1.date > d2.date)
    {
        return 1;
    }
    if (d1.date < d2.date)
    {
        return -1;
    }
    return 0;
}
int main()
{
    timestamp d1 = {23, 12, 2028, 02,12,30};
    timestamp d2 = {24, 11, 2026, 03,13,60};
    display(d1);
    display(d2);
    int a = timestampcmp(d1, d2);
    printf("timestamp comparison function returns: %d", a);
    return 0;
}