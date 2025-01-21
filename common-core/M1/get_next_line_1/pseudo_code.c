
int	main(void)
{
	fd = open("text");
	get_next_line(fd)
}

char	*get_next_line(fd)
{
	while (new_line_completed != 0 && chars_read >= 0)
	{
		if (carry)
		{
			new_line_complited = handle_carry(&new_line, &carry, &chars_read, &buffer, fd);
			if (new_line_completed == 1)
				return(new_line)
		}
		else
		{
			new_line_complited = handle_no_carry(&new_line, &carry, &chars_read, &buffer, fd);
			if (new_line_completed == 1)
				return(new_line)
		}
	}
}

void new_carry(**char carry)
{
	if (more_info)
		carry = substring(carry, new_line_pos + 1, strlen(carry));
	else
		carry = NULL;
}

int	handle_carry()
{
	if (new_line_found(carry) == 1)
		{
			new_line = substring(carry, until_new_line);
			new_carry(&carry);
			return (1);
		}
		else
		{
			chars_read = read(fd, buffer, BUFF_SIZE);
			carry = strjoin(carry, buffer);
			if (new_line_found)
			{
				new_line = substring(carry, until_new_line);
				new_carry(&carry);
				return (1);
			}
			else
				return (0);
		}
}

int	handle_no_carry()
{
			chars_read = read(fd, buffer, BUFF_SIZE);
			if (new_line)
			{
				new_line = substring(buffer, until_new_line);
				new_carry(&carry);
				return(1);
			}
			else
			{
				carry = strdup(buffer);
				return (0);
			}
}
