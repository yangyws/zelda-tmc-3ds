/* Traditional Chinese (zh-TW) lettering for the panel's own labels.
 *
 * Only strings this port draws are translated; game text keeps whatever the
 * loaded ROM ships. Lookups key on the exact English label the panel would
 * have drawn, so a string missing here simply stays English. Glyphs are a
 * subset of Cubic 11 (SIL OFL 1.1, docs/legal/Cubic-11-OFL.txt) at its 12 px
 * design size, cut by tools/generate_ui_zh_font.py from the zh column
 * below — rerun it after adding a string with a character not yet in
 * port_ui_zh_font_generated.inc. Included by port_second_screen.c. */

typedef struct UiZhString {
    const char* en;
    const char* zh;
} UiZhString;

/* UI_ZH_STRINGS_BEGIN — generate_ui_zh_font.py reads the zh column from here. */
static const UiZhString kUiZhStrings[] = {
    /* Tabs, settings pages and navigation */
    { "QUEST", "任務" },
    { "MAP", "地圖" },
    { "ITEMS", "道具" },
    { "BACK", "返回" },
    { "SETTINGS", "設定" },
    { "SCREEN", "畫面" },
    { "GAMEPLAY", "遊戲" },
    { "DEVELOPER", "開發者" },
    { "RANDOMIZER", "隨機模式" },
    { "UPDATE", "更新" },
    { "OVERLAY", "資訊面板" },
    { "ZOOM", "縮放" },

    /* Setting rows */
    { "LANGUAGE", "語言" },
    { "TOP HUD", "上螢幕狀態列" },
    { "WIDESCREEN", "寬螢幕" },
    { "FOLLOW CAM", "地圖跟隨" },
    { "WINDCREST PINS", "風之紋章標記" },
    { "FLOOR AUTO RETURN", "樓層自動返回" },
    { "TURBO SPEED", "加速倍率" },
    { "MASTER VOLUME", "主音量" },
    { "AUTOSAVE", "自動存檔" },
    { "COLOR CORRECTION", "色彩校正" },
    { "SHOW FPS", "顯示 FPS" },
    { "HOLD TO ADVANCE TEXT", "長按快轉文字" },
    { "PANEL BACKDROP", "面板背景" },
    { "SWAP SCREENS", "交換螢幕" },
    { "ASPECT RATIO", "畫面比例" },
    { "DISPLAY STYLE", "顯示風格" },

    /* Setting values */
    { "CHINESE", "中文" },
    { "ON", "開" },
    { "OFF", "關" },
    { "SHOW", "顯示" },
    { "HIDE", "隱藏" },
    { "RESTART", "需重啟" },
    { "N A", "無" },
    { "PATTERN", "花紋" },
    { "CREAM", "米白" },
    { "DARK", "深色" },
    { "DIM", "暗淡" },
    { "STONE", "石材" },
    { "SLATE", "石板" },
    { "NAVY", "深藍" },
    { "WIDE", "寬版" },
    { "ORIGINAL", "原始" },
    { "STRETCH", "延展" },
    { "NATIVE", "原生" },
    { "BLUR", "柔化" },
    { "BILINEAR", "雙線性" },
    { "PIXEL PERFECT", "像素完美" },

    /* Developer page and overlay */
    { "MEM DUMP", "記憶體傾印" },
    { "WRITE", "寫入" },
    { "DONE", "完成" },
    { "LOAD STATE", "載入狀態" },
    { "LOAD", "載入" },
    { "LOADED", "已載入" },
    { "LEGACY", "舊版" },
    { "NO DUMP", "無傾印" },
    { "NO STATE", "無狀態" },
    { "INVALID", "無效" },
    { "VERSION", "版本" },
    { "MODEL", "機型" },
    { "FPS NOW", "目前 FPS" },
    { "FPS AVG", "平均 FPS" },
    { "CORE1", "核心 1" },
    { "AREA", "區域" },
    { "ROOM", "房間" },

    /* Dialogs */
    { "LOAD LATEST DUMP?", "載入最新的傾印？" },
    { "THE LATEST DUMP IN THE", "DUMPS 資料夾中最新的" },
    { "DUMPS FOLDER WILL REPLACE", "傾印將會取代" },
    { "THE CURRENT GAME STATE.", "目前的遊戲狀態。" },
    { "UNSAVED PROGRESS MAY BE LOST.", "未存檔的進度可能會遺失。" },
    { "THE GAME WILL RESTART.", "遊戲將會重新啟動。" },
    { "THIS OPTION IS NOT", "這個選項" },
    { "AVAILABLE YET.", "尚未開放。" },
    { "CANCEL", "取消" },
    { "OK", "確定" },

    /* R-button prompt stand-in words */
    { "DROP", "放下" },
    { "THROW", "丟出" },
    { "READ", "閱讀" },
    { "CHECK", "查看" },
    { "OPEN", "打開" },
    { "SPEAK", "交談" },
    { "GRAB", "抓住" },
    { "LIFT", "舉起" },
    { "GROW", "變大" },
    { "SHRINK", "變小" },
    { "ROLL", "翻滾" },

    /* Dungeon plaques */
    { "Deepwood Shrine", "深林神殿" },
    { "Cave of Flames", "火焰洞窟" },
    { "Fortress of Winds", "風之要塞" },
    { "Temple of Droplets", "水滴神殿" },
    { "Palace of Winds", "風之宮殿" },
    { "Dark Hyrule Castle", "黑暗海拉魯城堡" },

    /* Update page and updater status (the page upper-cases before lookup) */
    { "CHANNEL: STABLE", "頻道：穩定版" },
    { "CHANNEL: PRE-RELEASE", "頻道：預覽版" },
    { "NO RELEASE SELECTED", "尚未選擇版本" },
    { "DOWNLOAD AND INSTALL", "下載並安裝" },
    { "CHECK FOR UPDATE", "檢查更新" },
    { "UNSAVED PROGRESS IS LOST", "未存檔的進度將會遺失" },
    { "CHANGELOG ON TOP SCREEN", "更新紀錄顯示在上螢幕" },
    { "TAP RELEASE FOR CHANGELOG", "點選版本查看更新紀錄" },
    { "PREV", "上一頁" },
    { "NEXT", "下一頁" },
    { "INSTALL UPDATE", "安裝更新" },
    { "PLEASE WAIT", "請稍候" },
    { "DOWNLOAD UPDATE", "下載更新" },
    { "UPDATE INSTALLED", "更新已安裝" },
    { "CANNOT SAVE UPDATE CHANNEL", "無法儲存更新頻道" },
    { "CANNOT START UPDATE", "無法開始更新" },
    { "CANNOT WRITE TO SD CARD", "無法寫入 SD 卡" },
    { "CHECKING FOR UPDATES", "正在檢查更新" },
    { "CONNECTION FAILED - RETRY", "連線失敗，請重試" },
    { "DOWNLOAD CHECK FAILED", "下載驗證失敗" },
    { "DOWNLOADING UPDATE", "正在下載更新" },
    { "INSTALLATION FAILED", "安裝失敗" },
    { "INSTALLING UPDATE", "正在安裝更新" },
    { "INVALID RELEASE DATA", "版本資料無效" },
    { "NO PRE-RELEASE AVAILABLE", "目前沒有預覽版" },
    { "NO WI-FI CONNECTION", "沒有 Wi-Fi 連線" },
    { "NOT ENOUGH SD SPACE", "SD 卡空間不足" },
    { "SD CARD WRITE FAILED", "SD 卡寫入失敗" },
    { "TLS SERVICE FAILED", "TLS 服務失敗" },
    { "UPDATE AVAILABLE", "有可用的更新" },
    { "UPDATE CANCELLED", "已取消更新" },
    { "VERIFYING DOWNLOAD", "正在驗證下載內容" },
    { "YOU ARE UP TO DATE", "已是最新版本" },
};
/* UI_ZH_STRINGS_END */

#include "port_ui_zh_font_generated.inc"

static int UiZhEnabled(void) {
#ifdef TMC_3DS
    return Port_Config_GetUiChinese();
#else
    return 0;
#endif
}

/* The zh label for an English one, or the input unchanged. */
static const char* UiZhText(const char* en) {
    if (en == NULL || !UiZhEnabled())
        return en;
    for (size_t i = 0; i < sizeof(kUiZhStrings) / sizeof(kUiZhStrings[0]); ++i) {
        if (strcmp(kUiZhStrings[i].en, en) == 0)
            return kUiZhStrings[i].zh;
    }
    return en;
}

/* Anything outside ASCII needs the zh face: the banner font and the 5x7
 * stand-in only cover latin. */
static int UiZhIsWide(const char* str) {
    for (; str != NULL && *str; ++str) {
        if ((unsigned char)*str >= 0x80)
            return 1;
    }
    return 0;
}

static uint32_t UiZhNextCodepoint(const char** cursor) {
    const unsigned char* p = (const unsigned char*)*cursor;
    uint32_t cp = p[0];
    int extra = 0;
    if (cp >= 0xF0) {
        cp &= 0x07;
        extra = 3;
    } else if (cp >= 0xE0) {
        cp &= 0x0F;
        extra = 2;
    } else if (cp >= 0xC0) {
        cp &= 0x1F;
        extra = 1;
    } else if (cp >= 0x80) {
        *cursor += 1;
        return '?';
    }
    for (int i = 1; i <= extra; ++i) {
        if ((p[i] & 0xC0) != 0x80) {
            *cursor += i;
            return '?';
        }
        cp = (cp << 6) | (p[i] & 0x3Fu);
    }
    *cursor += 1 + extra;
    return cp;
}

static const UiZhGlyph* UiZhFindGlyph(uint32_t cp) {
    size_t lo = 0, hi = sizeof(kUiZhGlyphs) / sizeof(kUiZhGlyphs[0]);
    while (lo < hi) {
        size_t mid = (lo + hi) / 2;
        if (kUiZhGlyphs[mid].cp < cp)
            lo = mid + 1;
        else
            hi = mid;
    }
    if (lo < sizeof(kUiZhGlyphs) / sizeof(kUiZhGlyphs[0]) && kUiZhGlyphs[lo].cp == cp)
        return &kUiZhGlyphs[lo];
    return cp == '?' ? NULL : UiZhFindGlyph('?');
}

/* Ink width: the advances minus the trailing spacing column. */
static int32_t UiZhTextWidth(const char* str, int32_t scale) {
    int32_t w = 0;
    while (str != NULL && *str) {
        const UiZhGlyph* g = UiZhFindGlyph(UiZhNextCodepoint(&str));
        w += g != NULL ? g->advance : UI_ZH_EM;
    }
    return w > 0 ? (w - 1) * scale : 0;
}

static int32_t UiZhPaint(const SSurf* s, const char* str, int32_t x, int32_t yTop, int32_t scale, uint32_t color) {
    int32_t cx = x;
    while (str != NULL && *str) {
        const UiZhGlyph* g = UiZhFindGlyph(UiZhNextCodepoint(&str));
        if (g == NULL) {
            cx += UI_ZH_EM * scale;
            continue;
        }
        for (int32_t row = 0; row < UI_ZH_GLYPH_ROWS; ++row) {
            uint16_t bits = g->rows[row];
            for (int32_t col = 0; bits != 0; ++col, bits >>= 1) {
                if (bits & 1u) {
                    int32_t px = cx + col * scale, py = yTop + row * scale;
                    FillRect(s, px, py, px + scale, py + scale, color);
                }
            }
        }
        cx += g->advance * scale;
    }
    return cx - x;
}

/* yTop is the 12 px em box top. Light lettering gets a one-step drop
 * shadow so it reads on the chips the way the banner face's outline does;
 * dense 12 px hanzi turn to mush under a full outline. Returns the advance. */
static int32_t UiZhDrawText(const SSurf* s, const char* str, int32_t x, int32_t yTop, int32_t scale, uint32_t color,
                            int shadow, uint32_t shadowColor) {
    if (shadow)
        UiZhPaint(s, str, x + scale, yTop + scale, scale, shadowColor);
    return UiZhPaint(s, str, x, yTop, scale, color);
}
