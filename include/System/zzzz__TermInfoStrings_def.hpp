#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System {
struct TermInfoStrings;
}
// Type: System::TermInfoStrings
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2625))
// CS Name: System.TermInfoStrings
struct CORDL_TYPE TermInfoStrings : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TermInfoStrings(int32_t value__) noexcept;


                    constexpr TermInfoStrings(TermInfoStrings const&) = default;
                    constexpr TermInfoStrings(TermInfoStrings&&) = default;
                    constexpr TermInfoStrings& operator=(TermInfoStrings const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TermInfoStrings& operator=(TermInfoStrings&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TermInfoStrings(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TermInfoStrings_Unwrapped : int32_t {
__BackTab = 0,
__Bell = 1,
__CarriageReturn = 2,
__ChangeScrollRegion = 3,
__ClearAllTabs = 4,
__ClearScreen = 5,
__ClrEol = 6,
__ClrEos = 7,
__ColumnAddress = 8,
__CommandCharacter = 9,
__CursorAddress = 10,
__CursorDown = 11,
__CursorHome = 12,
__CursorInvisible = 13,
__CursorLeft = 14,
__CursorMemAddress = 15,
__CursorNormal = 16,
__CursorRight = 17,
__CursorToLl = 18,
__CursorUp = 19,
__CursorVisible = 20,
__DeleteCharacter = 21,
__DeleteLine = 22,
__DisStatusLine = 23,
__DownHalfLine = 24,
__EnterAltCharsetMode = 25,
__EnterBlinkMode = 26,
__EnterBoldMode = 27,
__EnterCaMode = 28,
__EnterDeleteMode = 29,
__EnterDimMode = 30,
__EnterInsertMode = 31,
__EnterSecureMode = 32,
__EnterProtectedMode = 33,
__EnterReverseMode = 34,
__EnterStandoutMode = 35,
__EnterUnderlineMode = 36,
__EraseChars = 37,
__ExitAltCharsetMode = 38,
__ExitAttributeMode = 39,
__ExitCaMode = 40,
__ExitDeleteMode = 41,
__ExitInsertMode = 42,
__ExitStandoutMode = 43,
__ExitUnderlineMode = 44,
__FlashScreen = 45,
__FormFeed = 46,
__FromStatusLine = 47,
__Init1string = 48,
__Init2string = 49,
__Init3string = 50,
__InitFile = 51,
__InsertCharacter = 52,
__InsertLine = 53,
__InsertPadding = 54,
__KeyBackspace = 55,
__KeyCatab = 56,
__KeyClear = 57,
__KeyCtab = 58,
__KeyDc = 59,
__KeyDl = 60,
__KeyDown = 61,
__KeyEic = 62,
__KeyEol = 63,
__KeyEos = 64,
__KeyF0 = 65,
__KeyF1 = 66,
__KeyF10 = 67,
__KeyF2 = 68,
__KeyF3 = 69,
__KeyF4 = 70,
__KeyF5 = 71,
__KeyF6 = 72,
__KeyF7 = 73,
__KeyF8 = 74,
__KeyF9 = 75,
__KeyHome = 76,
__KeyIc = 77,
__KeyIl = 78,
__KeyLeft = 79,
__KeyLl = 80,
__KeyNpage = 81,
__KeyPpage = 82,
__KeyRight = 83,
__KeySf = 84,
__KeySr = 85,
__KeyStab = 86,
__KeyUp = 87,
__KeypadLocal = 88,
__KeypadXmit = 89,
__LabF0 = 90,
__LabF1 = 91,
__LabF10 = 92,
__LabF2 = 93,
__LabF3 = 94,
__LabF4 = 95,
__LabF5 = 96,
__LabF6 = 97,
__LabF7 = 98,
__LabF8 = 99,
__LabF9 = 100,
__MetaOff = 101,
__MetaOn = 102,
__Newline = 103,
__PadChar = 104,
__ParmDch = 105,
__ParmDeleteLine = 106,
__ParmDownCursor = 107,
__ParmIch = 108,
__ParmIndex = 109,
__ParmInsertLine = 110,
__ParmLeftCursor = 111,
__ParmRightCursor = 112,
__ParmRindex = 113,
__ParmUpCursor = 114,
__PkeyKey = 115,
__PkeyLocal = 116,
__PkeyXmit = 117,
__PrintScreen = 118,
__PrtrOff = 119,
__PrtrOn = 120,
__RepeatChar = 121,
__Reset1string = 122,
__Reset2string = 123,
__Reset3string = 124,
__ResetFile = 125,
__RestoreCursor = 126,
__RowAddress = 127,
__SaveCursor = 128,
__ScrollForward = 129,
__ScrollReverse = 130,
__SetAttributes = 131,
__SetTab = 132,
__SetWindow = 133,
__Tab = 134,
__ToStatusLine = 135,
__UnderlineChar = 136,
__UpHalfLine = 137,
__InitProg = 138,
__KeyA1 = 139,
__KeyA3 = 140,
__KeyB2 = 141,
__KeyC1 = 142,
__KeyC3 = 143,
__PrtrNon = 144,
__CharPadding = 145,
__AcsChars = 146,
__PlabNorm = 147,
__KeyBtab = 148,
__EnterXonMode = 149,
__ExitXonMode = 150,
__EnterAmMode = 151,
__ExitAmMode = 152,
__XonCharacter = 153,
__XoffCharacter = 154,
__EnaAcs = 155,
__LabelOn = 156,
__LabelOff = 157,
__KeyBeg = 158,
__KeyCancel = 159,
__KeyClose = 160,
__KeyCommand = 161,
__KeyCopy = 162,
__KeyCreate = 163,
__KeyEnd = 164,
__KeyEnter = 165,
__KeyExit = 166,
__KeyFind = 167,
__KeyHelp = 168,
__KeyMark = 169,
__KeyMessage = 170,
__KeyMove = 171,
__KeyNext = 172,
__KeyOpen = 173,
__KeyOptions = 174,
__KeyPrevious = 175,
__KeyPrint = 176,
__KeyRedo = 177,
__KeyReference = 178,
__KeyRefresh = 179,
__KeyReplace = 180,
__KeyRestart = 181,
__KeyResume = 182,
__KeySave = 183,
__KeySuspend = 184,
__KeyUndo = 185,
__KeySbeg = 186,
__KeyScancel = 187,
__KeyScommand = 188,
__KeyScopy = 189,
__KeyScreate = 190,
__KeySdc = 191,
__KeySdl = 192,
__KeySelect = 193,
__KeySend = 194,
__KeySeol = 195,
__KeySexit = 196,
__KeySfind = 197,
__KeyShelp = 198,
__KeyShome = 199,
__KeySic = 200,
__KeySleft = 201,
__KeySmessage = 202,
__KeySmove = 203,
__KeySnext = 204,
__KeySoptions = 205,
__KeySprevious = 206,
__KeySprint = 207,
__KeySredo = 208,
__KeySreplace = 209,
__KeySright = 210,
__KeySrsume = 211,
__KeySsave = 212,
__KeySsuspend = 213,
__KeySundo = 214,
__ReqForInput = 215,
__KeyF11 = 216,
__KeyF12 = 217,
__KeyF13 = 218,
__KeyF14 = 219,
__KeyF15 = 220,
__KeyF16 = 221,
__KeyF17 = 222,
__KeyF18 = 223,
__KeyF19 = 224,
__KeyF20 = 225,
__KeyF21 = 226,
__KeyF22 = 227,
__KeyF23 = 228,
__KeyF24 = 229,
__KeyF25 = 230,
__KeyF26 = 231,
__KeyF27 = 232,
__KeyF28 = 233,
__KeyF29 = 234,
__KeyF30 = 235,
__KeyF31 = 236,
__KeyF32 = 237,
__KeyF33 = 238,
__KeyF34 = 239,
__KeyF35 = 240,
__KeyF36 = 241,
__KeyF37 = 242,
__KeyF38 = 243,
__KeyF39 = 244,
__KeyF40 = 245,
__KeyF41 = 246,
__KeyF42 = 247,
__KeyF43 = 248,
__KeyF44 = 249,
__KeyF45 = 250,
__KeyF46 = 251,
__KeyF47 = 252,
__KeyF48 = 253,
__KeyF49 = 254,
__KeyF50 = 255,
__KeyF51 = 256,
__KeyF52 = 257,
__KeyF53 = 258,
__KeyF54 = 259,
__KeyF55 = 260,
__KeyF56 = 261,
__KeyF57 = 262,
__KeyF58 = 263,
__KeyF59 = 264,
__KeyF60 = 265,
__KeyF61 = 266,
__KeyF62 = 267,
__KeyF63 = 268,
__ClrBol = 269,
__ClearMargins = 270,
__SetLeftMargin = 271,
__SetRightMargin = 272,
__LabelFormat = 273,
__SetClock = 274,
__DisplayClock = 275,
__RemoveClock = 276,
__CreateWindow = 277,
__GotoWindow = 278,
__Hangup = 279,
__DialPhone = 280,
__QuickDial = 281,
__Tone = 282,
__Pulse = 283,
__FlashHook = 284,
__FixedPause = 285,
__WaitTone = 286,
__User0 = 287,
__User1 = 288,
__User2 = 289,
__User3 = 290,
__User4 = 291,
__User5 = 292,
__User6 = 293,
__User7 = 294,
__User8 = 295,
__User9 = 296,
__OrigPair = 297,
__OrigColors = 298,
__InitializeColor = 299,
__InitializePair = 300,
__SetColorPair = 301,
__SetForeground = 302,
__SetBackground = 303,
__ChangeCharPitch = 304,
__ChangeLinePitch = 305,
__ChangeResHorz = 306,
__ChangeResVert = 307,
__DefineChar = 308,
__EnterDoublewideMode = 309,
__EnterDraftQuality = 310,
__EnterItalicsMode = 311,
__EnterLeftwardMode = 312,
__EnterMicroMode = 313,
__EnterNearLetterQuality = 314,
__EnterNormalQuality = 315,
__EnterShadowMode = 316,
__EnterSubscriptMode = 317,
__EnterSuperscriptMode = 318,
__EnterUpwardMode = 319,
__ExitDoublewideMode = 320,
__ExitItalicsMode = 321,
__ExitLeftwardMode = 322,
__ExitMicroMode = 323,
__ExitShadowMode = 324,
__ExitSubscriptMode = 325,
__ExitSuperscriptMode = 326,
__ExitUpwardMode = 327,
__MicroColumnAddress = 328,
__MicroDown = 329,
__MicroLeft = 330,
__MicroRight = 331,
__MicroRowAddress = 332,
__MicroUp = 333,
__OrderOfPins = 334,
__ParmDownMicro = 335,
__ParmLeftMicro = 336,
__ParmRightMicro = 337,
__ParmUpMicro = 338,
__SelectCharSet = 339,
__SetBottomMargin = 340,
__SetBottomMarginParm = 341,
__SetLeftMarginParm = 342,
__SetRightMarginParm = 343,
__SetTopMargin = 344,
__SetTopMarginParm = 345,
__StartBitImage = 346,
__StartCharSetDef = 347,
__StopBitImage = 348,
__StopCharSetDef = 349,
__SubscriptCharacters = 350,
__SuperscriptCharacters = 351,
__TheseCauseCr = 352,
__ZeroMotion = 353,
__CharSetNames = 354,
__KeyMouse = 355,
__MouseInfo = 356,
__ReqMousePos = 357,
__GetMouse = 358,
__SetAForeground = 359,
__SetABackground = 360,
__PkeyPlab = 361,
__DeviceType = 362,
__CodeSetInit = 363,
__Set0DesSeq = 364,
__Set1DesSeq = 365,
__Set2DesSeq = 366,
__Set3DesSeq = 367,
__SetLrMargin = 368,
__SetTbMargin = 369,
__BitImageRepeat = 370,
__BitImageNewline = 371,
__BitImageCarriageReturn = 372,
__ColorNames = 373,
__DefineBitImageRegion = 374,
__EndBitImageRegion = 375,
__SetColorBand = 376,
__SetPageLength = 377,
__DisplayPcChar = 378,
__EnterPcCharsetMode = 379,
__ExitPcCharsetMode = 380,
__EnterScancodeMode = 381,
__ExitScancodeMode = 382,
__PcTermOptions = 383,
__ScancodeEscape = 384,
__AltScancodeEsc = 385,
__EnterHorizontalHlMode = 386,
__EnterLeftHlMode = 387,
__EnterLowHlMode = 388,
__EnterRightHlMode = 389,
__EnterTopHlMode = 390,
__EnterVerticalHlMode = 391,
__SetAAttributes = 392,
__SetPglenInch = 393,
__Last = 394,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TermInfoStrings_Unwrapped () const noexcept {
return std::bit_cast<__TermInfoStrings_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field BackTab offset 0
static System::TermInfoStrings const BackTab;

/// @brief Field Bell offset 0
static System::TermInfoStrings const Bell;

/// @brief Field CarriageReturn offset 0
static System::TermInfoStrings const CarriageReturn;

/// @brief Field ChangeScrollRegion offset 0
static System::TermInfoStrings const ChangeScrollRegion;

/// @brief Field ClearAllTabs offset 0
static System::TermInfoStrings const ClearAllTabs;

/// @brief Field ClearScreen offset 0
static System::TermInfoStrings const ClearScreen;

/// @brief Field ClrEol offset 0
static System::TermInfoStrings const ClrEol;

/// @brief Field ClrEos offset 0
static System::TermInfoStrings const ClrEos;

/// @brief Field ColumnAddress offset 0
static System::TermInfoStrings const ColumnAddress;

/// @brief Field CommandCharacter offset 0
static System::TermInfoStrings const CommandCharacter;

/// @brief Field CursorAddress offset 0
static System::TermInfoStrings const CursorAddress;

/// @brief Field CursorDown offset 0
static System::TermInfoStrings const CursorDown;

/// @brief Field CursorHome offset 0
static System::TermInfoStrings const CursorHome;

/// @brief Field CursorInvisible offset 0
static System::TermInfoStrings const CursorInvisible;

/// @brief Field CursorLeft offset 0
static System::TermInfoStrings const CursorLeft;

/// @brief Field CursorMemAddress offset 0
static System::TermInfoStrings const CursorMemAddress;

/// @brief Field CursorNormal offset 0
static System::TermInfoStrings const CursorNormal;

/// @brief Field CursorRight offset 0
static System::TermInfoStrings const CursorRight;

/// @brief Field CursorToLl offset 0
static System::TermInfoStrings const CursorToLl;

/// @brief Field CursorUp offset 0
static System::TermInfoStrings const CursorUp;

/// @brief Field CursorVisible offset 0
static System::TermInfoStrings const CursorVisible;

/// @brief Field DeleteCharacter offset 0
static System::TermInfoStrings const DeleteCharacter;

/// @brief Field DeleteLine offset 0
static System::TermInfoStrings const DeleteLine;

/// @brief Field DisStatusLine offset 0
static System::TermInfoStrings const DisStatusLine;

/// @brief Field DownHalfLine offset 0
static System::TermInfoStrings const DownHalfLine;

/// @brief Field EnterAltCharsetMode offset 0
static System::TermInfoStrings const EnterAltCharsetMode;

/// @brief Field EnterBlinkMode offset 0
static System::TermInfoStrings const EnterBlinkMode;

/// @brief Field EnterBoldMode offset 0
static System::TermInfoStrings const EnterBoldMode;

/// @brief Field EnterCaMode offset 0
static System::TermInfoStrings const EnterCaMode;

/// @brief Field EnterDeleteMode offset 0
static System::TermInfoStrings const EnterDeleteMode;

/// @brief Field EnterDimMode offset 0
static System::TermInfoStrings const EnterDimMode;

/// @brief Field EnterInsertMode offset 0
static System::TermInfoStrings const EnterInsertMode;

/// @brief Field EnterSecureMode offset 0
static System::TermInfoStrings const EnterSecureMode;

/// @brief Field EnterProtectedMode offset 0
static System::TermInfoStrings const EnterProtectedMode;

/// @brief Field EnterReverseMode offset 0
static System::TermInfoStrings const EnterReverseMode;

/// @brief Field EnterStandoutMode offset 0
static System::TermInfoStrings const EnterStandoutMode;

/// @brief Field EnterUnderlineMode offset 0
static System::TermInfoStrings const EnterUnderlineMode;

/// @brief Field EraseChars offset 0
static System::TermInfoStrings const EraseChars;

/// @brief Field ExitAltCharsetMode offset 0
static System::TermInfoStrings const ExitAltCharsetMode;

/// @brief Field ExitAttributeMode offset 0
static System::TermInfoStrings const ExitAttributeMode;

/// @brief Field ExitCaMode offset 0
static System::TermInfoStrings const ExitCaMode;

/// @brief Field ExitDeleteMode offset 0
static System::TermInfoStrings const ExitDeleteMode;

/// @brief Field ExitInsertMode offset 0
static System::TermInfoStrings const ExitInsertMode;

/// @brief Field ExitStandoutMode offset 0
static System::TermInfoStrings const ExitStandoutMode;

/// @brief Field ExitUnderlineMode offset 0
static System::TermInfoStrings const ExitUnderlineMode;

/// @brief Field FlashScreen offset 0
static System::TermInfoStrings const FlashScreen;

/// @brief Field FormFeed offset 0
static System::TermInfoStrings const FormFeed;

/// @brief Field FromStatusLine offset 0
static System::TermInfoStrings const FromStatusLine;

/// @brief Field Init1string offset 0
static System::TermInfoStrings const Init1string;

/// @brief Field Init2string offset 0
static System::TermInfoStrings const Init2string;

/// @brief Field Init3string offset 0
static System::TermInfoStrings const Init3string;

/// @brief Field InitFile offset 0
static System::TermInfoStrings const InitFile;

/// @brief Field InsertCharacter offset 0
static System::TermInfoStrings const InsertCharacter;

/// @brief Field InsertLine offset 0
static System::TermInfoStrings const InsertLine;

/// @brief Field InsertPadding offset 0
static System::TermInfoStrings const InsertPadding;

/// @brief Field KeyBackspace offset 0
static System::TermInfoStrings const KeyBackspace;

/// @brief Field KeyCatab offset 0
static System::TermInfoStrings const KeyCatab;

/// @brief Field KeyClear offset 0
static System::TermInfoStrings const KeyClear;

/// @brief Field KeyCtab offset 0
static System::TermInfoStrings const KeyCtab;

/// @brief Field KeyDc offset 0
static System::TermInfoStrings const KeyDc;

/// @brief Field KeyDl offset 0
static System::TermInfoStrings const KeyDl;

/// @brief Field KeyDown offset 0
static System::TermInfoStrings const KeyDown;

/// @brief Field KeyEic offset 0
static System::TermInfoStrings const KeyEic;

/// @brief Field KeyEol offset 0
static System::TermInfoStrings const KeyEol;

/// @brief Field KeyEos offset 0
static System::TermInfoStrings const KeyEos;

/// @brief Field KeyF0 offset 0
static System::TermInfoStrings const KeyF0;

/// @brief Field KeyF1 offset 0
static System::TermInfoStrings const KeyF1;

/// @brief Field KeyF10 offset 0
static System::TermInfoStrings const KeyF10;

/// @brief Field KeyF2 offset 0
static System::TermInfoStrings const KeyF2;

/// @brief Field KeyF3 offset 0
static System::TermInfoStrings const KeyF3;

/// @brief Field KeyF4 offset 0
static System::TermInfoStrings const KeyF4;

/// @brief Field KeyF5 offset 0
static System::TermInfoStrings const KeyF5;

/// @brief Field KeyF6 offset 0
static System::TermInfoStrings const KeyF6;

/// @brief Field KeyF7 offset 0
static System::TermInfoStrings const KeyF7;

/// @brief Field KeyF8 offset 0
static System::TermInfoStrings const KeyF8;

/// @brief Field KeyF9 offset 0
static System::TermInfoStrings const KeyF9;

/// @brief Field KeyHome offset 0
static System::TermInfoStrings const KeyHome;

/// @brief Field KeyIc offset 0
static System::TermInfoStrings const KeyIc;

/// @brief Field KeyIl offset 0
static System::TermInfoStrings const KeyIl;

/// @brief Field KeyLeft offset 0
static System::TermInfoStrings const KeyLeft;

/// @brief Field KeyLl offset 0
static System::TermInfoStrings const KeyLl;

/// @brief Field KeyNpage offset 0
static System::TermInfoStrings const KeyNpage;

/// @brief Field KeyPpage offset 0
static System::TermInfoStrings const KeyPpage;

/// @brief Field KeyRight offset 0
static System::TermInfoStrings const KeyRight;

/// @brief Field KeySf offset 0
static System::TermInfoStrings const KeySf;

/// @brief Field KeySr offset 0
static System::TermInfoStrings const KeySr;

/// @brief Field KeyStab offset 0
static System::TermInfoStrings const KeyStab;

/// @brief Field KeyUp offset 0
static System::TermInfoStrings const KeyUp;

/// @brief Field KeypadLocal offset 0
static System::TermInfoStrings const KeypadLocal;

/// @brief Field KeypadXmit offset 0
static System::TermInfoStrings const KeypadXmit;

/// @brief Field LabF0 offset 0
static System::TermInfoStrings const LabF0;

/// @brief Field LabF1 offset 0
static System::TermInfoStrings const LabF1;

/// @brief Field LabF10 offset 0
static System::TermInfoStrings const LabF10;

/// @brief Field LabF2 offset 0
static System::TermInfoStrings const LabF2;

/// @brief Field LabF3 offset 0
static System::TermInfoStrings const LabF3;

/// @brief Field LabF4 offset 0
static System::TermInfoStrings const LabF4;

/// @brief Field LabF5 offset 0
static System::TermInfoStrings const LabF5;

/// @brief Field LabF6 offset 0
static System::TermInfoStrings const LabF6;

/// @brief Field LabF7 offset 0
static System::TermInfoStrings const LabF7;

/// @brief Field LabF8 offset 0
static System::TermInfoStrings const LabF8;

/// @brief Field LabF9 offset 0
static System::TermInfoStrings const LabF9;

/// @brief Field MetaOff offset 0
static System::TermInfoStrings const MetaOff;

/// @brief Field MetaOn offset 0
static System::TermInfoStrings const MetaOn;

/// @brief Field Newline offset 0
static System::TermInfoStrings const Newline;

/// @brief Field PadChar offset 0
static System::TermInfoStrings const PadChar;

/// @brief Field ParmDch offset 0
static System::TermInfoStrings const ParmDch;

/// @brief Field ParmDeleteLine offset 0
static System::TermInfoStrings const ParmDeleteLine;

/// @brief Field ParmDownCursor offset 0
static System::TermInfoStrings const ParmDownCursor;

/// @brief Field ParmIch offset 0
static System::TermInfoStrings const ParmIch;

/// @brief Field ParmIndex offset 0
static System::TermInfoStrings const ParmIndex;

/// @brief Field ParmInsertLine offset 0
static System::TermInfoStrings const ParmInsertLine;

/// @brief Field ParmLeftCursor offset 0
static System::TermInfoStrings const ParmLeftCursor;

/// @brief Field ParmRightCursor offset 0
static System::TermInfoStrings const ParmRightCursor;

/// @brief Field ParmRindex offset 0
static System::TermInfoStrings const ParmRindex;

/// @brief Field ParmUpCursor offset 0
static System::TermInfoStrings const ParmUpCursor;

/// @brief Field PkeyKey offset 0
static System::TermInfoStrings const PkeyKey;

/// @brief Field PkeyLocal offset 0
static System::TermInfoStrings const PkeyLocal;

/// @brief Field PkeyXmit offset 0
static System::TermInfoStrings const PkeyXmit;

/// @brief Field PrintScreen offset 0
static System::TermInfoStrings const PrintScreen;

/// @brief Field PrtrOff offset 0
static System::TermInfoStrings const PrtrOff;

/// @brief Field PrtrOn offset 0
static System::TermInfoStrings const PrtrOn;

/// @brief Field RepeatChar offset 0
static System::TermInfoStrings const RepeatChar;

/// @brief Field Reset1string offset 0
static System::TermInfoStrings const Reset1string;

/// @brief Field Reset2string offset 0
static System::TermInfoStrings const Reset2string;

/// @brief Field Reset3string offset 0
static System::TermInfoStrings const Reset3string;

/// @brief Field ResetFile offset 0
static System::TermInfoStrings const ResetFile;

/// @brief Field RestoreCursor offset 0
static System::TermInfoStrings const RestoreCursor;

/// @brief Field RowAddress offset 0
static System::TermInfoStrings const RowAddress;

/// @brief Field SaveCursor offset 0
static System::TermInfoStrings const SaveCursor;

/// @brief Field ScrollForward offset 0
static System::TermInfoStrings const ScrollForward;

/// @brief Field ScrollReverse offset 0
static System::TermInfoStrings const ScrollReverse;

/// @brief Field SetAttributes offset 0
static System::TermInfoStrings const SetAttributes;

/// @brief Field SetTab offset 0
static System::TermInfoStrings const SetTab;

/// @brief Field SetWindow offset 0
static System::TermInfoStrings const SetWindow;

/// @brief Field Tab offset 0
static System::TermInfoStrings const Tab;

/// @brief Field ToStatusLine offset 0
static System::TermInfoStrings const ToStatusLine;

/// @brief Field UnderlineChar offset 0
static System::TermInfoStrings const UnderlineChar;

/// @brief Field UpHalfLine offset 0
static System::TermInfoStrings const UpHalfLine;

/// @brief Field InitProg offset 0
static System::TermInfoStrings const InitProg;

/// @brief Field KeyA1 offset 0
static System::TermInfoStrings const KeyA1;

/// @brief Field KeyA3 offset 0
static System::TermInfoStrings const KeyA3;

/// @brief Field KeyB2 offset 0
static System::TermInfoStrings const KeyB2;

/// @brief Field KeyC1 offset 0
static System::TermInfoStrings const KeyC1;

/// @brief Field KeyC3 offset 0
static System::TermInfoStrings const KeyC3;

/// @brief Field PrtrNon offset 0
static System::TermInfoStrings const PrtrNon;

/// @brief Field CharPadding offset 0
static System::TermInfoStrings const CharPadding;

/// @brief Field AcsChars offset 0
static System::TermInfoStrings const AcsChars;

/// @brief Field PlabNorm offset 0
static System::TermInfoStrings const PlabNorm;

/// @brief Field KeyBtab offset 0
static System::TermInfoStrings const KeyBtab;

/// @brief Field EnterXonMode offset 0
static System::TermInfoStrings const EnterXonMode;

/// @brief Field ExitXonMode offset 0
static System::TermInfoStrings const ExitXonMode;

/// @brief Field EnterAmMode offset 0
static System::TermInfoStrings const EnterAmMode;

/// @brief Field ExitAmMode offset 0
static System::TermInfoStrings const ExitAmMode;

/// @brief Field XonCharacter offset 0
static System::TermInfoStrings const XonCharacter;

/// @brief Field XoffCharacter offset 0
static System::TermInfoStrings const XoffCharacter;

/// @brief Field EnaAcs offset 0
static System::TermInfoStrings const EnaAcs;

/// @brief Field LabelOn offset 0
static System::TermInfoStrings const LabelOn;

/// @brief Field LabelOff offset 0
static System::TermInfoStrings const LabelOff;

/// @brief Field KeyBeg offset 0
static System::TermInfoStrings const KeyBeg;

/// @brief Field KeyCancel offset 0
static System::TermInfoStrings const KeyCancel;

/// @brief Field KeyClose offset 0
static System::TermInfoStrings const KeyClose;

/// @brief Field KeyCommand offset 0
static System::TermInfoStrings const KeyCommand;

/// @brief Field KeyCopy offset 0
static System::TermInfoStrings const KeyCopy;

/// @brief Field KeyCreate offset 0
static System::TermInfoStrings const KeyCreate;

/// @brief Field KeyEnd offset 0
static System::TermInfoStrings const KeyEnd;

/// @brief Field KeyEnter offset 0
static System::TermInfoStrings const KeyEnter;

/// @brief Field KeyExit offset 0
static System::TermInfoStrings const KeyExit;

/// @brief Field KeyFind offset 0
static System::TermInfoStrings const KeyFind;

/// @brief Field KeyHelp offset 0
static System::TermInfoStrings const KeyHelp;

/// @brief Field KeyMark offset 0
static System::TermInfoStrings const KeyMark;

/// @brief Field KeyMessage offset 0
static System::TermInfoStrings const KeyMessage;

/// @brief Field KeyMove offset 0
static System::TermInfoStrings const KeyMove;

/// @brief Field KeyNext offset 0
static System::TermInfoStrings const KeyNext;

/// @brief Field KeyOpen offset 0
static System::TermInfoStrings const KeyOpen;

/// @brief Field KeyOptions offset 0
static System::TermInfoStrings const KeyOptions;

/// @brief Field KeyPrevious offset 0
static System::TermInfoStrings const KeyPrevious;

/// @brief Field KeyPrint offset 0
static System::TermInfoStrings const KeyPrint;

/// @brief Field KeyRedo offset 0
static System::TermInfoStrings const KeyRedo;

/// @brief Field KeyReference offset 0
static System::TermInfoStrings const KeyReference;

/// @brief Field KeyRefresh offset 0
static System::TermInfoStrings const KeyRefresh;

/// @brief Field KeyReplace offset 0
static System::TermInfoStrings const KeyReplace;

/// @brief Field KeyRestart offset 0
static System::TermInfoStrings const KeyRestart;

/// @brief Field KeyResume offset 0
static System::TermInfoStrings const KeyResume;

/// @brief Field KeySave offset 0
static System::TermInfoStrings const KeySave;

/// @brief Field KeySuspend offset 0
static System::TermInfoStrings const KeySuspend;

/// @brief Field KeyUndo offset 0
static System::TermInfoStrings const KeyUndo;

/// @brief Field KeySbeg offset 0
static System::TermInfoStrings const KeySbeg;

/// @brief Field KeyScancel offset 0
static System::TermInfoStrings const KeyScancel;

/// @brief Field KeyScommand offset 0
static System::TermInfoStrings const KeyScommand;

/// @brief Field KeyScopy offset 0
static System::TermInfoStrings const KeyScopy;

/// @brief Field KeyScreate offset 0
static System::TermInfoStrings const KeyScreate;

/// @brief Field KeySdc offset 0
static System::TermInfoStrings const KeySdc;

/// @brief Field KeySdl offset 0
static System::TermInfoStrings const KeySdl;

/// @brief Field KeySelect offset 0
static System::TermInfoStrings const KeySelect;

/// @brief Field KeySend offset 0
static System::TermInfoStrings const KeySend;

/// @brief Field KeySeol offset 0
static System::TermInfoStrings const KeySeol;

/// @brief Field KeySexit offset 0
static System::TermInfoStrings const KeySexit;

/// @brief Field KeySfind offset 0
static System::TermInfoStrings const KeySfind;

/// @brief Field KeyShelp offset 0
static System::TermInfoStrings const KeyShelp;

/// @brief Field KeyShome offset 0
static System::TermInfoStrings const KeyShome;

/// @brief Field KeySic offset 0
static System::TermInfoStrings const KeySic;

/// @brief Field KeySleft offset 0
static System::TermInfoStrings const KeySleft;

/// @brief Field KeySmessage offset 0
static System::TermInfoStrings const KeySmessage;

/// @brief Field KeySmove offset 0
static System::TermInfoStrings const KeySmove;

/// @brief Field KeySnext offset 0
static System::TermInfoStrings const KeySnext;

/// @brief Field KeySoptions offset 0
static System::TermInfoStrings const KeySoptions;

/// @brief Field KeySprevious offset 0
static System::TermInfoStrings const KeySprevious;

/// @brief Field KeySprint offset 0
static System::TermInfoStrings const KeySprint;

/// @brief Field KeySredo offset 0
static System::TermInfoStrings const KeySredo;

/// @brief Field KeySreplace offset 0
static System::TermInfoStrings const KeySreplace;

/// @brief Field KeySright offset 0
static System::TermInfoStrings const KeySright;

/// @brief Field KeySrsume offset 0
static System::TermInfoStrings const KeySrsume;

/// @brief Field KeySsave offset 0
static System::TermInfoStrings const KeySsave;

/// @brief Field KeySsuspend offset 0
static System::TermInfoStrings const KeySsuspend;

/// @brief Field KeySundo offset 0
static System::TermInfoStrings const KeySundo;

/// @brief Field ReqForInput offset 0
static System::TermInfoStrings const ReqForInput;

/// @brief Field KeyF11 offset 0
static System::TermInfoStrings const KeyF11;

/// @brief Field KeyF12 offset 0
static System::TermInfoStrings const KeyF12;

/// @brief Field KeyF13 offset 0
static System::TermInfoStrings const KeyF13;

/// @brief Field KeyF14 offset 0
static System::TermInfoStrings const KeyF14;

/// @brief Field KeyF15 offset 0
static System::TermInfoStrings const KeyF15;

/// @brief Field KeyF16 offset 0
static System::TermInfoStrings const KeyF16;

/// @brief Field KeyF17 offset 0
static System::TermInfoStrings const KeyF17;

/// @brief Field KeyF18 offset 0
static System::TermInfoStrings const KeyF18;

/// @brief Field KeyF19 offset 0
static System::TermInfoStrings const KeyF19;

/// @brief Field KeyF20 offset 0
static System::TermInfoStrings const KeyF20;

/// @brief Field KeyF21 offset 0
static System::TermInfoStrings const KeyF21;

/// @brief Field KeyF22 offset 0
static System::TermInfoStrings const KeyF22;

/// @brief Field KeyF23 offset 0
static System::TermInfoStrings const KeyF23;

/// @brief Field KeyF24 offset 0
static System::TermInfoStrings const KeyF24;

/// @brief Field KeyF25 offset 0
static System::TermInfoStrings const KeyF25;

/// @brief Field KeyF26 offset 0
static System::TermInfoStrings const KeyF26;

/// @brief Field KeyF27 offset 0
static System::TermInfoStrings const KeyF27;

/// @brief Field KeyF28 offset 0
static System::TermInfoStrings const KeyF28;

/// @brief Field KeyF29 offset 0
static System::TermInfoStrings const KeyF29;

/// @brief Field KeyF30 offset 0
static System::TermInfoStrings const KeyF30;

/// @brief Field KeyF31 offset 0
static System::TermInfoStrings const KeyF31;

/// @brief Field KeyF32 offset 0
static System::TermInfoStrings const KeyF32;

/// @brief Field KeyF33 offset 0
static System::TermInfoStrings const KeyF33;

/// @brief Field KeyF34 offset 0
static System::TermInfoStrings const KeyF34;

/// @brief Field KeyF35 offset 0
static System::TermInfoStrings const KeyF35;

/// @brief Field KeyF36 offset 0
static System::TermInfoStrings const KeyF36;

/// @brief Field KeyF37 offset 0
static System::TermInfoStrings const KeyF37;

/// @brief Field KeyF38 offset 0
static System::TermInfoStrings const KeyF38;

/// @brief Field KeyF39 offset 0
static System::TermInfoStrings const KeyF39;

/// @brief Field KeyF40 offset 0
static System::TermInfoStrings const KeyF40;

/// @brief Field KeyF41 offset 0
static System::TermInfoStrings const KeyF41;

/// @brief Field KeyF42 offset 0
static System::TermInfoStrings const KeyF42;

/// @brief Field KeyF43 offset 0
static System::TermInfoStrings const KeyF43;

/// @brief Field KeyF44 offset 0
static System::TermInfoStrings const KeyF44;

/// @brief Field KeyF45 offset 0
static System::TermInfoStrings const KeyF45;

/// @brief Field KeyF46 offset 0
static System::TermInfoStrings const KeyF46;

/// @brief Field KeyF47 offset 0
static System::TermInfoStrings const KeyF47;

/// @brief Field KeyF48 offset 0
static System::TermInfoStrings const KeyF48;

/// @brief Field KeyF49 offset 0
static System::TermInfoStrings const KeyF49;

/// @brief Field KeyF50 offset 0
static System::TermInfoStrings const KeyF50;

/// @brief Field KeyF51 offset 0
static System::TermInfoStrings const KeyF51;

/// @brief Field KeyF52 offset 0
static System::TermInfoStrings const KeyF52;

/// @brief Field KeyF53 offset 0
static System::TermInfoStrings const KeyF53;

/// @brief Field KeyF54 offset 0
static System::TermInfoStrings const KeyF54;

/// @brief Field KeyF55 offset 0
static System::TermInfoStrings const KeyF55;

/// @brief Field KeyF56 offset 0
static System::TermInfoStrings const KeyF56;

/// @brief Field KeyF57 offset 0
static System::TermInfoStrings const KeyF57;

/// @brief Field KeyF58 offset 0
static System::TermInfoStrings const KeyF58;

/// @brief Field KeyF59 offset 0
static System::TermInfoStrings const KeyF59;

/// @brief Field KeyF60 offset 0
static System::TermInfoStrings const KeyF60;

/// @brief Field KeyF61 offset 0
static System::TermInfoStrings const KeyF61;

/// @brief Field KeyF62 offset 0
static System::TermInfoStrings const KeyF62;

/// @brief Field KeyF63 offset 0
static System::TermInfoStrings const KeyF63;

/// @brief Field ClrBol offset 0
static System::TermInfoStrings const ClrBol;

/// @brief Field ClearMargins offset 0
static System::TermInfoStrings const ClearMargins;

/// @brief Field SetLeftMargin offset 0
static System::TermInfoStrings const SetLeftMargin;

/// @brief Field SetRightMargin offset 0
static System::TermInfoStrings const SetRightMargin;

/// @brief Field LabelFormat offset 0
static System::TermInfoStrings const LabelFormat;

/// @brief Field SetClock offset 0
static System::TermInfoStrings const SetClock;

/// @brief Field DisplayClock offset 0
static System::TermInfoStrings const DisplayClock;

/// @brief Field RemoveClock offset 0
static System::TermInfoStrings const RemoveClock;

/// @brief Field CreateWindow offset 0
static System::TermInfoStrings const CreateWindow;

/// @brief Field GotoWindow offset 0
static System::TermInfoStrings const GotoWindow;

/// @brief Field Hangup offset 0
static System::TermInfoStrings const Hangup;

/// @brief Field DialPhone offset 0
static System::TermInfoStrings const DialPhone;

/// @brief Field QuickDial offset 0
static System::TermInfoStrings const QuickDial;

/// @brief Field Tone offset 0
static System::TermInfoStrings const Tone;

/// @brief Field Pulse offset 0
static System::TermInfoStrings const Pulse;

/// @brief Field FlashHook offset 0
static System::TermInfoStrings const FlashHook;

/// @brief Field FixedPause offset 0
static System::TermInfoStrings const FixedPause;

/// @brief Field WaitTone offset 0
static System::TermInfoStrings const WaitTone;

/// @brief Field User0 offset 0
static System::TermInfoStrings const User0;

/// @brief Field User1 offset 0
static System::TermInfoStrings const User1;

/// @brief Field User2 offset 0
static System::TermInfoStrings const User2;

/// @brief Field User3 offset 0
static System::TermInfoStrings const User3;

/// @brief Field User4 offset 0
static System::TermInfoStrings const User4;

/// @brief Field User5 offset 0
static System::TermInfoStrings const User5;

/// @brief Field User6 offset 0
static System::TermInfoStrings const User6;

/// @brief Field User7 offset 0
static System::TermInfoStrings const User7;

/// @brief Field User8 offset 0
static System::TermInfoStrings const User8;

/// @brief Field User9 offset 0
static System::TermInfoStrings const User9;

/// @brief Field OrigPair offset 0
static System::TermInfoStrings const OrigPair;

/// @brief Field OrigColors offset 0
static System::TermInfoStrings const OrigColors;

/// @brief Field InitializeColor offset 0
static System::TermInfoStrings const InitializeColor;

/// @brief Field InitializePair offset 0
static System::TermInfoStrings const InitializePair;

/// @brief Field SetColorPair offset 0
static System::TermInfoStrings const SetColorPair;

/// @brief Field SetForeground offset 0
static System::TermInfoStrings const SetForeground;

/// @brief Field SetBackground offset 0
static System::TermInfoStrings const SetBackground;

/// @brief Field ChangeCharPitch offset 0
static System::TermInfoStrings const ChangeCharPitch;

/// @brief Field ChangeLinePitch offset 0
static System::TermInfoStrings const ChangeLinePitch;

/// @brief Field ChangeResHorz offset 0
static System::TermInfoStrings const ChangeResHorz;

/// @brief Field ChangeResVert offset 0
static System::TermInfoStrings const ChangeResVert;

/// @brief Field DefineChar offset 0
static System::TermInfoStrings const DefineChar;

/// @brief Field EnterDoublewideMode offset 0
static System::TermInfoStrings const EnterDoublewideMode;

/// @brief Field EnterDraftQuality offset 0
static System::TermInfoStrings const EnterDraftQuality;

/// @brief Field EnterItalicsMode offset 0
static System::TermInfoStrings const EnterItalicsMode;

/// @brief Field EnterLeftwardMode offset 0
static System::TermInfoStrings const EnterLeftwardMode;

/// @brief Field EnterMicroMode offset 0
static System::TermInfoStrings const EnterMicroMode;

/// @brief Field EnterNearLetterQuality offset 0
static System::TermInfoStrings const EnterNearLetterQuality;

/// @brief Field EnterNormalQuality offset 0
static System::TermInfoStrings const EnterNormalQuality;

/// @brief Field EnterShadowMode offset 0
static System::TermInfoStrings const EnterShadowMode;

/// @brief Field EnterSubscriptMode offset 0
static System::TermInfoStrings const EnterSubscriptMode;

/// @brief Field EnterSuperscriptMode offset 0
static System::TermInfoStrings const EnterSuperscriptMode;

/// @brief Field EnterUpwardMode offset 0
static System::TermInfoStrings const EnterUpwardMode;

/// @brief Field ExitDoublewideMode offset 0
static System::TermInfoStrings const ExitDoublewideMode;

/// @brief Field ExitItalicsMode offset 0
static System::TermInfoStrings const ExitItalicsMode;

/// @brief Field ExitLeftwardMode offset 0
static System::TermInfoStrings const ExitLeftwardMode;

/// @brief Field ExitMicroMode offset 0
static System::TermInfoStrings const ExitMicroMode;

/// @brief Field ExitShadowMode offset 0
static System::TermInfoStrings const ExitShadowMode;

/// @brief Field ExitSubscriptMode offset 0
static System::TermInfoStrings const ExitSubscriptMode;

/// @brief Field ExitSuperscriptMode offset 0
static System::TermInfoStrings const ExitSuperscriptMode;

/// @brief Field ExitUpwardMode offset 0
static System::TermInfoStrings const ExitUpwardMode;

/// @brief Field MicroColumnAddress offset 0
static System::TermInfoStrings const MicroColumnAddress;

/// @brief Field MicroDown offset 0
static System::TermInfoStrings const MicroDown;

/// @brief Field MicroLeft offset 0
static System::TermInfoStrings const MicroLeft;

/// @brief Field MicroRight offset 0
static System::TermInfoStrings const MicroRight;

/// @brief Field MicroRowAddress offset 0
static System::TermInfoStrings const MicroRowAddress;

/// @brief Field MicroUp offset 0
static System::TermInfoStrings const MicroUp;

/// @brief Field OrderOfPins offset 0
static System::TermInfoStrings const OrderOfPins;

/// @brief Field ParmDownMicro offset 0
static System::TermInfoStrings const ParmDownMicro;

/// @brief Field ParmLeftMicro offset 0
static System::TermInfoStrings const ParmLeftMicro;

/// @brief Field ParmRightMicro offset 0
static System::TermInfoStrings const ParmRightMicro;

/// @brief Field ParmUpMicro offset 0
static System::TermInfoStrings const ParmUpMicro;

/// @brief Field SelectCharSet offset 0
static System::TermInfoStrings const SelectCharSet;

/// @brief Field SetBottomMargin offset 0
static System::TermInfoStrings const SetBottomMargin;

/// @brief Field SetBottomMarginParm offset 0
static System::TermInfoStrings const SetBottomMarginParm;

/// @brief Field SetLeftMarginParm offset 0
static System::TermInfoStrings const SetLeftMarginParm;

/// @brief Field SetRightMarginParm offset 0
static System::TermInfoStrings const SetRightMarginParm;

/// @brief Field SetTopMargin offset 0
static System::TermInfoStrings const SetTopMargin;

/// @brief Field SetTopMarginParm offset 0
static System::TermInfoStrings const SetTopMarginParm;

/// @brief Field StartBitImage offset 0
static System::TermInfoStrings const StartBitImage;

/// @brief Field StartCharSetDef offset 0
static System::TermInfoStrings const StartCharSetDef;

/// @brief Field StopBitImage offset 0
static System::TermInfoStrings const StopBitImage;

/// @brief Field StopCharSetDef offset 0
static System::TermInfoStrings const StopCharSetDef;

/// @brief Field SubscriptCharacters offset 0
static System::TermInfoStrings const SubscriptCharacters;

/// @brief Field SuperscriptCharacters offset 0
static System::TermInfoStrings const SuperscriptCharacters;

/// @brief Field TheseCauseCr offset 0
static System::TermInfoStrings const TheseCauseCr;

/// @brief Field ZeroMotion offset 0
static System::TermInfoStrings const ZeroMotion;

/// @brief Field CharSetNames offset 0
static System::TermInfoStrings const CharSetNames;

/// @brief Field KeyMouse offset 0
static System::TermInfoStrings const KeyMouse;

/// @brief Field MouseInfo offset 0
static System::TermInfoStrings const MouseInfo;

/// @brief Field ReqMousePos offset 0
static System::TermInfoStrings const ReqMousePos;

/// @brief Field GetMouse offset 0
static System::TermInfoStrings const GetMouse;

/// @brief Field SetAForeground offset 0
static System::TermInfoStrings const SetAForeground;

/// @brief Field SetABackground offset 0
static System::TermInfoStrings const SetABackground;

/// @brief Field PkeyPlab offset 0
static System::TermInfoStrings const PkeyPlab;

/// @brief Field DeviceType offset 0
static System::TermInfoStrings const DeviceType;

/// @brief Field CodeSetInit offset 0
static System::TermInfoStrings const CodeSetInit;

/// @brief Field Set0DesSeq offset 0
static System::TermInfoStrings const Set0DesSeq;

/// @brief Field Set1DesSeq offset 0
static System::TermInfoStrings const Set1DesSeq;

/// @brief Field Set2DesSeq offset 0
static System::TermInfoStrings const Set2DesSeq;

/// @brief Field Set3DesSeq offset 0
static System::TermInfoStrings const Set3DesSeq;

/// @brief Field SetLrMargin offset 0
static System::TermInfoStrings const SetLrMargin;

/// @brief Field SetTbMargin offset 0
static System::TermInfoStrings const SetTbMargin;

/// @brief Field BitImageRepeat offset 0
static System::TermInfoStrings const BitImageRepeat;

/// @brief Field BitImageNewline offset 0
static System::TermInfoStrings const BitImageNewline;

/// @brief Field BitImageCarriageReturn offset 0
static System::TermInfoStrings const BitImageCarriageReturn;

/// @brief Field ColorNames offset 0
static System::TermInfoStrings const ColorNames;

/// @brief Field DefineBitImageRegion offset 0
static System::TermInfoStrings const DefineBitImageRegion;

/// @brief Field EndBitImageRegion offset 0
static System::TermInfoStrings const EndBitImageRegion;

/// @brief Field SetColorBand offset 0
static System::TermInfoStrings const SetColorBand;

/// @brief Field SetPageLength offset 0
static System::TermInfoStrings const SetPageLength;

/// @brief Field DisplayPcChar offset 0
static System::TermInfoStrings const DisplayPcChar;

/// @brief Field EnterPcCharsetMode offset 0
static System::TermInfoStrings const EnterPcCharsetMode;

/// @brief Field ExitPcCharsetMode offset 0
static System::TermInfoStrings const ExitPcCharsetMode;

/// @brief Field EnterScancodeMode offset 0
static System::TermInfoStrings const EnterScancodeMode;

/// @brief Field ExitScancodeMode offset 0
static System::TermInfoStrings const ExitScancodeMode;

/// @brief Field PcTermOptions offset 0
static System::TermInfoStrings const PcTermOptions;

/// @brief Field ScancodeEscape offset 0
static System::TermInfoStrings const ScancodeEscape;

/// @brief Field AltScancodeEsc offset 0
static System::TermInfoStrings const AltScancodeEsc;

/// @brief Field EnterHorizontalHlMode offset 0
static System::TermInfoStrings const EnterHorizontalHlMode;

/// @brief Field EnterLeftHlMode offset 0
static System::TermInfoStrings const EnterLeftHlMode;

/// @brief Field EnterLowHlMode offset 0
static System::TermInfoStrings const EnterLowHlMode;

/// @brief Field EnterRightHlMode offset 0
static System::TermInfoStrings const EnterRightHlMode;

/// @brief Field EnterTopHlMode offset 0
static System::TermInfoStrings const EnterTopHlMode;

/// @brief Field EnterVerticalHlMode offset 0
static System::TermInfoStrings const EnterVerticalHlMode;

/// @brief Field SetAAttributes offset 0
static System::TermInfoStrings const SetAAttributes;

/// @brief Field SetPglenInch offset 0
static System::TermInfoStrings const SetPglenInch;

/// @brief Field Last offset 0
static System::TermInfoStrings const Last;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::TermInfoStrings, "System", "TermInfoStrings");
