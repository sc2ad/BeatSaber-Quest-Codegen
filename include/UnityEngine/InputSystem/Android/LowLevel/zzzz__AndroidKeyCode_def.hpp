#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidKeyCode;
}
// Type: UnityEngine.InputSystem.Android.LowLevel::AndroidKeyCode
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6536))
// CS Name: UnityEngine.InputSystem.Android.LowLevel.AndroidKeyCode
struct CORDL_TYPE AndroidKeyCode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AndroidKeyCode(int32_t value__) noexcept;


                    constexpr AndroidKeyCode(AndroidKeyCode const&) = default;
                    constexpr AndroidKeyCode(AndroidKeyCode&&) = default;
                    constexpr AndroidKeyCode& operator=(AndroidKeyCode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AndroidKeyCode& operator=(AndroidKeyCode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AndroidKeyCode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AndroidKeyCode_Unwrapped : int32_t {
__Unknown = 0,
__SoftLeft = 1,
__SoftRight = 2,
__Home = 3,
__Back = 4,
__Call = 5,
__Endcall = 6,
__Alpha0 = 7,
__Alpha1 = 8,
__Alpha2 = 9,
__Alpha3 = 10,
__Alpha4 = 11,
__Alpha5 = 12,
__Alpha6 = 13,
__Alpha7 = 14,
__Alpha8 = 15,
__Alpha9 = 16,
__Star = 17,
__Pound = 18,
__DpadUp = 19,
__DpadDown = 20,
__DpadLeft = 21,
__DpadRight = 22,
__DpadCenter = 23,
__VolumeUp = 24,
__VolumeDown = 25,
__Power = 26,
__Camera = 27,
__Clear = 28,
__A = 29,
__B = 30,
__C = 31,
__D = 32,
__E = 33,
__F = 34,
__G = 35,
__H = 36,
__I = 37,
__J = 38,
__K = 39,
__L = 40,
__M = 41,
__N = 42,
__O = 43,
__P = 44,
__Q = 45,
__R = 46,
__S = 47,
__T = 48,
__U = 49,
__V = 50,
__W = 51,
__X = 52,
__Y = 53,
__Z = 54,
__Comma = 55,
__Period = 56,
__AltLeft = 57,
__AltRight = 58,
__ShiftLeft = 59,
__ShiftRight = 60,
__Tab = 61,
__Space = 62,
__Sym = 63,
__Explorer = 64,
__Envelope = 65,
__Enter = 66,
__Del = 67,
__Grave = 68,
__Minus = 69,
__Equals = 70,
__LeftBracket = 71,
__RightBracket = 72,
__Backslash = 73,
__Semicolon = 74,
__Apostrophe = 75,
__Slash = 76,
__At = 77,
__Num = 78,
__Headsethook = 79,
__Focus = 80,
__Plus = 81,
__Menu = 82,
__Notification = 83,
__Search = 84,
__MediaPlayPause = 85,
__MediaStop = 86,
__MediaNext = 87,
__MediaPrevious = 88,
__MediaRewind = 89,
__MediaFastForward = 90,
__Mute = 91,
__PageUp = 92,
__PageDown = 93,
__Pictsymbols = 94,
__SwitchCharset = 95,
__ButtonA = 96,
__ButtonB = 97,
__ButtonC = 98,
__ButtonX = 99,
__ButtonY = 100,
__ButtonZ = 101,
__ButtonL1 = 102,
__ButtonR1 = 103,
__ButtonL2 = 104,
__ButtonR2 = 105,
__ButtonThumbl = 106,
__ButtonThumbr = 107,
__ButtonStart = 108,
__ButtonSelect = 109,
__ButtonMode = 110,
__Escape = 111,
__ForwardDel = 112,
__CtrlLeft = 113,
__CtrlRight = 114,
__CapsLock = 115,
__ScrollLock = 116,
__MetaLeft = 117,
__MetaRight = 118,
__Function = 119,
__Sysrq = 120,
__Break = 121,
__MoveHome = 122,
__MoveEnd = 123,
__Insert = 124,
__Forward = 125,
__MediaPlay = 126,
__MediaPause = 127,
__MediaClose = 128,
__MediaEject = 129,
__MediaRecord = 130,
__F1 = 131,
__F2 = 132,
__F3 = 133,
__F4 = 134,
__F5 = 135,
__F6 = 136,
__F7 = 137,
__F8 = 138,
__F9 = 139,
__F10 = 140,
__F11 = 141,
__F12 = 142,
__NumLock = 143,
__Numpad0 = 144,
__Numpad1 = 145,
__Numpad2 = 146,
__Numpad3 = 147,
__Numpad4 = 148,
__Numpad5 = 149,
__Numpad6 = 150,
__Numpad7 = 151,
__Numpad8 = 152,
__Numpad9 = 153,
__NumpadDivide = 154,
__NumpadMultiply = 155,
__NumpadSubtract = 156,
__NumpadAdd = 157,
__NumpadDot = 158,
__NumpadComma = 159,
__NumpadEnter = 160,
__NumpadEquals = 161,
__NumpadLeftParen = 162,
__NumpadRightParen = 163,
__VolumeMute = 164,
__Info = 165,
__ChannelUp = 166,
__ChannelDown = 167,
__ZoomIn = 168,
__ZoomOut = 169,
__Tv = 170,
__Window = 171,
__Guide = 172,
__Dvr = 173,
__Bookmark = 174,
__Captions = 175,
__Settings = 176,
__TvPower = 177,
__TvInput = 178,
__StbPower = 179,
__StbInput = 180,
__AvrPower = 181,
__AvrInput = 182,
__ProgRed = 183,
__ProgGreen = 184,
__ProgYellow = 185,
__ProgBlue = 186,
__AppSwitch = 187,
__Button1 = 188,
__Button2 = 189,
__Button3 = 190,
__Button4 = 191,
__Button5 = 192,
__Button6 = 193,
__Button7 = 194,
__Button8 = 195,
__Button9 = 196,
__Button10 = 197,
__Button11 = 198,
__Button12 = 199,
__Button13 = 200,
__Button14 = 201,
__Button15 = 202,
__Button16 = 203,
__LanguageSwitch = 204,
__MannerMode = 205,
__Mode3D = 206,
__Contacts = 207,
__Calendar = 208,
__Music = 209,
__Calculator = 210,
__ZenkakuHankaku = 211,
__Eisu = 212,
__Muhenkan = 213,
__Henkan = 214,
__KatakanaHiragana = 215,
__Yen = 216,
__Ro = 217,
__Kana = 218,
__Assist = 219,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AndroidKeyCode_Unwrapped () const noexcept {
return std::bit_cast<__AndroidKeyCode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Unknown;

/// @brief Field SoftLeft offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const SoftLeft;

/// @brief Field SoftRight offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const SoftRight;

/// @brief Field Home offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Home;

/// @brief Field Back offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Back;

/// @brief Field Call offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Call;

/// @brief Field Endcall offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Endcall;

/// @brief Field Alpha0 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Alpha0;

/// @brief Field Alpha1 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Alpha1;

/// @brief Field Alpha2 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Alpha2;

/// @brief Field Alpha3 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Alpha3;

/// @brief Field Alpha4 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Alpha4;

/// @brief Field Alpha5 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Alpha5;

/// @brief Field Alpha6 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Alpha6;

/// @brief Field Alpha7 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Alpha7;

/// @brief Field Alpha8 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Alpha8;

/// @brief Field Alpha9 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Alpha9;

/// @brief Field Star offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Star;

/// @brief Field Pound offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Pound;

/// @brief Field DpadUp offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const DpadUp;

/// @brief Field DpadDown offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const DpadDown;

/// @brief Field DpadLeft offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const DpadLeft;

/// @brief Field DpadRight offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const DpadRight;

/// @brief Field DpadCenter offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const DpadCenter;

/// @brief Field VolumeUp offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const VolumeUp;

/// @brief Field VolumeDown offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const VolumeDown;

/// @brief Field Power offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Power;

/// @brief Field Camera offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Camera;

/// @brief Field Clear offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Clear;

/// @brief Field A offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const A;

/// @brief Field B offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const B;

/// @brief Field C offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const C;

/// @brief Field D offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const D;

/// @brief Field E offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const E;

/// @brief Field F offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F;

/// @brief Field G offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const G;

/// @brief Field H offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const H;

/// @brief Field I offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const I;

/// @brief Field J offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const J;

/// @brief Field K offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const K;

/// @brief Field L offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const L;

/// @brief Field M offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const M;

/// @brief Field N offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const N;

/// @brief Field O offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const O;

/// @brief Field P offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const P;

/// @brief Field Q offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Q;

/// @brief Field R offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const R;

/// @brief Field S offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const S;

/// @brief Field T offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const T;

/// @brief Field U offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const U;

/// @brief Field V offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const V;

/// @brief Field W offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const W;

/// @brief Field X offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const X;

/// @brief Field Y offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Y;

/// @brief Field Z offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Z;

/// @brief Field Comma offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Comma;

/// @brief Field Period offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Period;

/// @brief Field AltLeft offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const AltLeft;

/// @brief Field AltRight offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const AltRight;

/// @brief Field ShiftLeft offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ShiftLeft;

/// @brief Field ShiftRight offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ShiftRight;

/// @brief Field Tab offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Tab;

/// @brief Field Space offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Space;

/// @brief Field Sym offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Sym;

/// @brief Field Explorer offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Explorer;

/// @brief Field Envelope offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Envelope;

/// @brief Field Enter offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Enter;

/// @brief Field Del offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Del;

/// @brief Field Grave offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Grave;

/// @brief Field Minus offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Minus;

/// @brief Field Equals offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Equals;

/// @brief Field LeftBracket offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const LeftBracket;

/// @brief Field RightBracket offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const RightBracket;

/// @brief Field Backslash offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Backslash;

/// @brief Field Semicolon offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Semicolon;

/// @brief Field Apostrophe offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Apostrophe;

/// @brief Field Slash offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Slash;

/// @brief Field At offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const At;

/// @brief Field Num offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Num;

/// @brief Field Headsethook offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Headsethook;

/// @brief Field Focus offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Focus;

/// @brief Field Plus offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Plus;

/// @brief Field Menu offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Menu;

/// @brief Field Notification offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Notification;

/// @brief Field Search offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Search;

/// @brief Field MediaPlayPause offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MediaPlayPause;

/// @brief Field MediaStop offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MediaStop;

/// @brief Field MediaNext offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MediaNext;

/// @brief Field MediaPrevious offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MediaPrevious;

/// @brief Field MediaRewind offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MediaRewind;

/// @brief Field MediaFastForward offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MediaFastForward;

/// @brief Field Mute offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Mute;

/// @brief Field PageUp offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const PageUp;

/// @brief Field PageDown offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const PageDown;

/// @brief Field Pictsymbols offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Pictsymbols;

/// @brief Field SwitchCharset offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const SwitchCharset;

/// @brief Field ButtonA offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonA;

/// @brief Field ButtonB offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonB;

/// @brief Field ButtonC offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonC;

/// @brief Field ButtonX offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonX;

/// @brief Field ButtonY offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonY;

/// @brief Field ButtonZ offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonZ;

/// @brief Field ButtonL1 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonL1;

/// @brief Field ButtonR1 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonR1;

/// @brief Field ButtonL2 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonL2;

/// @brief Field ButtonR2 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonR2;

/// @brief Field ButtonThumbl offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonThumbl;

/// @brief Field ButtonThumbr offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonThumbr;

/// @brief Field ButtonStart offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonStart;

/// @brief Field ButtonSelect offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonSelect;

/// @brief Field ButtonMode offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ButtonMode;

/// @brief Field Escape offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Escape;

/// @brief Field ForwardDel offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ForwardDel;

/// @brief Field CtrlLeft offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const CtrlLeft;

/// @brief Field CtrlRight offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const CtrlRight;

/// @brief Field CapsLock offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const CapsLock;

/// @brief Field ScrollLock offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ScrollLock;

/// @brief Field MetaLeft offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MetaLeft;

/// @brief Field MetaRight offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MetaRight;

/// @brief Field Function offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Function;

/// @brief Field Sysrq offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Sysrq;

/// @brief Field Break offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Break;

/// @brief Field MoveHome offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MoveHome;

/// @brief Field MoveEnd offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MoveEnd;

/// @brief Field Insert offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Insert;

/// @brief Field Forward offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Forward;

/// @brief Field MediaPlay offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MediaPlay;

/// @brief Field MediaPause offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MediaPause;

/// @brief Field MediaClose offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MediaClose;

/// @brief Field MediaEject offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MediaEject;

/// @brief Field MediaRecord offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MediaRecord;

/// @brief Field F1 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F1;

/// @brief Field F2 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F2;

/// @brief Field F3 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F3;

/// @brief Field F4 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F4;

/// @brief Field F5 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F5;

/// @brief Field F6 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F6;

/// @brief Field F7 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F7;

/// @brief Field F8 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F8;

/// @brief Field F9 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F9;

/// @brief Field F10 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F10;

/// @brief Field F11 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F11;

/// @brief Field F12 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const F12;

/// @brief Field NumLock offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const NumLock;

/// @brief Field Numpad0 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Numpad0;

/// @brief Field Numpad1 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Numpad1;

/// @brief Field Numpad2 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Numpad2;

/// @brief Field Numpad3 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Numpad3;

/// @brief Field Numpad4 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Numpad4;

/// @brief Field Numpad5 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Numpad5;

/// @brief Field Numpad6 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Numpad6;

/// @brief Field Numpad7 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Numpad7;

/// @brief Field Numpad8 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Numpad8;

/// @brief Field Numpad9 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Numpad9;

/// @brief Field NumpadDivide offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const NumpadDivide;

/// @brief Field NumpadMultiply offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const NumpadMultiply;

/// @brief Field NumpadSubtract offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const NumpadSubtract;

/// @brief Field NumpadAdd offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const NumpadAdd;

/// @brief Field NumpadDot offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const NumpadDot;

/// @brief Field NumpadComma offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const NumpadComma;

/// @brief Field NumpadEnter offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const NumpadEnter;

/// @brief Field NumpadEquals offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const NumpadEquals;

/// @brief Field NumpadLeftParen offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const NumpadLeftParen;

/// @brief Field NumpadRightParen offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const NumpadRightParen;

/// @brief Field VolumeMute offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const VolumeMute;

/// @brief Field Info offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Info;

/// @brief Field ChannelUp offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ChannelUp;

/// @brief Field ChannelDown offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ChannelDown;

/// @brief Field ZoomIn offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ZoomIn;

/// @brief Field ZoomOut offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ZoomOut;

/// @brief Field Tv offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Tv;

/// @brief Field Window offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Window;

/// @brief Field Guide offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Guide;

/// @brief Field Dvr offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Dvr;

/// @brief Field Bookmark offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Bookmark;

/// @brief Field Captions offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Captions;

/// @brief Field Settings offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Settings;

/// @brief Field TvPower offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const TvPower;

/// @brief Field TvInput offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const TvInput;

/// @brief Field StbPower offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const StbPower;

/// @brief Field StbInput offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const StbInput;

/// @brief Field AvrPower offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const AvrPower;

/// @brief Field AvrInput offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const AvrInput;

/// @brief Field ProgRed offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ProgRed;

/// @brief Field ProgGreen offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ProgGreen;

/// @brief Field ProgYellow offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ProgYellow;

/// @brief Field ProgBlue offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ProgBlue;

/// @brief Field AppSwitch offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const AppSwitch;

/// @brief Field Button1 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button1;

/// @brief Field Button2 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button2;

/// @brief Field Button3 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button3;

/// @brief Field Button4 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button4;

/// @brief Field Button5 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button5;

/// @brief Field Button6 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button6;

/// @brief Field Button7 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button7;

/// @brief Field Button8 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button8;

/// @brief Field Button9 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button9;

/// @brief Field Button10 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button10;

/// @brief Field Button11 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button11;

/// @brief Field Button12 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button12;

/// @brief Field Button13 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button13;

/// @brief Field Button14 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button14;

/// @brief Field Button15 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button15;

/// @brief Field Button16 offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Button16;

/// @brief Field LanguageSwitch offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const LanguageSwitch;

/// @brief Field MannerMode offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const MannerMode;

/// @brief Field Mode3D offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Mode3D;

/// @brief Field Contacts offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Contacts;

/// @brief Field Calendar offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Calendar;

/// @brief Field Music offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Music;

/// @brief Field Calculator offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Calculator;

/// @brief Field ZenkakuHankaku offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const ZenkakuHankaku;

/// @brief Field Eisu offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Eisu;

/// @brief Field Muhenkan offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Muhenkan;

/// @brief Field Henkan offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Henkan;

/// @brief Field KatakanaHiragana offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const KatakanaHiragana;

/// @brief Field Yen offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Yen;

/// @brief Field Ro offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Ro;

/// @brief Field Kana offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Kana;

/// @brief Field Assist offset 0
static ::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode const Assist;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Android::LowLevel
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode, "UnityEngine.InputSystem.Android.LowLevel", "AndroidKeyCode");
