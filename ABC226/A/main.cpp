#include <stdio.h>
#include <math.h>

double x;

int main(){
    scanf("%lf", &x);

    int floor_x = floor(x);

    double floor_x_1 = floor(x * 10) / 10;  //少数第一まで

    int ans;
    if (floor_x_1 - floor_x >= 0.5){
        ans = floor_x + 1;
    }else{
        ans = floor_x;
    }

    printf("%d\n", ans);

    return 0;
}
