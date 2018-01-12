/*
	结构数组定义：
		元素为结构类型的数组称为结构数组。
		例1：可以用typedef
		struct Role
		{
			char * name;
			int age;
			char * job;
			char * skill;
		}roles[25];
		struct Role roles[25];

		例2：直接初始化
		struct Role
		{
		char * name;
		int age;
		char * job;
		char * skill;
		}roles[] = {
			{"郭芙蓉"，29，"打杂的","排山倒海"},
			{"吕秀才"，30，"账房","子曾经曰过"}
		};

		知识点：
			getch()比getchar()少一个回车
*/