#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Security::Cryptography {
struct OidGroup;
}
// Forward declare root types
namespace System::Security::Cryptography {
class Oid;
}
// Type: System.Security.Cryptography::Oid
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7823))
// CS Name: System.Security.Cryptography.Oid
class CORDL_TYPE Oid : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Oid() = default;

// Ctor Parameters [CppParam { name: "", ty: "Oid", modifiers: " const&", def_value: None }]
constexpr Oid(Oid const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Oid", modifiers: "&&", def_value: None }]
constexpr Oid(Oid&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Oid(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Oid& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Oid& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Oid& operator=(Oid&& o) noexcept = default;
  constexpr Oid& operator=(Oid const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(::StringW value) ;

constexpr ::StringW __get__value() const;

 ::StringW __declspec(property(get=__get__friendlyName, put=__set__friendlyName))  _friendlyName;

constexpr void __set__friendlyName(::StringW value) ;

constexpr ::StringW __get__friendlyName() const;

 System::Security::Cryptography::OidGroup __declspec(property(get=__get__group, put=__set__group))  _group;

constexpr void __set__group(System::Security::Cryptography::OidGroup value) ;

constexpr System::Security::Cryptography::OidGroup __get__group() const;


// Properties

 ::StringW __declspec(property(get=get_Value, put=set_Value))  Value;

 ::StringW __declspec(property(get=get_FriendlyName))  FriendlyName;


// Methods

// Ctor Parameters []
explicit Oid() ;

/// @brief Method .ctor addr 0x27e3480 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "oid", ty: "::StringW", modifiers: "", def_value: None }]
explicit Oid(::StringW oid) ;

/// @brief Method .ctor addr 0x27e3488 size 0x8c virtual false final false
 void _ctor(::StringW oid) ;

// Ctor Parameters [CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "friendlyName", ty: "::StringW", modifiers: "", def_value: None }]
explicit Oid(::StringW value, ::StringW friendlyName) ;

/// @brief Method .ctor addr 0x27e3514 size 0x2c virtual false final false
 void _ctor(::StringW value, ::StringW friendlyName) ;

// Ctor Parameters [CppParam { name: "oid", ty: "System::Security::Cryptography::Oid", modifiers: "", def_value: None }]
explicit Oid(System::Security::Cryptography::Oid oid) ;

/// @brief Method .ctor addr 0x27e3540 size 0x84 virtual false final false
 void _ctor(System::Security::Cryptography::Oid oid) ;

/// @brief Method FromOidValue addr 0x27e35c4 size 0x13c virtual false final false
static System::Security::Cryptography::Oid FromOidValue(::StringW oidValue, System::Security::Cryptography::OidGroup group) ;

/// @brief Method get_Value addr 0x27e373c size 0x8 virtual false final false
 ::StringW get_Value() ;

/// @brief Method set_Value addr 0x27e3744 size 0x8 virtual false final false
 void set_Value(::StringW value) ;

/// @brief Method get_FriendlyName addr 0x27e374c size 0x84 virtual false final false
 ::StringW get_FriendlyName() ;

// Ctor Parameters [CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "friendlyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "group", ty: "System::Security::Cryptography::OidGroup", modifiers: "", def_value: None }]
explicit Oid(::StringW value, ::StringW friendlyName, System::Security::Cryptography::OidGroup group) ;

/// @brief Method .ctor addr 0x27e3700 size 0x3c virtual false final false
 void _ctor(::StringW value, ::StringW friendlyName, System::Security::Cryptography::OidGroup group) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::Oid);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::Oid, "System.Security.Cryptography", "Oid");
