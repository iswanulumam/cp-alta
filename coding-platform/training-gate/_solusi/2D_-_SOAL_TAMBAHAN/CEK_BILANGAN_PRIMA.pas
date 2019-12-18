program cek_prima;
var
n, i, a : integer;

prima : boolean;
begin
while not eof(input) do begin
readln(n);
prima := true;
 if n<2 then prima := false;
 
for i := 2 to n-1 do
	if n mod i=0 then prima := false;
	if prima = true then
	writeln('YA') else
	writeln('TIDAK');
end;

end. 
