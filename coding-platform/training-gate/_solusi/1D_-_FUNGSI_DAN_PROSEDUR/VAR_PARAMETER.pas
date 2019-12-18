program varparam;

procedure swap(var x,y: integer);
var
	a: integer;
begin
	a := x;
	x := y;
	y := a;
end;

var
	a,b: integer;
begin
    read(a);
    readln(b);
    swap(a,b);
    writeln(a, ' ', b);    
end.