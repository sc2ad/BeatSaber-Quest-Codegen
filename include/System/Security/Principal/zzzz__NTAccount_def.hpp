#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Principal/zzzz__IdentityReference_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class Type;
}
namespace System::Security::Principal {
class IdentityReference;
}
// Forward declare root types
namespace System::Security::Principal {
class NTAccount;
}
// Type: System.Security.Principal::NTAccount
namespace System::Security::Principal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2996))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2997))
// CS Name: System.Security.Principal.NTAccount
class CORDL_TYPE NTAccount : public System::Security::Principal::IdentityReference {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~NTAccount() = default;

// Ctor Parameters [CppParam { name: "", ty: "NTAccount", modifiers: " const&", def_value: None }]
constexpr NTAccount(NTAccount const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NTAccount", modifiers: "&&", def_value: None }]
constexpr NTAccount(NTAccount&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NTAccount(void* ptr) noexcept : System::Security::Principal::IdentityReference(ptr) {
}


  constexpr NTAccount& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NTAccount& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NTAccount& operator=(NTAccount&& o) noexcept = default;
  constexpr NTAccount& operator=(NTAccount const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(::StringW value) ;

constexpr ::StringW __get__value() const;


// Properties

 ::StringW __declspec(property(get=get_Value))  Value;


// Methods

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
explicit NTAccount(::StringW name) ;

/// @brief Method .ctor addr 0x230bc58 size 0xe8 virtual false final false
 void _ctor(::StringW name) ;

/// @brief Method get_Value addr 0x230bd40 size 0x8 virtual true final false
 ::StringW get_Value() ;

/// @brief Method Equals addr 0x230bd48 size 0x98 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method GetHashCode addr 0x230be48 size 0x28 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x230be70 size 0xc virtual true final false
 ::StringW ToString() ;

/// @brief Method Translate addr 0x230be7c size 0x22c virtual true final false
 System::Security::Principal::IdentityReference Translate(System::Type targetType) ;

/// @brief Method op_Equality addr 0x230bde0 size 0x68 virtual false final false
static bool op_Equality(System::Security::Principal::NTAccount left, System::Security::Principal::NTAccount right) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Principal
NEED_NO_BOX(System::Security::Principal::NTAccount);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Principal::NTAccount, "System.Security.Principal", "NTAccount");
