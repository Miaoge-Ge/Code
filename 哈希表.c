void create_hash(int a[], int n, int table[]) {//创建哈希表
	int i;
	for (i = 0; i < n; i++) {
		table[a[i]]++;//用于记录值为a[i]出现的次数
	}
}
int find_key(int table[], int key) {//查找k是否出现
	return table[key] != 0;//不是0返回1，是0返回0
}
