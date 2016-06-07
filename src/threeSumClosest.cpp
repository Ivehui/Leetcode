#include <vector>
#include <algorithm>

using namespace std;

int searchMinAbs(vector<int>& A, int low, int high, int goal)
{
	int temp=low;
	while(low < high)
	{
		int mid = low+((high-low)>>1);
		if(A[mid] == goal)
			return mid;
		else if(A[mid] < goal)
			low = mid+1;
		else // A[mid] >= 0
		high = mid;
	}
	/* 循环结束时，如果low != n-1，A[low] >= 0，如果low>0，A[low-1] < 0 */
	if(low > temp && abs(A[low-1]-goal) < abs(A[low]-goal))
		return low-1;
	else
		return low;
}

int threeSumClosest() {
	int myints[] = {1,2,4,8,16,32,64,128};
	vector<int> nums (myints, myints+8);
	int target = 82;
	sort(nums.begin(), nums.end());
	vector<int>::iterator it = nums.begin();
	int c= nums.size()-1;
	int a=0;
	int mid;
	int goal;
	int t,s=*(it+a) + *(it+a+1) +*(it+c) - target;
	while (c>a+1)
	{
		goal = target - *(it+a) - *(it+c);
		mid = searchMinAbs(nums,a+1,c-1,goal);
		t = *(it+mid) - goal;
		if(t==0)
		{
			return target;
		}else if(t>0)
		{
			c--;
		}else
		{
			a++;
		}
		if(abs(s)>abs(t))
		{
			s=t;
		}
	}
	return s+target;
}
