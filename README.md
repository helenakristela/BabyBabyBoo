# Tugas LeetCode — Penjelasan Algoritma

Repositori ini berisi solusi untuk beberapa permasalahan LeetCode yang berkaitan dengan algoritma yang dipelajari di perkuliahan, beserta video penjelasannya. Setiap problem memiliki dua video: satu penjelasan **teknis** dan satu penjelasan **non-teknis**.

Terdapat 2 problem wajib (Problem 1 & 2, salah satunya bertopik Graph dan satunya Tree) dan 2 problem tambahan sebagai bonus (Problem 3 & 4).

---

**Problem 1:** Diberikan graph berarah dengan `n` node, setiap edge `[u, v, start, end]` hanya dapat dilewati apabila keberangkatan dari `u` terjadi pada rentang waktu `[start, end]`. Setiap traversal edge memakan waktu tepat 1 satuan. Cari waktu tercepat untuk mencapai node `n-1` dari node `0`.

- Video 1 Problem 1 (Teknis): https://drive.google.com/file/d/1CIjj0-dDJwGh25w6h4IfgKhYnS9mcXOA/view?usp=sharing
- Video 2 Problem 1 (Non-teknis): https://drive.google.com/file/d/1MAYFiiUoEYaCvmZ4GmDiiBLIB4fN-LrF/view?usp=sharing

---

**Problem 2:** Diberikan binary tree dengan nilai setiap node 0 atau 1, hapus setiap subtree yang seluruh nilainya 0 (tidak mengandung satupun node bernilai 1).

- Video 1 Problem 2 (Teknis): https://drive.google.com/file/d/1YkKCiTTCdvPAJ9yhasMIp1uaog4kWqol/view?usp=sharing
- Video 2 Problem 2 (Non-teknis): https://drive.google.com/file/d/14tbymCrCj_VdRLdIpPHJ8CvLaqGARiKH/view?usp=sharing

---

**Problem 3 (Bonus):** Diberikan tangga dengan `n` anak tangga. Setiap langkah, kita boleh naik 1 atau 2 anak tangga. Hitung ada berapa banyak cara berbeda untuk mencapai anak tangga paling atas.

- Video 1 Problem 3 (Teknis): https://drive.google.com/file/d/13jJoDmW5OROGyuFHSWeHKJWy9TbJOGqA/view?usp=sharing
- Video 2 Problem 3 (Non-teknis): https://drive.google.com/file/d/1JskJQpPOHQjHw2Iaq-8bdOpg9os6vJuj/view?usp=sharing

---

**Problem 4 (Bonus):** Diberikan bilangan `n`, hitung untuk setiap bilangan dari 0 sampai `n`, ada berapa banyak digit 1 dalam representasi binernya. Return hasilnya sebagai array.

- Video 1 Problem 4 (Teknis): https://drive.google.com/file/d/1DcLJIHnGxHzsLijp09AW16nA_pgjYeCJ/view?usp=sharing
- Video 2 Problem 4 (Non-teknis): https://drive.google.com/file/d/15sIKsaYxrEtFRZtqy_qdrbfy5K43tDeZ/view?usp=sharing

---

## Struktur Repositori

```
.
├── README.md
├── problem1.cpp
├── problem2.cpp
├── problem3.cpp
└── problem4.cpp
```