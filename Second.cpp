#include <iostream>

using namespace std;

struct Point {
    int x;
    int y;
};

bool doOverlap(Point l1, Point r1, Point l2, Point r2) {
    // Check if either rectangle is actually a line
    if (l1.x == r1.x || l1.y == r1.y || l2.x == r2.x || l2.y == r2.y) {
        return false;
    }
    
    // Check if the rectangles do not overlap on the x-axis
    if (l1.x > r2.x || l2.x > r1.x) {
        return false;
    }
    
    // Check if the rectangles do not overlap on the y-axis
    if (l1.y < r2.y || l2.y < r1.y) {
        return false;
    }
    
    // Otherwise, the rectangles overlap
    return true;
}

int main() {
    // Get input from the user
    Point l1, r1, l2, r2;
    cout << "Enter the top-left and bottom-right coordinates of rectangle 1:" << endl;
    cout << "Top-left (x, y): ";
    cin >> l1.x >> l1.y;
    cout << "Bottom-right (x, y): ";
    cin >> r1.x >> r1.y;
    cout << "Enter the top-left and bottom-right coordinates of rectangle 2:" << endl;
    cout << "Top-left (x, y): ";
    cin >> l2.x >> l2.y;
    cout << "Bottom-right (x, y): ";
    cin >> r2.x >> r2.y;
    
    // Check if the rectangles overlap and print the result
    if (doOverlap(l1, r1, l2, r2)) {
        cout << "The two rectangles overlap." << endl;
    } else {
        cout << "The two rectangles do not overlap." << endl;
    }
    
    return 0;
}


// Tes cases 
/*
l1: (1, 4)
r1: (4, 1)
l2: (3, 6)
r2: (6, 3)
Expected output: true

l1: (1, 1)
r1: (3, 3)
l2: (5, 5)
r2: (7, 7)
Expected output: false

l1: (3, 3)
r1: (3, 3)
l2: (1, 1)
r2: (5, 5)
Expected output: true

*/

