class Solution {
public:
    bool isUgly(int n) {
        
      if(n == 0)
		return 0;

	if(n == 1)
		return 1;

	while(n)
	{
		if(n % 2 == 0)
			n /= 2;

		if(n % 5 == 0)
			n /= 5;

		if(n % 3 == 0)
			n /= 3;

		if(n == 1)
			return true;

		if((n % 2) && (n % 3) && (n % 5))
			return 0;
	}

	return 1;
    }
};