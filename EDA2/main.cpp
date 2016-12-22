



#include"calib.h"
#include"tmp.h"

using namespace std;


int main(void)
{
	StereoCalib("list.txt", 9, 6, 1);
	reconstruct();
	
	return 0;
}

