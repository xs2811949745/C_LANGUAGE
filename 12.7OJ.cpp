#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include <stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("%d",2*b-a);
//	return 0;
//}
//int main()
//{
//	int a[1000][1000];
//	int n, m;
//	char ch;
//	scanf("%d%d", &n, &m);
//	getchar();
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%c", &ch);
//			if (ch == '#')
//				a[i][j] = 1;
//				if (ch == '.')
//					a[i][j] = 0;
//		}
//				getchar();
//	}
//
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>

int n, m;
char dt[1005][1005];
int vis[1005][1005];
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };
void dfs(int x, int y)
{
    //标记自身为烧掉的状态
    vis[x][y] = 1;
    for (int i = 0; i < 4; i++)
    {
        int xx = x + dx[i], yy = y + dy[i];
        //如果它周围的某个方向的格子是蜘蛛网且还未被烧掉，则dfs那个格子
        if (dt[xx][yy] == '#' && vis[xx][yy] == 0)
            dfs(xx, yy);
    }
}
int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf("%s", dt[i] + 1);
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            //如果这个格子是蜘蛛网且还未被烧掉
            if (dt[i][j] == '#' && vis[i][j] == 0)
            {
                dfs(i, j);
                ans++;
            }
        }
    }
    printf("%d", ans);
    return 0;
}
