#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::Linq::Expressions {
class Strings;
}
// Type: System.Linq.Expressions::Strings
namespace System::Linq::Expressions {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14587))
// CS Name: System.Linq.Expressions.Strings
class CORDL_TYPE Strings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Strings() = default;

// Ctor Parameters [CppParam { name: "", ty: "Strings", modifiers: " const&", def_value: None }]
constexpr Strings(Strings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Strings", modifiers: "&&", def_value: None }]
constexpr Strings(Strings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Strings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Strings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Strings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Strings& operator=(Strings&& o) noexcept = default;
  constexpr Strings& operator=(Strings const& o) noexcept = default;
                


// Methods

/// @brief Method ExtensionNodeMustOverrideProperty addr 0x26823bc size 0x48 virtual false final false
static ::StringW ExtensionNodeMustOverrideProperty(::bs_hook::Il2CppWrapperType p0) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq::Expressions
NEED_NO_BOX(System::Linq::Expressions::Strings);
DEFINE_IL2CPP_ARG_TYPE(System::Linq::Expressions::Strings, "System.Linq.Expressions", "Strings");
