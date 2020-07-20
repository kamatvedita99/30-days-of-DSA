
'''tortoise and hare method for cycle detection in linked list

TC:O(n)

SC:O(1)'''

nums=[1,5,4,3,1,2]
tortoise=hare=nums[0]
while True:
	tortoise = nums[tortoise]
	hare = nums[nums[hare]]
	if tortoise==hare:
		break
tortoise=nums[0]
while(tortoise!=hare):
	tortoise=nums[tortoise]
	hare=nums[hare]
print(hare)
