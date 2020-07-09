ts = task-spooler = tsp

tsp <command> === TS_SOCKET=/tmp <command> -> add <command> to the queue
ts -> show all tasks in (list = queue)
ts -c <command> -> cat
ts -C -> clear finshed jobs
ts -K <id> -> kill task
ts -r -> remove last task in queue
ts -r <id> -> remove task with spacific id
TS_SOCKET=/tmp -> by defualt
TS_SOCKET=/tmp/queue1 command