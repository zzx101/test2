#include<iostream>
using namespace std;
int main()
{
	int n[10],i;
	int t=0,avg,a[10];
	//�������� 
	for(i=1;i<=10;i++)
	{
		 
		cin>>n[i]>>a[i];
	}
	//����ɼ����ܺ� 
	for(i=1;i<=10;i++)
	{
		t += a[i];
	}
	//ȡƽ��ֵ 
	avg = t/10;
	for(i=1;i<=10;i++)
	{
		if(a[i]>avg)
		{
			cout<<"ѧ��:"<<n[i]<<"�ɼ�:"<<a[i]<<endl;
		}
	}
	return 0;
}
