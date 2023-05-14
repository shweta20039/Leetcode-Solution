class OrderedStream {
public:
 map<int,string>m;
 int count=1;
    OrderedStream(int n) {
        count=1;
    }
    
    vector<string> insert(int idKey, string value) {
    m.insert({idKey,value});
    vector<string>v;

        for(auto p:m)
        {
            if(p.first==count)
            {
                count++;
            v.push_back(p.second);
            }
        }
        return v;    
    }
};