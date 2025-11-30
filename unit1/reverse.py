def print_lines_in_reverse(input_file_path, output_file_path):
    try:
        # Open the input file and read all lines
        with open(input_file_path, 'r') as input_file:
            lines = input_file.readlines()

        # Open the output file for writing
        with open(output_file_path, 'w') as output_file:
            # Reverse each line and write to the output file
            for line in lines:
                reversed_line = line.strip()[::-1]  # Reverse and strip whitespace
                output_file.write(reversed_line + '\n')

        print(f"Reversed lines successfully written to {output_file_path}")  

    except FileNotFoundError:
        print(f"The file {input_file_path} does not exist.")
    except Exception as e:
        print(f"An error occurred: {e}")


# Get input and output file paths from the user
input_file_path = input("Enter the full path to the input file (with extension): ")
output_file_path = input("Enter the full path to the output file (with extension): ")

print_lines_in_reverse(input_file_path, output_file_path)
