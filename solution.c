#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int n;
        scanf("%d", &n);

        int days[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &days[i]);
        }

        // Sort the days in ascending order
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (days[j] > days[j + 1])
                {
                    int temp = days[j];
                    days[j] = days[j + 1];
                    days[j + 1] = temp;
                }
            }
        }

        int savedFriendships = 1; // Devu can always save one friendship by inviting one friend

        // Check the days to see how many more friendships Devu can save
        for (int i = 1; i < n; i++)
        {
            if (days[i] != days[i - 1])
            {
                savedFriendships++;
            }
        }

        printf("%d\n", savedFriendships);
    }

    return 0;
}
