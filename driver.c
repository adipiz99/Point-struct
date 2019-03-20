#include "point.h"
#include<stdlib.h>
#include<math.h>
#include<stdio.h>

int main(void){
	FILE *input, *oracle, *output;
	float x, y, res, o_res;
	char line[50];
	Point p1, p2;
	
	if ((input= fopen("input.txt", "r"))==NULL){
		fprintf(stdout, "Error while opening \"input.txt\"");
		exit(EXIT_FAILURE);
	}
	
	if ((oracle= fopen("oracle.txt", "r"))==NULL){
		fprintf(stdout, "Error while opening \"oracle.txt\"");
		exit(EXIT_FAILURE);
	}
	
	if ((output= fopen("output.txt", "w"))==NULL){
		fprintf(stdout, "Error while opening \"output.txt\"");
		exit(EXIT_FAILURE);
	}
	
	while(fgets(line, sizeof(line), input)){
		sscanf(line, "%f %f", &x, &y); 
		p1= createPoint(x, y);
		
		fgets(line, sizeof(line), input);
		sscanf(line, "%f %f", &x, &y); 
		p2= createPoint(x, y);
		
		res= distanza(p1, p2);
		
		fgets(line, sizeof(line), oracle);
		sscanf(line,"%f", &o_res);
		
		if(res == o_res)
			fprintf(output, "PASS\n");
		else
			fprintf(output, "FAIL\n");
	}
	return 0;
}
