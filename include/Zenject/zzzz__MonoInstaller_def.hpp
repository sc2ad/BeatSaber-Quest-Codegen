#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstallerBase_def.hpp"
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class MonoInstaller;
}
// Type: Zenject::MonoInstaller
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11088))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11080))
// CS Name: Zenject.MonoInstaller
class CORDL_TYPE MonoInstaller : public Zenject::MonoInstallerBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MonoInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoInstaller", modifiers: " const&", def_value: None }]
constexpr MonoInstaller(MonoInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoInstaller", modifiers: "&&", def_value: None }]
constexpr MonoInstaller(MonoInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoInstaller(void* ptr) noexcept : Zenject::MonoInstallerBase(ptr) {
}


  constexpr MonoInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoInstaller& operator=(MonoInstaller&& o) noexcept = default;
  constexpr MonoInstaller& operator=(MonoInstaller const& o) noexcept = default;
                


// Methods

static Zenject::MonoInstaller New_ctor() ;

/// @brief Method .ctor addr 0x2d7ba80 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d7ba90 size 0x178 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::MonoInstaller);
DEFINE_IL2CPP_ARG_TYPE(Zenject::MonoInstaller, "Zenject", "MonoInstaller");
