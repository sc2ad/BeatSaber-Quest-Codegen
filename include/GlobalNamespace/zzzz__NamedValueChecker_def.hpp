#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class NamedValueChecker;
}
// Type: ::NamedValueChecker
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6003))
// CS Name: NamedValueChecker
class CORDL_TYPE NamedValueChecker : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NamedValueChecker() = default;

// Ctor Parameters [CppParam { name: "", ty: "NamedValueChecker", modifiers: " const&", def_value: None }]
constexpr NamedValueChecker(NamedValueChecker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NamedValueChecker", modifiers: "&&", def_value: None }]
constexpr NamedValueChecker(NamedValueChecker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NamedValueChecker(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NamedValueChecker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NamedValueChecker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NamedValueChecker& operator=(NamedValueChecker&& o) noexcept = default;
  constexpr NamedValueChecker& operator=(NamedValueChecker const& o) noexcept = default;
                


// Methods

/// @brief Method Check addr 0x21a3bc4 size 0xb0 virtual false final false
static bool Check(::StringW fieldName, ::bs_hook::Il2CppWrapperType value, ::bs_hook::Il2CppWrapperType expectedValue, System::Text::StringBuilder assertMessageSb) ;

// Ctor Parameters []
explicit NamedValueChecker() ;

/// @brief Method .ctor addr 0x21a3c74 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NamedValueChecker);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NamedValueChecker, "", "NamedValueChecker");
