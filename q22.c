#include <stdio.h>
int main() {
	float cp = 1000;
	float sp = 800;
	scanf("%f %f", &cp, &sp);

	if(sp > cp){
		float profit_percent = (sp - cp) / cp * 100;
		printf("Profit %.0f%%", profit_percent);
	}
	else if(cp > sp){
		float loss_percent = (cp - sp) / cp * 100;
		printf("Loss %.0f%%", loss_percent);
	}
	else{
		printf("No Profit No Loss");
	}

	return 0;
}
