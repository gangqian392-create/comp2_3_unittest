// StaticLib.c : スタティック ライブラリ用の関数を定義します。
//

#include "framework.h"// プロジェクトで共有の項目を載せる

#include "../include/my_lib.h"

// num個の整数の和を得る
int sum(int num, int* array)
{
	int sum = 0;

	for (int i = 0; i < num; i++)
	{
		sum += array[i];
	}

	return sum;
}

// num個の整数の平均を得る
int average(int num, int* array)
{
    if (num <= 0 || array == 0)  // 要素数が0以下または配列が無効なら
        return 0;                      // 安全に0を返す

    int total = 0;
    for (int i = 0; i < num; ++i)
    {
        total += array[i];             // 各要素を加算
    }

    return total / num;                // 平均を整数で返す（小数点以下切り捨て）
}