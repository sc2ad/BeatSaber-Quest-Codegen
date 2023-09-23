#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Mono::Security::Interface {
class MonoTlsProvider;
}
// Forward declare root types
namespace Mono::Security::Interface {
class MonoTlsProviderFactory;
}
// Type: Mono.Security.Interface::MonoTlsProviderFactory
namespace Mono::Security::Interface {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13994))
// CS Name: Mono.Security.Interface.MonoTlsProviderFactory
class CORDL_TYPE MonoTlsProviderFactory : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MonoTlsProviderFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoTlsProviderFactory", modifiers: " const&", def_value: None }]
constexpr MonoTlsProviderFactory(MonoTlsProviderFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoTlsProviderFactory", modifiers: "&&", def_value: None }]
constexpr MonoTlsProviderFactory(MonoTlsProviderFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoTlsProviderFactory(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MonoTlsProviderFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoTlsProviderFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoTlsProviderFactory& operator=(MonoTlsProviderFactory&& o) noexcept = default;
  constexpr MonoTlsProviderFactory& operator=(MonoTlsProviderFactory const& o) noexcept = default;
                


// Methods

/// @brief Method GetProvider addr 0x2295764 size 0x70 virtual false final false
static Mono::Security::Interface::MonoTlsProvider GetProvider() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Interface
NEED_NO_BOX(Mono::Security::Interface::MonoTlsProviderFactory);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Interface::MonoTlsProviderFactory, "Mono.Security.Interface", "MonoTlsProviderFactory");
