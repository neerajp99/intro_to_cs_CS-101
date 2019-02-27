prompt = require('prompt')

onErr = (err) ->
  console.log err
  1

prompt.start()
prompt.get [
  {
    name: 'number'
  }
], (error, res) ->

prompt.get [
  {
    name: 'username'
    required: true
  }
  {
    name: 'res.number'
    hidden: true
    conform: (value) ->
      true
  }
], (err, result) ->

  #
  # Log the results.
  #
  console.log 'Command-line input received:'
  console.log '  username: ' + result.username
  console.log '  password: ' + result.password
  return
