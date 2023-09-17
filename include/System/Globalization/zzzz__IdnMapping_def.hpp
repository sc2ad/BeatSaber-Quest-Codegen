#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Globalization {
class Punycode;
}
// Forward declare root types
namespace System::Globalization {
class IdnMapping;
}
// Type: System.Globalization::IdnMapping
namespace System::Globalization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3708))
// CS Name: System.Globalization.IdnMapping
class CORDL_TYPE IdnMapping : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~IdnMapping() = default;

// Ctor Parameters [CppParam { name: "", ty: "IdnMapping", modifiers: " const&", def_value: None }]
constexpr IdnMapping(IdnMapping const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IdnMapping", modifiers: "&&", def_value: None }]
constexpr IdnMapping(IdnMapping&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IdnMapping(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IdnMapping& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IdnMapping& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IdnMapping& operator=(IdnMapping&& o) noexcept = default;
  constexpr IdnMapping& operator=(IdnMapping const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_allow_unassigned, put=__set_allow_unassigned))  allow_unassigned;

constexpr void __set_allow_unassigned(bool value) ;

constexpr bool __get_allow_unassigned() const;

 bool __declspec(property(get=__get_use_std3, put=__set_use_std3))  use_std3;

constexpr void __set_use_std3(bool value) ;

constexpr bool __get_use_std3() const;

 ::System::Globalization::Punycode __declspec(property(get=__get_puny, put=__set_puny))  puny;

constexpr void __set_puny(::System::Globalization::Punycode value) ;

constexpr ::System::Globalization::Punycode __get_puny() const;


// Methods

// Ctor Parameters []
explicit IdnMapping() ;

/// @brief Method .ctor addr 0x2409fd8 size 0x90 virtual false final false
 void _ctor() ;

/// @brief Method Equals addr 0x240a0a8 size 0x8c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x240a134 size 0x10 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method GetAscii addr 0x240a144 size 0x64 virtual false final false
 ::StringW GetAscii(::StringW unicode) ;

/// @brief Method GetAscii addr 0x240a1a8 size 0xd4 virtual false final false
 ::StringW GetAscii(::StringW unicode, int32_t index, int32_t count) ;

/// @brief Method Convert addr 0x240a27c size 0x22c virtual false final false
 ::StringW Convert(::StringW input, int32_t index, int32_t count, bool toAscii) ;

/// @brief Method ToAscii addr 0x240a4a8 size 0x23c virtual false final false
 ::StringW ToAscii(::StringW s, int32_t offset) ;

/// @brief Method VerifyLength addr 0x240af1c size 0xcc virtual false final false
 void VerifyLength(::StringW s, int32_t offset) ;

/// @brief Method NamePrep addr 0x240a8bc size 0x14c virtual false final false
 ::StringW NamePrep(::StringW s, int32_t offset) ;

/// @brief Method VerifyProhibitedCharacters addr 0x240afe8 size 0x240 virtual false final false
 void VerifyProhibitedCharacters(::StringW s, int32_t offset) ;

/// @brief Method VerifyStd3AsciiRules addr 0x240aa08 size 0x1d0 virtual false final false
 void VerifyStd3AsciiRules(::StringW s, int32_t offset) ;

/// @brief Method GetUnicode addr 0x240b228 size 0x64 virtual false final false
 ::StringW GetUnicode(::StringW ascii) ;

/// @brief Method GetUnicode addr 0x240b28c size 0xd4 virtual false final false
 ::StringW GetUnicode(::StringW ascii, int32_t index, int32_t count) ;

/// @brief Method ToUnicode addr 0x240a6e4 size 0x1d8 virtual false final false
 ::StringW ToUnicode(::StringW s, int32_t offset) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
} // end anonymous namespace
NEED_NO_BOX(::System::Globalization::IdnMapping);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::IdnMapping, "System.Globalization", "IdnMapping");
