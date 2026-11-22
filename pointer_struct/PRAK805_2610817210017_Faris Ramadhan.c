#include <stdio.h>

struct wallet
{
    char name[50];
    float balance;
};

void top_up(struct wallet *wallet, float nominal)
{
    wallet->balance += nominal;
}

void pay(struct wallet *wallet, float nominal)
{
    if (wallet->balance >= nominal)
    {
        wallet->balance -= nominal;
        printf("Bayar %g berhasil, saldo: %g\n", nominal, wallet->balance);
    }
    else
    {
        printf("Bayar %g gagal. saldo tidak cukup.\n", nominal);
    }
}

int main()
{
    struct wallet user;
    float nominal;
    int total_transaction;
    char transaction_type;

    if (scanf("%49s %f", &user.name, &user.balance) != 2)
    {
        printf("Input tidak valid.\n");
        return 1;
    }

    if (scanf("%d", &total_transaction) != 1)
    {
        printf("Input tidak valid.\n");
        return 1;
    }

    for (int i = 0; i < total_transaction; i++)
    {
        if (scanf(" %c %f", &transaction_type, &nominal) != 2)
        {
            printf("Input tidak valid.\n");
            return 1;
        }

        if (transaction_type == 'T')
        {
            top_up(&user, nominal);
            printf("Top up %g berhasil. Saldo sekarang %g\n", nominal, user.balance);
        }
        else if (transaction_type == 'B')
        {
            pay(&user, nominal);
        }
        else
        {
            printf("Transaksi tidak valid. Masukkan 'T' untuk top up atau 'B' untuk bayar.\n");
        }
    }

    printf("Saldo akhir %s: %g\n", user.name, user.balance);
    return 0;
}