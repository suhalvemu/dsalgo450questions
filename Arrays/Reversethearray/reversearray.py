



def reverseArray(arr):

    start , end = 0, len(arr)-1

    while start<end:
        temp = arr[start]
        arr[start] = arr[end]
        arr[end] = temp
        start +=1
        end -=1


if __name__ == '__main__':
    print('Enter the number of elements need to store in array')
    n = int(input())
    arr = list(map(int,input().split()))
    reverseArray(arr)
    print(arr)



