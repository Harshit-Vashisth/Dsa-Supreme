    for(auto nbr: adj[src])
    {
    if(!visited[nbr]){
        bool check=dfs(nbr,visited,src);
        if(check==true)
            return true;
    }
        if( nbr!= parent)
            return true;
    }
    return false;
    }