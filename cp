cp

包括主函数
int Reverse_Int(const int& i)
void Read_File(const ifstream& file, const int& total_image, const int& each_image_size, Image* image_arr)


int Reverse_Int(const int& i)

大端转小端，返回int，该文件是按照大端，x86架构的机器使用的是小端，因而若是想读取正确信息，需要Reverse_Int(const int&)来得到正确的int


void Read_File(const ifstream& file, const int& total_image, const int& each_image_size, Image* image_arr)

首先获取每个图的参数，根据参数确定每张图的数据量，从而获取需要便利的次数，再遍历文件，读出每张图的数据。


主函数

判断参数是否符合格式，获取输入参数，读取文件并模型化为Image,调用获取最近邻算法，返回的pair保存最近点的序号，分别打印出对应的图，观察结果。
