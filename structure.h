#pragma once
/*注意序列部分是指针，需要malloc分配空间*/
struct Fas
{
	char name[30];
	char *seq;
	Fas *lnk;
};
struct S_ez
{
	char n;
	S_ez*_p[4];			//下面四个字符的指针组成的数组,认定为0-A,1-T,2-C,3-G.
	S_ez*_p_r;			//回溯至上一个字符
	int k_count;
};
