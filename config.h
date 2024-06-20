// Parameters to change to make unique encoding 
// Tweak parameters such as constants in the function to make different encodings 
// change the type of math function for different types of patterns

char charset[] = {
        '!', '"', '#', '$', '%', '&', '(', ')', '*', '+', ',', '-', '.', '/',
        '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?',
        '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O',
        'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', ']', '^', '_',
        '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o',
        'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~'
};

#define e 2.718281828459045
#define pi 3.141592653589793

#define F_e1(x,a) power(a,2) * (x + 10 + x + 1) * 1/power(x,2) * 1/2
#define F_e(x,a) power(a,2) * (power(x,2) + 10)/power(x,3) 


