#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/AccessControl/zzzz__FileSystemSecurity_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Security::AccessControl {
struct AccessControlSections;
}
// Forward declare root types
namespace System::Security::AccessControl {
class DirectorySecurity;
}
// Type: System.Security.AccessControl::DirectorySecurity
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3030))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3025))
// CS Name: System.Security.AccessControl.DirectorySecurity
class CORDL_TYPE DirectorySecurity : public System::Security::AccessControl::FileSystemSecurity {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DirectorySecurity() = default;

// Ctor Parameters [CppParam { name: "", ty: "DirectorySecurity", modifiers: " const&", def_value: None }]
constexpr DirectorySecurity(DirectorySecurity const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DirectorySecurity", modifiers: "&&", def_value: None }]
constexpr DirectorySecurity(DirectorySecurity&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DirectorySecurity(void* ptr) noexcept : System::Security::AccessControl::FileSystemSecurity(ptr) {
}


  constexpr DirectorySecurity& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DirectorySecurity& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DirectorySecurity& operator=(DirectorySecurity&& o) noexcept = default;
  constexpr DirectorySecurity& operator=(DirectorySecurity const& o) noexcept = default;
                


// Methods

static System::Security::AccessControl::DirectorySecurity New_ctor(::StringW name, System::Security::AccessControl::AccessControlSections includeSections) ;

/// @brief Method .ctor addr 0x231815c size 0x18 virtual false final false
 void _ctor(::StringW name, System::Security::AccessControl::AccessControlSections includeSections) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
NEED_NO_BOX(System::Security::AccessControl::DirectorySecurity);
DEFINE_IL2CPP_ARG_TYPE(System::Security::AccessControl::DirectorySecurity, "System.Security.AccessControl", "DirectorySecurity");
