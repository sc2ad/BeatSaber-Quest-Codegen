#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Zenject {
class IInstaller;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class MonoInstallerBase;
}
// Type: Zenject::MonoInstallerBase
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11088))
// CS Name: Zenject.MonoInstallerBase
class CORDL_TYPE MonoInstallerBase : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to Zenject::IInstaller
constexpr operator  Zenject::IInstaller() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MonoInstallerBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoInstallerBase", modifiers: " const&", def_value: None }]
constexpr MonoInstallerBase(MonoInstallerBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoInstallerBase", modifiers: "&&", def_value: None }]
constexpr MonoInstallerBase(MonoInstallerBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoInstallerBase(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MonoInstallerBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoInstallerBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoInstallerBase& operator=(MonoInstallerBase&& o) noexcept = default;
  constexpr MonoInstallerBase& operator=(MonoInstallerBase const& o) noexcept = default;
                


// Fields

 Zenject::DiContainer __declspec(property(get=__get__Container_k__BackingField, put=__set__Container_k__BackingField))  _Container_k__BackingField;

constexpr void __set__Container_k__BackingField(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__Container_k__BackingField() const;


// Properties

 Zenject::DiContainer __declspec(property(get=get_Container, put=set_Container))  Container;

 bool __declspec(property(get=get_IsEnabled))  IsEnabled;


// Methods

/// @brief Method get_Container addr 0x2d7bc08 size 0x8 virtual false final false
 Zenject::DiContainer get_Container() ;

/// @brief Method set_Container addr 0x2d7bc10 size 0x8 virtual false final false
 void set_Container(Zenject::DiContainer value) ;

/// @brief Method get_IsEnabled addr 0x2d7bc18 size 0x8 virtual true final false
 bool get_IsEnabled() ;

/// @brief Method Start addr 0x2d7bc20 size 0x4 virtual true final false
 void Start() ;

/// @brief Method InstallBindings addr 0x2d7bc24 size 0x40 virtual true final false
 void InstallBindings() ;

// Ctor Parameters []
explicit MonoInstallerBase() ;

/// @brief Method .ctor addr 0x2d7ba88 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method __zenPropertySetter0 addr 0x2d7bc64 size 0xd0 virtual false final false
static void __zenPropertySetter0(::bs_hook::Il2CppWrapperType P_0, ::bs_hook::Il2CppWrapperType P_1) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d7bd34 size 0x2b0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::MonoInstallerBase);
DEFINE_IL2CPP_ARG_TYPE(Zenject::MonoInstallerBase, "Zenject", "MonoInstallerBase");
