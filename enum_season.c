#include<stdio.h>
enum month
{
    jan = 1,
    feb,mar,april,may,june,july,aug,sept,oct,nove,dece
};
void main()
{
    enum month m;
    m = feb;
    char *season;
    switch(m)
{
    case dece : case jan: case feb:
    season = "winter"; 
    break;
    case mar: case april:case may:
    season = "summer";
    break;
    case june: case july: case aug:
    season = "monsoon";
    break;
    case sept: case oct: case nove:
    season = "spring";
    break;
}
printf("%d month is %s ",m, season);
}