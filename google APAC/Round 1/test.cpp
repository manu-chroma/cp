#include <bits/stdc++.h>
using namespace std;


#define LOW_RATE 0.01
#define HIGH_RATE 0.5
#define MAX_ITERATION 1000
#define PRECISION_REQ 0.00000001

double computeIRR(double cf[], int numOfFlows)
{
	int i = 0,j = 0;
	double m = 0.0;
	double old = 0.00;
	double new_ = 0.00;
	double oldguessRate = LOW_RATE;
	double new_guessRate = LOW_RATE;
	double guessRate = LOW_RATE;
	double lowGuessRate = LOW_RATE;
	double highGuessRate = HIGH_RATE;
	double npv = 0.0;
	double denom = 0.0;
	for(i=0; i<MAX_ITERATION; i++)
	{
		npv = 0.00;
		for(j=0; j<numOfFlows; j++)
		{
			denom = pow((1 + guessRate),j);
			npv = npv + (cf[j]/denom);
		}
   /* Stop checking once the required precision is achieved */
		if((npv > 0) && (npv < PRECISION_REQ))
			break;
		if(old == 0)
			old = npv;
		else
			old = new_;
		new_ = npv;
		if(i > 0)
		{
			if(old < new_)
			{
				if(old < 0 && new_ < 0)
					highGuessRate = new_guessRate;
				else
					lowGuessRate = new_guessRate;
			}
			else
			{
				if(old > 0 && new_ > 0)
					lowGuessRate = new_guessRate;
				else
					highGuessRate = new_guessRate;
			}
		}
		oldguessRate = guessRate;
		guessRate = (lowGuessRate + highGuessRate) / 2;
		new_guessRate = guessRate;
	}
	return guessRate;
}

//Call to the above function in main method
int main()
{
 //Cash flows
	double cf[30], irr = 0.00;
	int numOfFlows;
	cf[0] = 200;
	cf[1] = 100;
	cf[2] = 100;
	cf[3] = 100;
	cf[4] = 100;
	cf[5] = 100;
	numOfFlows = 6;
	irr = computeIRR(cf, numOfFlows);
	printf("\nFinal IRR: %.8f", irr);
	return 0;
}