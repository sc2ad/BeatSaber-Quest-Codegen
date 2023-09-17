#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace ENet {
struct SslMode;
}
// Forward declare root types
namespace ENet {
struct ENetSslConfiguration;
}
// Type: ENet::ENetSslConfiguration
namespace ENet {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15258))
// CS Name: ENet.ENetSslConfiguration
struct CORDL_TYPE ENetSslConfiguration : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "mode", ty: "::ENet::SslMode", modifiers: "", def_value: None }, CppParam { name: "certificatePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "certificate", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "privateKeyPath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "privateKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "validateCertificate", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "rootCertificatePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "rootCertificate", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "hostName", ty: "::StringW", modifiers: "", def_value: None }]
constexpr ENetSslConfiguration(::ENet::SslMode mode, ::StringW certificatePath, ::StringW certificate, ::StringW privateKeyPath, ::StringW privateKey, int32_t validateCertificate, ::StringW rootCertificatePath, ::StringW rootCertificate, ::StringW hostName) noexcept;


                    constexpr ENetSslConfiguration(ENetSslConfiguration const&) = default;
                    constexpr ENetSslConfiguration(ENetSslConfiguration&&) = default;
                    constexpr ENetSslConfiguration& operator=(ENetSslConfiguration const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ENetSslConfiguration& operator=(ENetSslConfiguration&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ENetSslConfiguration(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ENet::SslMode __declspec(property(get=__get_mode, put=__set_mode))  mode;

constexpr void __set_mode(::ENet::SslMode value) ;

constexpr ::ENet::SslMode __get_mode() const;

 ::StringW __declspec(property(get=__get_certificatePath, put=__set_certificatePath))  certificatePath;

constexpr void __set_certificatePath(::StringW value) ;

constexpr ::StringW __get_certificatePath() const;

 ::StringW __declspec(property(get=__get_certificate, put=__set_certificate))  certificate;

constexpr void __set_certificate(::StringW value) ;

constexpr ::StringW __get_certificate() const;

 ::StringW __declspec(property(get=__get_privateKeyPath, put=__set_privateKeyPath))  privateKeyPath;

constexpr void __set_privateKeyPath(::StringW value) ;

constexpr ::StringW __get_privateKeyPath() const;

 ::StringW __declspec(property(get=__get_privateKey, put=__set_privateKey))  privateKey;

constexpr void __set_privateKey(::StringW value) ;

constexpr ::StringW __get_privateKey() const;

 int32_t __declspec(property(get=__get_validateCertificate, put=__set_validateCertificate))  validateCertificate;

constexpr void __set_validateCertificate(int32_t value) ;

constexpr int32_t __get_validateCertificate() const;

 ::StringW __declspec(property(get=__get_rootCertificatePath, put=__set_rootCertificatePath))  rootCertificatePath;

constexpr void __set_rootCertificatePath(::StringW value) ;

constexpr ::StringW __get_rootCertificatePath() const;

 ::StringW __declspec(property(get=__get_rootCertificate, put=__set_rootCertificate))  rootCertificate;

constexpr void __set_rootCertificate(::StringW value) ;

constexpr ::StringW __get_rootCertificate() const;

 ::StringW __declspec(property(get=__get_hostName, put=__set_hostName))  hostName;

constexpr void __set_hostName(::StringW value) ;

constexpr ::StringW __get_hostName() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def ENet
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::ENet::ENetSslConfiguration, "ENet", "ENetSslConfiguration");
