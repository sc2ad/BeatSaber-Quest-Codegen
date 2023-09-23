#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Security::Cryptography {
class DSA;
}
namespace System::Security::Cryptography {
class AsnEncodedData;
}
namespace System::Security::Cryptography {
class Oid;
}
namespace System::Security::Cryptography {
class RSA;
}
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class PublicKey;
}
// Type: System.Security.Cryptography.X509Certificates::PublicKey
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7841))
// CS Name: System.Security.Cryptography.X509Certificates.PublicKey
class CORDL_TYPE PublicKey : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PublicKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "PublicKey", modifiers: " const&", def_value: None }]
constexpr PublicKey(PublicKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PublicKey", modifiers: "&&", def_value: None }]
constexpr PublicKey(PublicKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PublicKey(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PublicKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PublicKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PublicKey& operator=(PublicKey&& o) noexcept = default;
  constexpr PublicKey& operator=(PublicKey const& o) noexcept = default;
                


// Fields

 System::Security::Cryptography::AsnEncodedData __declspec(property(get=__get__keyValue, put=__set__keyValue))  _keyValue;

constexpr void __set__keyValue(System::Security::Cryptography::AsnEncodedData value) ;

constexpr System::Security::Cryptography::AsnEncodedData __get__keyValue() const;

 System::Security::Cryptography::AsnEncodedData __declspec(property(get=__get__params, put=__set__params))  _params;

constexpr void __set__params(System::Security::Cryptography::AsnEncodedData value) ;

constexpr System::Security::Cryptography::AsnEncodedData __get__params() const;

 System::Security::Cryptography::Oid __declspec(property(get=__get__oid, put=__set__oid))  _oid;

constexpr void __set__oid(System::Security::Cryptography::Oid value) ;

constexpr System::Security::Cryptography::Oid __get__oid() const;

static ::ArrayW<uint8_t> __declspec(property(get=__get_Empty, put=__set_Empty))  Empty;

static void __set_Empty(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_Empty() ;


// Properties

 System::Security::Cryptography::AsnEncodedData __declspec(property(get=get_EncodedKeyValue))  EncodedKeyValue;

 System::Security::Cryptography::AsnEncodedData __declspec(property(get=get_EncodedParameters))  EncodedParameters;

 System::Security::Cryptography::AsymmetricAlgorithm __declspec(property(get=get_Key))  Key;

 System::Security::Cryptography::Oid __declspec(property(get=get_Oid))  Oid;


// Methods

// Ctor Parameters [CppParam { name: "oid", ty: "System::Security::Cryptography::Oid", modifiers: "", def_value: None }, CppParam { name: "parameters", ty: "System::Security::Cryptography::AsnEncodedData", modifiers: "", def_value: None }, CppParam { name: "keyValue", ty: "System::Security::Cryptography::AsnEncodedData", modifiers: "", def_value: None }]
explicit PublicKey(System::Security::Cryptography::Oid oid, System::Security::Cryptography::AsnEncodedData parameters, System::Security::Cryptography::AsnEncodedData keyValue) ;

/// @brief Method .ctor addr 0x27e5134 size 0x174 virtual false final false
 void _ctor(System::Security::Cryptography::Oid oid, System::Security::Cryptography::AsnEncodedData parameters, System::Security::Cryptography::AsnEncodedData keyValue) ;

/// @brief Method get_EncodedKeyValue addr 0x27e52a8 size 0x8 virtual false final false
 System::Security::Cryptography::AsnEncodedData get_EncodedKeyValue() ;

/// @brief Method get_EncodedParameters addr 0x27e52b0 size 0x8 virtual false final false
 System::Security::Cryptography::AsnEncodedData get_EncodedParameters() ;

/// @brief Method get_Key addr 0x27e52b8 size 0x1a4 virtual false final false
 System::Security::Cryptography::AsymmetricAlgorithm get_Key() ;

/// @brief Method get_Oid addr 0x27e5cc0 size 0x8 virtual false final false
 System::Security::Cryptography::Oid get_Oid() ;

/// @brief Method GetUnsignedBigInteger addr 0x27e5cc8 size 0x94 virtual false final false
static ::ArrayW<uint8_t> GetUnsignedBigInteger(::ArrayW<uint8_t> integer) ;

/// @brief Method DecodeDSA addr 0x27e5814 size 0x4ac virtual false final false
static System::Security::Cryptography::DSA DecodeDSA(::ArrayW<uint8_t> rawPublicKey, ::ArrayW<uint8_t> rawParameters) ;

/// @brief Method DecodeRSA addr 0x27e545c size 0x3b8 virtual false final false
static System::Security::Cryptography::RSA DecodeRSA(::ArrayW<uint8_t> rawPublicKey) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
NEED_NO_BOX(System::Security::Cryptography::X509Certificates::PublicKey);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::PublicKey, "System.Security.Cryptography.X509Certificates", "PublicKey");
