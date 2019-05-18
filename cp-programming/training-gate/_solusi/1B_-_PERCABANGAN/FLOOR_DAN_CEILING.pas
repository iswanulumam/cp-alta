program floorandceiling;

function floor(n: real): integer;
begin
	if n<0 then
	if frac(n) <> 0.0 then
    	floor := trunc(n)-1
    else
   	 	floor := trunc(n)
   	else   	
    	floor := trunc(n)    
end;


function ceil(n: real):integer;
begin
	if N<0 then	
      	ceil := trunc(n)      
   	else
   	  if frac(n) <> 0.0 then
      	ceil := trunc(n)+1
      else
   	 	ceil := trunc(n);
end;

var
  N: real;
begin
  read(n);
  write(floor(n),' ');
  writeln(ceil(n));
end.