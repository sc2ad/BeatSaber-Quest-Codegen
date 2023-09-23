#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Security/zzzz__PermissionSet_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Security {
class SecurityElement;
}
namespace System::Security::Permissions {
struct PermissionState;
}
// Forward declare root types
namespace System::Security {
class NamedPermissionSet;
}
// Type: System.Security::NamedPermissionSet
namespace System::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2880))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2879))
// CS Name: System.Security.NamedPermissionSet
class CORDL_TYPE NamedPermissionSet : public System::Security::PermissionSet {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~NamedPermissionSet() = default;

// Ctor Parameters [CppParam { name: "", ty: "NamedPermissionSet", modifiers: " const&", def_value: None }]
constexpr NamedPermissionSet(NamedPermissionSet const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NamedPermissionSet", modifiers: "&&", def_value: None }]
constexpr NamedPermissionSet(NamedPermissionSet&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NamedPermissionSet(void* ptr) noexcept : System::Security::PermissionSet(ptr) {
}


  constexpr NamedPermissionSet& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NamedPermissionSet& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NamedPermissionSet& operator=(NamedPermissionSet&& o) noexcept = default;
  constexpr NamedPermissionSet& operator=(NamedPermissionSet const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 ::StringW __declspec(property(get=__get_description, put=__set_description))  description;

constexpr void __set_description(::StringW value) ;

constexpr ::StringW __get_description() const;


// Properties

 ::StringW __declspec(property(get=get_Name, put=set_Name))  Name;


// Methods

// Ctor Parameters []
explicit NamedPermissionSet() ;

/// @brief Method .ctor addr 0x22e53fc size 0x54 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "state", ty: "System::Security::Permissions::PermissionState", modifiers: "", def_value: None }]
explicit NamedPermissionSet(::StringW name, System::Security::Permissions::PermissionState state) ;

/// @brief Method .ctor addr 0x22e54bc size 0x80 virtual false final false
 void _ctor(::StringW name, System::Security::Permissions::PermissionState state) ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
explicit NamedPermissionSet(::StringW name) ;

/// @brief Method .ctor addr 0x22e562c size 0x8 virtual false final false
 void _ctor(::StringW name) ;

/// @brief Method get_Name addr 0x22e5634 size 0x8 virtual false final false
 ::StringW get_Name() ;

/// @brief Method set_Name addr 0x22e556c size 0xc0 virtual false final false
 void set_Name(::StringW value) ;

/// @brief Method ToXml addr 0x22e563c size 0x98 virtual true final false
 System::Security::SecurityElement ToXml() ;

/// @brief Method Equals addr 0x22e5b30 size 0x90 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x22e5d5c size 0x38 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security
NEED_NO_BOX(System::Security::NamedPermissionSet);
DEFINE_IL2CPP_ARG_TYPE(System::Security::NamedPermissionSet, "System.Security", "NamedPermissionSet");
