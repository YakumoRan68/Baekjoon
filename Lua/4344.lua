N = io.read("*n")
result = {}

for i = 1, N do
  N2 = io.read("*n")
  local avg, data = 0, {}
  for j = 1, N2 do
    input = io.read("*n")
    avg = avg + input
    table.insert(data, input)
  end

  avg = avg / N2

  local count = 0
  for k, v in pairs(data) do
    count = v > avg and count + 1 or count
  end

  table.insert(result, count/N2 * 100)
end

for k, v in pairs(result) do
  io.write(string.format("%.3f%%\n", v))
end