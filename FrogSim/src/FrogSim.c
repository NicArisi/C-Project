#include <stdio.h>
#include <stdlib.h>
struct frog{
	int goalDistance;
	int maxHops;
};
int main(void) {
	struct frog frog1;
	frog1.goalDistance=25;
	frog1.maxHops=5;
	int hopDistanceGen(){
		return rand()*41-9;
	}
	int simulate(){
		int distanceSum =0;
		for(int i=0;i<frog1.goalDistance;i++){
			distanceSum += hopdistance();
		}
		if(distanceSum>=frog1.goalDistance){
			return 1;
		}else{
			return 0;
		}
	}
	double runSimulations(int num){
		int countSuccess = 0;
		for(int count = 0; count < num; count++){
			if(simulate()==1){
				countSuccess++;
			}
		}return (double)countSuccess / num;
	}
	printf(runSimulations(10));
}
