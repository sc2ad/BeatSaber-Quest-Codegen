#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexRunner_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Text::RegularExpressions {
class RegexCode;
}
namespace System::Globalization {
class CultureInfo;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class RegexInterpreter;
}
// Type: System.Text.RegularExpressions::RegexInterpreter
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7780))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7773))
// CS Name: System.Text.RegularExpressions.RegexInterpreter
class CORDL_TYPE RegexInterpreter : public System::Text::RegularExpressions::RegexRunner {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~RegexInterpreter() = default;

// Ctor Parameters [CppParam { name: "", ty: "RegexInterpreter", modifiers: " const&", def_value: None }]
constexpr RegexInterpreter(RegexInterpreter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RegexInterpreter", modifiers: "&&", def_value: None }]
constexpr RegexInterpreter(RegexInterpreter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RegexInterpreter(void* ptr) noexcept : System::Text::RegularExpressions::RegexRunner(ptr) {
}


  constexpr RegexInterpreter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RegexInterpreter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RegexInterpreter& operator=(RegexInterpreter&& o) noexcept = default;
  constexpr RegexInterpreter& operator=(RegexInterpreter const& o) noexcept = default;
                


// Fields

 System::Text::RegularExpressions::RegexCode __declspec(property(get=__get__code, put=__set__code))  _code;

constexpr void __set__code(System::Text::RegularExpressions::RegexCode value) ;

constexpr System::Text::RegularExpressions::RegexCode __get__code() const;

 System::Globalization::CultureInfo __declspec(property(get=__get__culture, put=__set__culture))  _culture;

constexpr void __set__culture(System::Globalization::CultureInfo value) ;

constexpr System::Globalization::CultureInfo __get__culture() const;

 int32_t __declspec(property(get=__get__operator, put=__set__operator))  _operator;

constexpr void __set__operator(int32_t value) ;

constexpr int32_t __get__operator() const;

 int32_t __declspec(property(get=__get__codepos, put=__set__codepos))  _codepos;

constexpr void __set__codepos(int32_t value) ;

constexpr int32_t __get__codepos() const;

 bool __declspec(property(get=__get__rightToLeft, put=__set__rightToLeft))  _rightToLeft;

constexpr void __set__rightToLeft(bool value) ;

constexpr bool __get__rightToLeft() const;

 bool __declspec(property(get=__get__caseInsensitive, put=__set__caseInsensitive))  _caseInsensitive;

constexpr void __set__caseInsensitive(bool value) ;

constexpr bool __get__caseInsensitive() const;


// Methods

// Ctor Parameters [CppParam { name: "code", ty: "System::Text::RegularExpressions::RegexCode", modifiers: "", def_value: None }, CppParam { name: "culture", ty: "System::Globalization::CultureInfo", modifiers: "", def_value: None }]
explicit RegexInterpreter(System::Text::RegularExpressions::RegexCode code, System::Globalization::CultureInfo culture) ;

/// @brief Method .ctor addr 0x27ccde8 size 0x2c virtual false final false
 void _ctor(System::Text::RegularExpressions::RegexCode code, System::Globalization::CultureInfo culture) ;

/// @brief Method InitTrackCount addr 0x27cce1c size 0x20 virtual true final false
 void InitTrackCount() ;

/// @brief Method Advance addr 0x27cce3c size 0x64 virtual false final false
 void Advance(int32_t i) ;

/// @brief Method Goto addr 0x27ccec0 size 0x78 virtual false final false
 void Goto(int32_t newpos) ;

/// @brief Method Textto addr 0x27ccf80 size 0x8 virtual false final false
 void Textto(int32_t newpos) ;

/// @brief Method Trackto addr 0x27ccf88 size 0x24 virtual false final false
 void Trackto(int32_t newpos) ;

/// @brief Method Textstart addr 0x27ccfac size 0x8 virtual false final false
 int32_t Textstart() ;

/// @brief Method Textpos addr 0x27ccfb4 size 0x8 virtual false final false
 int32_t Textpos() ;

/// @brief Method Trackpos addr 0x27ccfbc size 0x24 virtual false final false
 int32_t Trackpos() ;

/// @brief Method TrackPush addr 0x27ccfe0 size 0x40 virtual false final false
 void TrackPush() ;

/// @brief Method TrackPush addr 0x27cd020 size 0x5c virtual false final false
 void TrackPush(int32_t I1) ;

/// @brief Method TrackPush addr 0x27cd07c size 0x78 virtual false final false
 void TrackPush(int32_t I1, int32_t I2) ;

/// @brief Method TrackPush addr 0x27cd0f4 size 0x94 virtual false final false
 void TrackPush(int32_t I1, int32_t I2, int32_t I3) ;

/// @brief Method TrackPush2 addr 0x27cd188 size 0x60 virtual false final false
 void TrackPush2(int32_t I1) ;

/// @brief Method TrackPush2 addr 0x27cd1e8 size 0x7c virtual false final false
 void TrackPush2(int32_t I1, int32_t I2) ;

/// @brief Method Backtrack addr 0x27cd264 size 0xf8 virtual false final false
 void Backtrack() ;

/// @brief Method SetOperator addr 0x27ccea0 size 0x20 virtual false final false
 void SetOperator(int32_t op) ;

/// @brief Method TrackPop addr 0x27cd35c size 0x10 virtual false final false
 void TrackPop() ;

/// @brief Method TrackPop addr 0x27cd36c size 0x10 virtual false final false
 void TrackPop(int32_t framesize) ;

/// @brief Method TrackPeek addr 0x27cd37c size 0x38 virtual false final false
 int32_t TrackPeek() ;

/// @brief Method TrackPeek addr 0x27cd3b4 size 0x3c virtual false final false
 int32_t TrackPeek(int32_t i) ;

/// @brief Method StackPush addr 0x27cd3f0 size 0x3c virtual false final false
 void StackPush(int32_t I1) ;

/// @brief Method StackPush addr 0x27cd42c size 0x58 virtual false final false
 void StackPush(int32_t I1, int32_t I2) ;

/// @brief Method StackPop addr 0x27cd484 size 0x10 virtual false final false
 void StackPop() ;

/// @brief Method StackPop addr 0x27cd494 size 0x10 virtual false final false
 void StackPop(int32_t framesize) ;

/// @brief Method StackPeek addr 0x27cd4a4 size 0x38 virtual false final false
 int32_t StackPeek() ;

/// @brief Method StackPeek addr 0x27cd4dc size 0x3c virtual false final false
 int32_t StackPeek(int32_t i) ;

/// @brief Method Operator addr 0x27cd518 size 0x8 virtual false final false
 int32_t Operator() ;

/// @brief Method Operand addr 0x27cd520 size 0x44 virtual false final false
 int32_t Operand(int32_t i) ;

/// @brief Method Leftchars addr 0x27cd564 size 0x10 virtual false final false
 int32_t Leftchars() ;

/// @brief Method Rightchars addr 0x27cd574 size 0x10 virtual false final false
 int32_t Rightchars() ;

/// @brief Method Bump addr 0x27cd584 size 0x14 virtual false final false
 int32_t Bump() ;

/// @brief Method Forwardchars addr 0x27cd598 size 0x2c virtual false final false
 int32_t Forwardchars() ;

/// @brief Method Forwardcharnext addr 0x27cd5c4 size 0x90 virtual false final false
 char16_t Forwardcharnext() ;

/// @brief Method Stringmatch addr 0x27cd654 size 0x16c virtual false final false
 bool Stringmatch(::StringW str) ;

/// @brief Method Refmatch addr 0x27cd7c0 size 0x19c virtual false final false
 bool Refmatch(int32_t index, int32_t len) ;

/// @brief Method Backwardnext addr 0x27cd95c size 0x30 virtual false final false
 void Backwardnext() ;

/// @brief Method CharAt addr 0x27cd98c size 0x1c virtual false final false
 char16_t CharAt(int32_t j) ;

/// @brief Method FindFirstChar addr 0x27cd9a8 size 0x360 virtual true final false
 bool FindFirstChar() ;

/// @brief Method Go addr 0x27cdd08 size 0x11dc virtual true final false
 void Go() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text::RegularExpressions
NEED_NO_BOX(System::Text::RegularExpressions::RegexInterpreter);
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexInterpreter, "System.Text.RegularExpressions", "RegexInterpreter");
