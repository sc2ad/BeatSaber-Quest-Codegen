#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class IDisposable;
}
namespace System {
struct DateTime;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509KeyStorageFlags;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateImpl;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
// Type: System.Security.Cryptography.X509Certificates::X509Certificate
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2987))
// CS Name: System.Security.Cryptography.X509Certificates.X509Certificate
class CORDL_TYPE X509Certificate : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::IDeserializationCallback
constexpr operator  System::Runtime::Serialization::IDeserializationCallback() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~X509Certificate() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Certificate", modifiers: " const&", def_value: None }]
constexpr X509Certificate(X509Certificate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Certificate", modifiers: "&&", def_value: None }]
constexpr X509Certificate(X509Certificate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509Certificate(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509Certificate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509Certificate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509Certificate& operator=(X509Certificate&& o) noexcept = default;
  constexpr X509Certificate& operator=(X509Certificate const& o) noexcept = default;
                


// Fields

 System::Security::Cryptography::X509Certificates::X509CertificateImpl __declspec(property(get=__get_impl, put=__set_impl))  impl;

constexpr void __set_impl(System::Security::Cryptography::X509Certificates::X509CertificateImpl value) ;

constexpr System::Security::Cryptography::X509Certificates::X509CertificateImpl __get_impl() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_lazyCertHash, put=__set_lazyCertHash))  lazyCertHash;

constexpr void __set_lazyCertHash(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_lazyCertHash() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_lazySerialNumber, put=__set_lazySerialNumber))  lazySerialNumber;

constexpr void __set_lazySerialNumber(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_lazySerialNumber() const;

 ::StringW __declspec(property(get=__get_lazyIssuer, put=__set_lazyIssuer))  lazyIssuer;

constexpr void __set_lazyIssuer(::StringW value) ;

constexpr ::StringW __get_lazyIssuer() const;

 ::StringW __declspec(property(get=__get_lazySubject, put=__set_lazySubject))  lazySubject;

constexpr void __set_lazySubject(::StringW value) ;

constexpr ::StringW __get_lazySubject() const;

 ::StringW __declspec(property(get=__get_lazyKeyAlgorithm, put=__set_lazyKeyAlgorithm))  lazyKeyAlgorithm;

constexpr void __set_lazyKeyAlgorithm(::StringW value) ;

constexpr ::StringW __get_lazyKeyAlgorithm() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_lazyKeyAlgorithmParameters, put=__set_lazyKeyAlgorithmParameters))  lazyKeyAlgorithmParameters;

constexpr void __set_lazyKeyAlgorithmParameters(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_lazyKeyAlgorithmParameters() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_lazyPublicKey, put=__set_lazyPublicKey))  lazyPublicKey;

constexpr void __set_lazyPublicKey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_lazyPublicKey() const;

 System::DateTime __declspec(property(get=__get_lazyNotBefore, put=__set_lazyNotBefore))  lazyNotBefore;

constexpr void __set_lazyNotBefore(System::DateTime value) ;

constexpr System::DateTime __get_lazyNotBefore() const;

 System::DateTime __declspec(property(get=__get_lazyNotAfter, put=__set_lazyNotAfter))  lazyNotAfter;

constexpr void __set_lazyNotAfter(System::DateTime value) ;

constexpr System::DateTime __get_lazyNotAfter() const;


// Properties

 ::StringW __declspec(property(get=get_Issuer))  Issuer;

 ::StringW __declspec(property(get=get_Subject))  Subject;

 System::Security::Cryptography::X509Certificates::X509CertificateImpl __declspec(property(get=get_Impl))  Impl;

 bool __declspec(property(get=get_IsValid))  IsValid;


// Methods

/// @brief Method Reset addr 0x23098a8 size 0xb8 virtual true final false
 void Reset() ;

// Ctor Parameters []
explicit X509Certificate() ;

/// @brief Method .ctor addr 0x2309960 size 0x74 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit X509Certificate(::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0x23099d4 size 0xa0 virtual false final false
 void _ctor(::ArrayW<uint8_t> data) ;

// Ctor Parameters [CppParam { name: "impl", ty: "System::Security::Cryptography::X509Certificates::X509CertificateImpl", modifiers: "", def_value: None }]
explicit X509Certificate(System::Security::Cryptography::X509Certificates::X509CertificateImpl impl) ;

/// @brief Method .ctor addr 0x2309a74 size 0x94 virtual false final false
 void _ctor(System::Security::Cryptography::X509Certificates::X509CertificateImpl impl) ;

// Ctor Parameters [CppParam { name: "fileName", ty: "::StringW", modifiers: "", def_value: None }]
explicit X509Certificate(::StringW fileName) ;

/// @brief Method .ctor addr 0x2309b08 size 0xc virtual false final false
 void _ctor(::StringW fileName) ;

// Ctor Parameters [CppParam { name: "fileName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "password", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "keyStorageFlags", ty: "System::Security::Cryptography::X509Certificates::X509KeyStorageFlags", modifiers: "", def_value: None }]
explicit X509Certificate(::StringW fileName, ::StringW password, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags) ;

/// @brief Method .ctor addr 0x2309b14 size 0x264 virtual false final false
 void _ctor(::StringW fileName, ::StringW password, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags) ;

// Ctor Parameters [CppParam { name: "cert", ty: "System::Security::Cryptography::X509Certificates::X509Certificate", modifiers: "", def_value: None }]
explicit X509Certificate(System::Security::Cryptography::X509Certificates::X509Certificate cert) ;

/// @brief Method .ctor addr 0x2309e8c size 0xe4 virtual false final false
 void _ctor(System::Security::Cryptography::X509Certificates::X509Certificate cert) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit X509Certificate(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2309f70 size 0x44 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x2309fb4 size 0x40 virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x2309ff4 size 0x40 virtual true final true
 void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method get_Issuer addr 0x230a034 size 0x58 virtual false final false
 ::StringW get_Issuer() ;

/// @brief Method get_Subject addr 0x230a098 size 0x58 virtual false final false
 ::StringW get_Subject() ;

/// @brief Method Dispose addr 0x230a0f0 size 0x10 virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x230a100 size 0x14 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Equals addr 0x230a114 size 0x94 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x230a1a8 size 0xec virtual true final false
 bool Equals(System::Security::Cryptography::X509Certificates::X509Certificate other) ;

/// @brief Method GetCertHash addr 0x230a2e4 size 0x28 virtual true final false
 ::ArrayW<uint8_t> GetCertHash() ;

/// @brief Method GetCertHashString addr 0x230a358 size 0x28 virtual true final false
 ::StringW GetCertHashString() ;

/// @brief Method GetRawCertHash addr 0x230a30c size 0x4c virtual false final false
 ::ArrayW<uint8_t> GetRawCertHash() ;

/// @brief Method GetRawCertData addr 0x230a380 size 0x38 virtual true final false
 ::ArrayW<uint8_t> GetRawCertData() ;

/// @brief Method GetHashCode addr 0x230a3b8 size 0x78 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method GetKeyAlgorithm addr 0x230a430 size 0x5c virtual true final false
 ::StringW GetKeyAlgorithm() ;

/// @brief Method GetKeyAlgorithmParameters addr 0x230a48c size 0x60 virtual true final false
 ::ArrayW<uint8_t> GetKeyAlgorithmParameters() ;

/// @brief Method GetPublicKey addr 0x230a4ec size 0x60 virtual true final false
 ::ArrayW<uint8_t> GetPublicKey() ;

/// @brief Method GetSerialNumber addr 0x230a54c size 0x6c virtual true final false
 ::ArrayW<uint8_t> GetSerialNumber() ;

/// @brief Method GetSerialNumberString addr 0x230a5b8 size 0x28 virtual true final false
 ::StringW GetSerialNumberString() ;

/// @brief Method GetRawSerialNumber addr 0x230a294 size 0x50 virtual false final false
 ::ArrayW<uint8_t> GetRawSerialNumber() ;

/// @brief Method ToString addr 0x230a5e0 size 0x14 virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x230a5f4 size 0x33c virtual true final false
 ::StringW ToString(bool fVerbose) ;

/// @brief Method GetNotAfter addr 0x230aae0 size 0xa0 virtual false final false
 System::DateTime GetNotAfter() ;

/// @brief Method GetNotBefore addr 0x230a930 size 0xa0 virtual false final false
 System::DateTime GetNotBefore() ;

/// @brief Method FormatDate addr 0x230a9d0 size 0x110 virtual false final false
static ::StringW FormatDate(System::DateTime date) ;

/// @brief Method ValidateKeyStorageFlags addr 0x2309d78 size 0x114 virtual false final false
static void ValidateKeyStorageFlags(System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags) ;

/// @brief Method ImportHandle addr 0x230ab80 size 0x30 virtual false final false
 void ImportHandle(System::Security::Cryptography::X509Certificates::X509CertificateImpl impl) ;

/// @brief Method get_Impl addr 0x230abb0 size 0x8 virtual false final false
 System::Security::Cryptography::X509Certificates::X509CertificateImpl get_Impl() ;

/// @brief Method get_IsValid addr 0x230abb8 size 0xc virtual false final false
 bool get_IsValid() ;

/// @brief Method ThrowIfInvalid addr 0x230a08c size 0xc virtual false final false
 void ThrowIfInvalid() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
NEED_NO_BOX(System::Security::Cryptography::X509Certificates::X509Certificate);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509Certificate, "System.Security.Cryptography.X509Certificates", "X509Certificate");
