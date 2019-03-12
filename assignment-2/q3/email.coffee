# stdin = process.openStdin()
# stdin.setEncoding 'utf8'
#
#
# stdin.on 'data', (input) ->
# 	#input() is present in the process module of node js
# 	 = input.trim('Enter the elevation string')
# 	# console.log "#{elev}"
# 	#
# 	console.log 'Final height: ', height, 'm'
# 	process.exit()


readline = require('readline-sync')
name = readline.question('Enter ')
