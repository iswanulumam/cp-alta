program breakcontinueexit;

var
  N, i: integer;
begin
	read(n);
  	for i := 1 to n do begin
  		if i mod 10 = 0 then
  			continue
  		else if i = 93 then begin
	  		writeln('ERROR');
  			break;
  		end;
  		writeln(i)
  	end;    
end.