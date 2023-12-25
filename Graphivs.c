// C program to implement
// Window to ViewPort Transformation

#include <stdio.h>

// Function for window to viewport transformation
void WindowtoViewport(int x_w, int y_w, int x_wmax,
					int y_wmax, int x_wmin, int y_wmin,
					int x_vmax, int y_vmax, int x_vmin,
					int y_vmin)
{
	// point on viewport
	int x_v, y_v;

	// scaling factors for x coordinate and y coordinate
	float sx, sy;

	// calculating Sx and Sy
	sx = (float)(x_vmax - x_vmin) / (x_wmax - x_wmin);
	sy = (float)(y_vmax - y_vmin) / (y_wmax - y_wmin);

	// calculating the point on viewport
	x_v = x_vmin + (float)((x_w - x_wmin) * sx);
	y_v = y_vmin + (float)((y_w - y_wmin) * sy);

	printf("The point on viewport: (%d, %d )\n ", x_v, y_v);
}

// Driver Code
void main()
{
	// boundary values for window
	int x_wmax = 80, y_wmax = 80, x_wmin = 20, y_wmin = 40;

	// boundary values for viewport
	int x_vmax = 60, y_vmax = 60, x_vmin = 30, y_vmin = 40;

	// point on window
	int x_w = 30, y_w = 80;

	WindowtoViewport(30, 80, 80, 80, 20, 40, 60, 60, 30, 40);
}

//this code is added by khushboogoyal499
