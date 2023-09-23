#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::Security::Principal {
class IIdentity;
}
// Type: System.Security.Principal::IIdentity
namespace System::Security::Principal {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2991))
// CS Name: System.Security.Principal.IIdentity
class CORDL_TYPE IIdentity : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IIdentity() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IIdentity(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_AuthenticationType))  AuthenticationType;


// Methods

/// @brief Method get_Name addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_AuthenticationType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_AuthenticationType() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Principal
NEED_NO_BOX(System::Security::Principal::IIdentity);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Principal::IIdentity, "System.Security.Principal", "IIdentity");
