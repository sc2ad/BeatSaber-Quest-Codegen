#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/AccessControl/zzzz__CommonAcl_def.hpp"
#include <cstdint>
namespace System::Security::AccessControl {
struct PropagationFlags;
}
namespace System::Security::AccessControl {
struct AccessControlType;
}
namespace System::Security::AccessControl {
struct InheritanceFlags;
}
namespace System::Security::Principal {
class SecurityIdentifier;
}
namespace System::Security::AccessControl {
struct AceQualifier;
}
namespace System::Security::AccessControl {
class GenericAce;
}
// Forward declare root types
namespace System::Security::AccessControl {
class DiscretionaryAcl;
}
// Type: System.Security.AccessControl::DiscretionaryAcl
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3021))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3026))
// CS Name: System.Security.AccessControl.DiscretionaryAcl
class CORDL_TYPE DiscretionaryAcl : public System::Security::AccessControl::CommonAcl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DiscretionaryAcl() = default;

// Ctor Parameters [CppParam { name: "", ty: "DiscretionaryAcl", modifiers: " const&", def_value: None }]
constexpr DiscretionaryAcl(DiscretionaryAcl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DiscretionaryAcl", modifiers: "&&", def_value: None }]
constexpr DiscretionaryAcl(DiscretionaryAcl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DiscretionaryAcl(void* ptr) noexcept : System::Security::AccessControl::CommonAcl(ptr) {
}


  constexpr DiscretionaryAcl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DiscretionaryAcl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DiscretionaryAcl& operator=(DiscretionaryAcl&& o) noexcept = default;
  constexpr DiscretionaryAcl& operator=(DiscretionaryAcl const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "isContainer", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isDS", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit DiscretionaryAcl(bool isContainer, bool isDS, int32_t capacity) ;

/// @brief Method .ctor addr 0x231800c size 0xc virtual false final false
 void _ctor(bool isContainer, bool isDS, int32_t capacity) ;

/// @brief Method AddAccess addr 0x2318018 size 0x60 virtual false final false
 void AddAccess(System::Security::AccessControl::AccessControlType accessType, System::Security::Principal::SecurityIdentifier sid, int32_t accessMask, System::Security::AccessControl::InheritanceFlags inheritanceFlags, System::Security::AccessControl::PropagationFlags propagationFlags) ;

/// @brief Method ApplyCanonicalSortToExplicitAces addr 0x23181ec size 0x48 virtual true final false
 void ApplyCanonicalSortToExplicitAces() ;

/// @brief Method GetAceInsertPosition addr 0x2318234 size 0x10 virtual true final false
 int32_t GetAceInsertPosition(System::Security::AccessControl::AceQualifier aceQualifier) ;

/// @brief Method GetAceQualifier addr 0x231818c size 0x60 virtual false final false
static System::Security::AccessControl::AceQualifier GetAceQualifier(System::Security::AccessControl::AccessControlType accessType) ;

/// @brief Method IsAceMeaningless addr 0x2318244 size 0xf8 virtual true final false
 bool IsAceMeaningless(System::Security::AccessControl::GenericAce ace) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
NEED_NO_BOX(System::Security::AccessControl::DiscretionaryAcl);
DEFINE_IL2CPP_ARG_TYPE(System::Security::AccessControl::DiscretionaryAcl, "System.Security.AccessControl", "DiscretionaryAcl");
