#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__AsnEncodedData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Security::Cryptography::X509Certificates {
struct X500DistinguishedNameFlags;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X500DistinguishedName;
}
// Type: System.Security.Cryptography.X509Certificates::X500DistinguishedName
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7828))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7842))
// CS Name: System.Security.Cryptography.X509Certificates.X500DistinguishedName
class CORDL_TYPE X500DistinguishedName : public System::Security::Cryptography::AsnEncodedData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~X500DistinguishedName() = default;

// Ctor Parameters [CppParam { name: "", ty: "X500DistinguishedName", modifiers: " const&", def_value: None }]
constexpr X500DistinguishedName(X500DistinguishedName const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X500DistinguishedName", modifiers: "&&", def_value: None }]
constexpr X500DistinguishedName(X500DistinguishedName&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X500DistinguishedName(void* ptr) noexcept : System::Security::Cryptography::AsnEncodedData(ptr) {
}


  constexpr X500DistinguishedName& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X500DistinguishedName& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X500DistinguishedName& operator=(X500DistinguishedName&& o) noexcept = default;
  constexpr X500DistinguishedName& operator=(X500DistinguishedName const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_canonEncoding, put=__set_canonEncoding))  canonEncoding;

constexpr void __set_canonEncoding(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_canonEncoding() const;


// Properties

 ::StringW __declspec(property(get=get_Name))  Name;


// Methods

// Ctor Parameters [CppParam { name: "encodedDistinguishedName", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit X500DistinguishedName(::ArrayW<uint8_t> encodedDistinguishedName) ;

/// @brief Method .ctor addr 0x27e5dc4 size 0x110 virtual false final false
 void _ctor(::ArrayW<uint8_t> encodedDistinguishedName) ;

/// @brief Method get_Name addr 0x27e5fcc size 0x8 virtual false final false
 ::StringW get_Name() ;

/// @brief Method Decode addr 0x27e5fd4 size 0x158 virtual false final false
 ::StringW Decode(System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags flag) ;

/// @brief Method Format addr 0x27e61a0 size 0x5c virtual true final false
 ::StringW Format(bool multiLine) ;

/// @brief Method GetSeparator addr 0x27e612c size 0x74 virtual false final false
static ::StringW GetSeparator(System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags flag) ;

/// @brief Method DecodeRawData addr 0x27e5ed4 size 0xf8 virtual false final false
 void DecodeRawData() ;

/// @brief Method Canonize addr 0x27e61fc size 0x1cc virtual false final false
static ::StringW Canonize(::StringW s) ;

/// @brief Method AreEqual addr 0x27e63c8 size 0x1f4 virtual false final false
static bool AreEqual(System::Security::Cryptography::X509Certificates::X500DistinguishedName name1, System::Security::Cryptography::X509Certificates::X500DistinguishedName name2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
NEED_NO_BOX(System::Security::Cryptography::X509Certificates::X500DistinguishedName);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X500DistinguishedName, "System.Security.Cryptography.X509Certificates", "X500DistinguishedName");
