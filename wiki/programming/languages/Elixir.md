Elixir
======

- Distributed Systems
- built top of Erlang and Erlang VM (BEAM) = Suger syntax for Erlang
- Dynamic  
- syntax inspired from Ruby
- .bem file bytecode for Erlang vm
- general purpose language
- good documentation and powerful community
- self documented code
    - generate documentation from code -> 
- Rabitmq built over Erlang
- all calls in Eixlir/Erlang is RPC(Remote Rre Calls)

> syntax inspired from ruby

Hello_World.exs -> -> scri[t file don't compile to .beam file
Hello_World.ex -> compile to .beam file

- NO semicoloum
- OPTIONAL pran

IO.puts "Hello, World from Eilxir"
$ Eilxir Hello_World.exs

n -> 

REPL = interactive shell -> iex = interactive Eilxir
Expression then evaluate
--------------------------------------------------------------------------------------------------------------
IE
instance1.bat
iex --sname instance1 --cookie "secret"

nstance2.bat
iex --sname instance2 --cookie "secret"

--------------------------------------------------------------------------------------------------------------
# module.function


> IO
    - .puts
> Node
    - .self
    - .list
    - .spwon_link whoami
--------------------------------------------------------------------------------------------------------------

whoami = fn -> IO.puts "I'm #{Node.self}" end

whoami.()

--------------------------------------------------------------------------------------------------------------


def sayHi do
    IO.puts("Hi #{Node.self}")
end

--------------------------------------------------------------------------------------------------------------

phinix
- chat app
- websocket
- real time communication

mix phx.new demo --no-webpack --no-ecto


--------------------------------------------------------------------------------------------------------------

- ElixirConf
- LittleAlchemist.io
- Alchemist Camp
--------------------------------------------------------------------------------------------------------------




concatination <> -> EX: "Hello" <> " World"


AVR ATMega32 ?? -> 32 k flash + 8 bit
Arduino UNO -> AVR ATMega328p


BootLoader + IDE +  Header



- intger
- float
- bitstring
- list
- atom -> 
- tuple


File.read("<path>")

"enoent" I think stands for "error-no-entry" (there is no entry for the requested file in the indicated directory)



def
defmodule -> camelcase


defmodule sabry do
    ...
end

parentheses


sparecer


EXunit
Ecto -> ORM
Mix -> Package manager
cowboy
EXmachina -> faker

ExDoc