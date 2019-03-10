# @Author: neerajp99
# @Last modified by: https://github.com/neerajp99

# Please Note: This requires Node JS
# To install node js:
# Pre-requisite(mac users): Homebrew, XCode(latest version)
# Go to terminal:
# type: "brew install node"
# To check if node is running, type: "npm -v"
#
#To run the program:
#Type "coffee trail.coffee" in your terminal with coffeescript installed


#Using Process module and process.stdin is used to create a readable stream so that
#we can take the input stream from the user and break it into chunks
#For more information on Streams, buffers and chunks: https://nodejs.org/api/buffer.html

stdin = process.openStdin()
stdin.setEncoding 'utf8'

stdin.on 'data', (input) ->
	#input() is present in the process module of node js
	elev = input.trim('Enter the elevation string')
	# console.log "#{elev}"
	elevLength = elev.length
	i = undefined
	ctrUp = 0
	ctrDown = 0
	#initial height as 0m
	height = 0
	i = 0
	#Loop over the available data and get the final height
	while i < elevLength
		#Checking for up substring and increasing the height by 5m
	  if elev[i] == 'u' and elev[i + 1] == 'p'
	    ctrUp += 1
	    height += 5
		#Checking for up substring and deceasing the height by -5m
	  if elev[i] == 'd' and elev[i + 1] == 'o' and elev[i + 2] == 'w' and elev[i + 3] == 'n'
	    ctrDown += 1
	    height -= 5
		#increment the value of i
	  i++
	#console.log the final height
	console.log 'Final height: ', height, 'm'
	process.exit()
