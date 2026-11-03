[English](README.md) | **台灣繁體中文**

<h1 align="center">The Minish Cap 3DS</h1>

<p align="center">
  <strong>小小英雄，雙螢幕冒險。</strong><br>
  《薩爾達傳說 不可思議的帽子》，為 Nintendo 3DS 改編。
</p>

<p align="center">
  <a href="#download-and-installation">下載</a> ·
  <a href="#features">功能特色</a> ·
  <a href="#documentation">說明文件</a> ·
  <a href="docs/CONTRIBUTING.md">參與貢獻</a> ·
  <a href="#community-and-bug-reports">社群</a>
</p>

<p align="center">
  <a href="https://github.com/EstebanPdN/zelda-tmc-3ds/releases/tag/v2.2"><img src="docs/badges/version.svg" alt="穩定版：v2.2" height="22"></a>
  <a href="#download-and-installation"><img src="docs/badges/platform.svg" alt="Nintendo 3DS" height="22"></a>
  <a href="#updates"><img src="docs/badges/updater.svg" alt="更新：內建" height="22"></a>
  <a href="docs/legal/THIRD-PARTY-LICENSES.md"><img src="docs/badges/license.svg" alt="各元件授權不同" height="22"></a>
</p>

<p align="center">
  <img width="1200" alt="The Minish Cap 3DS" src="docs/images/showcase-rounded.webp" />
</p>

<p align="center">
  <a href="https://estebanpdn.github.io/"><img src="docs/images/website.svg" alt="造訪 Esteban’s Forge" width="142" height="46"></a>
  <a href="https://discord.gg/BjbzfRYpV"><img src="docs/images/discord-official.svg" alt="加入我們的 Discord 社群" width="166" height="46"></a>
</p>

《薩爾達傳說 不可思議的帽子》（*The Legend of Zelda: The Minish Cap*）的 Nintendo 3DS 雙螢幕移植版，基於開源的 Minish Cap 反編譯專案、Project Picori，以及雙螢幕 Android 移植版。

本專案在 [OpenAI Codex](https://openai.com/codex/) 與 [Claude Code](https://claude.com/product/claude-code) 的協助下開發。開發過程的詳細說明請見[這裡](AI_DEVELOPMENT.md)。

本專案基於以下開源成果：

* [samyost1/tmc-android](https://github.com/samyost1/tmc-android) — 雙螢幕 Android 原始碼基礎
* [Project Picori](https://github.com/999sian/tmc) — 原生 Minish Cap 引擎與移植基礎架構
* [zeldaret/tmc](https://github.com/zeldaret/tmc) — 原始反編譯專案

本專案不散布任何 ROM 或擷取出的任天堂遊戲素材。你必須自行提供合法取得且相容的 Game Boy Advance ROM。

<a id="features"></a>

## 功能特色

<table>
  <tr>
    <td width="50%" valign="top"><strong>探索更小的世界</strong><br>原生的《不可思議的帽子》遊戲體驗，支援美版與歐版 ROM，並包含地區版本修正移植。</td>
    <td width="50%" valign="top"><strong>為雙螢幕打造</strong><br>上螢幕以寬螢幕遊玩，下螢幕提供地圖、任務狀態、觸控道具與設定。</td>
  </tr>
  <tr>
    <td width="50%" valign="top"><strong>自選畫面呈現</strong><br>Wide、Original 與 Stretch 模式；Blur、Bilinear 與 Pixel Perfect 風格。</td>
    <td width="50%" valign="top"><strong>保持最新</strong><br>Stable／Pre-release 更新、持續保存的設定、原生音訊與診斷檢查點。</td>
  </tr>
</table>

### 功能細節

* 原生 Nintendo 3DS 移植，完整支援雙螢幕。
* 同時支援美版與歐版 ROM，並自動偵測地區。
* 內含原生的[歐版遊戲修正移植](docs/eu-backport.md)，不需要修補過的 ROM。
* 在 400x240 的上螢幕呈現真正的寬螢幕遊戲畫面，另有 Original 與 Stretch 顯示模式。
* 下螢幕介面提供即時地圖、迷宮資訊、任務狀態、觸控道具操作與設定。
  開場的 Picori 傳說段落中，下螢幕會保持全黑；在林克取得地圖之前，
  世界地圖只會顯示石框。
* New 3DS 強化功能，包括 804 MHz 模式、L2 快取、多核心算繪，以及可選用、以 C 搖桿啟動的 2x–5x 加速。
* 三種顯示風格：Blur、Bilinear 與 Pixel Perfect。
* 畫面比例與濾鏡的選擇彼此獨立；Wide + Pixel Perfect 使用一般的寬螢幕鏡頭。
* 應用程式內更新，提供 Stable 與 Pre-release 頻道、上螢幕更新紀錄，以及經過驗證的 CIA／3DSX 安裝。
* 原生立體聲音訊、持續保存的設定、可靠的存檔處理、FPS 工具，以及供錯誤回報使用的診斷傾印。

## 效能

移植版會依偵測到的主機自動選擇效能設定檔。

**New Nintendo 3DS** 維持完整畫面呈現路徑，搭配 804 MHz 模式、L2 快取、多核心算繪與 C 搖桿加速。

**Old Nintendo 3DS** 使用最佳化的算繪器、負擔較低的音訊路徑，以及自適應的略過畫面呈現設定檔。當算繪無法維持 60 FPS 的畫面時，引擎可以繼續以接近 60 Hz 的目標推進，而不會讓整個遊戲變慢。在略過畫面呈現的週期中，輸入、觸控、音訊與生命週期處理仍會持續運作。

下螢幕的工作執行緒會避免重複重繪靜態內容，同時在每個引擎週期都取樣觸控輸入。

<a id="installation"></a>
<a id="download-and-installation"></a>

## 下載與安裝

<p>
  <a href="https://github.com/EstebanPdN/zelda-tmc-3ds/releases/download/v2.2/tmc-3ds-v2.2.cia"><img src="docs/images/download-cia.svg" alt="下載 The Minish Cap 3DS CIA" width="210" height="46"></a>
  <a href="https://github.com/EstebanPdN/zelda-tmc-3ds/releases/download/v2.2/tmc-3ds-v2.2.3dsx"><img src="docs/images/download-3dsx.svg" alt="下載 Homebrew Launcher 3DSX" width="210" height="46"></a>
</p>

**穩定版：[v2.2](https://github.com/EstebanPdN/zelda-tmc-3ds/releases/tag/v2.2)。**

v2.2 包含 v2.2-E1 的一般存檔相容性修正，並移除了實驗性的
「依濾鏡而定的鏡頭」模式。直接覆蓋安裝在現有的應用程式上，
並保留你的 `.sav` 與附屬檔案即可。已知的非作用中舊版中繼資料
會被接受且不會刪除；作用中或無法辨識的設定檔仍會受到保護。

1. 用 FBI 安裝 CIA，或透過 Homebrew Launcher 使用 3DSX 版本。

```text
tmc-3ds-v2.2.cia
```

2. 在 SD 卡上建立這個資料夾：

```text
sdmc:/3ds/The Minish Cap 3DS/
```

3. 把你合法取得的美版或歐版 `.gba` ROM 放進這個資料夾。

ROM 可以使用**任何檔名**，只要副檔名是 `.gba` 即可。

### 建議使用的 ROM

**美版**與**歐版**都有支援，但我**強烈建議使用歐版 ROM**。

歐版是我在開發與測試這個移植版時全程使用的 ROM，因此它受到的測試遠比其他版本多。

美版應該也相容，但遊戲中某些部分的行為略有不同，因此你可能會遇到使用歐版時不會出現的錯誤。

歐版 ROM 也內含多種語言，**包括英文**，所以使用它通常沒有任何缺點。

乾淨 ROM 應有的 SHA-1 值：

```text
USA:    b4bd50e4131b027c334547b4524e2dbbd4227130
Europe: cff199b36ff173fb6faf152653d1bccf87c26fb7
```

ROM 會留在你的 SD 卡上，絕不會包含在 CIA 內。

### 音訊

音訊需要正常運作的 Nintendo 3DS DSP 韌體設定。

如果自製軟體的音訊無法運作，請開啟 Luma3DS 的 Rosalina 選單並使用：

```text
Miscellaneous options > Dump DSP firmware
```

## 診斷

如果遇到當機、畫面錯誤、效能問題或任何異常狀況，請按：

```text
L + R + A
```

移植版會暫停並建立診斷傾印，內含截圖、記憶體資訊、執行時期狀態、效能資料，以及其他有助於找出問題的資訊。

傾印會儲存在：

```text
sdmc:/3ds/The Minish Cap 3DS/dumps/
```

遊戲中的傾印也會包含一個經過驗證的 `load-state.bin` 檢查點。若要重現最近一次的傾印，請開啟：

```text
Settings > Developer > Load State
```

新的工作階段會依序使用 `000-dump-YYYYMMDD-HHMMSS`、`001-dump-YYYYMMDD-HHMMSS`，依此類推。
這個編號在重新啟動與時鐘變更後仍會延續；清空 dumps 資料夾後會從 000 重新開始。

載入器會先要求確認，選擇編號最新的資料夾（或舊版的 `dump-*` 資料夾），並拒絕已損毀的檢查點，
或以不同 ROM 地區建立的檢查點。只包含 `save-state.bin` 的舊版傾印仍然支援，但會從
存下的檢查點繼續，而不是從擷取當下的確切位置繼續。

回報錯誤時，請盡可能附上傾印。

<a id="updates"></a>

## 更新

開啟 **Settings > Update**。選擇 **Stable** 或 **Pre-release**，然後點選
發行版本號碼，即可在上螢幕閱讀它的更新紀錄。使用 **Prev / Next**
翻頁。**Download Update** 會在下載與安裝前要求確認。請先儲存遊戲：
更新成功後應用程式會關閉。

CIA 版本會先檢查 ID 與 SHA-256 摘要，只覆寫這個應用程式本身的 title。
3DSX 版本會取代目前啟動的檔案，並具備回復保護。
需要 Wi-Fi；連線失敗時，目前安裝的版本仍可繼續使用。

## 發行版本

每個 GitHub 發行版本都包含：

* 可安裝的 CIA
* Homebrew Launcher 3DSX
* FBI QR code
* 原始碼壓縮檔

最新發行版本：

https://github.com/EstebanPdN/zelda-tmc-3ds/releases/latest

<a id="documentation"></a>

## 說明文件

- [儲存庫地圖與維護慣例](docs/REPOSITORY.md)


- [架構與儲存庫地圖](docs/ARCHITECTURE.md)
- [建置、格式化與驗證](docs/DEVELOPMENT.md)
- [回歸測試的負責範圍](tools/tests/README.md)

| 指南 | 用途 |
| --- | --- |
| [3DS 指南](platform/3ds/README.md) | 平台操作、設定與診斷。 |
| [說明文件索引](docs/README.md) | 引擎、地區版本與開發相關文件。 |
| [歐版遊戲修正移植](docs/eu-backport.md) | 原生的地區版本變更與相容性。 |
| [參與貢獻](docs/CONTRIBUTING.md) | 開發指引。 |
| [更新](#updates) | 頻道、驗證與安裝復原。 |

## 建置

需求：

* devkitPro
* devkitARM
* libctru
* Citro2D
* Citro3D
* CMake
* 用於打包 CIA 的 `makerom` 與 `bannertool`

建置指令：

```sh
chmod +x platform/3ds/build.sh
./platform/3ds/build.sh
```

建置結果會產生在：

```text
build-3ds/game/tmc-3ds-v2.2.cia
build-3ds/game/tmc-3ds-v2.2.3dsx
```

建置結果不會包含或內嵌任何 ROM。

## 致謝

* [samyost1/tmc-android](https://github.com/samyost1/tmc-android) — 本移植版所使用的雙螢幕 Android 原始碼基礎
* [Project Picori](https://github.com/999sian/tmc) — 原生 Minish Cap 引擎與移植基礎架構
* [Raekwon1603/tmc-android](https://github.com/Raekwon1603/tmc-android) — 雙螢幕分支背後的 Android 打包與平台工作
* [zeldaret/tmc](https://github.com/zeldaret/tmc) — 原始反編譯專案
* Esteban PDN — Nintendo 3DS 移植與發行維護

## 授權與法律聲明

原創的移植貢獻以 **GNU GPL v3.0 或更新版本**散布。
完整條款請見 [LICENSE](LICENSE)，適用範圍與署名請見 [COPYRIGHT.md](docs/legal/COPYRIGHT.md)。

每個發行版本的 **Source code** 下載檔都包含對應的應用程式
與函式庫原始碼及建置腳本。3DS 版本使用 ipatix 與貢獻者開發的 **agbplay**，
授權為 **LGPL v3.0**；其中已附上它的[聲明](src/third_party/agbplay_core/LICENSE)
與[授權條文](src/third_party/agbplay_core/COPYING.LESSER)。你可以修改
該函式庫，並以文件中的建置指令重新建置 CIA 或 3DSX。

第三方元件保留各自的授權，詳列於 [THIRD-PARTY-LICENSES.md](docs/legal/THIRD-PARTY-LICENSES.md)。

任天堂擁有《薩爾達傳說》、《不可思議的帽子》及所有相關遊戲內容。

這是非官方的粉絲自製專案，與任天堂沒有任何關聯，也未獲任天堂認可。

本專案不散布任何 ROM、擷取出的任天堂遊戲素材、存檔資料或韌體。

<a id="community-and-bug-reports"></a>

## 社群與錯誤回報

[加入專案的 Discord](https://discord.gg/BjbzfRYpV)，取得更新消息、參與測試、
提供建議與獲得協助。可重現的問題請使用 [GitHub issues](https://github.com/EstebanPdN/zelda-tmc-3ds/issues)
回報，並附上你的版本、主機型號與重現問題的
步驟。分享診斷擷取資料前，請先檢查其內容。

---

<p align="center">
  <a href="https://estebanpdn.github.io/">Esteban’s Forge</a> ·
  <a href="https://discord.gg/BjbzfRYpV">Discord</a> ·
  <a href="#documentation">說明文件</a> ·
  <a href="docs/legal/THIRD-PARTY-LICENSES.md">授權與聲明</a><br>
  <sub>獨立的粉絲專案。遊戲名稱與內容屬於各自的權利人。</sub>
</p>
