#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Globalization {
class NumberFormatInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class ScoreFormatter;
}
// Type: ::ScoreFormatter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4229))
// CS Name: ScoreFormatter
class CORDL_TYPE ScoreFormatter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ScoreFormatter() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScoreFormatter", modifiers: " const&", def_value: None }]
constexpr ScoreFormatter(ScoreFormatter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScoreFormatter", modifiers: "&&", def_value: None }]
constexpr ScoreFormatter(ScoreFormatter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScoreFormatter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ScoreFormatter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScoreFormatter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScoreFormatter& operator=(ScoreFormatter&& o) noexcept = default;
  constexpr ScoreFormatter& operator=(ScoreFormatter const& o) noexcept = default;
                


// Fields

static System::Globalization::NumberFormatInfo __declspec(property(get=__get__numberFormatInfo, put=__set__numberFormatInfo))  _numberFormatInfo;

static void __set__numberFormatInfo(System::Globalization::NumberFormatInfo value) ;

static System::Globalization::NumberFormatInfo __get__numberFormatInfo() ;


// Methods

/// @brief Method Format addr 0x21c39e8 size 0x80 virtual false final false
static ::StringW Format(int32_t score) ;

// Ctor Parameters []
explicit ScoreFormatter() ;

/// @brief Method .ctor addr 0x21c3a68 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ScoreFormatter);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScoreFormatter, "", "ScoreFormatter");
