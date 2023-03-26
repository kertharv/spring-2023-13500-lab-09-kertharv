/** 
* Spring 2023 - Lab 09
* Last name: Cataluna
* First name: Kert Harvey
* GitHub username: kertharv
* Instructor: Genady Maryash
* Recitation Instructor: Prof. Zamansky
*/

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("Task A")
{
Coord3D pointP = {0, 0, 0};
Coord3D pointP1 = {10, 20, 30};
Coord3D pointP2 = {8, 12, 38};

//It seems that when I CHECK(length(&pointP1) == 37.4166), even though it give the correct values of: CHECK( 37.4166 == 37.4166 ), it would still result in a ERROR
CHECK(length(&pointP1) == sqrt(100 + 400 + 900));
CHECK(length(&pointP2) == sqrt(64 + 144 + 1444));
CHECK(length(&pointP) == 0);
}//Task A test case

TEST_CASE("Task B")
{
Coord3D pointP = {10, 20, 30};
Coord3D pointQ = {-20, 21, -22};

CHECK(fartherFromOrigin(&pointP, &pointQ) == &pointP);

Coord3D pointP2 = {90, 65, 12};
Coord3D pointQ2 = {200, 362, 566};
CHECK(fartherFromOrigin(&pointP2, &pointQ2) == &pointQ2);
}//end test cases for task B

TEST_CASE("Task C")
{
Coord3D pos = {0, 0, 100.0};
Coord3D vel = {1, -5, 0.2};
move(&pos, &vel, 2.0);

CHECK(pos.x == 2);
CHECK(pos.y == -10);
CHECK(pos.z == 100.4);
}//end test cases for task C

TEST_CASE("Task E")
{
//Creating coord3d object
Coord3D *object = createCoord3D(14, 20, 1002);
Coord3D *delobject = createCoord3D(14, 20, 1002);
CHECK((*object).x == 14);
CHECK((*object).y == 20);
CHECK((*object).z == 1002);
CHECK(compare(object, delobject));

deleteCoord3D(object);
CHECK(!compare(object, delobject));
}