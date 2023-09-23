#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace System {
class IDisposable;
}
namespace ENet {
struct SslMode;
}
namespace ENet {
struct ENetSslConfiguration;
}
// Forward declare root types
namespace ENet {
struct SslConfiguration;
}
// Type: ENet::SslConfiguration
namespace ENet {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15269))
// CS Name: ENet.SslConfiguration
struct CORDL_TYPE SslConfiguration : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "nativeSslConfiguration", ty: "ENet::ENetSslConfiguration", modifiers: "", def_value: None }]
constexpr SslConfiguration(ENet::ENetSslConfiguration nativeSslConfiguration) noexcept;


                    constexpr SslConfiguration(SslConfiguration const&) = default;
                    constexpr SslConfiguration(SslConfiguration&&) = default;
                    constexpr SslConfiguration& operator=(SslConfiguration const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SslConfiguration& operator=(SslConfiguration&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SslConfiguration(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ENet::ENetSslConfiguration __declspec(property(get=__get_nativeSslConfiguration, put=__set_nativeSslConfiguration))  nativeSslConfiguration;

constexpr void __set_nativeSslConfiguration(ENet::ENetSslConfiguration value) ;

constexpr ENet::ENetSslConfiguration __get_nativeSslConfiguration() const;


// Properties

 ENet::ENetSslConfiguration __declspec(property(get=get_NativeSslConfiguration, put=set_NativeSslConfiguration))  NativeSslConfiguration;

 ENet::SslMode __declspec(property(get=get_Mode, put=set_Mode))  Mode;

 ::StringW __declspec(property(get=get_CertificatePath, put=set_CertificatePath))  CertificatePath;

 ::StringW __declspec(property(get=get_Certificate, put=set_Certificate))  Certificate;

 ::StringW __declspec(property(get=get_PrivateKeyPath, put=set_PrivateKeyPath))  PrivateKeyPath;

 ::StringW __declspec(property(get=get_PrivateKey, put=set_PrivateKey))  PrivateKey;

 bool __declspec(property(get=get_ValidateCertificate, put=set_ValidateCertificate))  ValidateCertificate;

 ::StringW __declspec(property(get=get_RootCertificatePath, put=set_RootCertificatePath))  RootCertificatePath;

 ::StringW __declspec(property(get=get_RootCertificate, put=set_RootCertificate))  RootCertificate;

 ::StringW __declspec(property(get=get_HostName, put=set_HostName))  HostName;


// Methods

/// @brief Method get_NativeSslConfiguration addr 0x207d3f0 size 0x10 virtual false final false
 ENet::ENetSslConfiguration get_NativeSslConfiguration() ;

/// @brief Method set_NativeSslConfiguration addr 0x207d400 size 0x14 virtual false final false
 void set_NativeSslConfiguration(ENet::ENetSslConfiguration value) ;

/// @brief Method .ctor addr 0x207d414 size 0x14 virtual false final false
 void _ctor(ENet::ENetSslConfiguration sslConfiguration) ;

/// @brief Method Dispose addr 0x207d428 size 0x18 virtual true final true
 void Dispose() ;

/// @brief Method get_Mode addr 0x207d478 size 0x8 virtual false final false
 ENet::SslMode get_Mode() ;

/// @brief Method set_Mode addr 0x207d480 size 0x8 virtual false final false
 void set_Mode(ENet::SslMode value) ;

/// @brief Method get_CertificatePath addr 0x207d488 size 0x8 virtual false final false
 ::StringW get_CertificatePath() ;

/// @brief Method set_CertificatePath addr 0x207d440 size 0x8 virtual false final false
 void set_CertificatePath(::StringW value) ;

/// @brief Method get_Certificate addr 0x207d490 size 0x8 virtual false final false
 ::StringW get_Certificate() ;

/// @brief Method set_Certificate addr 0x207d448 size 0x8 virtual false final false
 void set_Certificate(::StringW value) ;

/// @brief Method get_PrivateKeyPath addr 0x207d498 size 0x8 virtual false final false
 ::StringW get_PrivateKeyPath() ;

/// @brief Method set_PrivateKeyPath addr 0x207d450 size 0x8 virtual false final false
 void set_PrivateKeyPath(::StringW value) ;

/// @brief Method get_PrivateKey addr 0x207d4a0 size 0x8 virtual false final false
 ::StringW get_PrivateKey() ;

/// @brief Method set_PrivateKey addr 0x207d458 size 0x8 virtual false final false
 void set_PrivateKey(::StringW value) ;

/// @brief Method get_ValidateCertificate addr 0x207d4a8 size 0x10 virtual false final false
 bool get_ValidateCertificate() ;

/// @brief Method set_ValidateCertificate addr 0x207d4b8 size 0xc virtual false final false
 void set_ValidateCertificate(bool value) ;

/// @brief Method get_RootCertificatePath addr 0x207d4c4 size 0x8 virtual false final false
 ::StringW get_RootCertificatePath() ;

/// @brief Method set_RootCertificatePath addr 0x207d460 size 0x8 virtual false final false
 void set_RootCertificatePath(::StringW value) ;

/// @brief Method get_RootCertificate addr 0x207d4cc size 0x8 virtual false final false
 ::StringW get_RootCertificate() ;

/// @brief Method set_RootCertificate addr 0x207d468 size 0x8 virtual false final false
 void set_RootCertificate(::StringW value) ;

/// @brief Method get_HostName addr 0x207d4d4 size 0x8 virtual false final false
 ::StringW get_HostName() ;

/// @brief Method set_HostName addr 0x207d470 size 0x8 virtual false final false
 void set_HostName(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def ENet
DEFINE_IL2CPP_ARG_TYPE(ENet::SslConfiguration, "ENet", "SslConfiguration");
