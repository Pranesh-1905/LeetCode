class TaskManager {
public:
        priority_queue<pair<int,int>> tasks;
        unordered_map<int,int> taskpri;
        unordered_map<int,int> taskown;
    TaskManager(vector<vector<int>>& tasks) {
        for (auto i:tasks){
            add(i[0],i[1],i[2]);
        }
    }
    
    void add(int userId, int taskId, int priority) {
        tasks.push({priority,taskId});
        taskpri[taskId]=priority;
        taskown[taskId]=userId;
    }
    
    void edit(int taskId, int newPriority) {
        tasks.push({newPriority,taskId});
        taskpri[taskId]=newPriority;
    }
    
    void rmv(int taskId) {
        taskpri[taskId]=-1;
    }    
    int execTop() {
        while(!tasks.empty()){
            auto t=tasks.top();
            tasks.pop();
            if(t.first==taskpri[t.second]){
                taskpri[t.second]=-1;
                return taskown[t.second];
            }
        }
        return -1;
    }
};

/**
 * Your TaskManager object will be instantiated and called as such:
 * TaskManager* obj = new TaskManager(tasks);
 * obj->add(userId,taskId,priority);
 * obj->edit(taskId,newPriority);
 * obj->rmv(taskId);
 * int param_4 = obj->execTop();
 */