#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ProtocolVersion;
}
// Type: Org.BouncyCastle.Crypto.Tls::ProtocolVersion
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1260))
// CS Name: Org.BouncyCastle.Crypto.Tls.ProtocolVersion
class CORDL_TYPE ProtocolVersion : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ProtocolVersion() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProtocolVersion", modifiers: " const&", def_value: None }]
constexpr ProtocolVersion(ProtocolVersion const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProtocolVersion", modifiers: "&&", def_value: None }]
constexpr ProtocolVersion(ProtocolVersion&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProtocolVersion(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ProtocolVersion& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProtocolVersion& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProtocolVersion& operator=(ProtocolVersion&& o) noexcept = default;
  constexpr ProtocolVersion& operator=(ProtocolVersion const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion __declspec(property(get=__get_SSLv3, put=__set_SSLv3))  SSLv3;

static void __set_SSLv3(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion value) ;

static ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion __get_SSLv3() ;

static ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion __declspec(property(get=__get_TLSv10, put=__set_TLSv10))  TLSv10;

static void __set_TLSv10(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion value) ;

static ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion __get_TLSv10() ;

static ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion __declspec(property(get=__get_TLSv11, put=__set_TLSv11))  TLSv11;

static void __set_TLSv11(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion value) ;

static ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion __get_TLSv11() ;

static ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion __declspec(property(get=__get_TLSv12, put=__set_TLSv12))  TLSv12;

static void __set_TLSv12(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion value) ;

static ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion __get_TLSv12() ;

static ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion __declspec(property(get=__get_DTLSv10, put=__set_DTLSv10))  DTLSv10;

static void __set_DTLSv10(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion value) ;

static ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion __get_DTLSv10() ;

static ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion __declspec(property(get=__get_DTLSv12, put=__set_DTLSv12))  DTLSv12;

static void __set_DTLSv12(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion value) ;

static ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion __get_DTLSv12() ;

 int32_t __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(int32_t value) ;

constexpr int32_t __get_version() const;

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;


// Properties

 int32_t __declspec(property(get=get_FullVersion))  FullVersion;

 int32_t __declspec(property(get=get_MajorVersion))  MajorVersion;

 int32_t __declspec(property(get=get_MinorVersion))  MinorVersion;

 bool __declspec(property(get=get_IsDtls))  IsDtls;

 bool __declspec(property(get=get_IsSsl))  IsSsl;

 bool __declspec(property(get=get_IsTls))  IsTls;


// Methods

// Ctor Parameters [CppParam { name: "v", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
explicit ProtocolVersion(int32_t v, ::StringW name) ;

/// @brief Method .ctor addr 0xf055bc size 0x34 virtual false final false
 void _ctor(int32_t v, ::StringW name) ;

/// @brief Method get_FullVersion addr 0xf055f0 size 0x8 virtual false final false
 int32_t get_FullVersion() ;

/// @brief Method get_MajorVersion addr 0xf055f8 size 0xc virtual false final false
 int32_t get_MajorVersion() ;

/// @brief Method get_MinorVersion addr 0xf05604 size 0x8 virtual false final false
 int32_t get_MinorVersion() ;

/// @brief Method get_IsDtls addr 0xf0560c size 0x14 virtual false final false
 bool get_IsDtls() ;

/// @brief Method get_IsSsl addr 0xf05620 size 0x64 virtual false final false
 bool get_IsSsl() ;

/// @brief Method get_IsTls addr 0xf05684 size 0x14 virtual false final false
 bool get_IsTls() ;

/// @brief Method GetEquivalentTLSVersion addr 0xf05698 size 0x98 virtual false final false
 ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion GetEquivalentTLSVersion() ;

/// @brief Method IsEqualOrEarlierVersionOf addr 0xf05730 size 0x58 virtual false final false
 bool IsEqualOrEarlierVersionOf(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion version) ;

/// @brief Method IsLaterVersionOf addr 0xf05788 size 0x54 virtual false final false
 bool IsLaterVersionOf(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion version) ;

/// @brief Method Equals addr 0xf057dc size 0x80 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method Equals addr 0xf0585c size 0x20 virtual false final false
 bool Equals(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion other) ;

/// @brief Method GetHashCode addr 0xf0587c size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Get addr 0xf05884 size 0x1f8 virtual false final false
static ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion Get(int32_t major, int32_t minor) ;

/// @brief Method ToString addr 0xf05be4 size 0x8 virtual true final false
 ::StringW ToString() ;

/// @brief Method GetUnknownVersion addr 0xf05a7c size 0x168 virtual false final false
static ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion GetUnknownVersion(int32_t major, int32_t minor, ::StringW prefix) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion, "Org.BouncyCastle.Crypto.Tls", "ProtocolVersion");
