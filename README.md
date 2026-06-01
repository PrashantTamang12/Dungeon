# 🏰 Dungeon Project (Unreal Engine 5)

![Unreal Engine](https://img.shields.io/badge/Engine-Unreal%20Engine%205-blue)
![Status](https://img.shields.io/badge/Status-Completed-success)
![Platform](https://img.shields.io/badge/Platform-Windows-lightgrey)

---

## 📌 Overview

This is a **portfolio project built using Unreal Engine 5**, focused on creating a **medieval dungeon environment** with interactive gameplay elements.

The project demonstrates:

* Environment design
* Asset integration
* Blueprint-based gameplay systems

> ⚠️ This project depends on external Marketplace assets. Proper setup is required for correct functionality.

---

## ⚠️ Critical Requirement: Marketplace Assets

If you encounter errors such as:

* `Failed to load Outer`
* `Skipped package`
* Character falling through the floor

➡️ These issues occur because the required asset pack is **missing**.

---

## 📦 Required Asset

* **Asset Name:** Medieval Dungeon
* **Source:** Fab / Epic Games Marketplace

---

## 🛠️ Installation Steps

1. Download the **Medieval Dungeon** asset pack from the Marketplace
2. Install it via:

   * Epic Games Launcher **or**
   * Fab application
3. Place the asset in the following directory:

```
ProjectRoot/Content/MedievalDungeon/
```

4. Verify the folder contains:

   * `Blueprints/`
   * `Meshes/`
   * `Materials/`

5. Restart the Unreal Engine Editor

---

## ❗ Common Errors & Fixes

| Error / Symptom               | Cause                             | Solution                      |
| ----------------------------- | --------------------------------- | ----------------------------- |
| Failed to load Outer          | Missing dependencies              | Install asset pack            |
| Skipped package (BP_Candle)   | Missing blueprint references      | Install asset pack            |
| Skipped package (SM_Floor)    | Missing mesh                      | Install asset pack            |
| Character falls through floor | No collision (missing floor mesh) | Install asset pack            |
| Blueprint compile errors      | Broken asset references           | Install pack & restart editor |

---

## 📂 Project Structure

```
MyProject/
│── Content/
│   ├── MedievalDungeon/    <-- REQUIRED ASSET (Install here)
│   │   ├── Blueprints/
│   │   ├── Materials/
│   │   ├── Meshes/
│   │   └── ...
│   │
│   ├── MyStuff/            <-- Custom project content
│   │   ├── Blueprints/
│   │   ├── Maps/
│   │   └── ...
│
├── Config/
├── Source/
└── ...
```

---

## 🧹 Troubleshooting (Cache Reset)

If the project still fails after installing assets, clear Unreal cache files:

### PowerShell

```powershell
Remove-Item -Recurse -Force DerivedDataCache
Remove-Item -Recurse -Force Intermediate
Remove-Item -Recurse -Force Saved
```

Then restart Unreal Engine.

---

## 🎯 Key Highlights

* Built with **Unreal Engine 5**
* Uses **Marketplace asset integration**
* Demonstrates **real-world project dependency handling**
* Structured for **portfolio presentation**

---

## 📸 Screenshots

To be added!

---

## 🎮 Gameplay Demo

To be added!

---

## 📌 Notes

* Intended for **learning and portfolio use**
* Requires **Unreal Engine 5 installed**
* Marketplace dependency is **mandatory**

---

## 👤 Author

**Prashant Tamang**
Unreal Engine 5 Developer | Game Development Enthusiast
