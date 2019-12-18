program aaray;

var
	arr: array of integer;
	i: integer;
begin
	while not eof(input) do begin
		setlength(arr, length(arr)+1);
		readln(arr[high(arr)]);
	end;
	for i := high(arr) downto low(arr) do
		writeln(arr[i]);
end.