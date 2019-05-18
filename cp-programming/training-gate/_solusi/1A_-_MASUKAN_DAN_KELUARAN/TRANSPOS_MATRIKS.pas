program transposmatrix;

var
  matrix: array [0..2] of array [0..2] of byte;
  x,y: byte;
begin
	for y := 0 to 2 do
		for x := 0 to 2 do
			read(matrix[x,y]);
  for y := 0 to 2 do begin
		for x := 0 to 2 do begin			
			write(matrix[y,x]);		
			if x<>2 then
			write(' ');
		end;	
		writeln;
	end;		
end.