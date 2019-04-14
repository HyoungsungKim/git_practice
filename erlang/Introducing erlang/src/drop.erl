-module(drop).
-export([fall_velocity/1]).
fall_velocity({Planmo, Distance}) when element(2, {Planmo, Distance}) >= 0 ->
    case element(1, {Planmo, Distance}) of
    earth -> math:sqrt(element(2, {Planmo, Distance}) * 9.8)
end.