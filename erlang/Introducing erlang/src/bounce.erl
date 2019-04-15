-module(bounce).
-export([report/0]).

report() ->
    receive
        X -> io:format("Receive ~p~n", [X])
    end.
