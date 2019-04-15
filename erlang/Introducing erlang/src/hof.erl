%% An extremly simple higher-order function
-module(hof).
-export([tripler/2]).
tripler(Value, Function) -> 3 * Function(Value).