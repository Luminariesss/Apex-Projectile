# Project Kelompok Alpro 2026

Repository ini digunakan untuk pengerjaan project kelompok praktikum Algoritma dan Pemrograman.

## Cara Bergabung

### 1. Fork Repository

Klik tombol **Fork** pada repository ini untuk membuat salinan repository ke akun GitHub masing-masing.

### 2. Clone Repository Hasil Fork

```bash
git clone git@github.com:<username_kalian>/<nama_repo>.git
cd nama_project
```

Pastikan Git sudah terinstall:

```bash
git --version
```

---

## Membuat Branch

Setiap anggota wajib bekerja pada branch masing-masing, dengan cara membuat branch per issue, issue disini dapat berupa fitur yang ingin dibuat.

Format:

```text
nama-fitur
```

Contoh:

```bash
git checkout -b debris-system
git checkout -b collison-detection
```

---

## Sebelum Mulai Coding

Tambahkan repository utama sebagai upstream:

```bash
git remote add upstream https://github.com/0xleonf/<nama_repo>.git
```

Ambil perubahan terbaru:

```bash
git fetch upstream
git checkout main
git merge upstream/main
```

---

## Menyimpan Perubahan

```bash
git add .
git commit -m "Menyelesaikan bagian X"
```

Contoh:

```bash
git commit -m "Menambahkan menu inventory"
git commit -m "Memperbaiki validasi input"
git commit -m "Menyelesaikan tugas 2"
```

---

## Push ke Repository Fork

```bash
git push origin dev-nama
```

Contoh:

```bash
git push origin dev-chandra
```

---

## Membuat Pull Request

Setelah pekerjaan selesai:

1. Buka repository fork milik kalian di GitHub.
2. Klik **Compare & Pull Request**.
3. Pastikan target repository adalah repository utama kelompok.
4. Berikan judul dan deskripsi yang jelas.
5. Submit Pull Request.

Pull Request akan direview sebelum digabungkan ke branch utama.

---

## Aturan Kelompok

✅ Selalu sinkronkan repository sebelum mulai bekerja.

✅ Gunakan branch masing-masing.

✅ Commit dengan pesan yang jelas.

✅ Buat Pull Request setelah pekerjaan selesai.

❌ Jangan commit langsung ke branch `main`.

❌ Jangan menggunakan:

```bash
git push --force
```

❌ Jangan mengubah bagian anggota lain tanpa koordinasi.

❌ Jangan menghapus file project tanpa izin.

---

## Alur Kerja Singkat

```bash
git clone <repository-fork>

git checkout -b dev-nama

# coding

git add .

git commit -m "Perubahan"

git push origin dev-nama
```

Kemudian buat Pull Request ke repository utama.

---

## Jika Terjadi Error

Screenshot pesan error dan kirim ke grup agar dapat dibantu bersama.
