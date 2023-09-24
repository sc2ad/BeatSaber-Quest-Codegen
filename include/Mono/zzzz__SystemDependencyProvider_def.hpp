#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Mono {
class ISystemCertificateProvider;
}
namespace Mono {
class ISystemDependencyProvider;
}
namespace Mono {
class SystemCertificateProvider;
}
namespace Mono {
class X509PalImpl;
}
// Forward declare root types
namespace Mono {
class SystemDependencyProvider;
}
// Type: Mono::SystemDependencyProvider
namespace Mono {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7602))
// CS Name: Mono.SystemDependencyProvider
class CORDL_TYPE SystemDependencyProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Mono::ISystemDependencyProvider
constexpr operator  Mono::ISystemDependencyProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SystemDependencyProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "SystemDependencyProvider", modifiers: " const&", def_value: None }]
constexpr SystemDependencyProvider(SystemDependencyProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SystemDependencyProvider", modifiers: "&&", def_value: None }]
constexpr SystemDependencyProvider(SystemDependencyProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SystemDependencyProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SystemDependencyProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SystemDependencyProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SystemDependencyProvider& operator=(SystemDependencyProvider&& o) noexcept = default;
  constexpr SystemDependencyProvider& operator=(SystemDependencyProvider const& o) noexcept = default;
                


// Fields

static Mono::SystemDependencyProvider __declspec(property(get=__get_instance, put=__set_instance))  instance;

static void __set_instance(Mono::SystemDependencyProvider value) ;

static Mono::SystemDependencyProvider __get_instance() ;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_syncRoot, put=__set_syncRoot))  syncRoot;

static void __set_syncRoot(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_syncRoot() ;

 Mono::SystemCertificateProvider __declspec(property(get=__get__CertificateProvider_k__BackingField, put=__set__CertificateProvider_k__BackingField))  _CertificateProvider_k__BackingField;

constexpr void __set__CertificateProvider_k__BackingField(Mono::SystemCertificateProvider value) ;

constexpr Mono::SystemCertificateProvider __get__CertificateProvider_k__BackingField() const;


// Properties

static Mono::SystemDependencyProvider __declspec(property(get=get_Instance))  Instance;

 Mono::ISystemCertificateProvider __declspec(property(get=Mono_ISystemDependencyProvider_get_CertificateProvider))  Mono_ISystemDependencyProvider_CertificateProvider;

 Mono::SystemCertificateProvider __declspec(property(get=get_CertificateProvider))  CertificateProvider;

 Mono::X509PalImpl __declspec(property(get=get_X509Pal))  X509Pal;


// Methods

/// @brief Method get_Instance addr 0x268523c size 0x5c virtual false final false
static Mono::SystemDependencyProvider get_Instance() ;

/// @brief Method Initialize addr 0x2685298 size 0x154 virtual false final false
static void Initialize() ;

/// @brief Method Mono.ISystemDependencyProvider.get_CertificateProvider addr 0x2685484 size 0x8 virtual true final true
 Mono::ISystemCertificateProvider Mono_ISystemDependencyProvider_get_CertificateProvider() ;

/// @brief Method get_CertificateProvider addr 0x268548c size 0x8 virtual false final false
 Mono::SystemCertificateProvider get_CertificateProvider() ;

/// @brief Method get_X509Pal addr 0x2685494 size 0x18 virtual false final false
 Mono::X509PalImpl get_X509Pal() ;

static Mono::SystemDependencyProvider New_ctor() ;

/// @brief Method .ctor addr 0x26853ec size 0x98 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono
NEED_NO_BOX(Mono::SystemDependencyProvider);
DEFINE_IL2CPP_ARG_TYPE(Mono::SystemDependencyProvider, "Mono", "SystemDependencyProvider");
