#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Text::RegularExpressions {
class RegexRunner;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class RegexRunnerFactory;
}
// Type: System.Text.RegularExpressions::RegexRunnerFactory
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7781))
// CS Name: System.Text.RegularExpressions.RegexRunnerFactory
class CORDL_TYPE RegexRunnerFactory : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RegexRunnerFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "RegexRunnerFactory", modifiers: " const&", def_value: None }]
constexpr RegexRunnerFactory(RegexRunnerFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RegexRunnerFactory", modifiers: "&&", def_value: None }]
constexpr RegexRunnerFactory(RegexRunnerFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RegexRunnerFactory(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RegexRunnerFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RegexRunnerFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RegexRunnerFactory& operator=(RegexRunnerFactory&& o) noexcept = default;
  constexpr RegexRunnerFactory& operator=(RegexRunnerFactory const& o) noexcept = default;
                


// Methods

/// @brief Method CreateInstance addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Text::RegularExpressions::RegexRunner CreateInstance() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text::RegularExpressions
NEED_NO_BOX(System::Text::RegularExpressions::RegexRunnerFactory);
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexRunnerFactory, "System.Text.RegularExpressions", "RegexRunnerFactory");
