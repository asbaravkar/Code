# MINIMUM NUMBER OF COIN CHANGE

def coinExchange(n,denom):
    numberOfCoins=[float("inf") for i in range(n+1)]
    numberOfCoins[0]=0
    for denom in denoms:
        for amount in range(len(numberOfCoins)):
            if denom<=amount:
                numberOfCoins[amount]=min(numberOfCoins[amount],1+numberOfCoins[amount-denom]) # DP
    return numberOfCoins[n] if numberOfCoins[n]!=float("inf") else -1

target=int(input())
denoms=[int(i) for i in input().split()]
print(coinExchange(target,denoms))