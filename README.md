# robocontask 2
#include <iostream>
using namespace std;
void readSensors(int sensors[]) {
 cout << "Enter 8 sensor readings (0 or 1): ";
 for (int i = 0; i < 8; i++) {
 cin >> sensors[i];
 }
}
float calculateLinePosition(int sensors[]) {
 int sum = 0;
 int count = 0;
 for (int i = 0; i < 8; i++) {
 if (sensors[i] == 1) {
 sum = sum + i;
 count++;
 }
 }
 if (count == 0) {
 return -1;
 }
 return (float)sum / count;
}
void decideMovement(float position) {
 if (position == -1) {
 cout << "Line Position: Line Lost" << endl;
 cout << "Action: Stop" << endl;
 }
 else if (position < 3.5) {
 cout << "Line Position: Left" << endl;
 cout << "Action: Turn Left" << endl;
 }
 else if (position > 3.5) {
 cout << "Line Position: Right" << endl;
 cout << "Action: Turn Right" << endl;
 }
 else {
 cout << "Line Position: Center" << endl;
 cout << "Action: Move Forward" << endl;
 }
}
int main() {
 int sensors[8];
 readSensors(sensors);
 float position = calculateLinePosition(sensors);
 decideMovement(position);
 return 0;
}
Output:
#include <iostream>
using namespace std;
class Robot {
private:
 int speed;
 int battery;
public:
 void setSpeed(int s) {
 if (s >= 0 && s <= 100) {
 speed = s;
 }
 else {
 cout << "Invalid speed! Speed set to 0." << endl;
 speed = 0;
 }
 }
 void setBattery(int b) {
 if (b >= 0 && b <= 100) {
 battery = b;
 }
 else {
 cout << "Invalid battery value! Battery set to 0." << endl;
 battery = 0;
 }
 }
 void moveForward() {
 if (battery == 0) {
 cout << "Robot cannot move. Battery is empty!" << endl;
 }
 else {
 cout << "Moving Forward" << endl;
 battery = battery - 5;
 if (battery < 0) {
 battery = 0;
 }
 }
 }

 void moveBackward() {
 if (battery == 0) {
 cout << "Robot cannot move. Battery is empty!" << endl;
 }
 else {
 cout << "Moving Backward" << endl;
 battery = battery - 5;
 if (battery < 0) {
 battery = 0;
 }
 }
 }
 void turnLeft() {
 if (battery == 0) {
 cout << "Robot cannot move. Battery is empty!" << endl;
 }
 else {
 cout << "Turning Left" << endl;
 battery = battery - 5;
 if (battery < 0) {
 battery = 0;
 }
 }
 }
 void turnRight() {
 if (battery == 0) {
 cout << "Robot cannot move. Battery is empty!" << endl;
 }
 else {
 cout << "Turning Right" << endl;
 battery = battery - 5;
 if (battery < 0) {
 battery = 0;
 }
 }
 }
 void displayStatus() {
 cout << "\nRobot Speed: " << speed << endl;
 cout << "Battery: " << battery << "%" << endl;
 }
};
int main() {
 Robot robot;
 int speed, battery;
 cout << "Enter Speed: ";
 cin >> speed;
 cout << "Enter Battery: ";
 cin >> battery;
 robot.setSpeed(speed);
 robot.setBattery(battery);

 robot.moveForward();
 robot.turnLeft();
 robot.moveForward();
 robot.turnRight();
 robot.displayStatus();
 return 0;
}
