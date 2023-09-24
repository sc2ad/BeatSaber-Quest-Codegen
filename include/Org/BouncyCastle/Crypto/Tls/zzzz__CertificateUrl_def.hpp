#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Org__BouncyCastle__Crypto__Tls__CertificateUrl__ListBuffer16;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateUrl;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Org__BouncyCastle__Crypto__Tls__CertificateUrl__ListBuffer16;
}
// Type: ::ListBuffer16
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1192))
// CS Name: Org.BouncyCastle.Crypto.Tls.CertificateUrl::ListBuffer16
class CORDL_TYPE Org__BouncyCastle__Crypto__Tls__CertificateUrl__ListBuffer16 : public System::IO::MemoryStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~Org__BouncyCastle__Crypto__Tls__CertificateUrl__ListBuffer16() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Tls__CertificateUrl__ListBuffer16", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Tls__CertificateUrl__ListBuffer16(Org__BouncyCastle__Crypto__Tls__CertificateUrl__ListBuffer16 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Tls__CertificateUrl__ListBuffer16", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Tls__CertificateUrl__ListBuffer16(Org__BouncyCastle__Crypto__Tls__CertificateUrl__ListBuffer16&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Crypto__Tls__CertificateUrl__ListBuffer16(void* ptr) noexcept : System::IO::MemoryStream(ptr) {
}


  constexpr Org__BouncyCastle__Crypto__Tls__CertificateUrl__ListBuffer16& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Tls__CertificateUrl__ListBuffer16& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Tls__CertificateUrl__ListBuffer16& operator=(Org__BouncyCastle__Crypto__Tls__CertificateUrl__ListBuffer16&& o) noexcept = default;
  constexpr Org__BouncyCastle__Crypto__Tls__CertificateUrl__ListBuffer16& operator=(Org__BouncyCastle__Crypto__Tls__CertificateUrl__ListBuffer16 const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__CertificateUrl__ListBuffer16 New_ctor() ;

/// @brief Method .ctor addr 0xed193c size 0x68 virtual false final false
 void _ctor() ;

/// @brief Method EncodeTo addr 0xed19a4 size 0xe4 virtual false final false
 void EncodeTo(System::IO::Stream output) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
// Type: Org.BouncyCastle.Crypto.Tls::CertificateUrl
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1193))
// CS Name: Org.BouncyCastle.Crypto.Tls.CertificateUrl
class CORDL_TYPE CertificateUrl : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ListBuffer16 = Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__CertificateUrl__ListBuffer16;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CertificateUrl() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateUrl", modifiers: " const&", def_value: None }]
constexpr CertificateUrl(CertificateUrl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateUrl", modifiers: "&&", def_value: None }]
constexpr CertificateUrl(CertificateUrl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertificateUrl(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CertificateUrl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertificateUrl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertificateUrl& operator=(CertificateUrl&& o) noexcept = default;
  constexpr CertificateUrl& operator=(CertificateUrl const& o) noexcept = default;
                


// Fields

 uint8_t __declspec(property(get=__get_mType, put=__set_mType))  mType;

constexpr void __set_mType(uint8_t value) ;

constexpr uint8_t __get_mType() const;

 System::Collections::IList __declspec(property(get=__get_mUrlAndHashList, put=__set_mUrlAndHashList))  mUrlAndHashList;

constexpr void __set_mUrlAndHashList(System::Collections::IList value) ;

constexpr System::Collections::IList __get_mUrlAndHashList() const;


// Properties

 uint8_t __declspec(property(get=get_Type))  Type;

 System::Collections::IList __declspec(property(get=get_UrlAndHashList))  UrlAndHashList;


// Methods

static Org::BouncyCastle::Crypto::Tls::CertificateUrl New_ctor(uint8_t type, System::Collections::IList urlAndHashList) ;

/// @brief Method .ctor addr 0xed141c size 0x16c virtual false final false
 void _ctor(uint8_t type, System::Collections::IList urlAndHashList) ;

/// @brief Method get_Type addr 0xed1588 size 0x8 virtual true final false
 uint8_t get_Type() ;

/// @brief Method get_UrlAndHashList addr 0xed1590 size 0x8 virtual true final false
 System::Collections::IList get_UrlAndHashList() ;

/// @brief Method Encode addr 0xed1598 size 0x3a4 virtual true final false
 void Encode(System::IO::Stream output) ;

/// @brief Method parse addr 0xed1a88 size 0x290 virtual false final false
static Org::BouncyCastle::Crypto::Tls::CertificateUrl parse(Org::BouncyCastle::Crypto::Tls::TlsContext context, System::IO::Stream input) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::CertificateUrl);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::CertificateUrl, "Org.BouncyCastle.Crypto.Tls", "CertificateUrl");
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__CertificateUrl__ListBuffer16);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__CertificateUrl__ListBuffer16, "Org.BouncyCastle.Crypto.Tls", "CertificateUrl/ListBuffer16");
