/*
	�ṹ��Ϊ�������������ַ�ʽ��
		1�����ݽṹ��Ա
		2�����ݽṹ
			�ŵ㣺�����������ԭʼ���ݵĸ�����������ԭʼ���ݡ�
			ȱ�㣺�ϰ汾��֧�֣����ݽṹ�˷�ʱ��ʹ洢�ռ䡣
			һ����������С�ͽṹ���ݡ�
		3�����ݽṹ�ĵ�ַ
			�ŵ㣺�����ִ���ٶȿ죬Ч�ʸߡ�
			ȱ�㣺�޷��������ݣ������еĲ����п��ܻ�����Ӱ��ԭ�ṹ�е�����
			����ԱΪ��׷��Ч�ʣ����ô˷�����
		���磺
		//���ÿ��˻�
		struct Account
		{
			char * bankName;	//��������
			char * userName;	//�û�����
			double limit;		//�˻����
			double billAmount;	//�����˵�
		};
		//���㲢���ص���Ӧ������
		double GetRepayment(const struct Account *account)
		{
			return account->limit - account->billAmount;
		}
		void main()
		{
			struct Account zsAcc;
			zsAcc.bankName = "��������";
			zsAcc.userName = "DT";
			zsAcc.limit = 1000000;
			zsAcc.billAmount = 100000;
			double result = GetRepayment(&zsAcc);
			printf("����Ӧ���%.2lfԪ��\n",result);
		}
*/
#include"Account.h"


int main()
{
	Account account;
	account.bankName = "��������";
	account.userName = "DT";
	account.limit = 1000000;
	account.billAmount = 100000;
	Account account1 = { "��������","Ů����",5000,2000 };
	double result = GetRepayment(&account1);
	printf("����Ӧ���%.2lf��Ԫ��\n", result/10000);
	printf("Ĭ�������ǣ�%s\n", account1.bankName);
	system("pause");
	return 0;
}