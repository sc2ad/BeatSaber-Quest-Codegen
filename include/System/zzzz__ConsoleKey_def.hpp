#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System {
struct ConsoleKey;
}
// Type: System::ConsoleKey
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2518))
// CS Name: System.ConsoleKey
struct CORDL_TYPE ConsoleKey : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ConsoleKey(int32_t value__) noexcept;


                    constexpr ConsoleKey(ConsoleKey const&) = default;
                    constexpr ConsoleKey(ConsoleKey&&) = default;
                    constexpr ConsoleKey& operator=(ConsoleKey const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ConsoleKey& operator=(ConsoleKey&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ConsoleKey(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ConsoleKey_Unwrapped : int32_t {
__Backspace = 8,
__Tab = 9,
__Clear = 12,
__Enter = 13,
__Pause = 19,
__Escape = 27,
__Spacebar = 32,
__PageUp = 33,
__PageDown = 34,
__End = 35,
__Home = 36,
__LeftArrow = 37,
__UpArrow = 38,
__RightArrow = 39,
__DownArrow = 40,
__Select = 41,
__Print = 42,
__Execute = 43,
__PrintScreen = 44,
__Insert = 45,
__Delete = 46,
__Help = 47,
__D0 = 48,
__D1 = 49,
__D2 = 50,
__D3 = 51,
__D4 = 52,
__D5 = 53,
__D6 = 54,
__D7 = 55,
__D8 = 56,
__D9 = 57,
__A = 65,
__B = 66,
__C = 67,
__D = 68,
__E = 69,
__F = 70,
__G = 71,
__H = 72,
__I = 73,
__J = 74,
__K = 75,
__L = 76,
__M = 77,
__N = 78,
__O = 79,
__P = 80,
__Q = 81,
__R = 82,
__S = 83,
__T = 84,
__U = 85,
__V = 86,
__W = 87,
__X = 88,
__Y = 89,
__Z = 90,
__LeftWindows = 91,
__RightWindows = 92,
__Applications = 93,
__Sleep = 95,
__NumPad0 = 96,
__NumPad1 = 97,
__NumPad2 = 98,
__NumPad3 = 99,
__NumPad4 = 100,
__NumPad5 = 101,
__NumPad6 = 102,
__NumPad7 = 103,
__NumPad8 = 104,
__NumPad9 = 105,
__Multiply = 106,
__Add = 107,
__Separator = 108,
__Subtract = 109,
__Decimal = 110,
__Divide = 111,
__F1 = 112,
__F2 = 113,
__F3 = 114,
__F4 = 115,
__F5 = 116,
__F6 = 117,
__F7 = 118,
__F8 = 119,
__F9 = 120,
__F10 = 121,
__F11 = 122,
__F12 = 123,
__F13 = 124,
__F14 = 125,
__F15 = 126,
__F16 = 127,
__F17 = 128,
__F18 = 129,
__F19 = 130,
__F20 = 131,
__F21 = 132,
__F22 = 133,
__F23 = 134,
__F24 = 135,
__BrowserBack = 166,
__BrowserForward = 167,
__BrowserRefresh = 168,
__BrowserStop = 169,
__BrowserSearch = 170,
__BrowserFavorites = 171,
__BrowserHome = 172,
__VolumeMute = 173,
__VolumeDown = 174,
__VolumeUp = 175,
__MediaNext = 176,
__MediaPrevious = 177,
__MediaStop = 178,
__MediaPlay = 179,
__LaunchMail = 180,
__LaunchMediaSelect = 181,
__LaunchApp1 = 182,
__LaunchApp2 = 183,
__Oem1 = 186,
__OemPlus = 187,
__OemComma = 188,
__OemMinus = 189,
__OemPeriod = 190,
__Oem2 = 191,
__Oem3 = 192,
__Oem4 = 219,
__Oem5 = 220,
__Oem6 = 221,
__Oem7 = 222,
__Oem8 = 223,
__Oem102 = 226,
__Process = 229,
__Packet = 231,
__Attention = 246,
__CrSel = 247,
__ExSel = 248,
__EraseEndOfFile = 249,
__Play = 250,
__Zoom = 251,
__NoName = 252,
__Pa1 = 253,
__OemClear = 254,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConsoleKey_Unwrapped () const noexcept {
return std::bit_cast<__ConsoleKey_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Backspace offset 0
static System::ConsoleKey const Backspace;

/// @brief Field Tab offset 0
static System::ConsoleKey const Tab;

/// @brief Field Clear offset 0
static System::ConsoleKey const Clear;

/// @brief Field Enter offset 0
static System::ConsoleKey const Enter;

/// @brief Field Pause offset 0
static System::ConsoleKey const Pause;

/// @brief Field Escape offset 0
static System::ConsoleKey const Escape;

/// @brief Field Spacebar offset 0
static System::ConsoleKey const Spacebar;

/// @brief Field PageUp offset 0
static System::ConsoleKey const PageUp;

/// @brief Field PageDown offset 0
static System::ConsoleKey const PageDown;

/// @brief Field End offset 0
static System::ConsoleKey const End;

/// @brief Field Home offset 0
static System::ConsoleKey const Home;

/// @brief Field LeftArrow offset 0
static System::ConsoleKey const LeftArrow;

/// @brief Field UpArrow offset 0
static System::ConsoleKey const UpArrow;

/// @brief Field RightArrow offset 0
static System::ConsoleKey const RightArrow;

/// @brief Field DownArrow offset 0
static System::ConsoleKey const DownArrow;

/// @brief Field Select offset 0
static System::ConsoleKey const Select;

/// @brief Field Print offset 0
static System::ConsoleKey const Print;

/// @brief Field Execute offset 0
static System::ConsoleKey const Execute;

/// @brief Field PrintScreen offset 0
static System::ConsoleKey const PrintScreen;

/// @brief Field Insert offset 0
static System::ConsoleKey const Insert;

/// @brief Field Delete offset 0
static System::ConsoleKey const Delete;

/// @brief Field Help offset 0
static System::ConsoleKey const Help;

/// @brief Field D0 offset 0
static System::ConsoleKey const D0;

/// @brief Field D1 offset 0
static System::ConsoleKey const D1;

/// @brief Field D2 offset 0
static System::ConsoleKey const D2;

/// @brief Field D3 offset 0
static System::ConsoleKey const D3;

/// @brief Field D4 offset 0
static System::ConsoleKey const D4;

/// @brief Field D5 offset 0
static System::ConsoleKey const D5;

/// @brief Field D6 offset 0
static System::ConsoleKey const D6;

/// @brief Field D7 offset 0
static System::ConsoleKey const D7;

/// @brief Field D8 offset 0
static System::ConsoleKey const D8;

/// @brief Field D9 offset 0
static System::ConsoleKey const D9;

/// @brief Field A offset 0
static System::ConsoleKey const A;

/// @brief Field B offset 0
static System::ConsoleKey const B;

/// @brief Field C offset 0
static System::ConsoleKey const C;

/// @brief Field D offset 0
static System::ConsoleKey const D;

/// @brief Field E offset 0
static System::ConsoleKey const E;

/// @brief Field F offset 0
static System::ConsoleKey const F;

/// @brief Field G offset 0
static System::ConsoleKey const G;

/// @brief Field H offset 0
static System::ConsoleKey const H;

/// @brief Field I offset 0
static System::ConsoleKey const I;

/// @brief Field J offset 0
static System::ConsoleKey const J;

/// @brief Field K offset 0
static System::ConsoleKey const K;

/// @brief Field L offset 0
static System::ConsoleKey const L;

/// @brief Field M offset 0
static System::ConsoleKey const M;

/// @brief Field N offset 0
static System::ConsoleKey const N;

/// @brief Field O offset 0
static System::ConsoleKey const O;

/// @brief Field P offset 0
static System::ConsoleKey const P;

/// @brief Field Q offset 0
static System::ConsoleKey const Q;

/// @brief Field R offset 0
static System::ConsoleKey const R;

/// @brief Field S offset 0
static System::ConsoleKey const S;

/// @brief Field T offset 0
static System::ConsoleKey const T;

/// @brief Field U offset 0
static System::ConsoleKey const U;

/// @brief Field V offset 0
static System::ConsoleKey const V;

/// @brief Field W offset 0
static System::ConsoleKey const W;

/// @brief Field X offset 0
static System::ConsoleKey const X;

/// @brief Field Y offset 0
static System::ConsoleKey const Y;

/// @brief Field Z offset 0
static System::ConsoleKey const Z;

/// @brief Field LeftWindows offset 0
static System::ConsoleKey const LeftWindows;

/// @brief Field RightWindows offset 0
static System::ConsoleKey const RightWindows;

/// @brief Field Applications offset 0
static System::ConsoleKey const Applications;

/// @brief Field Sleep offset 0
static System::ConsoleKey const Sleep;

/// @brief Field NumPad0 offset 0
static System::ConsoleKey const NumPad0;

/// @brief Field NumPad1 offset 0
static System::ConsoleKey const NumPad1;

/// @brief Field NumPad2 offset 0
static System::ConsoleKey const NumPad2;

/// @brief Field NumPad3 offset 0
static System::ConsoleKey const NumPad3;

/// @brief Field NumPad4 offset 0
static System::ConsoleKey const NumPad4;

/// @brief Field NumPad5 offset 0
static System::ConsoleKey const NumPad5;

/// @brief Field NumPad6 offset 0
static System::ConsoleKey const NumPad6;

/// @brief Field NumPad7 offset 0
static System::ConsoleKey const NumPad7;

/// @brief Field NumPad8 offset 0
static System::ConsoleKey const NumPad8;

/// @brief Field NumPad9 offset 0
static System::ConsoleKey const NumPad9;

/// @brief Field Multiply offset 0
static System::ConsoleKey const Multiply;

/// @brief Field Add offset 0
static System::ConsoleKey const Add;

/// @brief Field Separator offset 0
static System::ConsoleKey const Separator;

/// @brief Field Subtract offset 0
static System::ConsoleKey const Subtract;

/// @brief Field Decimal offset 0
static System::ConsoleKey const Decimal;

/// @brief Field Divide offset 0
static System::ConsoleKey const Divide;

/// @brief Field F1 offset 0
static System::ConsoleKey const F1;

/// @brief Field F2 offset 0
static System::ConsoleKey const F2;

/// @brief Field F3 offset 0
static System::ConsoleKey const F3;

/// @brief Field F4 offset 0
static System::ConsoleKey const F4;

/// @brief Field F5 offset 0
static System::ConsoleKey const F5;

/// @brief Field F6 offset 0
static System::ConsoleKey const F6;

/// @brief Field F7 offset 0
static System::ConsoleKey const F7;

/// @brief Field F8 offset 0
static System::ConsoleKey const F8;

/// @brief Field F9 offset 0
static System::ConsoleKey const F9;

/// @brief Field F10 offset 0
static System::ConsoleKey const F10;

/// @brief Field F11 offset 0
static System::ConsoleKey const F11;

/// @brief Field F12 offset 0
static System::ConsoleKey const F12;

/// @brief Field F13 offset 0
static System::ConsoleKey const F13;

/// @brief Field F14 offset 0
static System::ConsoleKey const F14;

/// @brief Field F15 offset 0
static System::ConsoleKey const F15;

/// @brief Field F16 offset 0
static System::ConsoleKey const F16;

/// @brief Field F17 offset 0
static System::ConsoleKey const F17;

/// @brief Field F18 offset 0
static System::ConsoleKey const F18;

/// @brief Field F19 offset 0
static System::ConsoleKey const F19;

/// @brief Field F20 offset 0
static System::ConsoleKey const F20;

/// @brief Field F21 offset 0
static System::ConsoleKey const F21;

/// @brief Field F22 offset 0
static System::ConsoleKey const F22;

/// @brief Field F23 offset 0
static System::ConsoleKey const F23;

/// @brief Field F24 offset 0
static System::ConsoleKey const F24;

/// @brief Field BrowserBack offset 0
static System::ConsoleKey const BrowserBack;

/// @brief Field BrowserForward offset 0
static System::ConsoleKey const BrowserForward;

/// @brief Field BrowserRefresh offset 0
static System::ConsoleKey const BrowserRefresh;

/// @brief Field BrowserStop offset 0
static System::ConsoleKey const BrowserStop;

/// @brief Field BrowserSearch offset 0
static System::ConsoleKey const BrowserSearch;

/// @brief Field BrowserFavorites offset 0
static System::ConsoleKey const BrowserFavorites;

/// @brief Field BrowserHome offset 0
static System::ConsoleKey const BrowserHome;

/// @brief Field VolumeMute offset 0
static System::ConsoleKey const VolumeMute;

/// @brief Field VolumeDown offset 0
static System::ConsoleKey const VolumeDown;

/// @brief Field VolumeUp offset 0
static System::ConsoleKey const VolumeUp;

/// @brief Field MediaNext offset 0
static System::ConsoleKey const MediaNext;

/// @brief Field MediaPrevious offset 0
static System::ConsoleKey const MediaPrevious;

/// @brief Field MediaStop offset 0
static System::ConsoleKey const MediaStop;

/// @brief Field MediaPlay offset 0
static System::ConsoleKey const MediaPlay;

/// @brief Field LaunchMail offset 0
static System::ConsoleKey const LaunchMail;

/// @brief Field LaunchMediaSelect offset 0
static System::ConsoleKey const LaunchMediaSelect;

/// @brief Field LaunchApp1 offset 0
static System::ConsoleKey const LaunchApp1;

/// @brief Field LaunchApp2 offset 0
static System::ConsoleKey const LaunchApp2;

/// @brief Field Oem1 offset 0
static System::ConsoleKey const Oem1;

/// @brief Field OemPlus offset 0
static System::ConsoleKey const OemPlus;

/// @brief Field OemComma offset 0
static System::ConsoleKey const OemComma;

/// @brief Field OemMinus offset 0
static System::ConsoleKey const OemMinus;

/// @brief Field OemPeriod offset 0
static System::ConsoleKey const OemPeriod;

/// @brief Field Oem2 offset 0
static System::ConsoleKey const Oem2;

/// @brief Field Oem3 offset 0
static System::ConsoleKey const Oem3;

/// @brief Field Oem4 offset 0
static System::ConsoleKey const Oem4;

/// @brief Field Oem5 offset 0
static System::ConsoleKey const Oem5;

/// @brief Field Oem6 offset 0
static System::ConsoleKey const Oem6;

/// @brief Field Oem7 offset 0
static System::ConsoleKey const Oem7;

/// @brief Field Oem8 offset 0
static System::ConsoleKey const Oem8;

/// @brief Field Oem102 offset 0
static System::ConsoleKey const Oem102;

/// @brief Field Process offset 0
static System::ConsoleKey const Process;

/// @brief Field Packet offset 0
static System::ConsoleKey const Packet;

/// @brief Field Attention offset 0
static System::ConsoleKey const Attention;

/// @brief Field CrSel offset 0
static System::ConsoleKey const CrSel;

/// @brief Field ExSel offset 0
static System::ConsoleKey const ExSel;

/// @brief Field EraseEndOfFile offset 0
static System::ConsoleKey const EraseEndOfFile;

/// @brief Field Play offset 0
static System::ConsoleKey const Play;

/// @brief Field Zoom offset 0
static System::ConsoleKey const Zoom;

/// @brief Field NoName offset 0
static System::ConsoleKey const NoName;

/// @brief Field Pa1 offset 0
static System::ConsoleKey const Pa1;

/// @brief Field OemClear offset 0
static System::ConsoleKey const OemClear;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::ConsoleKey, "System", "ConsoleKey");
