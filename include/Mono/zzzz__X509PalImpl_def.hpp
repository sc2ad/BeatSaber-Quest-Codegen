#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Microsoft::Win32::SafeHandles {
class SafePasswordHandle;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2Impl;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ContentType;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateImpl;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509KeyStorageFlags;
}
// Forward declare root types
namespace Mono {
class X509PalImpl;
}
// Type: Mono::X509PalImpl
namespace Mono {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7605))
// CS Name: Mono.X509PalImpl
class CORDL_TYPE X509PalImpl : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~X509PalImpl() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509PalImpl", modifiers: " const&", def_value: None }]
constexpr X509PalImpl(X509PalImpl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509PalImpl", modifiers: "&&", def_value: None }]
constexpr X509PalImpl(X509PalImpl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509PalImpl(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509PalImpl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509PalImpl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509PalImpl& operator=(X509PalImpl&& o) noexcept = default;
  constexpr X509PalImpl& operator=(X509PalImpl const& o) noexcept = default;
                


// Fields

static ::ArrayW<uint8_t> __declspec(property(get=__get_signedData, put=__set_signedData))  signedData;

static void __set_signedData(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_signedData() ;


// Properties

 bool __declspec(property(get=get_SupportsLegacyBasicConstraintsExtension))  SupportsLegacyBasicConstraintsExtension;


// Methods

/// @brief Method Import addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Security::Cryptography::X509Certificates::X509CertificateImpl Import(::ArrayW<uint8_t> data) ;

/// @brief Method Import addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl Import(::ArrayW<uint8_t> data, ::Microsoft::Win32::SafeHandles::SafePasswordHandle password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags) ;

/// @brief Method Import addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl Import(::System::Security::Cryptography::X509Certificates::X509Certificate cert) ;

/// @brief Method PEM addr 0x268559c size 0x134 virtual false final false
static ::ArrayW<uint8_t> PEM(::StringW type, ::ArrayW<uint8_t> data) ;

/// @brief Method ConvertData addr 0x26856d0 size 0x10c virtual false final false
static ::ArrayW<uint8_t> ConvertData(::ArrayW<uint8_t> data) ;

/// @brief Method ImportFallback addr 0x2684d98 size 0x1fc virtual false final false
 ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl ImportFallback(::ArrayW<uint8_t> data) ;

/// @brief Method ImportFallback addr 0x2685028 size 0x7c virtual false final false
 ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl ImportFallback(::ArrayW<uint8_t> data, ::Microsoft::Win32::SafeHandles::SafePasswordHandle password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags) ;

/// @brief Method get_SupportsLegacyBasicConstraintsExtension addr 0x26857dc size 0x8 virtual false final false
 bool get_SupportsLegacyBasicConstraintsExtension() ;

/// @brief Method GetCertContentType addr 0x26857e4 size 0x40c virtual false final false
 ::System::Security::Cryptography::X509Certificates::X509ContentType GetCertContentType(::ArrayW<uint8_t> rawData) ;

// Ctor Parameters []
explicit X509PalImpl() ;

/// @brief Method .ctor addr 0x2685594 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono
} // end anonymous namespace
NEED_NO_BOX(::Mono::X509PalImpl);
DEFINE_IL2CPP_ARG_TYPE(::Mono::X509PalImpl, "Mono", "X509PalImpl");
