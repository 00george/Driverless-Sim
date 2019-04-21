import setup_path 
import airsim
import math
import time
import os
import numpy as np

# connect to the AirSim simulator 
client = airsim.CarClient()
client.confirmConnection()
client.enableApiControl(True)
car_controls = airsim.CarControls()

#For some reason the api sometimes doesnt return a cone
#So we check a few times if there are more
def still_more_cones(num,tag,idx):
	for i in range(num):
		next_cone = client.simGetObjectPose(tag + str(idx+i))
		# if cone exists... return true 
		if math.isnan(next_cone.position.x_val) is False:
			return True
	return False

def get_cones_by_tag(colour):
	#The blue cones are tagged "CBn" and the yellow "CYn" where n is the cones number.
	tag = ""
	if colour == "blue":
		tag = "CB"
	elif colour == "yellow":
		tag = "CY"
	else:
		return
		
	cones = []
	idx = 0
	still_cones = True
	while still_cones:
		cur_cone = client.simGetObjectPose(tag + str(idx))
		if math.isnan(cur_cone.position.x_val) is False:
			cones.append(cur_cone)
		else:
			if still_more_cones(5,tag,idx) is False:
				break
		idx += 1
	return cones
	
	
blue_cones = get_cones_by_tag("blue")
yellow_cones = get_cones_by_tag("yellow")
print("BLUE CONES")
print(len(blue_cones))
print("YELLOW CONES")
print(len(yellow_cones))

for idx in range(3):
    # get state of the car
    car_state = client.getCarState()
    print("Speed %d, Gear %d" % (car_state.speed, car_state.gear))
    # go forward
    car_controls.throttle = 0.5
    car_controls.steering = 0
    client.setCarControls(car_controls)
    print("Go Forward")
    time.sleep(3)   # let car drive a bit

    # Go forward + steer right
    car_controls.throttle = 0.5
    car_controls.steering = 1
    client.setCarControls(car_controls)
    print("Go Forward, steer right")
    time.sleep(3)   # let car drive a bit

    # go reverse
    car_controls.throttle = -0.5
    car_controls.is_manual_gear = True;
    car_controls.manual_gear = -1
    car_controls.steering = 0
    client.setCarControls(car_controls)
    print("Go reverse, steer right")
    time.sleep(3)   # let car drive a bit
    car_controls.is_manual_gear = False; # change back gear to auto
    car_controls.manual_gear = 0  

    # apply brakes
    car_controls.brake = 1
    client.setCarControls(car_controls)
    print("Apply brakes")
    time.sleep(3)   # let car drive a bit
    car_controls.brake = 0 #remove brake
    



#restore to original state
client.reset()

client.enableApiControl(False)


            
