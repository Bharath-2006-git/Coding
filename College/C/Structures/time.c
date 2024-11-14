// To define a structure time having hours, mins and seconds 
// Create three varibles start time, end time then find duration and make duration variable
// Use functions for this
#include<stdio.h>
struct time{
    int hours;
    int minutes;
    int seconds;
};
int main(){
    struct time st,et,d;
    printf("Enter start time: ");
    scanf("%d %d %d",&st.hours,&st.minutes,&st.seconds);
    printf("Enter end time: ");
    scanf("%d %d %d",&et.hours,&et.minutes,&et.seconds);
    int sts = st.hours * 3600 + st.minutes * 60 + st.seconds;
    int ets = et.hours * 3600 + et.minutes * 60 + et.seconds;
    int tds = ets - sts;
    d.hours = tds / 3600;
    d.minutes = (tds % 3600) / 60;
    d.seconds = tds % 60;
    printf("Duration: %02d:%02d:%02d\n", d.hours, d.minutes, d.seconds);

}