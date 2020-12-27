"""
*   Author: Mahdi Esmailiyan ( MS128 )
*   Created: 2020.12.27
*   In The Name God 
"""
n = int(input())
data_list = input()
Set = data_list.split(' ')
# 1<<n = 2**n (in PYTHON)
for mask in range(1<<n):
    for i in range(n):
        if mask & (1<<i):
            print(int(Set[i]), end=' ')
    print()
