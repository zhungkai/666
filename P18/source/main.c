#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *in,*out;
	char str[100];
	int cnt,a,b;
	a = fopen_s(&in, "C://Users/ASUS/Desktop/高階語言程式實習/hw/HW7/P18/welcome.txt", "r");
	b = fopen_s(&out, "C://Users/ASUS/Desktop/高階語言程式實習/hw/HW7/P18/output.txt", "w");
	while (!feof(in))
	{
		cnt = fscanf_s(in, "%s",&str,100);
		if(cnt>0)
			fprintf(out,"%s\n", str);
	}
	fclose(in);
	fclose(out);
	system("pause");
	return 0;
}