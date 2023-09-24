#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Text {
class StringBuilder;
}
namespace Mono::Security {
class ASN1;
}
// Forward declare root types
namespace Mono::Security::X509 {
class X509Extension;
}
// Type: Mono.Security.X509::X509Extension
namespace Mono::Security::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13967))
// CS Name: Mono.Security.X509.X509Extension
class CORDL_TYPE X509Extension : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~X509Extension() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Extension", modifiers: " const&", def_value: None }]
constexpr X509Extension(X509Extension const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Extension", modifiers: "&&", def_value: None }]
constexpr X509Extension(X509Extension&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509Extension(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509Extension& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509Extension& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509Extension& operator=(X509Extension&& o) noexcept = default;
  constexpr X509Extension& operator=(X509Extension const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_extnOid, put=__set_extnOid))  extnOid;

constexpr void __set_extnOid(::StringW value) ;

constexpr ::StringW __get_extnOid() const;

 bool __declspec(property(get=__get_extnCritical, put=__set_extnCritical))  extnCritical;

constexpr void __set_extnCritical(bool value) ;

constexpr bool __get_extnCritical() const;

 Mono::Security::ASN1 __declspec(property(get=__get_extnValue, put=__set_extnValue))  extnValue;

constexpr void __set_extnValue(Mono::Security::ASN1 value) ;

constexpr Mono::Security::ASN1 __get_extnValue() const;


// Properties

 ::StringW __declspec(property(get=get_Oid))  Oid;

 bool __declspec(property(get=get_Critical))  Critical;

 Mono::Security::ASN1 __declspec(property(get=get_Value))  Value;


// Methods

static Mono::Security::X509::X509Extension New_ctor(Mono::Security::ASN1 asn1) ;

/// @brief Method .ctor addr 0x228f518 size 0x2cc virtual false final false
 void _ctor(Mono::Security::ASN1 asn1) ;

static Mono::Security::X509::X509Extension New_ctor(Mono::Security::X509::X509Extension extension) ;

/// @brief Method .ctor addr 0x228f7e4 size 0x14c virtual false final false
 void _ctor(Mono::Security::X509::X509Extension extension) ;

/// @brief Method Decode addr 0x228f95c size 0x4 virtual true final false
 void Decode() ;

/// @brief Method Encode addr 0x228f960 size 0x4 virtual true final false
 void Encode() ;

/// @brief Method get_Oid addr 0x228f964 size 0x8 virtual false final false
 ::StringW get_Oid() ;

/// @brief Method get_Critical addr 0x228f96c size 0x8 virtual false final false
 bool get_Critical() ;

/// @brief Method get_Value addr 0x228f930 size 0x2c virtual false final false
 Mono::Security::ASN1 get_Value() ;

/// @brief Method Equals addr 0x228f974 size 0x144 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x228fab8 size 0x20 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method WriteLine addr 0x228fad8 size 0x228 virtual false final false
 void WriteLine(System::Text::StringBuilder sb, int32_t n, int32_t pos) ;

/// @brief Method ToString addr 0x228fd00 size 0xd8 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::X509
NEED_NO_BOX(Mono::Security::X509::X509Extension);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::X509::X509Extension, "Mono.Security.X509", "X509Extension");
