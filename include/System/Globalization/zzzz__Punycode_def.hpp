#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Globalization/zzzz__Bootstring_def.hpp"
// Forward declare root types
namespace System::Globalization {
class Punycode;
}
// Type: System.Globalization::Punycode
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3709))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3710))
// CS Name: System.Globalization.Punycode
class CORDL_TYPE Punycode : public System::Globalization::Bootstring {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Punycode() = default;

// Ctor Parameters [CppParam { name: "", ty: "Punycode", modifiers: " const&", def_value: None }]
constexpr Punycode(Punycode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Punycode", modifiers: "&&", def_value: None }]
constexpr Punycode(Punycode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Punycode(void* ptr) noexcept : System::Globalization::Bootstring(ptr) {
}


  constexpr Punycode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Punycode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Punycode& operator=(Punycode&& o) noexcept = default;
  constexpr Punycode& operator=(Punycode const& o) noexcept = default;
                


// Methods

static System::Globalization::Punycode New_ctor() ;

/// @brief Method .ctor addr 0x240a068 size 0x40 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
NEED_NO_BOX(System::Globalization::Punycode);
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::Punycode, "System.Globalization", "Punycode");
