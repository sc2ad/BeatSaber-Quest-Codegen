#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct KeyCode;
}
// Type: UnityEngine::KeyCode
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10000))
// CS Name: UnityEngine.KeyCode
struct CORDL_TYPE KeyCode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr KeyCode(int32_t value__) noexcept;


                    constexpr KeyCode(KeyCode const&) = default;
                    constexpr KeyCode(KeyCode&&) = default;
                    constexpr KeyCode& operator=(KeyCode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr KeyCode& operator=(KeyCode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit KeyCode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __KeyCode_Unwrapped : int32_t {
__None = 0,
__Backspace = 8,
__Delete = 127,
__Tab = 9,
__Clear = 12,
__Return = 13,
__Pause = 19,
__Escape = 27,
__Space = 32,
__Keypad0 = 256,
__Keypad1 = 257,
__Keypad2 = 258,
__Keypad3 = 259,
__Keypad4 = 260,
__Keypad5 = 261,
__Keypad6 = 262,
__Keypad7 = 263,
__Keypad8 = 264,
__Keypad9 = 265,
__KeypadPeriod = 266,
__KeypadDivide = 267,
__KeypadMultiply = 268,
__KeypadMinus = 269,
__KeypadPlus = 270,
__KeypadEnter = 271,
__KeypadEquals = 272,
__UpArrow = 273,
__DownArrow = 274,
__RightArrow = 275,
__LeftArrow = 276,
__Insert = 277,
__Home = 278,
__End = 279,
__PageUp = 280,
__PageDown = 281,
__F1 = 282,
__F2 = 283,
__F3 = 284,
__F4 = 285,
__F5 = 286,
__F6 = 287,
__F7 = 288,
__F8 = 289,
__F9 = 290,
__F10 = 291,
__F11 = 292,
__F12 = 293,
__F13 = 294,
__F14 = 295,
__F15 = 296,
__Alpha0 = 48,
__Alpha1 = 49,
__Alpha2 = 50,
__Alpha3 = 51,
__Alpha4 = 52,
__Alpha5 = 53,
__Alpha6 = 54,
__Alpha7 = 55,
__Alpha8 = 56,
__Alpha9 = 57,
__Exclaim = 33,
__DoubleQuote = 34,
__Hash = 35,
__Dollar = 36,
__Percent = 37,
__Ampersand = 38,
__Quote = 39,
__LeftParen = 40,
__RightParen = 41,
__Asterisk = 42,
__Plus = 43,
__Comma = 44,
__Minus = 45,
__Period = 46,
__Slash = 47,
__Colon = 58,
__Semicolon = 59,
__Less = 60,
__Equals = 61,
__Greater = 62,
__Question = 63,
__At = 64,
__LeftBracket = 91,
__Backslash = 92,
__RightBracket = 93,
__Caret = 94,
__Underscore = 95,
__BackQuote = 96,
__A = 97,
__B = 98,
__C = 99,
__D = 100,
__E = 101,
__F = 102,
__G = 103,
__H = 104,
__I = 105,
__J = 106,
__K = 107,
__L = 108,
__M = 109,
__N = 110,
__O = 111,
__P = 112,
__Q = 113,
__R = 114,
__S = 115,
__T = 116,
__U = 117,
__V = 118,
__W = 119,
__X = 120,
__Y = 121,
__Z = 122,
__LeftCurlyBracket = 123,
__Pipe = 124,
__RightCurlyBracket = 125,
__Tilde = 126,
__Numlock = 300,
__CapsLock = 301,
__ScrollLock = 302,
__RightShift = 303,
__LeftShift = 304,
__RightControl = 305,
__LeftControl = 306,
__RightAlt = 307,
__LeftAlt = 308,
__LeftMeta = 310,
__LeftCommand = 310,
__LeftApple = 310,
__LeftWindows = 311,
__RightMeta = 309,
__RightCommand = 309,
__RightApple = 309,
__RightWindows = 312,
__AltGr = 313,
__Help = 315,
__Print = 316,
__SysReq = 317,
__Break = 318,
__Menu = 319,
__Mouse0 = 323,
__Mouse1 = 324,
__Mouse2 = 325,
__Mouse3 = 326,
__Mouse4 = 327,
__Mouse5 = 328,
__Mouse6 = 329,
__JoystickButton0 = 330,
__JoystickButton1 = 331,
__JoystickButton2 = 332,
__JoystickButton3 = 333,
__JoystickButton4 = 334,
__JoystickButton5 = 335,
__JoystickButton6 = 336,
__JoystickButton7 = 337,
__JoystickButton8 = 338,
__JoystickButton9 = 339,
__JoystickButton10 = 340,
__JoystickButton11 = 341,
__JoystickButton12 = 342,
__JoystickButton13 = 343,
__JoystickButton14 = 344,
__JoystickButton15 = 345,
__JoystickButton16 = 346,
__JoystickButton17 = 347,
__JoystickButton18 = 348,
__JoystickButton19 = 349,
__Joystick1Button0 = 350,
__Joystick1Button1 = 351,
__Joystick1Button2 = 352,
__Joystick1Button3 = 353,
__Joystick1Button4 = 354,
__Joystick1Button5 = 355,
__Joystick1Button6 = 356,
__Joystick1Button7 = 357,
__Joystick1Button8 = 358,
__Joystick1Button9 = 359,
__Joystick1Button10 = 360,
__Joystick1Button11 = 361,
__Joystick1Button12 = 362,
__Joystick1Button13 = 363,
__Joystick1Button14 = 364,
__Joystick1Button15 = 365,
__Joystick1Button16 = 366,
__Joystick1Button17 = 367,
__Joystick1Button18 = 368,
__Joystick1Button19 = 369,
__Joystick2Button0 = 370,
__Joystick2Button1 = 371,
__Joystick2Button2 = 372,
__Joystick2Button3 = 373,
__Joystick2Button4 = 374,
__Joystick2Button5 = 375,
__Joystick2Button6 = 376,
__Joystick2Button7 = 377,
__Joystick2Button8 = 378,
__Joystick2Button9 = 379,
__Joystick2Button10 = 380,
__Joystick2Button11 = 381,
__Joystick2Button12 = 382,
__Joystick2Button13 = 383,
__Joystick2Button14 = 384,
__Joystick2Button15 = 385,
__Joystick2Button16 = 386,
__Joystick2Button17 = 387,
__Joystick2Button18 = 388,
__Joystick2Button19 = 389,
__Joystick3Button0 = 390,
__Joystick3Button1 = 391,
__Joystick3Button2 = 392,
__Joystick3Button3 = 393,
__Joystick3Button4 = 394,
__Joystick3Button5 = 395,
__Joystick3Button6 = 396,
__Joystick3Button7 = 397,
__Joystick3Button8 = 398,
__Joystick3Button9 = 399,
__Joystick3Button10 = 400,
__Joystick3Button11 = 401,
__Joystick3Button12 = 402,
__Joystick3Button13 = 403,
__Joystick3Button14 = 404,
__Joystick3Button15 = 405,
__Joystick3Button16 = 406,
__Joystick3Button17 = 407,
__Joystick3Button18 = 408,
__Joystick3Button19 = 409,
__Joystick4Button0 = 410,
__Joystick4Button1 = 411,
__Joystick4Button2 = 412,
__Joystick4Button3 = 413,
__Joystick4Button4 = 414,
__Joystick4Button5 = 415,
__Joystick4Button6 = 416,
__Joystick4Button7 = 417,
__Joystick4Button8 = 418,
__Joystick4Button9 = 419,
__Joystick4Button10 = 420,
__Joystick4Button11 = 421,
__Joystick4Button12 = 422,
__Joystick4Button13 = 423,
__Joystick4Button14 = 424,
__Joystick4Button15 = 425,
__Joystick4Button16 = 426,
__Joystick4Button17 = 427,
__Joystick4Button18 = 428,
__Joystick4Button19 = 429,
__Joystick5Button0 = 430,
__Joystick5Button1 = 431,
__Joystick5Button2 = 432,
__Joystick5Button3 = 433,
__Joystick5Button4 = 434,
__Joystick5Button5 = 435,
__Joystick5Button6 = 436,
__Joystick5Button7 = 437,
__Joystick5Button8 = 438,
__Joystick5Button9 = 439,
__Joystick5Button10 = 440,
__Joystick5Button11 = 441,
__Joystick5Button12 = 442,
__Joystick5Button13 = 443,
__Joystick5Button14 = 444,
__Joystick5Button15 = 445,
__Joystick5Button16 = 446,
__Joystick5Button17 = 447,
__Joystick5Button18 = 448,
__Joystick5Button19 = 449,
__Joystick6Button0 = 450,
__Joystick6Button1 = 451,
__Joystick6Button2 = 452,
__Joystick6Button3 = 453,
__Joystick6Button4 = 454,
__Joystick6Button5 = 455,
__Joystick6Button6 = 456,
__Joystick6Button7 = 457,
__Joystick6Button8 = 458,
__Joystick6Button9 = 459,
__Joystick6Button10 = 460,
__Joystick6Button11 = 461,
__Joystick6Button12 = 462,
__Joystick6Button13 = 463,
__Joystick6Button14 = 464,
__Joystick6Button15 = 465,
__Joystick6Button16 = 466,
__Joystick6Button17 = 467,
__Joystick6Button18 = 468,
__Joystick6Button19 = 469,
__Joystick7Button0 = 470,
__Joystick7Button1 = 471,
__Joystick7Button2 = 472,
__Joystick7Button3 = 473,
__Joystick7Button4 = 474,
__Joystick7Button5 = 475,
__Joystick7Button6 = 476,
__Joystick7Button7 = 477,
__Joystick7Button8 = 478,
__Joystick7Button9 = 479,
__Joystick7Button10 = 480,
__Joystick7Button11 = 481,
__Joystick7Button12 = 482,
__Joystick7Button13 = 483,
__Joystick7Button14 = 484,
__Joystick7Button15 = 485,
__Joystick7Button16 = 486,
__Joystick7Button17 = 487,
__Joystick7Button18 = 488,
__Joystick7Button19 = 489,
__Joystick8Button0 = 490,
__Joystick8Button1 = 491,
__Joystick8Button2 = 492,
__Joystick8Button3 = 493,
__Joystick8Button4 = 494,
__Joystick8Button5 = 495,
__Joystick8Button6 = 496,
__Joystick8Button7 = 497,
__Joystick8Button8 = 498,
__Joystick8Button9 = 499,
__Joystick8Button10 = 500,
__Joystick8Button11 = 501,
__Joystick8Button12 = 502,
__Joystick8Button13 = 503,
__Joystick8Button14 = 504,
__Joystick8Button15 = 505,
__Joystick8Button16 = 506,
__Joystick8Button17 = 507,
__Joystick8Button18 = 508,
__Joystick8Button19 = 509,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __KeyCode_Unwrapped () const noexcept {
return std::bit_cast<__KeyCode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::KeyCode const None;

/// @brief Field Backspace offset 0
static UnityEngine::KeyCode const Backspace;

/// @brief Field Delete offset 0
static UnityEngine::KeyCode const Delete;

/// @brief Field Tab offset 0
static UnityEngine::KeyCode const Tab;

/// @brief Field Clear offset 0
static UnityEngine::KeyCode const Clear;

/// @brief Field Return offset 0
static UnityEngine::KeyCode const Return;

/// @brief Field Pause offset 0
static UnityEngine::KeyCode const Pause;

/// @brief Field Escape offset 0
static UnityEngine::KeyCode const Escape;

/// @brief Field Space offset 0
static UnityEngine::KeyCode const Space;

/// @brief Field Keypad0 offset 0
static UnityEngine::KeyCode const Keypad0;

/// @brief Field Keypad1 offset 0
static UnityEngine::KeyCode const Keypad1;

/// @brief Field Keypad2 offset 0
static UnityEngine::KeyCode const Keypad2;

/// @brief Field Keypad3 offset 0
static UnityEngine::KeyCode const Keypad3;

/// @brief Field Keypad4 offset 0
static UnityEngine::KeyCode const Keypad4;

/// @brief Field Keypad5 offset 0
static UnityEngine::KeyCode const Keypad5;

/// @brief Field Keypad6 offset 0
static UnityEngine::KeyCode const Keypad6;

/// @brief Field Keypad7 offset 0
static UnityEngine::KeyCode const Keypad7;

/// @brief Field Keypad8 offset 0
static UnityEngine::KeyCode const Keypad8;

/// @brief Field Keypad9 offset 0
static UnityEngine::KeyCode const Keypad9;

/// @brief Field KeypadPeriod offset 0
static UnityEngine::KeyCode const KeypadPeriod;

/// @brief Field KeypadDivide offset 0
static UnityEngine::KeyCode const KeypadDivide;

/// @brief Field KeypadMultiply offset 0
static UnityEngine::KeyCode const KeypadMultiply;

/// @brief Field KeypadMinus offset 0
static UnityEngine::KeyCode const KeypadMinus;

/// @brief Field KeypadPlus offset 0
static UnityEngine::KeyCode const KeypadPlus;

/// @brief Field KeypadEnter offset 0
static UnityEngine::KeyCode const KeypadEnter;

/// @brief Field KeypadEquals offset 0
static UnityEngine::KeyCode const KeypadEquals;

/// @brief Field UpArrow offset 0
static UnityEngine::KeyCode const UpArrow;

/// @brief Field DownArrow offset 0
static UnityEngine::KeyCode const DownArrow;

/// @brief Field RightArrow offset 0
static UnityEngine::KeyCode const RightArrow;

/// @brief Field LeftArrow offset 0
static UnityEngine::KeyCode const LeftArrow;

/// @brief Field Insert offset 0
static UnityEngine::KeyCode const Insert;

/// @brief Field Home offset 0
static UnityEngine::KeyCode const Home;

/// @brief Field End offset 0
static UnityEngine::KeyCode const End;

/// @brief Field PageUp offset 0
static UnityEngine::KeyCode const PageUp;

/// @brief Field PageDown offset 0
static UnityEngine::KeyCode const PageDown;

/// @brief Field F1 offset 0
static UnityEngine::KeyCode const F1;

/// @brief Field F2 offset 0
static UnityEngine::KeyCode const F2;

/// @brief Field F3 offset 0
static UnityEngine::KeyCode const F3;

/// @brief Field F4 offset 0
static UnityEngine::KeyCode const F4;

/// @brief Field F5 offset 0
static UnityEngine::KeyCode const F5;

/// @brief Field F6 offset 0
static UnityEngine::KeyCode const F6;

/// @brief Field F7 offset 0
static UnityEngine::KeyCode const F7;

/// @brief Field F8 offset 0
static UnityEngine::KeyCode const F8;

/// @brief Field F9 offset 0
static UnityEngine::KeyCode const F9;

/// @brief Field F10 offset 0
static UnityEngine::KeyCode const F10;

/// @brief Field F11 offset 0
static UnityEngine::KeyCode const F11;

/// @brief Field F12 offset 0
static UnityEngine::KeyCode const F12;

/// @brief Field F13 offset 0
static UnityEngine::KeyCode const F13;

/// @brief Field F14 offset 0
static UnityEngine::KeyCode const F14;

/// @brief Field F15 offset 0
static UnityEngine::KeyCode const F15;

/// @brief Field Alpha0 offset 0
static UnityEngine::KeyCode const Alpha0;

/// @brief Field Alpha1 offset 0
static UnityEngine::KeyCode const Alpha1;

/// @brief Field Alpha2 offset 0
static UnityEngine::KeyCode const Alpha2;

/// @brief Field Alpha3 offset 0
static UnityEngine::KeyCode const Alpha3;

/// @brief Field Alpha4 offset 0
static UnityEngine::KeyCode const Alpha4;

/// @brief Field Alpha5 offset 0
static UnityEngine::KeyCode const Alpha5;

/// @brief Field Alpha6 offset 0
static UnityEngine::KeyCode const Alpha6;

/// @brief Field Alpha7 offset 0
static UnityEngine::KeyCode const Alpha7;

/// @brief Field Alpha8 offset 0
static UnityEngine::KeyCode const Alpha8;

/// @brief Field Alpha9 offset 0
static UnityEngine::KeyCode const Alpha9;

/// @brief Field Exclaim offset 0
static UnityEngine::KeyCode const Exclaim;

/// @brief Field DoubleQuote offset 0
static UnityEngine::KeyCode const DoubleQuote;

/// @brief Field Hash offset 0
static UnityEngine::KeyCode const Hash;

/// @brief Field Dollar offset 0
static UnityEngine::KeyCode const Dollar;

/// @brief Field Percent offset 0
static UnityEngine::KeyCode const Percent;

/// @brief Field Ampersand offset 0
static UnityEngine::KeyCode const Ampersand;

/// @brief Field Quote offset 0
static UnityEngine::KeyCode const Quote;

/// @brief Field LeftParen offset 0
static UnityEngine::KeyCode const LeftParen;

/// @brief Field RightParen offset 0
static UnityEngine::KeyCode const RightParen;

/// @brief Field Asterisk offset 0
static UnityEngine::KeyCode const Asterisk;

/// @brief Field Plus offset 0
static UnityEngine::KeyCode const Plus;

/// @brief Field Comma offset 0
static UnityEngine::KeyCode const Comma;

/// @brief Field Minus offset 0
static UnityEngine::KeyCode const Minus;

/// @brief Field Period offset 0
static UnityEngine::KeyCode const Period;

/// @brief Field Slash offset 0
static UnityEngine::KeyCode const Slash;

/// @brief Field Colon offset 0
static UnityEngine::KeyCode const Colon;

/// @brief Field Semicolon offset 0
static UnityEngine::KeyCode const Semicolon;

/// @brief Field Less offset 0
static UnityEngine::KeyCode const Less;

/// @brief Field Equals offset 0
static UnityEngine::KeyCode const Equals;

/// @brief Field Greater offset 0
static UnityEngine::KeyCode const Greater;

/// @brief Field Question offset 0
static UnityEngine::KeyCode const Question;

/// @brief Field At offset 0
static UnityEngine::KeyCode const At;

/// @brief Field LeftBracket offset 0
static UnityEngine::KeyCode const LeftBracket;

/// @brief Field Backslash offset 0
static UnityEngine::KeyCode const Backslash;

/// @brief Field RightBracket offset 0
static UnityEngine::KeyCode const RightBracket;

/// @brief Field Caret offset 0
static UnityEngine::KeyCode const Caret;

/// @brief Field Underscore offset 0
static UnityEngine::KeyCode const Underscore;

/// @brief Field BackQuote offset 0
static UnityEngine::KeyCode const BackQuote;

/// @brief Field A offset 0
static UnityEngine::KeyCode const A;

/// @brief Field B offset 0
static UnityEngine::KeyCode const B;

/// @brief Field C offset 0
static UnityEngine::KeyCode const C;

/// @brief Field D offset 0
static UnityEngine::KeyCode const D;

/// @brief Field E offset 0
static UnityEngine::KeyCode const E;

/// @brief Field F offset 0
static UnityEngine::KeyCode const F;

/// @brief Field G offset 0
static UnityEngine::KeyCode const G;

/// @brief Field H offset 0
static UnityEngine::KeyCode const H;

/// @brief Field I offset 0
static UnityEngine::KeyCode const I;

/// @brief Field J offset 0
static UnityEngine::KeyCode const J;

/// @brief Field K offset 0
static UnityEngine::KeyCode const K;

/// @brief Field L offset 0
static UnityEngine::KeyCode const L;

/// @brief Field M offset 0
static UnityEngine::KeyCode const M;

/// @brief Field N offset 0
static UnityEngine::KeyCode const N;

/// @brief Field O offset 0
static UnityEngine::KeyCode const O;

/// @brief Field P offset 0
static UnityEngine::KeyCode const P;

/// @brief Field Q offset 0
static UnityEngine::KeyCode const Q;

/// @brief Field R offset 0
static UnityEngine::KeyCode const R;

/// @brief Field S offset 0
static UnityEngine::KeyCode const S;

/// @brief Field T offset 0
static UnityEngine::KeyCode const T;

/// @brief Field U offset 0
static UnityEngine::KeyCode const U;

/// @brief Field V offset 0
static UnityEngine::KeyCode const V;

/// @brief Field W offset 0
static UnityEngine::KeyCode const W;

/// @brief Field X offset 0
static UnityEngine::KeyCode const X;

/// @brief Field Y offset 0
static UnityEngine::KeyCode const Y;

/// @brief Field Z offset 0
static UnityEngine::KeyCode const Z;

/// @brief Field LeftCurlyBracket offset 0
static UnityEngine::KeyCode const LeftCurlyBracket;

/// @brief Field Pipe offset 0
static UnityEngine::KeyCode const Pipe;

/// @brief Field RightCurlyBracket offset 0
static UnityEngine::KeyCode const RightCurlyBracket;

/// @brief Field Tilde offset 0
static UnityEngine::KeyCode const Tilde;

/// @brief Field Numlock offset 0
static UnityEngine::KeyCode const Numlock;

/// @brief Field CapsLock offset 0
static UnityEngine::KeyCode const CapsLock;

/// @brief Field ScrollLock offset 0
static UnityEngine::KeyCode const ScrollLock;

/// @brief Field RightShift offset 0
static UnityEngine::KeyCode const RightShift;

/// @brief Field LeftShift offset 0
static UnityEngine::KeyCode const LeftShift;

/// @brief Field RightControl offset 0
static UnityEngine::KeyCode const RightControl;

/// @brief Field LeftControl offset 0
static UnityEngine::KeyCode const LeftControl;

/// @brief Field RightAlt offset 0
static UnityEngine::KeyCode const RightAlt;

/// @brief Field LeftAlt offset 0
static UnityEngine::KeyCode const LeftAlt;

/// @brief Field LeftMeta offset 0
static UnityEngine::KeyCode const LeftMeta;

/// @brief Field LeftCommand offset 0
static UnityEngine::KeyCode const LeftCommand;

/// @brief Field LeftApple offset 0
static UnityEngine::KeyCode const LeftApple;

/// @brief Field LeftWindows offset 0
static UnityEngine::KeyCode const LeftWindows;

/// @brief Field RightMeta offset 0
static UnityEngine::KeyCode const RightMeta;

/// @brief Field RightCommand offset 0
static UnityEngine::KeyCode const RightCommand;

/// @brief Field RightApple offset 0
static UnityEngine::KeyCode const RightApple;

/// @brief Field RightWindows offset 0
static UnityEngine::KeyCode const RightWindows;

/// @brief Field AltGr offset 0
static UnityEngine::KeyCode const AltGr;

/// @brief Field Help offset 0
static UnityEngine::KeyCode const Help;

/// @brief Field Print offset 0
static UnityEngine::KeyCode const Print;

/// @brief Field SysReq offset 0
static UnityEngine::KeyCode const SysReq;

/// @brief Field Break offset 0
static UnityEngine::KeyCode const Break;

/// @brief Field Menu offset 0
static UnityEngine::KeyCode const Menu;

/// @brief Field Mouse0 offset 0
static UnityEngine::KeyCode const Mouse0;

/// @brief Field Mouse1 offset 0
static UnityEngine::KeyCode const Mouse1;

/// @brief Field Mouse2 offset 0
static UnityEngine::KeyCode const Mouse2;

/// @brief Field Mouse3 offset 0
static UnityEngine::KeyCode const Mouse3;

/// @brief Field Mouse4 offset 0
static UnityEngine::KeyCode const Mouse4;

/// @brief Field Mouse5 offset 0
static UnityEngine::KeyCode const Mouse5;

/// @brief Field Mouse6 offset 0
static UnityEngine::KeyCode const Mouse6;

/// @brief Field JoystickButton0 offset 0
static UnityEngine::KeyCode const JoystickButton0;

/// @brief Field JoystickButton1 offset 0
static UnityEngine::KeyCode const JoystickButton1;

/// @brief Field JoystickButton2 offset 0
static UnityEngine::KeyCode const JoystickButton2;

/// @brief Field JoystickButton3 offset 0
static UnityEngine::KeyCode const JoystickButton3;

/// @brief Field JoystickButton4 offset 0
static UnityEngine::KeyCode const JoystickButton4;

/// @brief Field JoystickButton5 offset 0
static UnityEngine::KeyCode const JoystickButton5;

/// @brief Field JoystickButton6 offset 0
static UnityEngine::KeyCode const JoystickButton6;

/// @brief Field JoystickButton7 offset 0
static UnityEngine::KeyCode const JoystickButton7;

/// @brief Field JoystickButton8 offset 0
static UnityEngine::KeyCode const JoystickButton8;

/// @brief Field JoystickButton9 offset 0
static UnityEngine::KeyCode const JoystickButton9;

/// @brief Field JoystickButton10 offset 0
static UnityEngine::KeyCode const JoystickButton10;

/// @brief Field JoystickButton11 offset 0
static UnityEngine::KeyCode const JoystickButton11;

/// @brief Field JoystickButton12 offset 0
static UnityEngine::KeyCode const JoystickButton12;

/// @brief Field JoystickButton13 offset 0
static UnityEngine::KeyCode const JoystickButton13;

/// @brief Field JoystickButton14 offset 0
static UnityEngine::KeyCode const JoystickButton14;

/// @brief Field JoystickButton15 offset 0
static UnityEngine::KeyCode const JoystickButton15;

/// @brief Field JoystickButton16 offset 0
static UnityEngine::KeyCode const JoystickButton16;

/// @brief Field JoystickButton17 offset 0
static UnityEngine::KeyCode const JoystickButton17;

/// @brief Field JoystickButton18 offset 0
static UnityEngine::KeyCode const JoystickButton18;

/// @brief Field JoystickButton19 offset 0
static UnityEngine::KeyCode const JoystickButton19;

/// @brief Field Joystick1Button0 offset 0
static UnityEngine::KeyCode const Joystick1Button0;

/// @brief Field Joystick1Button1 offset 0
static UnityEngine::KeyCode const Joystick1Button1;

/// @brief Field Joystick1Button2 offset 0
static UnityEngine::KeyCode const Joystick1Button2;

/// @brief Field Joystick1Button3 offset 0
static UnityEngine::KeyCode const Joystick1Button3;

/// @brief Field Joystick1Button4 offset 0
static UnityEngine::KeyCode const Joystick1Button4;

/// @brief Field Joystick1Button5 offset 0
static UnityEngine::KeyCode const Joystick1Button5;

/// @brief Field Joystick1Button6 offset 0
static UnityEngine::KeyCode const Joystick1Button6;

/// @brief Field Joystick1Button7 offset 0
static UnityEngine::KeyCode const Joystick1Button7;

/// @brief Field Joystick1Button8 offset 0
static UnityEngine::KeyCode const Joystick1Button8;

/// @brief Field Joystick1Button9 offset 0
static UnityEngine::KeyCode const Joystick1Button9;

/// @brief Field Joystick1Button10 offset 0
static UnityEngine::KeyCode const Joystick1Button10;

/// @brief Field Joystick1Button11 offset 0
static UnityEngine::KeyCode const Joystick1Button11;

/// @brief Field Joystick1Button12 offset 0
static UnityEngine::KeyCode const Joystick1Button12;

/// @brief Field Joystick1Button13 offset 0
static UnityEngine::KeyCode const Joystick1Button13;

/// @brief Field Joystick1Button14 offset 0
static UnityEngine::KeyCode const Joystick1Button14;

/// @brief Field Joystick1Button15 offset 0
static UnityEngine::KeyCode const Joystick1Button15;

/// @brief Field Joystick1Button16 offset 0
static UnityEngine::KeyCode const Joystick1Button16;

/// @brief Field Joystick1Button17 offset 0
static UnityEngine::KeyCode const Joystick1Button17;

/// @brief Field Joystick1Button18 offset 0
static UnityEngine::KeyCode const Joystick1Button18;

/// @brief Field Joystick1Button19 offset 0
static UnityEngine::KeyCode const Joystick1Button19;

/// @brief Field Joystick2Button0 offset 0
static UnityEngine::KeyCode const Joystick2Button0;

/// @brief Field Joystick2Button1 offset 0
static UnityEngine::KeyCode const Joystick2Button1;

/// @brief Field Joystick2Button2 offset 0
static UnityEngine::KeyCode const Joystick2Button2;

/// @brief Field Joystick2Button3 offset 0
static UnityEngine::KeyCode const Joystick2Button3;

/// @brief Field Joystick2Button4 offset 0
static UnityEngine::KeyCode const Joystick2Button4;

/// @brief Field Joystick2Button5 offset 0
static UnityEngine::KeyCode const Joystick2Button5;

/// @brief Field Joystick2Button6 offset 0
static UnityEngine::KeyCode const Joystick2Button6;

/// @brief Field Joystick2Button7 offset 0
static UnityEngine::KeyCode const Joystick2Button7;

/// @brief Field Joystick2Button8 offset 0
static UnityEngine::KeyCode const Joystick2Button8;

/// @brief Field Joystick2Button9 offset 0
static UnityEngine::KeyCode const Joystick2Button9;

/// @brief Field Joystick2Button10 offset 0
static UnityEngine::KeyCode const Joystick2Button10;

/// @brief Field Joystick2Button11 offset 0
static UnityEngine::KeyCode const Joystick2Button11;

/// @brief Field Joystick2Button12 offset 0
static UnityEngine::KeyCode const Joystick2Button12;

/// @brief Field Joystick2Button13 offset 0
static UnityEngine::KeyCode const Joystick2Button13;

/// @brief Field Joystick2Button14 offset 0
static UnityEngine::KeyCode const Joystick2Button14;

/// @brief Field Joystick2Button15 offset 0
static UnityEngine::KeyCode const Joystick2Button15;

/// @brief Field Joystick2Button16 offset 0
static UnityEngine::KeyCode const Joystick2Button16;

/// @brief Field Joystick2Button17 offset 0
static UnityEngine::KeyCode const Joystick2Button17;

/// @brief Field Joystick2Button18 offset 0
static UnityEngine::KeyCode const Joystick2Button18;

/// @brief Field Joystick2Button19 offset 0
static UnityEngine::KeyCode const Joystick2Button19;

/// @brief Field Joystick3Button0 offset 0
static UnityEngine::KeyCode const Joystick3Button0;

/// @brief Field Joystick3Button1 offset 0
static UnityEngine::KeyCode const Joystick3Button1;

/// @brief Field Joystick3Button2 offset 0
static UnityEngine::KeyCode const Joystick3Button2;

/// @brief Field Joystick3Button3 offset 0
static UnityEngine::KeyCode const Joystick3Button3;

/// @brief Field Joystick3Button4 offset 0
static UnityEngine::KeyCode const Joystick3Button4;

/// @brief Field Joystick3Button5 offset 0
static UnityEngine::KeyCode const Joystick3Button5;

/// @brief Field Joystick3Button6 offset 0
static UnityEngine::KeyCode const Joystick3Button6;

/// @brief Field Joystick3Button7 offset 0
static UnityEngine::KeyCode const Joystick3Button7;

/// @brief Field Joystick3Button8 offset 0
static UnityEngine::KeyCode const Joystick3Button8;

/// @brief Field Joystick3Button9 offset 0
static UnityEngine::KeyCode const Joystick3Button9;

/// @brief Field Joystick3Button10 offset 0
static UnityEngine::KeyCode const Joystick3Button10;

/// @brief Field Joystick3Button11 offset 0
static UnityEngine::KeyCode const Joystick3Button11;

/// @brief Field Joystick3Button12 offset 0
static UnityEngine::KeyCode const Joystick3Button12;

/// @brief Field Joystick3Button13 offset 0
static UnityEngine::KeyCode const Joystick3Button13;

/// @brief Field Joystick3Button14 offset 0
static UnityEngine::KeyCode const Joystick3Button14;

/// @brief Field Joystick3Button15 offset 0
static UnityEngine::KeyCode const Joystick3Button15;

/// @brief Field Joystick3Button16 offset 0
static UnityEngine::KeyCode const Joystick3Button16;

/// @brief Field Joystick3Button17 offset 0
static UnityEngine::KeyCode const Joystick3Button17;

/// @brief Field Joystick3Button18 offset 0
static UnityEngine::KeyCode const Joystick3Button18;

/// @brief Field Joystick3Button19 offset 0
static UnityEngine::KeyCode const Joystick3Button19;

/// @brief Field Joystick4Button0 offset 0
static UnityEngine::KeyCode const Joystick4Button0;

/// @brief Field Joystick4Button1 offset 0
static UnityEngine::KeyCode const Joystick4Button1;

/// @brief Field Joystick4Button2 offset 0
static UnityEngine::KeyCode const Joystick4Button2;

/// @brief Field Joystick4Button3 offset 0
static UnityEngine::KeyCode const Joystick4Button3;

/// @brief Field Joystick4Button4 offset 0
static UnityEngine::KeyCode const Joystick4Button4;

/// @brief Field Joystick4Button5 offset 0
static UnityEngine::KeyCode const Joystick4Button5;

/// @brief Field Joystick4Button6 offset 0
static UnityEngine::KeyCode const Joystick4Button6;

/// @brief Field Joystick4Button7 offset 0
static UnityEngine::KeyCode const Joystick4Button7;

/// @brief Field Joystick4Button8 offset 0
static UnityEngine::KeyCode const Joystick4Button8;

/// @brief Field Joystick4Button9 offset 0
static UnityEngine::KeyCode const Joystick4Button9;

/// @brief Field Joystick4Button10 offset 0
static UnityEngine::KeyCode const Joystick4Button10;

/// @brief Field Joystick4Button11 offset 0
static UnityEngine::KeyCode const Joystick4Button11;

/// @brief Field Joystick4Button12 offset 0
static UnityEngine::KeyCode const Joystick4Button12;

/// @brief Field Joystick4Button13 offset 0
static UnityEngine::KeyCode const Joystick4Button13;

/// @brief Field Joystick4Button14 offset 0
static UnityEngine::KeyCode const Joystick4Button14;

/// @brief Field Joystick4Button15 offset 0
static UnityEngine::KeyCode const Joystick4Button15;

/// @brief Field Joystick4Button16 offset 0
static UnityEngine::KeyCode const Joystick4Button16;

/// @brief Field Joystick4Button17 offset 0
static UnityEngine::KeyCode const Joystick4Button17;

/// @brief Field Joystick4Button18 offset 0
static UnityEngine::KeyCode const Joystick4Button18;

/// @brief Field Joystick4Button19 offset 0
static UnityEngine::KeyCode const Joystick4Button19;

/// @brief Field Joystick5Button0 offset 0
static UnityEngine::KeyCode const Joystick5Button0;

/// @brief Field Joystick5Button1 offset 0
static UnityEngine::KeyCode const Joystick5Button1;

/// @brief Field Joystick5Button2 offset 0
static UnityEngine::KeyCode const Joystick5Button2;

/// @brief Field Joystick5Button3 offset 0
static UnityEngine::KeyCode const Joystick5Button3;

/// @brief Field Joystick5Button4 offset 0
static UnityEngine::KeyCode const Joystick5Button4;

/// @brief Field Joystick5Button5 offset 0
static UnityEngine::KeyCode const Joystick5Button5;

/// @brief Field Joystick5Button6 offset 0
static UnityEngine::KeyCode const Joystick5Button6;

/// @brief Field Joystick5Button7 offset 0
static UnityEngine::KeyCode const Joystick5Button7;

/// @brief Field Joystick5Button8 offset 0
static UnityEngine::KeyCode const Joystick5Button8;

/// @brief Field Joystick5Button9 offset 0
static UnityEngine::KeyCode const Joystick5Button9;

/// @brief Field Joystick5Button10 offset 0
static UnityEngine::KeyCode const Joystick5Button10;

/// @brief Field Joystick5Button11 offset 0
static UnityEngine::KeyCode const Joystick5Button11;

/// @brief Field Joystick5Button12 offset 0
static UnityEngine::KeyCode const Joystick5Button12;

/// @brief Field Joystick5Button13 offset 0
static UnityEngine::KeyCode const Joystick5Button13;

/// @brief Field Joystick5Button14 offset 0
static UnityEngine::KeyCode const Joystick5Button14;

/// @brief Field Joystick5Button15 offset 0
static UnityEngine::KeyCode const Joystick5Button15;

/// @brief Field Joystick5Button16 offset 0
static UnityEngine::KeyCode const Joystick5Button16;

/// @brief Field Joystick5Button17 offset 0
static UnityEngine::KeyCode const Joystick5Button17;

/// @brief Field Joystick5Button18 offset 0
static UnityEngine::KeyCode const Joystick5Button18;

/// @brief Field Joystick5Button19 offset 0
static UnityEngine::KeyCode const Joystick5Button19;

/// @brief Field Joystick6Button0 offset 0
static UnityEngine::KeyCode const Joystick6Button0;

/// @brief Field Joystick6Button1 offset 0
static UnityEngine::KeyCode const Joystick6Button1;

/// @brief Field Joystick6Button2 offset 0
static UnityEngine::KeyCode const Joystick6Button2;

/// @brief Field Joystick6Button3 offset 0
static UnityEngine::KeyCode const Joystick6Button3;

/// @brief Field Joystick6Button4 offset 0
static UnityEngine::KeyCode const Joystick6Button4;

/// @brief Field Joystick6Button5 offset 0
static UnityEngine::KeyCode const Joystick6Button5;

/// @brief Field Joystick6Button6 offset 0
static UnityEngine::KeyCode const Joystick6Button6;

/// @brief Field Joystick6Button7 offset 0
static UnityEngine::KeyCode const Joystick6Button7;

/// @brief Field Joystick6Button8 offset 0
static UnityEngine::KeyCode const Joystick6Button8;

/// @brief Field Joystick6Button9 offset 0
static UnityEngine::KeyCode const Joystick6Button9;

/// @brief Field Joystick6Button10 offset 0
static UnityEngine::KeyCode const Joystick6Button10;

/// @brief Field Joystick6Button11 offset 0
static UnityEngine::KeyCode const Joystick6Button11;

/// @brief Field Joystick6Button12 offset 0
static UnityEngine::KeyCode const Joystick6Button12;

/// @brief Field Joystick6Button13 offset 0
static UnityEngine::KeyCode const Joystick6Button13;

/// @brief Field Joystick6Button14 offset 0
static UnityEngine::KeyCode const Joystick6Button14;

/// @brief Field Joystick6Button15 offset 0
static UnityEngine::KeyCode const Joystick6Button15;

/// @brief Field Joystick6Button16 offset 0
static UnityEngine::KeyCode const Joystick6Button16;

/// @brief Field Joystick6Button17 offset 0
static UnityEngine::KeyCode const Joystick6Button17;

/// @brief Field Joystick6Button18 offset 0
static UnityEngine::KeyCode const Joystick6Button18;

/// @brief Field Joystick6Button19 offset 0
static UnityEngine::KeyCode const Joystick6Button19;

/// @brief Field Joystick7Button0 offset 0
static UnityEngine::KeyCode const Joystick7Button0;

/// @brief Field Joystick7Button1 offset 0
static UnityEngine::KeyCode const Joystick7Button1;

/// @brief Field Joystick7Button2 offset 0
static UnityEngine::KeyCode const Joystick7Button2;

/// @brief Field Joystick7Button3 offset 0
static UnityEngine::KeyCode const Joystick7Button3;

/// @brief Field Joystick7Button4 offset 0
static UnityEngine::KeyCode const Joystick7Button4;

/// @brief Field Joystick7Button5 offset 0
static UnityEngine::KeyCode const Joystick7Button5;

/// @brief Field Joystick7Button6 offset 0
static UnityEngine::KeyCode const Joystick7Button6;

/// @brief Field Joystick7Button7 offset 0
static UnityEngine::KeyCode const Joystick7Button7;

/// @brief Field Joystick7Button8 offset 0
static UnityEngine::KeyCode const Joystick7Button8;

/// @brief Field Joystick7Button9 offset 0
static UnityEngine::KeyCode const Joystick7Button9;

/// @brief Field Joystick7Button10 offset 0
static UnityEngine::KeyCode const Joystick7Button10;

/// @brief Field Joystick7Button11 offset 0
static UnityEngine::KeyCode const Joystick7Button11;

/// @brief Field Joystick7Button12 offset 0
static UnityEngine::KeyCode const Joystick7Button12;

/// @brief Field Joystick7Button13 offset 0
static UnityEngine::KeyCode const Joystick7Button13;

/// @brief Field Joystick7Button14 offset 0
static UnityEngine::KeyCode const Joystick7Button14;

/// @brief Field Joystick7Button15 offset 0
static UnityEngine::KeyCode const Joystick7Button15;

/// @brief Field Joystick7Button16 offset 0
static UnityEngine::KeyCode const Joystick7Button16;

/// @brief Field Joystick7Button17 offset 0
static UnityEngine::KeyCode const Joystick7Button17;

/// @brief Field Joystick7Button18 offset 0
static UnityEngine::KeyCode const Joystick7Button18;

/// @brief Field Joystick7Button19 offset 0
static UnityEngine::KeyCode const Joystick7Button19;

/// @brief Field Joystick8Button0 offset 0
static UnityEngine::KeyCode const Joystick8Button0;

/// @brief Field Joystick8Button1 offset 0
static UnityEngine::KeyCode const Joystick8Button1;

/// @brief Field Joystick8Button2 offset 0
static UnityEngine::KeyCode const Joystick8Button2;

/// @brief Field Joystick8Button3 offset 0
static UnityEngine::KeyCode const Joystick8Button3;

/// @brief Field Joystick8Button4 offset 0
static UnityEngine::KeyCode const Joystick8Button4;

/// @brief Field Joystick8Button5 offset 0
static UnityEngine::KeyCode const Joystick8Button5;

/// @brief Field Joystick8Button6 offset 0
static UnityEngine::KeyCode const Joystick8Button6;

/// @brief Field Joystick8Button7 offset 0
static UnityEngine::KeyCode const Joystick8Button7;

/// @brief Field Joystick8Button8 offset 0
static UnityEngine::KeyCode const Joystick8Button8;

/// @brief Field Joystick8Button9 offset 0
static UnityEngine::KeyCode const Joystick8Button9;

/// @brief Field Joystick8Button10 offset 0
static UnityEngine::KeyCode const Joystick8Button10;

/// @brief Field Joystick8Button11 offset 0
static UnityEngine::KeyCode const Joystick8Button11;

/// @brief Field Joystick8Button12 offset 0
static UnityEngine::KeyCode const Joystick8Button12;

/// @brief Field Joystick8Button13 offset 0
static UnityEngine::KeyCode const Joystick8Button13;

/// @brief Field Joystick8Button14 offset 0
static UnityEngine::KeyCode const Joystick8Button14;

/// @brief Field Joystick8Button15 offset 0
static UnityEngine::KeyCode const Joystick8Button15;

/// @brief Field Joystick8Button16 offset 0
static UnityEngine::KeyCode const Joystick8Button16;

/// @brief Field Joystick8Button17 offset 0
static UnityEngine::KeyCode const Joystick8Button17;

/// @brief Field Joystick8Button18 offset 0
static UnityEngine::KeyCode const Joystick8Button18;

/// @brief Field Joystick8Button19 offset 0
static UnityEngine::KeyCode const Joystick8Button19;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::KeyCode, "UnityEngine", "KeyCode");
