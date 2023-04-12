typedef struct {
	int* array;//数组头指针
	int size;//数组大小
}Array;
Array array_create(int init_size) {//创建数组
	Array a;
	a.array = (int*)malloc(sizeof(int) * init_size);//申请内存空间
	a.size = init_size;//数组大小
	return a;
}
void array_free(Array* a) {//释放内存
	free(a->array);
	a->array = NULL;
	a->size = 0;
}
int array_size(const Array* a) {//获取数组大小
	return a->size;
}
void array_inflate(Array* a, int more_size) {//变长数组
	int i;
	int* p = (int*)malloc(sizeof(int) * (a->size + more_size));//申请更大的内存空间
	for (i = 0; i < a->size; i++) {
		p[i] = (a->array)[i];//逐项赋值
	}
	free(a->array);//释放原数组空间
	a->array = p;
	a->size += more_size;
}
