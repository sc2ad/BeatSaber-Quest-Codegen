#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::InputSystem {
struct Key;
}
// Type: UnityEngine.InputSystem::Key
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6325))
// CS Name: UnityEngine.InputSystem.Key
struct CORDL_TYPE Key : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Key(int32_t value__) noexcept;


                    constexpr Key(Key const&) = default;
                    constexpr Key(Key&&) = default;
                    constexpr Key& operator=(Key const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Key& operator=(Key&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Key(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Key_Unwrapped : int32_t {
__None = 0,
__Space = 1,
__Enter = 2,
__Tab = 3,
__Backquote = 4,
__Quote = 5,
__Semicolon = 6,
__Comma = 7,
__Period = 8,
__Slash = 9,
__Backslash = 10,
__LeftBracket = 11,
__RightBracket = 12,
__Minus = 13,
__Equals = 14,
__A = 15,
__B = 16,
__C = 17,
__D = 18,
__E = 19,
__F = 20,
__G = 21,
__H = 22,
__I = 23,
__J = 24,
__K = 25,
__L = 26,
__M = 27,
__N = 28,
__O = 29,
__P = 30,
__Q = 31,
__R = 32,
__S = 33,
__T = 34,
__U = 35,
__V = 36,
__W = 37,
__X = 38,
__Y = 39,
__Z = 40,
__Digit1 = 41,
__Digit2 = 42,
__Digit3 = 43,
__Digit4 = 44,
__Digit5 = 45,
__Digit6 = 46,
__Digit7 = 47,
__Digit8 = 48,
__Digit9 = 49,
__Digit0 = 50,
__LeftShift = 51,
__RightShift = 52,
__LeftAlt = 53,
__RightAlt = 54,
__AltGr = 54,
__LeftCtrl = 55,
__RightCtrl = 56,
__LeftMeta = 57,
__RightMeta = 58,
__LeftWindows = 57,
__RightWindows = 58,
__LeftApple = 57,
__RightApple = 58,
__LeftCommand = 57,
__RightCommand = 58,
__ContextMenu = 59,
__Escape = 60,
__LeftArrow = 61,
__RightArrow = 62,
__UpArrow = 63,
__DownArrow = 64,
__Backspace = 65,
__PageDown = 66,
__PageUp = 67,
__Home = 68,
__End = 69,
__Insert = 70,
__Delete = 71,
__CapsLock = 72,
__NumLock = 73,
__PrintScreen = 74,
__ScrollLock = 75,
__Pause = 76,
__NumpadEnter = 77,
__NumpadDivide = 78,
__NumpadMultiply = 79,
__NumpadPlus = 80,
__NumpadMinus = 81,
__NumpadPeriod = 82,
__NumpadEquals = 83,
__Numpad0 = 84,
__Numpad1 = 85,
__Numpad2 = 86,
__Numpad3 = 87,
__Numpad4 = 88,
__Numpad5 = 89,
__Numpad6 = 90,
__Numpad7 = 91,
__Numpad8 = 92,
__Numpad9 = 93,
__F1 = 94,
__F2 = 95,
__F3 = 96,
__F4 = 97,
__F5 = 98,
__F6 = 99,
__F7 = 100,
__F8 = 101,
__F9 = 102,
__F10 = 103,
__F11 = 104,
__F12 = 105,
__OEM1 = 106,
__OEM2 = 107,
__OEM3 = 108,
__OEM4 = 109,
__OEM5 = 110,
__IMESelected = 111,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Key_Unwrapped () const noexcept {
return std::bit_cast<__Key_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::UnityEngine::InputSystem::Key const None;

/// @brief Field Space offset 0
static ::UnityEngine::InputSystem::Key const Space;

/// @brief Field Enter offset 0
static ::UnityEngine::InputSystem::Key const Enter;

/// @brief Field Tab offset 0
static ::UnityEngine::InputSystem::Key const Tab;

/// @brief Field Backquote offset 0
static ::UnityEngine::InputSystem::Key const Backquote;

/// @brief Field Quote offset 0
static ::UnityEngine::InputSystem::Key const Quote;

/// @brief Field Semicolon offset 0
static ::UnityEngine::InputSystem::Key const Semicolon;

/// @brief Field Comma offset 0
static ::UnityEngine::InputSystem::Key const Comma;

/// @brief Field Period offset 0
static ::UnityEngine::InputSystem::Key const Period;

/// @brief Field Slash offset 0
static ::UnityEngine::InputSystem::Key const Slash;

/// @brief Field Backslash offset 0
static ::UnityEngine::InputSystem::Key const Backslash;

/// @brief Field LeftBracket offset 0
static ::UnityEngine::InputSystem::Key const LeftBracket;

/// @brief Field RightBracket offset 0
static ::UnityEngine::InputSystem::Key const RightBracket;

/// @brief Field Minus offset 0
static ::UnityEngine::InputSystem::Key const Minus;

/// @brief Field Equals offset 0
static ::UnityEngine::InputSystem::Key const Equals;

/// @brief Field A offset 0
static ::UnityEngine::InputSystem::Key const A;

/// @brief Field B offset 0
static ::UnityEngine::InputSystem::Key const B;

/// @brief Field C offset 0
static ::UnityEngine::InputSystem::Key const C;

/// @brief Field D offset 0
static ::UnityEngine::InputSystem::Key const D;

/// @brief Field E offset 0
static ::UnityEngine::InputSystem::Key const E;

/// @brief Field F offset 0
static ::UnityEngine::InputSystem::Key const F;

/// @brief Field G offset 0
static ::UnityEngine::InputSystem::Key const G;

/// @brief Field H offset 0
static ::UnityEngine::InputSystem::Key const H;

/// @brief Field I offset 0
static ::UnityEngine::InputSystem::Key const I;

/// @brief Field J offset 0
static ::UnityEngine::InputSystem::Key const J;

/// @brief Field K offset 0
static ::UnityEngine::InputSystem::Key const K;

/// @brief Field L offset 0
static ::UnityEngine::InputSystem::Key const L;

/// @brief Field M offset 0
static ::UnityEngine::InputSystem::Key const M;

/// @brief Field N offset 0
static ::UnityEngine::InputSystem::Key const N;

/// @brief Field O offset 0
static ::UnityEngine::InputSystem::Key const O;

/// @brief Field P offset 0
static ::UnityEngine::InputSystem::Key const P;

/// @brief Field Q offset 0
static ::UnityEngine::InputSystem::Key const Q;

/// @brief Field R offset 0
static ::UnityEngine::InputSystem::Key const R;

/// @brief Field S offset 0
static ::UnityEngine::InputSystem::Key const S;

/// @brief Field T offset 0
static ::UnityEngine::InputSystem::Key const T;

/// @brief Field U offset 0
static ::UnityEngine::InputSystem::Key const U;

/// @brief Field V offset 0
static ::UnityEngine::InputSystem::Key const V;

/// @brief Field W offset 0
static ::UnityEngine::InputSystem::Key const W;

/// @brief Field X offset 0
static ::UnityEngine::InputSystem::Key const X;

/// @brief Field Y offset 0
static ::UnityEngine::InputSystem::Key const Y;

/// @brief Field Z offset 0
static ::UnityEngine::InputSystem::Key const Z;

/// @brief Field Digit1 offset 0
static ::UnityEngine::InputSystem::Key const Digit1;

/// @brief Field Digit2 offset 0
static ::UnityEngine::InputSystem::Key const Digit2;

/// @brief Field Digit3 offset 0
static ::UnityEngine::InputSystem::Key const Digit3;

/// @brief Field Digit4 offset 0
static ::UnityEngine::InputSystem::Key const Digit4;

/// @brief Field Digit5 offset 0
static ::UnityEngine::InputSystem::Key const Digit5;

/// @brief Field Digit6 offset 0
static ::UnityEngine::InputSystem::Key const Digit6;

/// @brief Field Digit7 offset 0
static ::UnityEngine::InputSystem::Key const Digit7;

/// @brief Field Digit8 offset 0
static ::UnityEngine::InputSystem::Key const Digit8;

/// @brief Field Digit9 offset 0
static ::UnityEngine::InputSystem::Key const Digit9;

/// @brief Field Digit0 offset 0
static ::UnityEngine::InputSystem::Key const Digit0;

/// @brief Field LeftShift offset 0
static ::UnityEngine::InputSystem::Key const LeftShift;

/// @brief Field RightShift offset 0
static ::UnityEngine::InputSystem::Key const RightShift;

/// @brief Field LeftAlt offset 0
static ::UnityEngine::InputSystem::Key const LeftAlt;

/// @brief Field RightAlt offset 0
static ::UnityEngine::InputSystem::Key const RightAlt;

/// @brief Field AltGr offset 0
static ::UnityEngine::InputSystem::Key const AltGr;

/// @brief Field LeftCtrl offset 0
static ::UnityEngine::InputSystem::Key const LeftCtrl;

/// @brief Field RightCtrl offset 0
static ::UnityEngine::InputSystem::Key const RightCtrl;

/// @brief Field LeftMeta offset 0
static ::UnityEngine::InputSystem::Key const LeftMeta;

/// @brief Field RightMeta offset 0
static ::UnityEngine::InputSystem::Key const RightMeta;

/// @brief Field LeftWindows offset 0
static ::UnityEngine::InputSystem::Key const LeftWindows;

/// @brief Field RightWindows offset 0
static ::UnityEngine::InputSystem::Key const RightWindows;

/// @brief Field LeftApple offset 0
static ::UnityEngine::InputSystem::Key const LeftApple;

/// @brief Field RightApple offset 0
static ::UnityEngine::InputSystem::Key const RightApple;

/// @brief Field LeftCommand offset 0
static ::UnityEngine::InputSystem::Key const LeftCommand;

/// @brief Field RightCommand offset 0
static ::UnityEngine::InputSystem::Key const RightCommand;

/// @brief Field ContextMenu offset 0
static ::UnityEngine::InputSystem::Key const ContextMenu;

/// @brief Field Escape offset 0
static ::UnityEngine::InputSystem::Key const Escape;

/// @brief Field LeftArrow offset 0
static ::UnityEngine::InputSystem::Key const LeftArrow;

/// @brief Field RightArrow offset 0
static ::UnityEngine::InputSystem::Key const RightArrow;

/// @brief Field UpArrow offset 0
static ::UnityEngine::InputSystem::Key const UpArrow;

/// @brief Field DownArrow offset 0
static ::UnityEngine::InputSystem::Key const DownArrow;

/// @brief Field Backspace offset 0
static ::UnityEngine::InputSystem::Key const Backspace;

/// @brief Field PageDown offset 0
static ::UnityEngine::InputSystem::Key const PageDown;

/// @brief Field PageUp offset 0
static ::UnityEngine::InputSystem::Key const PageUp;

/// @brief Field Home offset 0
static ::UnityEngine::InputSystem::Key const Home;

/// @brief Field End offset 0
static ::UnityEngine::InputSystem::Key const End;

/// @brief Field Insert offset 0
static ::UnityEngine::InputSystem::Key const Insert;

/// @brief Field Delete offset 0
static ::UnityEngine::InputSystem::Key const Delete;

/// @brief Field CapsLock offset 0
static ::UnityEngine::InputSystem::Key const CapsLock;

/// @brief Field NumLock offset 0
static ::UnityEngine::InputSystem::Key const NumLock;

/// @brief Field PrintScreen offset 0
static ::UnityEngine::InputSystem::Key const PrintScreen;

/// @brief Field ScrollLock offset 0
static ::UnityEngine::InputSystem::Key const ScrollLock;

/// @brief Field Pause offset 0
static ::UnityEngine::InputSystem::Key const Pause;

/// @brief Field NumpadEnter offset 0
static ::UnityEngine::InputSystem::Key const NumpadEnter;

/// @brief Field NumpadDivide offset 0
static ::UnityEngine::InputSystem::Key const NumpadDivide;

/// @brief Field NumpadMultiply offset 0
static ::UnityEngine::InputSystem::Key const NumpadMultiply;

/// @brief Field NumpadPlus offset 0
static ::UnityEngine::InputSystem::Key const NumpadPlus;

/// @brief Field NumpadMinus offset 0
static ::UnityEngine::InputSystem::Key const NumpadMinus;

/// @brief Field NumpadPeriod offset 0
static ::UnityEngine::InputSystem::Key const NumpadPeriod;

/// @brief Field NumpadEquals offset 0
static ::UnityEngine::InputSystem::Key const NumpadEquals;

/// @brief Field Numpad0 offset 0
static ::UnityEngine::InputSystem::Key const Numpad0;

/// @brief Field Numpad1 offset 0
static ::UnityEngine::InputSystem::Key const Numpad1;

/// @brief Field Numpad2 offset 0
static ::UnityEngine::InputSystem::Key const Numpad2;

/// @brief Field Numpad3 offset 0
static ::UnityEngine::InputSystem::Key const Numpad3;

/// @brief Field Numpad4 offset 0
static ::UnityEngine::InputSystem::Key const Numpad4;

/// @brief Field Numpad5 offset 0
static ::UnityEngine::InputSystem::Key const Numpad5;

/// @brief Field Numpad6 offset 0
static ::UnityEngine::InputSystem::Key const Numpad6;

/// @brief Field Numpad7 offset 0
static ::UnityEngine::InputSystem::Key const Numpad7;

/// @brief Field Numpad8 offset 0
static ::UnityEngine::InputSystem::Key const Numpad8;

/// @brief Field Numpad9 offset 0
static ::UnityEngine::InputSystem::Key const Numpad9;

/// @brief Field F1 offset 0
static ::UnityEngine::InputSystem::Key const F1;

/// @brief Field F2 offset 0
static ::UnityEngine::InputSystem::Key const F2;

/// @brief Field F3 offset 0
static ::UnityEngine::InputSystem::Key const F3;

/// @brief Field F4 offset 0
static ::UnityEngine::InputSystem::Key const F4;

/// @brief Field F5 offset 0
static ::UnityEngine::InputSystem::Key const F5;

/// @brief Field F6 offset 0
static ::UnityEngine::InputSystem::Key const F6;

/// @brief Field F7 offset 0
static ::UnityEngine::InputSystem::Key const F7;

/// @brief Field F8 offset 0
static ::UnityEngine::InputSystem::Key const F8;

/// @brief Field F9 offset 0
static ::UnityEngine::InputSystem::Key const F9;

/// @brief Field F10 offset 0
static ::UnityEngine::InputSystem::Key const F10;

/// @brief Field F11 offset 0
static ::UnityEngine::InputSystem::Key const F11;

/// @brief Field F12 offset 0
static ::UnityEngine::InputSystem::Key const F12;

/// @brief Field OEM1 offset 0
static ::UnityEngine::InputSystem::Key const OEM1;

/// @brief Field OEM2 offset 0
static ::UnityEngine::InputSystem::Key const OEM2;

/// @brief Field OEM3 offset 0
static ::UnityEngine::InputSystem::Key const OEM3;

/// @brief Field OEM4 offset 0
static ::UnityEngine::InputSystem::Key const OEM4;

/// @brief Field OEM5 offset 0
static ::UnityEngine::InputSystem::Key const OEM5;

/// @brief Field IMESelected offset 0
static ::UnityEngine::InputSystem::Key const IMESelected;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Key, "UnityEngine.InputSystem", "Key");
