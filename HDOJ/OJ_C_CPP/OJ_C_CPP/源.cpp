#include<iostream>

using namespace std;

int main()
{
	int counter;     //计数器
	int countera;    //计数器a，用于统计一共有多少组数据
	int counterb;    //计数器b，用于统计每组数据中的数据数
	int i, j;        //for语句遍历用变量
	int sum;         //临时计算的各数字和
	int maxsum;      //数字串中的最大子串和
	int left, right; //取最大子串和时的左边界和右边界

	cin >> countera;
	for (counter = 1; counter <= countera; counter++)
	{
		maxsum = -1001;

		//依次读入数据时，maxsum被设置为数组中的最大值
		cin >> counterb;
		int* array = new int[counterb];
		for (i = 0; i < counterb; i++)
		{
			cin >> array[i];
			if (array[i] > maxsum)
			{
				maxsum = array[i];
				left = i;
				right = i;
			}
		}

		for (i = 0; i < counterb; i++)
		{
			//除了自己单独成串的情况（前面已经考虑过）
			//负数不能作为max子串的第0项
			if (array[i] < 0)
			{
				continue;
			}

			//考察从数组array第i项开始的各子串
			sum = 0;
			for (j = i; j < counterb; j++)
			{
				sum += array[j];
				//子串数字和大于maxsum的情况下
				//将maxsum与左右边界设定为当前状态
				if (sum > maxsum)
				{
					maxsum = sum;
					left = i;
					right = j;
				}
				//如果sum小于0，则后面的子串不必考察
				//因为后面的串再大，加上前面小于0的sum也是累赘
				//不可能再得出新的最大子串
				if (sum < 0)
				{
					break;
				}
			}
		}

		//输出计算结果
		cout << "Case " << counter << ':' << endl;
		cout << maxsum << ' ' << left + 1 << ' ' << right + 1 << endl;
		if (counter != countera)
		{
			cout << endl;
		}
	}

	return 0;
}