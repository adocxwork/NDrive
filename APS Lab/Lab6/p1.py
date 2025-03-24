class Job:
    def __init__(self, job_id, deadline, profit):
        self.job_id = job_id
        self.deadline = deadline
        self.profit = profit

def job_sequencing(jobs):
    jobs.sort(key=lambda job: job.profit, reverse=True)
    max_deadline = max(job.deadline for job in jobs)
    schedule = [-1] * (max_deadline + 1)
    total_profit = 0
    job_count = 0
    for job in jobs:
        for j in range(min(max_deadline, job.deadline), 0, -1):
            if schedule[j] == -1:
                schedule[j] = job.job_id
                total_profit += job.profit
                job_count += 1
                break
    scheduled_jobs = [job_id for job_id in schedule if job_id != -1]
    return scheduled_jobs, total_profit

jobs = [
    Job('J1', 2, 100),
    Job('J2', 1, 50),
    Job('J3', 2, 10),
    Job('J4', 1, 20),
    Job('J5', 3, 30)
]

scheduled_jobs, total_profit = job_sequencing(jobs)
print("Scheduled Jobs:", scheduled_jobs)
print("Total Profit:", total_profit)