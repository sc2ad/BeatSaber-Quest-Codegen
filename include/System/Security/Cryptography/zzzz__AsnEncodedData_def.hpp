#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Security::Cryptography {
class Oid;
}
// Forward declare root types
namespace System::Security::Cryptography {
class AsnEncodedData;
}
// Type: System.Security.Cryptography::AsnEncodedData
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7828))
// CS Name: System.Security.Cryptography.AsnEncodedData
class CORDL_TYPE AsnEncodedData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AsnEncodedData() = default;

// Ctor Parameters [CppParam { name: "", ty: "AsnEncodedData", modifiers: " const&", def_value: None }]
constexpr AsnEncodedData(AsnEncodedData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AsnEncodedData", modifiers: "&&", def_value: None }]
constexpr AsnEncodedData(AsnEncodedData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AsnEncodedData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AsnEncodedData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AsnEncodedData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AsnEncodedData& operator=(AsnEncodedData&& o) noexcept = default;
  constexpr AsnEncodedData& operator=(AsnEncodedData const& o) noexcept = default;
                


// Fields

 System::Security::Cryptography::Oid __declspec(property(get=__get__oid, put=__set__oid))  _oid;

constexpr void __set__oid(System::Security::Cryptography::Oid value) ;

constexpr System::Security::Cryptography::Oid __get__oid() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__raw, put=__set__raw))  _raw;

constexpr void __set__raw(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__raw() const;


// Properties

 System::Security::Cryptography::Oid __declspec(property(get=get_Oid, put=set_Oid))  Oid;

 ::ArrayW<uint8_t> __declspec(property(get=get_RawData, put=set_RawData))  RawData;


// Methods

// Ctor Parameters []
explicit AsnEncodedData() ;

/// @brief Method .ctor addr 0x27e3c8c size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "oid", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "rawData", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit AsnEncodedData(::StringW oid, ::ArrayW<uint8_t> rawData) ;

/// @brief Method .ctor addr 0x27e3c94 size 0x84 virtual false final false
 void _ctor(::StringW oid, ::ArrayW<uint8_t> rawData) ;

// Ctor Parameters [CppParam { name: "oid", ty: "System::Security::Cryptography::Oid", modifiers: "", def_value: None }, CppParam { name: "rawData", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit AsnEncodedData(System::Security::Cryptography::Oid oid, ::ArrayW<uint8_t> rawData) ;

/// @brief Method .ctor addr 0x27e3e0c size 0x3c virtual false final false
 void _ctor(System::Security::Cryptography::Oid oid, ::ArrayW<uint8_t> rawData) ;

// Ctor Parameters [CppParam { name: "asnEncodedData", ty: "System::Security::Cryptography::AsnEncodedData", modifiers: "", def_value: None }]
explicit AsnEncodedData(System::Security::Cryptography::AsnEncodedData asnEncodedData) ;

/// @brief Method .ctor addr 0x27e3eb8 size 0xe0 virtual false final false
 void _ctor(System::Security::Cryptography::AsnEncodedData asnEncodedData) ;

/// @brief Method get_Oid addr 0x27e3f98 size 0x8 virtual false final false
 System::Security::Cryptography::Oid get_Oid() ;

/// @brief Method set_Oid addr 0x27e3e48 size 0x70 virtual false final false
 void set_Oid(System::Security::Cryptography::Oid value) ;

/// @brief Method get_RawData addr 0x27e3fa0 size 0x8 virtual false final false
 ::ArrayW<uint8_t> get_RawData() ;

/// @brief Method set_RawData addr 0x27e3d18 size 0xf4 virtual false final false
 void set_RawData(::ArrayW<uint8_t> value) ;

/// @brief Method CopyFrom addr 0x27e3fa8 size 0xfc virtual true final false
 void CopyFrom(System::Security::Cryptography::AsnEncodedData asnEncodedData) ;

/// @brief Method Format addr 0x27e40a4 size 0x90 virtual true final false
 ::StringW Format(bool multiLine) ;

/// @brief Method ToString addr 0x27e4248 size 0x1b0 virtual true final false
 ::StringW ToString(bool multiLine) ;

/// @brief Method Default addr 0x27e4134 size 0x114 virtual false final false
 ::StringW Default(bool multiLine) ;

/// @brief Method BasicConstraintsExtension addr 0x27e43f8 size 0x10c virtual false final false
 ::StringW BasicConstraintsExtension(bool multiLine) ;

/// @brief Method EnhancedKeyUsageExtension addr 0x27e4504 size 0x10c virtual false final false
 ::StringW EnhancedKeyUsageExtension(bool multiLine) ;

/// @brief Method KeyUsageExtension addr 0x27e4610 size 0x110 virtual false final false
 ::StringW KeyUsageExtension(bool multiLine) ;

/// @brief Method SubjectKeyIdentifierExtension addr 0x27e4720 size 0x110 virtual false final false
 ::StringW SubjectKeyIdentifierExtension(bool multiLine) ;

/// @brief Method SubjectAltName addr 0x27e4830 size 0x3c0 virtual false final false
 ::StringW SubjectAltName(bool multiLine) ;

/// @brief Method NetscapeCertType addr 0x27e4bf0 size 0x394 virtual false final false
 ::StringW NetscapeCertType(bool multiLine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::AsnEncodedData);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::AsnEncodedData, "System.Security.Cryptography", "AsnEncodedData");
