program pprocedure;

{$MODE DELPHI}

procedure WriteS(n: integer);
begin
	case n of
		1..9: writeln('satuan'); 
		10..99: writeln('puluhan');
		100..999: writeln('ratusan');
		1000..9999: writeln('ribuan');
		10000..99999: writeln('puluhribuan'); 
		100000: writeln('ratusribuan');
	end;
end;

var
	n: integer;
begin
	while not eof(input) do begin
		readln(n);
		writeS(n);
	end;	
end.

end.