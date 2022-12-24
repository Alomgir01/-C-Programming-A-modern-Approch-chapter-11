#include <stdio.h>
void find_closest_flight(int desired_time,
                         int *departure_time,
                         int *arrival_time);

int main(void)
{
    int minuts, hours,
        departure_time, depart_hr, depart_m,
        arrival_time, arrive_hr, arrive_m;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minuts);

    minuts = hours * 60 + minuts;

    if (minuts >= (60 * 24) || minuts < 0)
        printf("Entered invalid time.");

    find_closest_flight(minuts, &departure_time, &arrival_time);

    depart_m = departure_time % 60;
    depart_hr = (departure_time - depart_m)/60;
    arrive_m = arrival_time % 60;
    arrive_hr = (arrival_time - arrive_m)/60;

    printf("Closest departure time is ");
    printf("%d:%.2d %c.m., arriving at %d:%.2d %c.m.\n",
           (depart_hr > 12) ? depart_hr - 12 : depart_hr,
           depart_m, (depart_hr >= 12) ? 'p' : 'a',
           (arrive_hr > 12) ? arrive_hr - 12 : arrive_hr,
           arrive_m, (arrive_hr >= 12) ? 'p' : 'a');
    return 0;
}
void find_closest_flight(int desired_time,
                         int *departure_time,
                         int *arrival_time)
{
    int 8_00am = (60 * 8),
        9_43am = (60 * 9) + 43,
        11_19am = (60 * 11) + 19,
        12_47pm = (60 * 12) + 47,
        2_00pm = (60 * 14),
        3_45pm = (60 * 15) + 45,
        7_00pm = (60 * 19),
        9_45pm = (60 * 21) + 45,
        10_16am = (60 * 10) + 16,
        11_52am = (60 * 11) + 52,
        1_31pm = (60 * 13) + 31,
        3_00pm = (60 * 15),
        4_08pm = (60 * 16) + 8,
        5_55pm = (60 * 17) + 55,
        9_20pm = (60 * 21) + 20,
        11_58pm = (60 * 23) + 58;
    if (desired_time >= 0 && desired_time < 8_00am)
    {
        *departure_time = 8_00am;
        *arrival_time = 10_16am;
        return;
    }
    if (desired_time >=8_00am && desired_time < 9_43am)
    {
        if (desired_time - 8_00am < 9_43am - desired_time)
        {
            *departure_time = 8_00am;
            *arrival_time = 10_16am;
            return;
        }
        else
        {
            *departure_time = 9_43am;
            *arrival_time = 11_52am;
            return;
        }
    }
    if (desired_time >=9_43am && desired_time < 11_19am)
    {
        if (desired_time-9_43am < 11_19am - desired_time)
        {
            *departure_time=9_43am;
            *arrival_time =11_52am;
            return;
        }
        else
        {
            *departure_time=11_19am;
            *arrival_time = 1_31pm;
            return;
        }
    }
    if (desired_time>=11_19am && desired_time < 12_47pm)
    {
        if (desired_time - 11_19am < 12_47pm - desired_time)
        {
            *departure_time=11_19am;
            *arrival_time = 1_31pm;
            return;
        }
        else
        {
            *departure_time = 12_47pm;
            *arrival_time = 3_00pm;
            return;
        }
    }
    if (desired_time>=12_47pm && desired_time < 2_00pm)
    {
        if (desired_time - 12_47pm <2_00pm - desired_time)
        {
            *departure_time = t12_47pm;
            *arrival_time = 3_00pm;
            return;
        }
        else
        {
            *departure_time = 2_00pm;
            *arrival_time = 4_08pm;
            return;
        }
    }
    if (desired_time >=2_00pm && desired_time < 3_45pm)
    {
        if (desired_time- 2_00pm < 3_45pm - desired_time)
        {
            *departure_time = 2_00pm;
            *arrival_time = 4_08pm;
            return;
        }
        else
        {
            *departure_time = 3_45pm;
            *arrival_time = 5_55pm;
            return;
        }
    }
    if (desired_time>= 3_45pm && desired_time < 7_00pm)
    {
        if (desired_time-3_45pm<7_00pm -desired_time)
        {
            *departure_time =3_45pm;
            *arrival_time = 5_55pm;
            return;
        }
        else
        {
            *departure_time =7_00pm;
            *arrival_time = 9_20pm;
            return;
        }
    }
    if (desired_time >=7_00pm && desired_time<9_45pm)
    {
        if (desired_time - 7_00pm <9_45pm - desired_time)
        {
            *departure_time =7_00pm;
            *arrival_time =9_20pm;
            return;
        }
        else
        {
            *departure_time =11_58pm;
            *arrival_time =9_45pm;
            return;
        }
    }
    if (desired_time >=9_45pm && desired_time<(60 * 24))
    {
        *departure_time =11_58pm;
        *arrival_time =9_45pm;
        return;
    }
}
