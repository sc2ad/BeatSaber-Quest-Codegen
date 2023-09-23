#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ServerNameList;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateStatusRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class HeartbeatExtension;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsExtensionsUtilities;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsExtensionsUtilities
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1308))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities
class CORDL_TYPE TlsExtensionsUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TlsExtensionsUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsExtensionsUtilities", modifiers: " const&", def_value: None }]
constexpr TlsExtensionsUtilities(TlsExtensionsUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsExtensionsUtilities", modifiers: "&&", def_value: None }]
constexpr TlsExtensionsUtilities(TlsExtensionsUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsExtensionsUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TlsExtensionsUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsExtensionsUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsExtensionsUtilities& operator=(TlsExtensionsUtilities&& o) noexcept = default;
  constexpr TlsExtensionsUtilities& operator=(TlsExtensionsUtilities const& o) noexcept = default;
                


// Methods

/// @brief Method EnsureExtensionsInitialised addr 0xf1ee00 size 0x68 virtual false final false
static System::Collections::IDictionary EnsureExtensionsInitialised(System::Collections::IDictionary extensions) ;

/// @brief Method AddClientCertificateTypeExtensionClient addr 0xf1ee68 size 0xf0 virtual false final false
static void AddClientCertificateTypeExtensionClient(System::Collections::IDictionary extensions, ::ArrayW<uint8_t> certificateTypes) ;

/// @brief Method AddClientCertificateTypeExtensionServer addr 0xf1effc size 0xf0 virtual false final false
static void AddClientCertificateTypeExtensionServer(System::Collections::IDictionary extensions, uint8_t certificateType) ;

/// @brief Method AddEncryptThenMacExtension addr 0xf1f140 size 0xe8 virtual false final false
static void AddEncryptThenMacExtension(System::Collections::IDictionary extensions) ;

/// @brief Method AddExtendedMasterSecretExtension addr 0xf1f278 size 0xe8 virtual false final false
static void AddExtendedMasterSecretExtension(System::Collections::IDictionary extensions) ;

/// @brief Method AddHeartbeatExtension addr 0xf1f3b0 size 0xf0 virtual false final false
static void AddHeartbeatExtension(System::Collections::IDictionary extensions, Org::BouncyCastle::Crypto::Tls::HeartbeatExtension heartbeatExtension) ;

/// @brief Method AddMaxFragmentLengthExtension addr 0xf1f560 size 0xf0 virtual false final false
static void AddMaxFragmentLengthExtension(System::Collections::IDictionary extensions, uint8_t maxFragmentLength) ;

/// @brief Method AddPaddingExtension addr 0xf1f6a4 size 0xf0 virtual false final false
static void AddPaddingExtension(System::Collections::IDictionary extensions, int32_t dataLength) ;

/// @brief Method AddServerCertificateTypeExtensionClient addr 0xf1f808 size 0xf0 virtual false final false
static void AddServerCertificateTypeExtensionClient(System::Collections::IDictionary extensions, ::ArrayW<uint8_t> certificateTypes) ;

/// @brief Method AddServerCertificateTypeExtensionServer addr 0xf1f8f8 size 0xf0 virtual false final false
static void AddServerCertificateTypeExtensionServer(System::Collections::IDictionary extensions, uint8_t certificateType) ;

/// @brief Method AddServerNameExtension addr 0xf1f9e8 size 0xec virtual false final false
static void AddServerNameExtension(System::Collections::IDictionary extensions, Org::BouncyCastle::Crypto::Tls::ServerNameList serverNameList) ;

/// @brief Method AddStatusRequestExtension addr 0xf1fb94 size 0xf0 virtual false final false
static void AddStatusRequestExtension(System::Collections::IDictionary extensions, Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest statusRequest) ;

/// @brief Method AddTruncatedHMacExtension addr 0xf1fd44 size 0xe8 virtual false final false
static void AddTruncatedHMacExtension(System::Collections::IDictionary extensions) ;

/// @brief Method GetClientCertificateTypeExtensionClient addr 0xf1fe7c size 0x6c virtual false final false
static ::ArrayW<uint8_t> GetClientCertificateTypeExtensionClient(System::Collections::IDictionary extensions) ;

/// @brief Method GetClientCertificateTypeExtensionServer addr 0xf200a4 size 0x70 virtual false final false
static int16_t GetClientCertificateTypeExtensionServer(System::Collections::IDictionary extensions) ;

/// @brief Method GetHeartbeatExtension addr 0xf20168 size 0x6c virtual false final false
static Org::BouncyCastle::Crypto::Tls::HeartbeatExtension GetHeartbeatExtension(System::Collections::IDictionary extensions) ;

/// @brief Method GetMaxFragmentLengthExtension addr 0xf202a8 size 0x70 virtual false final false
static int16_t GetMaxFragmentLengthExtension(System::Collections::IDictionary extensions) ;

/// @brief Method GetPaddingExtension addr 0xf2036c size 0x70 virtual false final false
static int32_t GetPaddingExtension(System::Collections::IDictionary extensions) ;

/// @brief Method GetServerCertificateTypeExtensionClient addr 0xf20498 size 0x6c virtual false final false
static ::ArrayW<uint8_t> GetServerCertificateTypeExtensionClient(System::Collections::IDictionary extensions) ;

/// @brief Method GetServerCertificateTypeExtensionServer addr 0xf20504 size 0x70 virtual false final false
static int16_t GetServerCertificateTypeExtensionServer(System::Collections::IDictionary extensions) ;

/// @brief Method GetServerNameExtension addr 0xf20574 size 0x6c virtual false final false
static Org::BouncyCastle::Crypto::Tls::ServerNameList GetServerNameExtension(System::Collections::IDictionary extensions) ;

/// @brief Method GetStatusRequestExtension addr 0xf206b4 size 0x6c virtual false final false
static Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest GetStatusRequestExtension(System::Collections::IDictionary extensions) ;

/// @brief Method HasEncryptThenMacExtension addr 0xf207f4 size 0x68 virtual false final false
static bool HasEncryptThenMacExtension(System::Collections::IDictionary extensions) ;

/// @brief Method HasExtendedMasterSecretExtension addr 0xf20870 size 0x68 virtual false final false
static bool HasExtendedMasterSecretExtension(System::Collections::IDictionary extensions) ;

/// @brief Method HasTruncatedHMacExtension addr 0xf208ec size 0x68 virtual false final false
static bool HasTruncatedHMacExtension(System::Collections::IDictionary extensions) ;

/// @brief Method CreateCertificateTypeExtensionClient addr 0xf1ef58 size 0xa4 virtual false final false
static ::ArrayW<uint8_t> CreateCertificateTypeExtensionClient(::ArrayW<uint8_t> certificateTypes) ;

/// @brief Method CreateCertificateTypeExtensionServer addr 0xf1f0ec size 0x54 virtual false final false
static ::ArrayW<uint8_t> CreateCertificateTypeExtensionServer(uint8_t certificateType) ;

/// @brief Method CreateEmptyExtensionData addr 0xf20a90 size 0x58 virtual false final false
static ::ArrayW<uint8_t> CreateEmptyExtensionData() ;

/// @brief Method CreateEncryptThenMacExtension addr 0xf1f228 size 0x50 virtual false final false
static ::ArrayW<uint8_t> CreateEncryptThenMacExtension() ;

/// @brief Method CreateExtendedMasterSecretExtension addr 0xf1f360 size 0x50 virtual false final false
static ::ArrayW<uint8_t> CreateExtendedMasterSecretExtension() ;

/// @brief Method CreateHeartbeatExtension addr 0xf1f4a0 size 0xc0 virtual false final false
static ::ArrayW<uint8_t> CreateHeartbeatExtension(Org::BouncyCastle::Crypto::Tls::HeartbeatExtension heartbeatExtension) ;

/// @brief Method CreateMaxFragmentLengthExtension addr 0xf1f650 size 0x54 virtual false final false
static ::ArrayW<uint8_t> CreateMaxFragmentLengthExtension(uint8_t maxFragmentLength) ;

/// @brief Method CreatePaddingExtension addr 0xf1f794 size 0x74 virtual false final false
static ::ArrayW<uint8_t> CreatePaddingExtension(int32_t dataLength) ;

/// @brief Method CreateServerNameExtension addr 0xf1fad4 size 0xc0 virtual false final false
static ::ArrayW<uint8_t> CreateServerNameExtension(Org::BouncyCastle::Crypto::Tls::ServerNameList serverNameList) ;

/// @brief Method CreateStatusRequestExtension addr 0xf1fc84 size 0xc0 virtual false final false
static ::ArrayW<uint8_t> CreateStatusRequestExtension(Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest statusRequest) ;

/// @brief Method CreateTruncatedHMacExtension addr 0xf1fe2c size 0x50 virtual false final false
static ::ArrayW<uint8_t> CreateTruncatedHMacExtension() ;

/// @brief Method ReadEmptyExtensionData addr 0xf20b7c size 0x90 virtual false final false
static bool ReadEmptyExtensionData(::ArrayW<uint8_t> extensionData) ;

/// @brief Method ReadCertificateTypeExtensionClient addr 0xf1fffc size 0xa8 virtual false final false
static ::ArrayW<uint8_t> ReadCertificateTypeExtensionClient(::ArrayW<uint8_t> extensionData) ;

/// @brief Method ReadCertificateTypeExtensionServer addr 0xf20114 size 0x54 virtual false final false
static uint8_t ReadCertificateTypeExtensionServer(::ArrayW<uint8_t> extensionData) ;

/// @brief Method ReadEncryptThenMacExtension addr 0xf2085c size 0x14 virtual false final false
static bool ReadEncryptThenMacExtension(::ArrayW<uint8_t> extensionData) ;

/// @brief Method ReadExtendedMasterSecretExtension addr 0xf208d8 size 0x14 virtual false final false
static bool ReadExtendedMasterSecretExtension(::ArrayW<uint8_t> extensionData) ;

/// @brief Method ReadHeartbeatExtension addr 0xf201d4 size 0xd4 virtual false final false
static Org::BouncyCastle::Crypto::Tls::HeartbeatExtension ReadHeartbeatExtension(::ArrayW<uint8_t> extensionData) ;

/// @brief Method ReadMaxFragmentLengthExtension addr 0xf20318 size 0x54 virtual false final false
static uint8_t ReadMaxFragmentLengthExtension(::ArrayW<uint8_t> extensionData) ;

/// @brief Method ReadPaddingExtension addr 0xf203dc size 0xbc virtual false final false
static int32_t ReadPaddingExtension(::ArrayW<uint8_t> extensionData) ;

/// @brief Method ReadServerNameExtension addr 0xf205e0 size 0xd4 virtual false final false
static Org::BouncyCastle::Crypto::Tls::ServerNameList ReadServerNameExtension(::ArrayW<uint8_t> extensionData) ;

/// @brief Method ReadStatusRequestExtension addr 0xf20720 size 0xd4 virtual false final false
static Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest ReadStatusRequestExtension(::ArrayW<uint8_t> extensionData) ;

/// @brief Method ReadTruncatedHMacExtension addr 0xf20954 size 0x14 virtual false final false
static bool ReadTruncatedHMacExtension(::ArrayW<uint8_t> extensionData) ;

// Ctor Parameters []
explicit TlsExtensionsUtilities() ;

/// @brief Method .ctor addr 0xf20e5c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsExtensionsUtilities, "Org.BouncyCastle.Crypto.Tls", "TlsExtensionsUtilities");
