#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Claims/zzzz__ClaimsIdentity_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Security::Claims {
class Claim;
}
namespace System::Security::Claims {
class ClaimsIdentity;
}
// Forward declare root types
namespace System::Security::Principal {
class GenericIdentity;
}
// Type: System.Security.Principal::GenericIdentity
namespace System::Security::Principal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3006))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2990))
// CS Name: System.Security.Principal.GenericIdentity
class CORDL_TYPE GenericIdentity : public ::System::Security::Claims::ClaimsIdentity {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~GenericIdentity() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericIdentity", modifiers: " const&", def_value: None }]
constexpr GenericIdentity(GenericIdentity const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericIdentity", modifiers: "&&", def_value: None }]
constexpr GenericIdentity(GenericIdentity&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericIdentity(void* ptr) noexcept : ::System::Security::Claims::ClaimsIdentity(ptr) {
}


  constexpr GenericIdentity& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericIdentity& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericIdentity& operator=(GenericIdentity&& o) noexcept = default;
  constexpr GenericIdentity& operator=(GenericIdentity const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_name, put=__set_m_name))  m_name;

constexpr void __set_m_name(::StringW value) ;

constexpr ::StringW __get_m_name() const;

 ::StringW __declspec(property(get=__get_m_type, put=__set_m_type))  m_type;

constexpr void __set_m_type(::StringW value) ;

constexpr ::StringW __get_m_type() const;


// Properties

 ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim> __declspec(property(get=get_Claims))  Claims;

 ::StringW __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_AuthenticationType))  AuthenticationType;


// Methods

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: None }]
explicit GenericIdentity(::StringW name, ::StringW type) ;

/// @brief Method .ctor addr 0x230b30c size 0xbc virtual false final false
 void _ctor(::StringW name, ::StringW type) ;

// Ctor Parameters []
explicit GenericIdentity() ;

/// @brief Method .ctor addr 0x230b4bc size 0x1c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "identity", ty: "::System::Security::Principal::GenericIdentity", modifiers: "", def_value: None }]
explicit GenericIdentity(::System::Security::Principal::GenericIdentity identity) ;

/// @brief Method .ctor addr 0x230b4d8 size 0x30 virtual false final false
 void _ctor(::System::Security::Principal::GenericIdentity identity) ;

/// @brief Method Clone addr 0x230b6f8 size 0x60 virtual true final false
 ::System::Security::Claims::ClaimsIdentity Clone() ;

/// @brief Method get_Claims addr 0x230b758 size 0x4 virtual true final false
 ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim> get_Claims() ;

/// @brief Method get_Name addr 0x230b7d4 size 0x8 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_AuthenticationType addr 0x230b7dc size 0x8 virtual true final false
 ::StringW get_AuthenticationType() ;

/// @brief Method AddNameClaim addr 0x230b3e4 size 0xd8 virtual false final false
 void AddNameClaim() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Principal
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Principal::GenericIdentity);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::GenericIdentity, "System.Security.Principal", "GenericIdentity");
