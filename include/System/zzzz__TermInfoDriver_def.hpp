#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System {
struct ConsoleColor;
}
namespace System {
class ByteMatcher;
}
namespace System::IO {
class CStreamWriter;
}
namespace System::IO {
class StreamReader;
}
namespace System {
class TermInfoReader;
}
namespace System::Collections {
class Hashtable;
}
namespace System {
struct ConsoleKeyInfo;
}
namespace System {
class IConsoleDriver;
}
namespace System {
struct TermInfoStrings;
}
// Forward declare root types
namespace System {
class TermInfoDriver;
}
// Type: System::TermInfoDriver
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2618))
// CS Name: System.TermInfoDriver
class CORDL_TYPE TermInfoDriver : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::IConsoleDriver
constexpr operator  ::System::IConsoleDriver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x120};

virtual ~TermInfoDriver() = default;

// Ctor Parameters [CppParam { name: "", ty: "TermInfoDriver", modifiers: " const&", def_value: None }]
constexpr TermInfoDriver(TermInfoDriver const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TermInfoDriver", modifiers: "&&", def_value: None }]
constexpr TermInfoDriver(TermInfoDriver&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TermInfoDriver(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TermInfoDriver& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TermInfoDriver& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TermInfoDriver& operator=(TermInfoDriver&& o) noexcept = default;
  constexpr TermInfoDriver& operator=(TermInfoDriver const& o) noexcept = default;
                


// Fields

static void* __declspec(property(get=__get_native_terminal_size, put=__set_native_terminal_size))  native_terminal_size;

static void __set_native_terminal_size(void* value) ;

static void* __get_native_terminal_size() ;

static int32_t __declspec(property(get=__get_terminal_size, put=__set_terminal_size))  terminal_size;

static void __set_terminal_size(int32_t value) ;

static int32_t __get_terminal_size() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_locations, put=__set_locations))  locations;

static void __set_locations(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_locations() ;

 ::System::TermInfoReader __declspec(property(get=__get_reader, put=__set_reader))  reader;

constexpr void __set_reader(::System::TermInfoReader value) ;

constexpr ::System::TermInfoReader __get_reader() const;

 int32_t __declspec(property(get=__get_cursorLeft, put=__set_cursorLeft))  cursorLeft;

constexpr void __set_cursorLeft(int32_t value) ;

constexpr int32_t __get_cursorLeft() const;

 int32_t __declspec(property(get=__get_cursorTop, put=__set_cursorTop))  cursorTop;

constexpr void __set_cursorTop(int32_t value) ;

constexpr int32_t __get_cursorTop() const;

 ::StringW __declspec(property(get=__get_title, put=__set_title))  title;

constexpr void __set_title(::StringW value) ;

constexpr ::StringW __get_title() const;

 ::StringW __declspec(property(get=__get_titleFormat, put=__set_titleFormat))  titleFormat;

constexpr void __set_titleFormat(::StringW value) ;

constexpr ::StringW __get_titleFormat() const;

 bool __declspec(property(get=__get_cursorVisible, put=__set_cursorVisible))  cursorVisible;

constexpr void __set_cursorVisible(bool value) ;

constexpr bool __get_cursorVisible() const;

 ::StringW __declspec(property(get=__get_csrVisible, put=__set_csrVisible))  csrVisible;

constexpr void __set_csrVisible(::StringW value) ;

constexpr ::StringW __get_csrVisible() const;

 ::StringW __declspec(property(get=__get_csrInvisible, put=__set_csrInvisible))  csrInvisible;

constexpr void __set_csrInvisible(::StringW value) ;

constexpr ::StringW __get_csrInvisible() const;

 ::StringW __declspec(property(get=__get_clear, put=__set_clear))  clear;

constexpr void __set_clear(::StringW value) ;

constexpr ::StringW __get_clear() const;

 ::StringW __declspec(property(get=__get_bell, put=__set_bell))  bell;

constexpr void __set_bell(::StringW value) ;

constexpr ::StringW __get_bell() const;

 ::StringW __declspec(property(get=__get_term, put=__set_term))  term;

constexpr void __set_term(::StringW value) ;

constexpr ::StringW __get_term() const;

 ::System::IO::StreamReader __declspec(property(get=__get_stdin, put=__set_stdin))  stdin;

constexpr void __set_stdin(::System::IO::StreamReader value) ;

constexpr ::System::IO::StreamReader __get_stdin() const;

 ::System::IO::CStreamWriter __declspec(property(get=__get_stdout, put=__set_stdout))  stdout;

constexpr void __set_stdout(::System::IO::CStreamWriter value) ;

constexpr ::System::IO::CStreamWriter __get_stdout() const;

 int32_t __declspec(property(get=__get_windowWidth, put=__set_windowWidth))  windowWidth;

constexpr void __set_windowWidth(int32_t value) ;

constexpr int32_t __get_windowWidth() const;

 int32_t __declspec(property(get=__get_windowHeight, put=__set_windowHeight))  windowHeight;

constexpr void __set_windowHeight(int32_t value) ;

constexpr int32_t __get_windowHeight() const;

 int32_t __declspec(property(get=__get_bufferHeight, put=__set_bufferHeight))  bufferHeight;

constexpr void __set_bufferHeight(int32_t value) ;

constexpr int32_t __get_bufferHeight() const;

 int32_t __declspec(property(get=__get_bufferWidth, put=__set_bufferWidth))  bufferWidth;

constexpr void __set_bufferWidth(int32_t value) ;

constexpr int32_t __get_bufferWidth() const;

 ::ArrayW<char16_t> __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get_buffer() const;

 int32_t __declspec(property(get=__get_readpos, put=__set_readpos))  readpos;

constexpr void __set_readpos(int32_t value) ;

constexpr int32_t __get_readpos() const;

 int32_t __declspec(property(get=__get_writepos, put=__set_writepos))  writepos;

constexpr void __set_writepos(int32_t value) ;

constexpr int32_t __get_writepos() const;

 ::StringW __declspec(property(get=__get_keypadXmit, put=__set_keypadXmit))  keypadXmit;

constexpr void __set_keypadXmit(::StringW value) ;

constexpr ::StringW __get_keypadXmit() const;

 ::StringW __declspec(property(get=__get_keypadLocal, put=__set_keypadLocal))  keypadLocal;

constexpr void __set_keypadLocal(::StringW value) ;

constexpr ::StringW __get_keypadLocal() const;

 bool __declspec(property(get=__get_inited, put=__set_inited))  inited;

constexpr void __set_inited(bool value) ;

constexpr bool __get_inited() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_initLock, put=__set_initLock))  initLock;

constexpr void __set_initLock(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_initLock() const;

 bool __declspec(property(get=__get_initKeys, put=__set_initKeys))  initKeys;

constexpr void __set_initKeys(bool value) ;

constexpr bool __get_initKeys() const;

 ::StringW __declspec(property(get=__get_origPair, put=__set_origPair))  origPair;

constexpr void __set_origPair(::StringW value) ;

constexpr ::StringW __get_origPair() const;

 ::StringW __declspec(property(get=__get_origColors, put=__set_origColors))  origColors;

constexpr void __set_origColors(::StringW value) ;

constexpr ::StringW __get_origColors() const;

 ::StringW __declspec(property(get=__get_cursorAddress, put=__set_cursorAddress))  cursorAddress;

constexpr void __set_cursorAddress(::StringW value) ;

constexpr ::StringW __get_cursorAddress() const;

 ::System::ConsoleColor __declspec(property(get=__get_fgcolor, put=__set_fgcolor))  fgcolor;

constexpr void __set_fgcolor(::System::ConsoleColor value) ;

constexpr ::System::ConsoleColor __get_fgcolor() const;

 ::StringW __declspec(property(get=__get_setfgcolor, put=__set_setfgcolor))  setfgcolor;

constexpr void __set_setfgcolor(::StringW value) ;

constexpr ::StringW __get_setfgcolor() const;

 ::StringW __declspec(property(get=__get_setbgcolor, put=__set_setbgcolor))  setbgcolor;

constexpr void __set_setbgcolor(::StringW value) ;

constexpr ::StringW __get_setbgcolor() const;

 int32_t __declspec(property(get=__get_maxColors, put=__set_maxColors))  maxColors;

constexpr void __set_maxColors(int32_t value) ;

constexpr int32_t __get_maxColors() const;

 bool __declspec(property(get=__get_noGetPosition, put=__set_noGetPosition))  noGetPosition;

constexpr void __set_noGetPosition(bool value) ;

constexpr bool __get_noGetPosition() const;

 ::System::Collections::Hashtable __declspec(property(get=__get_keymap, put=__set_keymap))  keymap;

constexpr void __set_keymap(::System::Collections::Hashtable value) ;

constexpr ::System::Collections::Hashtable __get_keymap() const;

 ::System::ByteMatcher __declspec(property(get=__get_rootmap, put=__set_rootmap))  rootmap;

constexpr void __set_rootmap(::System::ByteMatcher value) ;

constexpr ::System::ByteMatcher __get_rootmap() const;

 int32_t __declspec(property(get=__get_rl_startx, put=__set_rl_startx))  rl_startx;

constexpr void __set_rl_startx(int32_t value) ;

constexpr int32_t __get_rl_startx() const;

 int32_t __declspec(property(get=__get_rl_starty, put=__set_rl_starty))  rl_starty;

constexpr void __set_rl_starty(int32_t value) ;

constexpr int32_t __get_rl_starty() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_control_characters, put=__set_control_characters))  control_characters;

constexpr void __set_control_characters(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_control_characters() const;

static ::ArrayW<int32_t> __declspec(property(get=__get__consoleColorToAnsiCode, put=__set__consoleColorToAnsiCode))  _consoleColorToAnsiCode;

static void __set__consoleColorToAnsiCode(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get__consoleColorToAnsiCode() ;

 ::ArrayW<char16_t> __declspec(property(get=__get_echobuf, put=__set_echobuf))  echobuf;

constexpr void __set_echobuf(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get_echobuf() const;

 int32_t __declspec(property(get=__get_echon, put=__set_echon))  echon;

constexpr void __set_echon(int32_t value) ;

constexpr int32_t __get_echon() const;


// Properties

 bool __declspec(property(get=get_Initialized))  Initialized;

 int32_t __declspec(property(get=get_WindowHeight))  WindowHeight;

 int32_t __declspec(property(get=get_WindowWidth))  WindowWidth;


// Methods

/// @brief Method TryTermInfoDir addr 0x2491e70 size 0x12c virtual false final false
static ::StringW TryTermInfoDir(::StringW dir, ::StringW term) ;

/// @brief Method SearchTerminfo addr 0x2491f9c size 0x16c virtual false final false
static ::StringW SearchTerminfo(::StringW term) ;

/// @brief Method WriteConsole addr 0x2492108 size 0x28 virtual false final false
 void WriteConsole(::StringW str) ;

// Ctor Parameters [CppParam { name: "term", ty: "::StringW", modifiers: "", def_value: None }]
explicit TermInfoDriver(::StringW term) ;

/// @brief Method .ctor addr 0x248942c size 0x348 virtual false final false
 void _ctor(::StringW term) ;

/// @brief Method get_Initialized addr 0x2492494 size 0x8 virtual true final true
 bool get_Initialized() ;

/// @brief Method Init addr 0x249249c size 0x864 virtual true final true
 void Init() ;

/// @brief Method IncrementX addr 0x2493080 size 0x6c virtual false final false
 void IncrementX() ;

/// @brief Method WriteSpecialKey addr 0x2493144 size 0x114 virtual false final false
 void WriteSpecialKey(::System::ConsoleKeyInfo key) ;

/// @brief Method WriteSpecialKey addr 0x2493408 size 0x28 virtual false final false
 void WriteSpecialKey(char16_t c) ;

/// @brief Method IsSpecialKey addr 0x24935b4 size 0x84 virtual false final false
 bool IsSpecialKey(::System::ConsoleKeyInfo key) ;

/// @brief Method IsSpecialKey addr 0x2493638 size 0x28 virtual false final false
 bool IsSpecialKey(char16_t c) ;

/// @brief Method GetCursorPosition addr 0x2492df0 size 0x290 virtual false final false
 void GetCursorPosition() ;

/// @brief Method CheckWindowDimensions addr 0x2493744 size 0x120 virtual false final false
 void CheckWindowDimensions() ;

/// @brief Method get_WindowHeight addr 0x2493118 size 0x2c virtual true final true
 int32_t get_WindowHeight() ;

/// @brief Method get_WindowWidth addr 0x24930ec size 0x2c virtual true final true
 int32_t get_WindowWidth() ;

/// @brief Method AddToBuffer addr 0x2493660 size 0xe4 virtual false final false
 void AddToBuffer(int32_t b) ;

/// @brief Method AdjustBuffer addr 0x2493864 size 0x14 virtual false final false
 void AdjustBuffer() ;

/// @brief Method CreateKeyInfoFromInt addr 0x2493430 size 0x184 virtual false final false
 ::System::ConsoleKeyInfo CreateKeyInfoFromInt(int32_t n, bool alt) ;

/// @brief Method GetKeyFromBuffer addr 0x2493878 size 0x2cc virtual false final false
 ::bs_hook::Il2CppWrapperType GetKeyFromBuffer(bool cooked) ;

/// @brief Method ReadKeyInternal addr 0x2494058 size 0x1c0 virtual false final false
 ::System::ConsoleKeyInfo ReadKeyInternal(ByRef<bool> fresh) ;

/// @brief Method InputPending addr 0x2494384 size 0x34 virtual false final false
 bool InputPending() ;

/// @brief Method QueueEcho addr 0x24943b8 size 0xc8 virtual false final false
 void QueueEcho(char16_t c) ;

/// @brief Method Echo addr 0x2494480 size 0x54 virtual false final false
 void Echo(::System::ConsoleKeyInfo key) ;

/// @brief Method EchoFlush addr 0x24944d4 size 0x34 virtual false final false
 void EchoFlush() ;

/// @brief Method Read addr 0x2494508 size 0x304 virtual false final false
 int32_t Read(ByRef<::ArrayW<char16_t>> dest, int32_t index, int32_t count) ;

/// @brief Method ReadKey addr 0x249480c size 0x64 virtual true final true
 ::System::ConsoleKeyInfo ReadKey(bool intercept) ;

/// @brief Method ReadLine addr 0x2494870 size 0x8 virtual true final true
 ::StringW ReadLine() ;

/// @brief Method ReadToEnd addr 0x2494a40 size 0x8 virtual false final false
 ::StringW ReadToEnd() ;

/// @brief Method ReadUntilConditionInternal addr 0x2494878 size 0x1c8 virtual false final false
 ::StringW ReadUntilConditionInternal(bool haltOnNewLine) ;

/// @brief Method SetCursorPosition addr 0x2493258 size 0x1b0 virtual true final true
 void SetCursorPosition(int32_t left, int32_t top) ;

/// @brief Method CreateKeyMap addr 0x2494bc0 size 0x1e98 virtual false final false
 void CreateKeyMap() ;

/// @brief Method InitKeys addr 0x2494218 size 0x16c virtual false final false
 void InitKeys() ;

/// @brief Method AddStringMapping addr 0x2496ad4 size 0x4c virtual false final false
 void AddStringMapping(::System::TermInfoStrings s) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::TermInfoDriver);
DEFINE_IL2CPP_ARG_TYPE(::System::TermInfoDriver, "System", "TermInfoDriver");
