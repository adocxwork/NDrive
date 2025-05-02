class Job:
    def __init__(self, job_id, deadline, profit):
        self.job_id = job_id
        self.deadline = deadline
        self.profit = profit

def job_sequencing(jobs):
    jobs.sort(key=lambda x: x.profit, reverse=True)

    max_deadline = max(job.deadline for job in jobs)
    schedule = [None] * max_deadline
    total_profit = 0

    for job in jobs:
        for day in range(min(max_deadline, job.deadline) - 1, -1, -1):
            if schedule[day] is None:
                schedule[day] = job
                total_profit += job.profit
                break

    print("Scheduled Jobs:", [job.job_id for job in schedule if job])
    print("Total Profit:", total_profit)

jobs = [
    Job('J1', 2, 100),
    Job('J2', 1, 19),
    Job('J3', 2, 27),
    Job('J4', 1, 25),
    Job('J5', 3, 15),
]
job_sequencing(jobs)

# Outputs
# Scheduled Jobs: ['J3', 'J1', 'J5']
# Total Profit: 142