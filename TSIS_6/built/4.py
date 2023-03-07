from time import sleep
import math
def delay(ms, n):
  sleep(ms / 1000)
  return math.sqrt(n)
print("Square root after specific miliseconds:") 
num = int(input())
seconds = int(input())
print(f'Square root of {num} after {seconds} milliseconds is {delay(seconds, num)}')