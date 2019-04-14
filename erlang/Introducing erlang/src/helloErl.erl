-module(helloErl).
-export([hello/1]).

hello(_) -> hello().
hello() -> io:format("hello erlang~n").


