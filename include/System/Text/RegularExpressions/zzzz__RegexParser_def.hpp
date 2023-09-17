#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Text::RegularExpressions {
class RegexReplacement;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Text::RegularExpressions {
class RegexNode;
}
namespace System {
class ArgumentException;
}
namespace System::Text::RegularExpressions {
struct RegexOptions;
}
namespace System::Text::RegularExpressions {
class RegexCharClass;
}
namespace System::Text::RegularExpressions {
class RegexTree;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class RegexParser;
}
// Type: System.Text.RegularExpressions::RegexParser
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7777))
// CS Name: System.Text.RegularExpressions.RegexParser
class CORDL_TYPE RegexParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~RegexParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "RegexParser", modifiers: " const&", def_value: None }]
constexpr RegexParser(RegexParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RegexParser", modifiers: "&&", def_value: None }]
constexpr RegexParser(RegexParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RegexParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RegexParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RegexParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RegexParser& operator=(RegexParser&& o) noexcept = default;
  constexpr RegexParser& operator=(RegexParser const& o) noexcept = default;
                


// Fields

 ::System::Text::RegularExpressions::RegexNode __declspec(property(get=__get__stack, put=__set__stack))  _stack;

constexpr void __set__stack(::System::Text::RegularExpressions::RegexNode value) ;

constexpr ::System::Text::RegularExpressions::RegexNode __get__stack() const;

 ::System::Text::RegularExpressions::RegexNode __declspec(property(get=__get__group, put=__set__group))  _group;

constexpr void __set__group(::System::Text::RegularExpressions::RegexNode value) ;

constexpr ::System::Text::RegularExpressions::RegexNode __get__group() const;

 ::System::Text::RegularExpressions::RegexNode __declspec(property(get=__get__alternation, put=__set__alternation))  _alternation;

constexpr void __set__alternation(::System::Text::RegularExpressions::RegexNode value) ;

constexpr ::System::Text::RegularExpressions::RegexNode __get__alternation() const;

 ::System::Text::RegularExpressions::RegexNode __declspec(property(get=__get__concatenation, put=__set__concatenation))  _concatenation;

constexpr void __set__concatenation(::System::Text::RegularExpressions::RegexNode value) ;

constexpr ::System::Text::RegularExpressions::RegexNode __get__concatenation() const;

 ::System::Text::RegularExpressions::RegexNode __declspec(property(get=__get__unit, put=__set__unit))  _unit;

constexpr void __set__unit(::System::Text::RegularExpressions::RegexNode value) ;

constexpr ::System::Text::RegularExpressions::RegexNode __get__unit() const;

 ::StringW __declspec(property(get=__get__pattern, put=__set__pattern))  _pattern;

constexpr void __set__pattern(::StringW value) ;

constexpr ::StringW __get__pattern() const;

 int32_t __declspec(property(get=__get__currentPos, put=__set__currentPos))  _currentPos;

constexpr void __set__currentPos(int32_t value) ;

constexpr int32_t __get__currentPos() const;

 ::System::Globalization::CultureInfo __declspec(property(get=__get__culture, put=__set__culture))  _culture;

constexpr void __set__culture(::System::Globalization::CultureInfo value) ;

constexpr ::System::Globalization::CultureInfo __get__culture() const;

 int32_t __declspec(property(get=__get__autocap, put=__set__autocap))  _autocap;

constexpr void __set__autocap(int32_t value) ;

constexpr int32_t __get__autocap() const;

 int32_t __declspec(property(get=__get__capcount, put=__set__capcount))  _capcount;

constexpr void __set__capcount(int32_t value) ;

constexpr int32_t __get__capcount() const;

 int32_t __declspec(property(get=__get__captop, put=__set__captop))  _captop;

constexpr void __set__captop(int32_t value) ;

constexpr int32_t __get__captop() const;

 int32_t __declspec(property(get=__get__capsize, put=__set__capsize))  _capsize;

constexpr void __set__capsize(int32_t value) ;

constexpr int32_t __get__capsize() const;

 ::System::Collections::Hashtable __declspec(property(get=__get__caps, put=__set__caps))  _caps;

constexpr void __set__caps(::System::Collections::Hashtable value) ;

constexpr ::System::Collections::Hashtable __get__caps() const;

 ::System::Collections::Hashtable __declspec(property(get=__get__capnames, put=__set__capnames))  _capnames;

constexpr void __set__capnames(::System::Collections::Hashtable value) ;

constexpr ::System::Collections::Hashtable __get__capnames() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__capnumlist, put=__set__capnumlist))  _capnumlist;

constexpr void __set__capnumlist(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__capnumlist() const;

 ::System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get__capnamelist, put=__set__capnamelist))  _capnamelist;

constexpr void __set__capnamelist(::System::Collections::Generic::List_1<::StringW> value) ;

constexpr ::System::Collections::Generic::List_1<::StringW> __get__capnamelist() const;

 ::System::Text::RegularExpressions::RegexOptions __declspec(property(get=__get__options, put=__set__options))  _options;

constexpr void __set__options(::System::Text::RegularExpressions::RegexOptions value) ;

constexpr ::System::Text::RegularExpressions::RegexOptions __get__options() const;

 ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexOptions> __declspec(property(get=__get__optionsStack, put=__set__optionsStack))  _optionsStack;

constexpr void __set__optionsStack(::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexOptions> value) ;

constexpr ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexOptions> __get__optionsStack() const;

 bool __declspec(property(get=__get__ignoreNextParen, put=__set__ignoreNextParen))  _ignoreNextParen;

constexpr void __set__ignoreNextParen(bool value) ;

constexpr bool __get__ignoreNextParen() const;

static ::ArrayW<uint8_t> __declspec(property(get=__get_s_category, put=__set_s_category))  s_category;

static void __set_s_category(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_s_category() ;


// Methods

/// @brief Method Parse addr 0x27d05b4 size 0x19c virtual false final false
static ::System::Text::RegularExpressions::RegexTree Parse(::StringW re, ::System::Text::RegularExpressions::RegexOptions op) ;

/// @brief Method ParseReplacement addr 0x27d13e8 size 0x150 virtual false final false
static ::System::Text::RegularExpressions::RegexReplacement ParseReplacement(::StringW rep, ::System::Collections::Hashtable caps, int32_t capsize, ::System::Collections::Hashtable capnames, ::System::Text::RegularExpressions::RegexOptions op) ;

// Ctor Parameters [CppParam { name: "culture", ty: "::System::Globalization::CultureInfo", modifiers: "", def_value: None }]
explicit RegexParser(::System::Globalization::CultureInfo culture) ;

/// @brief Method .ctor addr 0x27d0750 size 0xc0 virtual false final false
 void _ctor(::System::Globalization::CultureInfo culture) ;

/// @brief Method SetPattern addr 0x27d0810 size 0x5c virtual false final false
 void SetPattern(::StringW Re) ;

/// @brief Method Reset addr 0x27d0bac size 0x8c virtual false final false
 void Reset(::System::Text::RegularExpressions::RegexOptions topopts) ;

/// @brief Method ScanRegex addr 0x27d0c38 size 0x748 virtual false final false
 ::System::Text::RegularExpressions::RegexNode ScanRegex() ;

/// @brief Method ScanReplacement addr 0x27d1544 size 0x124 virtual false final false
 ::System::Text::RegularExpressions::RegexNode ScanReplacement() ;

/// @brief Method ScanCharClass addr 0x27d2574 size 0x608 virtual false final false
 ::System::Text::RegularExpressions::RegexCharClass ScanCharClass(bool caseInsensitive, bool scanOnly) ;

/// @brief Method ScanGroupOpen addr 0x27d2ca0 size 0x8e8 virtual false final false
 ::System::Text::RegularExpressions::RegexNode ScanGroupOpen() ;

/// @brief Method ScanBlank addr 0x27d1bfc size 0x2e4 virtual false final false
 void ScanBlank() ;

/// @brief Method ScanBackslash addr 0x27d3a48 size 0x4e4 virtual false final false
 ::System::Text::RegularExpressions::RegexNode ScanBackslash(bool scanOnly) ;

/// @brief Method ScanBasicBackslash addr 0x27d4d40 size 0x5a8 virtual false final false
 ::System::Text::RegularExpressions::RegexNode ScanBasicBackslash(bool scanOnly) ;

/// @brief Method ScanDollar addr 0x27d41e4 size 0x3f8 virtual false final false
 ::System::Text::RegularExpressions::RegexNode ScanDollar() ;

/// @brief Method ScanCapname addr 0x27d48d8 size 0xbc virtual false final false
 ::StringW ScanCapname() ;

/// @brief Method ScanOctal addr 0x27d52e8 size 0x9c virtual false final false
 char16_t ScanOctal() ;

/// @brief Method ScanDecimal addr 0x27d40d4 size 0xcc virtual false final false
 int32_t ScanDecimal() ;

/// @brief Method ScanHex addr 0x27d5384 size 0x130 virtual false final false
 char16_t ScanHex(int32_t c) ;

/// @brief Method HexDigit addr 0x27d54b4 size 0x38 virtual false final false
static int32_t HexDigit(char16_t ch) ;

/// @brief Method ScanControl addr 0x27d54ec size 0x9c virtual false final false
 char16_t ScanControl() ;

/// @brief Method IsOnlyTopOption addr 0x27d5588 size 0x28 virtual false final false
 bool IsOnlyTopOption(::System::Text::RegularExpressions::RegexOptions option) ;

/// @brief Method ScanOptions addr 0x27d4b1c size 0xfc virtual false final false
 void ScanOptions() ;

/// @brief Method ScanCharEscape addr 0x27d4758 size 0x180 virtual false final false
 char16_t ScanCharEscape() ;

/// @brief Method ParseProperty addr 0x27d45e8 size 0x170 virtual false final false
 ::StringW ParseProperty() ;

/// @brief Method TypeFromCode addr 0x27d4cb0 size 0x90 virtual false final false
 int32_t TypeFromCode(char16_t ch) ;

/// @brief Method OptionFromCode addr 0x27d55b0 size 0x60 virtual false final false
static ::System::Text::RegularExpressions::RegexOptions OptionFromCode(char16_t ch) ;

/// @brief Method CountCaptures addr 0x27d086c size 0x340 virtual false final false
 void CountCaptures() ;

/// @brief Method NoteCaptureSlot addr 0x27d5610 size 0x108 virtual false final false
 void NoteCaptureSlot(int32_t i, int32_t pos) ;

/// @brief Method NoteCaptureName addr 0x27d5768 size 0x19c virtual false final false
 void NoteCaptureName(::StringW name, int32_t pos) ;

/// @brief Method NoteCaptures addr 0x27d1538 size 0xc virtual false final false
 void NoteCaptures(::System::Collections::Hashtable caps, int32_t capsize, ::System::Collections::Hashtable capnames) ;

/// @brief Method AssignNameSlots addr 0x27d5904 size 0x674 virtual false final false
 void AssignNameSlots() ;

/// @brief Method CaptureSlotFromName addr 0x27d4a90 size 0x8c virtual false final false
 int32_t CaptureSlotFromName(::StringW capname) ;

/// @brief Method IsCaptureSlot addr 0x27d49d8 size 0x9c virtual false final false
 bool IsCaptureSlot(int32_t i) ;

/// @brief Method IsCaptureName addr 0x27d4a74 size 0x1c virtual false final false
 bool IsCaptureName(::StringW capname) ;

/// @brief Method UseOptionN addr 0x27d49cc size 0xc virtual false final false
 bool UseOptionN() ;

/// @brief Method UseOptionI addr 0x27d2568 size 0xc virtual false final false
 bool UseOptionI() ;

/// @brief Method UseOptionM addr 0x27d3f2c size 0xc virtual false final false
 bool UseOptionM() ;

/// @brief Method UseOptionS addr 0x27d3fb0 size 0xc virtual false final false
 bool UseOptionS() ;

/// @brief Method UseOptionX addr 0x27d1ee0 size 0xc virtual false final false
 bool UseOptionX() ;

/// @brief Method UseOptionE addr 0x27d45dc size 0xc virtual false final false
 bool UseOptionE() ;

/// @brief Method IsSpecial addr 0x27d217c size 0x98 virtual false final false
static bool IsSpecial(char16_t ch) ;

/// @brief Method IsStopperX addr 0x27d1f44 size 0x98 virtual false final false
static bool IsStopperX(char16_t ch) ;

/// @brief Method IsQuantifier addr 0x27d2214 size 0x98 virtual false final false
static bool IsQuantifier(char16_t ch) ;

/// @brief Method IsTrueQuantifier addr 0x27d1fdc size 0x1a0 virtual false final false
 bool IsTrueQuantifier() ;

/// @brief Method IsSpace addr 0x27d4c18 size 0x98 virtual false final false
static bool IsSpace(char16_t ch) ;

/// @brief Method AddConcatenate addr 0x27d22ac size 0x1ec virtual false final false
 void AddConcatenate(int32_t pos, int32_t cch, bool isReplacement) ;

/// @brief Method PushGroup addr 0x27d35ec size 0x3c virtual false final false
 void PushGroup() ;

/// @brief Method PopGroup addr 0x27d38e0 size 0xd0 virtual false final false
 void PopGroup() ;

/// @brief Method EmptyStack addr 0x27d36f0 size 0x10 virtual false final false
 bool EmptyStack() ;

/// @brief Method StartGroup addr 0x27d1b50 size 0xac virtual false final false
 void StartGroup(::System::Text::RegularExpressions::RegexNode openGroup) ;

/// @brief Method AddAlternate addr 0x27d3628 size 0xc8 virtual false final false
 void AddAlternate() ;

/// @brief Method AddConcatenate addr 0x27d4080 size 0x28 virtual false final false
 void AddConcatenate() ;

/// @brief Method AddConcatenate addr 0x27d41a0 size 0x44 virtual false final false
 void AddConcatenate(bool lazy, int32_t min, int32_t max) ;

/// @brief Method Unit addr 0x27d5f78 size 0x8 virtual false final false
 ::System::Text::RegularExpressions::RegexNode Unit() ;

/// @brief Method AddUnitOne addr 0x27d24b4 size 0xb4 virtual false final false
 void AddUnitOne(char16_t ch) ;

/// @brief Method AddUnitNotone addr 0x27d3fbc size 0xb4 virtual false final false
 void AddUnitNotone(char16_t ch) ;

/// @brief Method AddUnitSet addr 0x27d2b7c size 0x80 virtual false final false
 void AddUnitSet(::StringW cc) ;

/// @brief Method AddUnitNode addr 0x27d5f80 size 0x8 virtual false final false
 void AddUnitNode(::System::Text::RegularExpressions::RegexNode node) ;

/// @brief Method AddUnitType addr 0x27d3f38 size 0x78 virtual false final false
 void AddUnitType(int32_t type) ;

/// @brief Method AddGroup addr 0x27d37a0 size 0x140 virtual false final false
 void AddGroup() ;

/// @brief Method PushOptions addr 0x27d2bfc size 0xa4 virtual false final false
 void PushOptions() ;

/// @brief Method PopOptions addr 0x27d39b0 size 0x98 virtual false final false
 void PopOptions() ;

/// @brief Method EmptyOptionsStack addr 0x27d5718 size 0x50 virtual false final false
 bool EmptyOptionsStack() ;

/// @brief Method PopKeepOptions addr 0x27d3588 size 0x64 virtual false final false
 void PopKeepOptions() ;

/// @brief Method MakeException addr 0x27d3700 size 0xa0 virtual false final false
 ::System::ArgumentException MakeException(::StringW message) ;

/// @brief Method Textpos addr 0x27d5f88 size 0x8 virtual false final false
 int32_t Textpos() ;

/// @brief Method Textto addr 0x27d5f90 size 0x8 virtual false final false
 void Textto(int32_t pos) ;

/// @brief Method RightCharMoveRight addr 0x27d40a8 size 0x2c virtual false final false
 char16_t RightCharMoveRight() ;

/// @brief Method MoveRight addr 0x27d1eec size 0x10 virtual false final false
 void MoveRight() ;

/// @brief Method MoveRight addr 0x27d49bc size 0x10 virtual false final false
 void MoveRight(int32_t i) ;

/// @brief Method MoveLeft addr 0x27d4070 size 0x10 virtual false final false
 void MoveLeft() ;

/// @brief Method CharAt addr 0x27d2498 size 0x1c virtual false final false
 char16_t CharAt(int32_t i) ;

/// @brief Method RightChar addr 0x27d1f20 size 0x24 virtual false final false
 char16_t RightChar() ;

/// @brief Method RightChar addr 0x27d4994 size 0x28 virtual false final false
 char16_t RightChar(int32_t i) ;

/// @brief Method CharsRight addr 0x27d1efc size 0x24 virtual false final false
 int32_t CharsRight() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text::RegularExpressions
} // end anonymous namespace
NEED_NO_BOX(::System::Text::RegularExpressions::RegexParser);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexParser, "System.Text.RegularExpressions", "RegexParser");
