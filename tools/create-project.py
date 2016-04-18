import os, sys

def error(msg):
	print(msg)
	sys.exit(1)

def ask_if_correct():
	result = str(input("Is this correct? [Y/n] "))

	if result.lower() not in ["y", "yes"]:
		error("Error: Incorrect directory")
	else:
		print("Ok")

if __name__ == "__main__":

	current_dir = os.getcwd()
	tool_dir = os.path.dirname(os.path.abspath(__file__))

	print("Using directory '%s'" % current_dir)
	ask_if_correct()

	current_dir_contents = os.listdir(current_dir)
	if len(current_dir_contents) != 0:
		error("Error: Directory is not empty")

	for file in os.listdir(tool_dir):
		print("Copying '%s' to '%s'" % (file, current_dir))
