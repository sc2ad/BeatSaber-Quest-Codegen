#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class Type;
}
// Forward declare root types
namespace System::Security::Principal {
class IdentityReference;
}
// Type: System.Security.Principal::IdentityReference
namespace System::Security::Principal {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2996))
// CS Name: System.Security.Principal.IdentityReference
class CORDL_TYPE IdentityReference : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IdentityReference() = default;

// Ctor Parameters [CppParam { name: "", ty: "IdentityReference", modifiers: " const&", def_value: None }]
constexpr IdentityReference(IdentityReference const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IdentityReference", modifiers: "&&", def_value: None }]
constexpr IdentityReference(IdentityReference&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IdentityReference(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IdentityReference& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IdentityReference& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IdentityReference& operator=(IdentityReference&& o) noexcept = default;
  constexpr IdentityReference& operator=(IdentityReference const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_Value))  Value;


// Methods

static System::Security::Principal::IdentityReference New_ctor() ;

/// @brief Method .ctor addr 0x230bbe8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_Value() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Translate addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Security::Principal::IdentityReference Translate(System::Type targetType) ;

/// @brief Method op_Equality addr 0x230bbf0 size 0x68 virtual false final false
static bool op_Equality(System::Security::Principal::IdentityReference left, System::Security::Principal::IdentityReference right) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Principal
NEED_NO_BOX(System::Security::Principal::IdentityReference);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Principal::IdentityReference, "System.Security.Principal", "IdentityReference");
