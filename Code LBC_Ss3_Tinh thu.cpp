#include <stdio.h>
int main(){
	int dd;
	printf("Vui long nhap ngay: ");
	scanf("%d",&dd);
	int mm;
	printf("Vui long nhap thang: ");
	scanf("%d",&mm);
	if(mm<1 || mm>12){
		printf("Thang khong hop le");
	}else{
		int day_max;
		switch(mm){
			case 1: case 3: case 5: case 7 :case 8: case 10: case 12: day_max = 31; break;
			case 2: day_max = 28; break;
			default: day_max = 30;
			}
		if(dd<1 || dd>day_max){
			printf("Ngay khong hop le");
		}else{
			int num_day;
			switch(mm){
				case 1: num_day = dd; break;
				case 2: num_day = 31+dd; break;
				case 3: num_day = 31+28+dd; break;
				case 4: num_day = 31+28+31+dd; break;
				case 5: num_day = 31+28+31+30+dd; break;
				case 6: num_day = 31+28+31+30+31+dd; break;
				case 7: num_day = 31+28+31+30+31+30+dd; break;
				case 8: num_day = 31+28+31+30+31+30+31+dd; break;
				case 9: num_day = 31+28+31+30+31+30+31+31+dd; break;
				case 10: num_day = 31+28+31+30+31+30+31+31+30+dd; break;
				case 11: num_day = 31+28+31+30+31+30+31+31+30+31+dd; break;
				case 12: num_day = 31+28+31+30+31+30+31+31+30+31+30+dd; break;
				default:;
			}
			printf("Ngay %d thang %d la ngay thu %d trong nam",dd,mm,num_day);
			int week_day;
			week_day = num_day %7;
			switch(week_day){
				case 1: printf("\nHom do la thu 2"); break;
				case 2: printf("\nHom do la thu 3"); break;
				case 3: printf("\nHom do la thu 4"); break;
				case 4: printf("\nHom do la thu 5"); break;
				case 5: printf("\nHom do la thu 6"); break;
				case 6: printf("\nHom do la thu 7"); break;
				default: printf("\nHom do la chu nhat"); break;
			}

		}
	}

}