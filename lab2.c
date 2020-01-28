//The variable position is where the next character will be placed
int position;
double sin (), cos ();

void printDonut(char buffer[]);

int main()
{
    //A and B are the angles at which the donut is rotated they start at zero
    float A = 90, B = 0, i, j, z[1760];
    //Variable name b changed to buffer to better represent what it does
    char buffer[1760];
    //This clears the screen before the animation starts
    printf ("\x1b[2J");

    printf ("\x1b[34m");
    for (;;)
    {
        memset (buffer, 32, 1760);
        memset (z, 0, 7040);
    for (j = 0; 6.28 > j; j += 0.07)
	    for (i = 0; 6.28 > i; i += 0.02)
        {
	        float c = sin (i), d = cos (j), e = sin (A), f = sin (j), g = cos (A), h = d + 2, D = 1 / (c *
								     h * e +
								     f * g +
								     5), l = 
                cos (i), m = cos (B), n = sin (B), t = c * h * g - f * e;
	        int x = 40 + 30 * D * (l * h * m - t * n), y =
	            12 + 15 * D * (l * h * n + t * m), o = x + 80 * y, N =
	            8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);
	        if (22 > y && y > 0 && x > 0 && 80 > x && D > z[o])
	        {
		        z[o] = D;;;
                //This controls the ASCII character set
		        //buffer[o] = ".,-~:;=!*#$@"[N > 0 ? N : 0];
		        buffer[o] = "abcdefghijkl"[N > 0 ? N : 0];
	        }
        }
        printf ("\x1b[H");
        printDonut(buffer);
        //Incrementing A and B each iteration is what causes rotation, changing these change the speed
        A += 0.02;
        B += 0.01;
    }
    return 0;
}

void printDonut(char buffer[])
{
    //A newline will be placed for every 80 characters printed
    for (position = 0; 1761 > position; position++)
        putchar (position % 80 ? buffer[position] : 10);
}

