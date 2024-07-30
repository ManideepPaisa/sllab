def repeat_string(string, n)
  if n < 0
    return "n must be a nonnegative integer."
  else
    return string * n
  end
end

text = "jaya"
n = 5

result = repeat_string(text, n)
puts result  # Output: hellohellohello
