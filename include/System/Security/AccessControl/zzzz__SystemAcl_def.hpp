#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/AccessControl/zzzz__CommonAcl_def.hpp"
#include <cstdint>
namespace {
namespace System::Security::AccessControl {
struct AceQualifier;
}
// Forward declare root types
namespace System::Security::AccessControl {
class SystemAcl;
}
// Type: System.Security.AccessControl::SystemAcl
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3021))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3045))
// CS Name: System.Security.AccessControl.SystemAcl
class CORDL_TYPE SystemAcl : public ::System::Security::AccessControl::CommonAcl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SystemAcl() = default;

// Ctor Parameters [CppParam { name: "", ty: "SystemAcl", modifiers: " const&", def_value: None }]
constexpr SystemAcl(SystemAcl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SystemAcl", modifiers: "&&", def_value: None }]
constexpr SystemAcl(SystemAcl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SystemAcl(void* ptr) noexcept : ::System::Security::AccessControl::CommonAcl(ptr) {
}


  constexpr SystemAcl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SystemAcl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SystemAcl& operator=(SystemAcl&& o) noexcept = default;
  constexpr SystemAcl& operator=(SystemAcl const& o) noexcept = default;
                


// Methods

/// @brief Method ApplyCanonicalSortToExplicitAces addr 0x2319890 size 0x20 virtual true final false
 void ApplyCanonicalSortToExplicitAces() ;

/// @brief Method GetAceInsertPosition addr 0x23198b0 size 0x8 virtual true final false
 int32_t GetAceInsertPosition(::System::Security::AccessControl::AceQualifier aceQualifier) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
} // end anonymous namespace
NEED_NO_BOX(::System::Security::AccessControl::SystemAcl);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::SystemAcl, "System.Security.AccessControl", "SystemAcl");
