program pola2;

var
  	N,i,j, now: integer;
begin
	read(n);
	now := 0;
  	for i := 1 to n do begin
  		for j := 1 to i do begin
  			write(now);
  			now := (now+1) mod 10;
  		end;
  		writeln;  		
  	end;
end.