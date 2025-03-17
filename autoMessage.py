import pywhatkit as pwk

phone_number = '+254112014723'
message = 'Hello, this is an automated message'

pwk.sendwhatmsg_instantly(phone_number, message, 15, True, 5)
