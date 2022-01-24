

#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	srand(time(NULL));
	/*int temp[31];
	float temp1 = 0;
	float sredn = 0;
	
	

	for (int i = 0; i < 31; i++)
	{
		temp[i] =  rand() % 30 - 25;
		cout << temp[i] << endl;
		
	}
	for (int j = 0; j < 31; j++)
	{
		sredn += temp[j];
		if (0 > temp[j])
			temp1++;
	}
	cout << sredn / 31 << endl;

	cout << temp1 << endl;*/
	// задание 4
	int mash[10];//{1,11,3,12,5,12,7,10,9};
	
	int sum = 0;
	int num = 1;
	int perAV, vtrAV;
	int max = 0, min = 0;
	/**for (int i = 0; i < 10; i++)
	{
		mash[i] = rand() % 2500 + 2000;
		//cout << mash[i] << endl; 

		
	}
	cout << mash[0] << endl;
	cout << mash[1] << endl;
	cout << mash[2] << endl;
	cout << mash[3] << endl;
	cout << mash[4] << endl;
	cout << mash[5] << endl;
	cout << mash[6] << endl;
	cout << mash[7] << endl;
	cout << mash[8] << endl;
	cout << mash[9] << endl;
	sum = mash[0];*/
	/*for (int j = 1; j < 10; j++)
	{
		
		if (mash[j] > sum)
		{
			sum = mash[j];
			num = j + 1;
			if (j < mash[j]) {
				min = j;
			}
			if (j > mash[j]) {
				max = j;
			}
			
		}
		
	}*/
	const int count = 10;
	int cars_cost[count] = {1, 10, 3, 8, 5, 2, 10, 11, 11, 11};
	int count1, count2= 0, count3;
	count1 = cars_cost[0];
	for (int i = 1; i < count ; i++)
	{
		if (count1 < cars_cost[i])
		{
			count1 = cars_cost[i];
			count3 = i;
		}
		else if (cars_cost[i] == count1)
			count2 = i;
	}


	cout << "Car number first " << count3 + 1 << endl;
	cout << count1 << endl;
	cout << "Car number second " << count2 + 1 << endl;
 }
