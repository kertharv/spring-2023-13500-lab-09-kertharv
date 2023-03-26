/** 
* Spring 2023 - Lab 09
* Last name: Cataluna
* First name: Kert Harvey
* GitHub username: kertharv
* Instructor: Genady Maryash
* Recitation Instructor: Prof. Zamansky
*/

#include <iostream>
#include "coord3d.h"
#include "funcs.h"

int main()
{
  Coord3D pointP = {10, 20, 30};
  Coord3D pointQ = {-20, 21, -22};

  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};

  //Task A
  std::cout << length(&pointP) << std::endl;
  std::cout << "-------------------------------------------------------------" << std::endl;
  //Task B
  Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
  std::cout << "Address of pointP: " << &pointP << "\n" << "Adress of pointQ: " << &pointQ << "\n" << "Answer: " << ans << "\n";
  std::cout << "-------------------------------------------------------------" << std::endl;
  //Task C
  move(&pos, &vel, 2.0);
  std::cout << pos.x << " " << pos.y << " " << pos.z << std::endl;
  std::cout << "-------------------------------------------------------------" << std::endl;
  //Task E
  Coord3D *newpos = createCoord3D(12, 23, -20);
  Coord3D *newvel = createCoord3D(26, 96, 90);
  move(newpos, newvel, 10.0);
  std::cout << "Coordinates after 10 seconds: " << (*newpos).x << " " << (*newpos).y << " " << (*newpos).z << std::endl;
  std::cout << "-------------------------------------------------------------" << std::endl;

  deleteCoord3D(newpos);
  deleteCoord3D(newvel);

  return 0;
}