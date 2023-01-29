
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int actual_population_uzb(){
    return 349400;
}

int actual_population_regions(int sign){
        if(sign == 1){
            return 296550;
        }
        else if(sign == 2){
            return 184350;
        }
            else if(sign == 3){
                  return  356480;
        }
        else if(sign == 4){
            return 130100;

        }
        else if(sign == 5){

            return 177673;
        }
             else if(sign == 6){
                 return 265240;

        }
             else if(sign == 7){
                 return 94280;

        }
            else if(sign == 8){
                return 30088;

        }
            else if(sign == 9){
                return 365170;

        }
                else if(sign == 10){
                    return 803100;

        }
                else if(sign == 11){
                    return 246230;

        }
                else if(sign == 12){
                    return 246250;

        }
        else if(sign == 12){
            return 242410;
        }
        else{
            return 0;
        }
    }

int data_amount_members(){
    return 23400;
}

int add_members(){
    return 45;
}

int last_month_data(){
    return 27;
}

int take_away(int total, int taker){
    return total - taker;
}

int last_month_rate(int sign){
        if(sign == 1){
            return 20;
        }
        else if(sign == 2){
            return 16;
        }
            else if(sign == 3){
                  return  45;
        }
        else if(sign == 4){
            return 13;

        }
        else if(sign == 5){

            return 32;
        }
             else if(sign == 6){
                 return 23;

        }
             else if(sign == 7){
                 return 17;
        }
            else if(sign == 8){
                return 21;
        }
        else if(sign == 9){
                return 12;

        }
        else if(sign == 10){
                    return 18;
        }
        else if(sign == 11){
                    return 24;
        }
        else if(sign == 12){
                    return 24;
        }
        else if(sign == 0){
            int last_month_uzb_condition = last_month_data();
            return last_month_uzb_condition;
        }
        return 0;
}

int percent_show(int total_population, int total_percent, int members){
    int reminder = members * total_percent;
    int result = reminder / total_population;
    return result;
}

void constrast(int recent , int last, char* name){
     int y = take_away(recent, last);
    if(recent < last){
        printf("Economical Condition Population of %s has improved !\nBecause of %d percent changed\n" ,name, y);
    }
    else{
        printf("Economical Condition Population of %s has fallen !\nBecause of %d percent changed\n" ,name, y);
    }
}

int main(){
    printf("Economical Condition\nUzbekistan\n");
    printf("Population : %d\n", actual_population_uzb());
    printf("Members of Temir daftar : %d\n", data_amount_members());
    int res = 25;
    printf("Percentage of members of Temir daftar %d\n", res);
    int las = last_month_data();
    constrast(res, las, "Tashkennt");
        printf("Economical Condition\nTashkent\n");
    printf("Population : %d\n", actual_population_uzb());
    printf("Members of Temir daftar : %d\n", data_amount_members());
    int res2 = 15;
    printf("Percentage of members of Temir daftar %d\n", res);
    int las2 = last_month_data();
    constrast(res, las, "Tashkent");
}
