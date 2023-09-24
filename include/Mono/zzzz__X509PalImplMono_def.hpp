#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Mono/zzzz__X509PalImpl_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2Impl;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509KeyStorageFlags;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateImpl;
}
namespace Microsoft::Win32::SafeHandles {
class SafePasswordHandle;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
// Forward declare root types
namespace Mono {
class X509PalImplMono;
}
// Type: Mono::X509PalImplMono
namespace Mono {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7604))
// CS Name: Mono.X509PalImplMono
class CORDL_TYPE X509PalImplMono : public Mono::X509PalImpl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~X509PalImplMono() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509PalImplMono", modifiers: " const&", def_value: None }]
constexpr X509PalImplMono(X509PalImplMono const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509PalImplMono", modifiers: "&&", def_value: None }]
constexpr X509PalImplMono(X509PalImplMono&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509PalImplMono(void* ptr) noexcept : Mono::X509PalImpl(ptr) {
}


  constexpr X509PalImplMono& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509PalImplMono& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509PalImplMono& operator=(X509PalImplMono&& o) noexcept = default;
  constexpr X509PalImplMono& operator=(X509PalImplMono const& o) noexcept = default;
                


// Methods

/// @brief Method Import addr 0x2685584 size 0x4 virtual true final false
 System::Security::Cryptography::X509Certificates::X509CertificateImpl Import(::ArrayW<uint8_t> data) ;

/// @brief Method Import addr 0x2685588 size 0x4 virtual true final false
 System::Security::Cryptography::X509Certificates::X509Certificate2Impl Import(::ArrayW<uint8_t> data, Microsoft::Win32::SafeHandles::SafePasswordHandle password, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags) ;

/// @brief Method Import addr 0x268558c size 0x8 virtual true final false
 System::Security::Cryptography::X509Certificates::X509Certificate2Impl Import(System::Security::Cryptography::X509Certificates::X509Certificate cert) ;

static Mono::X509PalImplMono New_ctor() ;

/// @brief Method .ctor addr 0x2684b24 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono
NEED_NO_BOX(Mono::X509PalImplMono);
DEFINE_IL2CPP_ARG_TYPE(Mono::X509PalImplMono, "Mono", "X509PalImplMono");
