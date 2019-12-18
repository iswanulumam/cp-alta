program pola3;

var
  	n, i, k: integer;
begin
	read(n);
	readln(k);
  	for i := 1 to n do begin
  		if i mod k = 0 then
  		  write('*')
  		else
  		  write(i);
  		if i < n then
  		  write(' ');
  	end;
  	writeln;
end.