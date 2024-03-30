
#include <iostream>
using namespace std;
int main()
{
  int num_Pillars, distance, width; 
  cout << "Enter the number of pillars\n";
  cin >> num_Pillars; //عدد الاعمده
  cout << "Enter the distance between pillars (in meters)\n";
  cin >> distance; // المسافه
  cout << "Enter the width of the pillar (in centimeters)\n";
  cin >> width; // العرض

  int totalDistance = (num_Pillars - 1) * distance; // المسافه الكليه
  /*int The_distance_between_the_first_and_last_pillar =  (totalDistance +(width * num_Pillars)) ; // المسافه بين العمود الاول والاخير 

  cout << "Distance between the first and last pillar " << The_distance_between_the_first_and_last_pillar << " centimeters" << endl;
  */
 cout << totalDistance << endl;
 cout << ((width * num_Pillars) + totalDistance) * 10;
    return 0;
  
} 