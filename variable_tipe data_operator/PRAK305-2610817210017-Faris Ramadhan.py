sec_per_minute = 60
sec_per_hour = 60 * 60
sec_per_day = 24 * 60 * 60

sec = int(input("Masukkan total detik: "))

if sec < 0 :
    print("Waktu tidak valid")
else :
    day = sec // sec_per_day
    sec_remain = sec % sec_per_day

    hour = sec_remain // sec_per_hour
    sec_remain = sec_remain % sec_per_hour

    minute = sec_remain // sec_per_minute
    final_sec = sec_remain % sec_per_minute

    time = f"{hour:02d}:{minute:02d}:{final_sec:02d}"

    if day > 0 :
        print(f"{day} hari, {time}")
    else :
        print(time)