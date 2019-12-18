program loopfor;
var
N, a, ctr, i: integer;
begin
  read(n);
ctr := 0;
for i := 0 to n-1 do begin
  read(a);
  inc(ctr, a);
end;  
writeln(ctr);
end.