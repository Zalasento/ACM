#include<iostream>

using namespace std;

int main()
{
	int counter;     //������
	int countera;    //������a������ͳ��һ���ж���������
	int counterb;    //������b������ͳ��ÿ�������е�������
	int i, j;        //for�������ñ���
	int sum;         //��ʱ����ĸ����ֺ�
	int maxsum;      //���ִ��е�����Ӵ���
	int left, right; //ȡ����Ӵ���ʱ����߽���ұ߽�

	cin >> countera;
	for (counter = 1; counter <= countera; counter++)
	{
		maxsum = -1001;

		//���ζ�������ʱ��maxsum������Ϊ�����е����ֵ
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
			//�����Լ������ɴ��������ǰ���Ѿ����ǹ���
			//����������Ϊmax�Ӵ��ĵ�0��
			if (array[i] < 0)
			{
				continue;
			}

			//���������array��i�ʼ�ĸ��Ӵ�
			sum = 0;
			for (j = i; j < counterb; j++)
			{
				sum += array[j];
				//�Ӵ����ֺʹ���maxsum�������
				//��maxsum�����ұ߽��趨Ϊ��ǰ״̬
				if (sum > maxsum)
				{
					maxsum = sum;
					left = i;
					right = j;
				}
				//���sumС��0���������Ӵ����ؿ���
				//��Ϊ����Ĵ��ٴ󣬼���ǰ��С��0��sumҲ����׸
				//�������ٵó��µ�����Ӵ�
				if (sum < 0)
				{
					break;
				}
			}
		}

		//���������
		cout << "Case " << counter << ':' << endl;
		cout << maxsum << ' ' << left + 1 << ' ' << right + 1 << endl;
		if (counter != countera)
		{
			cout << endl;
		}
	}

	return 0;
}