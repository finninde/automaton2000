import std.stdio;
import std.string;
import std.file;

void main(){
    string pathToSerial;

    write("Skriv inn sti til seriellporten: ");
    pathToSerial = readln().strip();
    write(pathToSerial);
    auto bytes = cast(ubyte[]) read(pathToSerial, size_t.max);        
    writeln(bytes);
}
