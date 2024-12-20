﻿namespace NBA.domain;

public class Echipa : Entity<int>
{
    private string name;
    
    public string Name
    { 
        get => name;
        init => name = value;
    }
    public override string ToString()
    {
        return $"{nameof(name)}: {name}";
    }
}