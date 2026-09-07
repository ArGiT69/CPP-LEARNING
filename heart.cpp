#include <windows.h>
#include <cmath>
#include <string>

#define PI 3.14159265358979323846

// ----------------------------------------------------
// Global variables
// ----------------------------------------------------

HWND hwnd;
float pulse = 0.0f;

// ----------------------------------------------------
// Draw a filled heart using the mathematical equation
// ----------------------------------------------------

void DrawHeart(HDC hdc, int cx, int cy, float scale)
{
    // Create heart path
    POINT points[361];

    for (int i = 0; i <= 360; i++)
    {
        double t = i * PI / 180.0;

        // Classic heart equation
        double x = 16 * pow(sin(t), 3);

        double y =
            13 * cos(t)
            - 5 * cos(2 * t)
            - 2 * cos(3 * t)
            - cos(4 * t);

        points[i].x = cx + (int)(x * scale);
        points[i].y = cy - (int)(y * scale);
    }

    // Pink heart
    HBRUSH pink = CreateSolidBrush(RGB(255, 60, 130));
    HPEN outline = CreatePen(PS_SOLID, 3, RGB(255, 170, 210));

    HBRUSH oldBrush =
        (HBRUSH)SelectObject(hdc, pink);

    HPEN oldPen =
        (HPEN)SelectObject(hdc, outline);

    Polygon(hdc, points, 361);

    SelectObject(hdc, oldBrush);
    SelectObject(hdc, oldPen);

    DeleteObject(pink);
    DeleteObject(outline);
}

// ----------------------------------------------------
// Draw text centered
// ----------------------------------------------------

void DrawCenteredText(
    HDC hdc,
    const std::string& text,
    int x,
    int y,
    int size,
    COLORREF color
)
{
    HFONT font = CreateFontA(
        size,
        0,
        0,
        0,
        FW_BOLD,
        FALSE,
        FALSE,
        FALSE,
        DEFAULT_CHARSET,
        OUT_DEFAULT_PRECIS,
        CLIP_DEFAULT_PRECIS,
        DEFAULT_QUALITY,
        DEFAULT_PITCH | FF_DONTCARE,
        "Arial"
    );

    HFONT oldFont =
        (HFONT)SelectObject(hdc, font);

    SetTextColor(hdc, color);
    SetBkMode(hdc, TRANSPARENT);

    RECT rect;
    GetClientRect(hwnd, &rect);

    DrawTextA(
        hdc,
        text.c_str(),
        -1,
        &rect,
        DT_CENTER | DT_TOP
    );

    SelectObject(hdc, oldFont);
    DeleteObject(font);
}

// ----------------------------------------------------
// Window procedure
// ----------------------------------------------------

LRESULT CALLBACK WindowProc(
    HWND hwnd,
    UINT msg,
    WPARAM wParam,
    LPARAM lParam
)
{
    switch (msg)
    {
        case WM_PAINT:
        {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hwnd, &ps);

            RECT rect;
            GetClientRect(hwnd, &rect);

            int width = rect.right;
            int height = rect.bottom;

            // ----------------------------------------
            // Background
            // ----------------------------------------

            HBRUSH background =
                CreateSolidBrush(RGB(20, 5, 20));

            FillRect(hdc, &rect, background);

            DeleteObject(background);

            // ----------------------------------------
            // Heartbeat
            // ----------------------------------------

            float beat =
                1.0f
                + 0.08f * sin(pulse)
                + 0.03f * sin(pulse * 2);

            // ----------------------------------------
            // Glow
            // ----------------------------------------

            for (int i = 5; i >= 1; i--)
            {
                float glowScale =
                    (1.0f + i * 0.08f) * beat;

                HPEN glowPen =
                    CreatePen(
                        PS_SOLID,
                        12,
                        RGB(
                            120 + i * 20,
                            20,
                            80 + i * 20
                        )
                    );

                HBRUSH glowBrush =
                    CreateSolidBrush(
                        RGB(
                            70 + i * 20,
                            5,
                            40 + i * 15
                        )
                    );

                POINT points[361];

                for (int j = 0; j <= 360; j++)
                {
                    double t =
                        j * PI / 180.0;

                    double x =
                        16 * pow(sin(t), 3);

                    double y =
                        13 * cos(t)
                        - 5 * cos(2 * t)
                        - 2 * cos(3 * t)
                        - cos(4 * t);

                    points[j].x =
                        width / 2
                        + (int)(x * 9 * glowScale);

                    points[j].y =
                        height / 2 - 40
                        - (int)(y * 9 * glowScale);
                }

                HPEN oldPen =
                    (HPEN)SelectObject(hdc, glowPen);

                HBRUSH oldBrush =
                    (HBRUSH)SelectObject(
                        hdc,
                        glowBrush
                    );

                Polygon(hdc, points, 361);

                SelectObject(hdc, oldPen);
                SelectObject(hdc, oldBrush);

                DeleteObject(glowPen);
                DeleteObject(glowBrush);
            }

            // ----------------------------------------
            // Main heart
            // ----------------------------------------

            DrawHeart(
                hdc,
                width / 2,
                height / 2 - 40,
                9.0f * beat
            );

            // ----------------------------------------
            // Little hearts
            // ----------------------------------------

            SetTextColor(
                hdc,
                RGB(255, 120, 180)
            );

            SetBkMode(
                hdc,
                TRANSPARENT
            );

            HFONT smallFont =
                CreateFontA(
                    28,
                    0,
                    0,
                    0,
                    FW_BOLD,
                    FALSE,
                    FALSE,
                    FALSE,
                    DEFAULT_CHARSET,
                    OUT_DEFAULT_PRECIS,
                    CLIP_DEFAULT_PRECIS,
                    DEFAULT_QUALITY,
                    DEFAULT_PITCH,
                    "Arial"
                );

            HFONT oldFont =
                (HFONT)SelectObject(
                    hdc,
                    smallFont
                );

            TextOutA(hdc, 120, 130, "<3", 2);
            TextOutA(hdc, 700, 150, "<3", 2);
            TextOutA(hdc, 160, 430, "<3", 2);
            TextOutA(hdc, 720, 450, "<3", 2);

            SelectObject(hdc, oldFont);
            DeleteObject(smallFont);

            // ----------------------------------------
            // Main message
            // ----------------------------------------

            HFONT bigFont =
                CreateFontA(
                    42,
                    0,
                    0,
                    0,
                    FW_BOLD,
                    FALSE,
                    FALSE,
                    FALSE,
                    DEFAULT_CHARSET,
                    OUT_DEFAULT_PRECIS,
                    CLIP_DEFAULT_PRECIS,
                    DEFAULT_QUALITY,
                    DEFAULT_PITCH,
                    "Arial"
                );

            oldFont =
                (HFONT)SelectObject(
                    hdc,
                    bigFont
                );

            SetTextColor(
                hdc,
                RGB(255, 190, 220)
            );

            RECT textRect;

            textRect.left = 0;
            textRect.right = width;
            textRect.top = height - 130;
            textRect.bottom = height - 60;

            DrawTextA(
                hdc,
                "I LOVE YOU PARISHA",
                -1,
                &textRect,
                DT_CENTER | DT_SINGLELINE
            );

            // ----------------------------------------
            // Subtitle
            // ----------------------------------------

            HFONT subFont =
                CreateFontA(
                    20,
                    0,
                    0,
                    0,
                    FW_NORMAL,
                    FALSE,
                    FALSE,
                    FALSE,
                    DEFAULT_CHARSET,
                    OUT_DEFAULT_PRECIS,
                    CLIP_DEFAULT_PRECIS,
                    DEFAULT_QUALITY,
                    DEFAULT_PITCH,
                    "Arial"
                );

            SelectObject(hdc, subFont);

            SetTextColor(
                hdc,
                RGB(255, 150, 200)
            );

            textRect.top = height - 75;
            textRect.bottom = height - 30;

            DrawTextA(
                hdc,
                "You are my favorite person in this world <3",
                -1,
                &textRect,
                DT_CENTER | DT_SINGLELINE
            );

            SelectObject(hdc, oldFont);

            DeleteObject(bigFont);
            DeleteObject(subFont);

            EndPaint(hwnd, &ps);

            return 0;
        }

        case WM_TIMER:
        {
            pulse += 0.18f;

            InvalidateRect(hwnd, NULL, FALSE);

            return 0;
        }

        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;
    }

    return DefWindowProc(
        hwnd,
        msg,
        wParam,
        lParam
    );
}

// ----------------------------------------------------
// Main
// ----------------------------------------------------

int WINAPI WinMain(
    HINSTANCE hInstance,
    HINSTANCE,
    LPSTR,
    int nCmdShow
)
{
    const char CLASS_NAME[] =
        "ParishaHeartWindow";

    WNDCLASSA wc = {};

    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = CLASS_NAME;
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hbrBackground =
        (HBRUSH)(COLOR_WINDOW + 1);

    RegisterClassA(&wc);

    hwnd = CreateWindowExA(
        0,
        CLASS_NAME,
        "For Parisha ❤️",
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT,
        CW_USEDEFAULT,
        900,
        700,
        NULL,
        NULL,
        hInstance,
        NULL
    );

    if (!hwnd)
        return 0;

    ShowWindow(hwnd, nCmdShow);

    // 60 FPS-ish animation
    SetTimer(hwnd, 1, 16, NULL);

    MSG msg = {};

    while (GetMessage(
        &msg,
        NULL,
        0,
        0
    ))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}
