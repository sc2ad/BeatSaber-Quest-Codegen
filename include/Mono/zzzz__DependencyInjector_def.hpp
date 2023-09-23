#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Mono {
class ISystemDependencyProvider;
}
// Forward declare root types
namespace Mono {
class DependencyInjector;
}
// Type: Mono::DependencyInjector
namespace Mono {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2224))
// CS Name: Mono.DependencyInjector
class CORDL_TYPE DependencyInjector : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DependencyInjector() = default;

// Ctor Parameters [CppParam { name: "", ty: "DependencyInjector", modifiers: " const&", def_value: None }]
constexpr DependencyInjector(DependencyInjector const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DependencyInjector", modifiers: "&&", def_value: None }]
constexpr DependencyInjector(DependencyInjector&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DependencyInjector(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DependencyInjector& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DependencyInjector& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DependencyInjector& operator=(DependencyInjector&& o) noexcept = default;
  constexpr DependencyInjector& operator=(DependencyInjector const& o) noexcept = default;
                


// Fields

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_locker, put=__set_locker))  locker;

static void __set_locker(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_locker() ;

static Mono::ISystemDependencyProvider __declspec(property(get=__get_systemDependency, put=__set_systemDependency))  systemDependency;

static void __set_systemDependency(Mono::ISystemDependencyProvider value) ;

static Mono::ISystemDependencyProvider __get_systemDependency() ;


// Properties

static Mono::ISystemDependencyProvider __declspec(property(get=get_SystemProvider))  SystemProvider;


// Methods

/// @brief Method get_SystemProvider addr 0x22a48e4 size 0x204 virtual false final false
static Mono::ISystemDependencyProvider get_SystemProvider() ;

/// @brief Method Register addr 0x22a4c34 size 0x1a8 virtual false final false
static void Register(Mono::ISystemDependencyProvider provider) ;

/// @brief Method ReflectionLoad addr 0x22a4ae8 size 0x14c virtual false final false
static Mono::ISystemDependencyProvider ReflectionLoad() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono
NEED_NO_BOX(Mono::DependencyInjector);
DEFINE_IL2CPP_ARG_TYPE(Mono::DependencyInjector, "Mono", "DependencyInjector");
