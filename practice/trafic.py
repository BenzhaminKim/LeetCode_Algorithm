from datetime import datetime, timedelta

def solution(lines):
    answer = 1
    m = 0
    start_times = []
    end_times = []
    for line in lines:
        log = line.split()
        date_time = log[0] + " " + log[1]
        end_time = datetime.strptime(date_time, '%Y-%m-%d %H:%M:%S.%f')
        seconds = float(log[2][:-1]) - 0.001
        seconds_added = timedelta(seconds = seconds)

        start_time = end_time - seconds_added
        start_times.append(start_time)
        end_times.append(end_time)
    
    for i in range(0,len(lines)):
        added_time = end_times[i] + timedelta(seconds = 1)
        m = 0
        for j in range(i, len(lines)):
            if(added_time > start_times[j]):
                m += 1
        answer = max(m,answer)
            
    return answer