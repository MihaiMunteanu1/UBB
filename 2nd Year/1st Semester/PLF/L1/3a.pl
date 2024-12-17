%[1,2,3,1,2] => [1,2,3]

stergeDublicat([], _, []).
stergeDublicat([E | T], E, R) :-
        !,
        stergeDublicat(T, E, R).
stergeDublicat([H | T], E, [H | R]) :-
        stergeDublicat(T, E, R).

multime([], []).
multime([H | T], [H | R]) :-
        stergeDublicat(T, H, R1),
        multime(R1, R).
