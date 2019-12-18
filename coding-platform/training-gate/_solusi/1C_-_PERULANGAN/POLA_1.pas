program pola1;

var
  	N,i,j: integer;
begin
	read(n);
  	for i := 1 to n do begin
  		for j := n-1 downto i do write(' ');
  		for j := 1 to i do write('*');
  		writeln;
  	end;
end.