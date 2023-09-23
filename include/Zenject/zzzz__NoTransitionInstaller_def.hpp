#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class NoTransitionInstaller;
}
// Type: Zenject::NoTransitionInstaller
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11118))
// CS Name: Zenject.NoTransitionInstaller
class CORDL_TYPE NoTransitionInstaller : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~NoTransitionInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoTransitionInstaller", modifiers: " const&", def_value: None }]
constexpr NoTransitionInstaller(NoTransitionInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoTransitionInstaller", modifiers: "&&", def_value: None }]
constexpr NoTransitionInstaller(NoTransitionInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoTransitionInstaller(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr NoTransitionInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoTransitionInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoTransitionInstaller& operator=(NoTransitionInstaller&& o) noexcept = default;
  constexpr NoTransitionInstaller& operator=(NoTransitionInstaller const& o) noexcept = default;
                


// Methods

/// @brief Method InstallBindings addr 0x2d8b76c size 0x4 virtual true final false
 void InstallBindings(Zenject::DiContainer container) ;

/// @brief Method PostInstall addr 0x2d8b770 size 0x4 virtual true final false
 void PostInstall(Zenject::DiContainer container) ;

// Ctor Parameters []
explicit NoTransitionInstaller() ;

/// @brief Method .ctor addr 0x2d8b774 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d8b77c size 0x178 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::NoTransitionInstaller);
DEFINE_IL2CPP_ARG_TYPE(Zenject::NoTransitionInstaller, "Zenject", "NoTransitionInstaller");
