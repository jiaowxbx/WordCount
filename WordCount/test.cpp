#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
	int ch;
	int i;
	int j=0;
	char temp[200];
	FILE *fp;
	int count1=0;
	int count2=0;
	if (argc == 2)
	{
		printf("û�������������ǰ�ļ�: %s \n", argv[0]);
		exit(EXIT_FAILURE);
	}
//	while((i = getopt(argc, argv, ":cw")) != -1)
//   	switch(i)
//  	{
//      case 'c':
//         printf("ͳ���ַ�����");  break;
//      case 'w':
//         printf("ͳ�Ƶ��ʸ���");  break;
//      default:
//         printf("��������");
//   	}
//   
//
	if ((fp = fopen(argv[2], "r")) == NULL)
	{
		printf("Can't open %s\n", argv[1]);
		exit(1);
	}
	
	while(!feof(fp))   
    {
        fscanf(fp,"%c",&temp[j]);
        j++;
    }
	for(int m=0;m<j-1;m++)
	{
		if(temp[m]>='a'&&temp[m]<='z')
		{
			count1++;
		}
		else{
			count2++;
		}
	}
	while((i = getopt(argc, argv, ":cw")) != -1)
   	switch(i)
  	{
      case 'c':
         printf("ͳ���ַ�����:%d\n",count2);  break;
      case 'w':
         printf("ͳ�Ƶ��ʸ���:%d\n",count1);  break;
      default:
         printf("��������");
   	}
	fclose(fp);
	return 0;
}

