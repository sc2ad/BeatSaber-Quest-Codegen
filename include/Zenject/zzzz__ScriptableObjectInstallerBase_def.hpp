#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class IInstaller;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class ScriptableObjectInstallerBase;
}
// Type: Zenject::ScriptableObjectInstallerBase
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11096))
// CS Name: Zenject.ScriptableObjectInstallerBase
class CORDL_TYPE ScriptableObjectInstallerBase : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Convert operator to ::Zenject::IInstaller
constexpr operator  ::Zenject::IInstaller() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ScriptableObjectInstallerBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstallerBase", modifiers: " const&", def_value: None }]
constexpr ScriptableObjectInstallerBase(ScriptableObjectInstallerBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstallerBase", modifiers: "&&", def_value: None }]
constexpr ScriptableObjectInstallerBase(ScriptableObjectInstallerBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScriptableObjectInstallerBase(void* ptr) noexcept : ::UnityEngine::ScriptableObject(ptr) {
}


  constexpr ScriptableObjectInstallerBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScriptableObjectInstallerBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScriptableObjectInstallerBase& operator=(ScriptableObjectInstallerBase&& o) noexcept = default;
  constexpr ScriptableObjectInstallerBase& operator=(ScriptableObjectInstallerBase const& o) noexcept = default;
                


// Fields

 ::Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(::Zenject::DiContainer value) ;

constexpr ::Zenject::DiContainer __get__container() const;


// Properties

 ::Zenject::DiContainer __declspec(property(get=get_Container))  Container;

 bool __declspec(property(get=Zenject_IInstaller_get_IsEnabled))  Zenject_IInstaller_IsEnabled;


// Methods

/// @brief Method get_Container addr 0x2d7c210 size 0x8 virtual false final false
 ::Zenject::DiContainer get_Container() ;

/// @brief Method Zenject.IInstaller.get_IsEnabled addr 0x2d7c218 size 0x8 virtual true final true
 bool Zenject_IInstaller_get_IsEnabled() ;

/// @brief Method InstallBindings addr 0x2d7c220 size 0x40 virtual true final false
 void InstallBindings() ;

// Ctor Parameters []
explicit ScriptableObjectInstallerBase() ;

/// @brief Method .ctor addr 0x2d7bfec size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method __zenCreate addr 0x2d7c260 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenFieldSetter0 addr 0x2d7c2bc size 0x134 virtual false final false
static void __zenFieldSetter0(::bs_hook::Il2CppWrapperType P_0, ::bs_hook::Il2CppWrapperType P_1) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d7c3f0 size 0x2f8 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::ScriptableObjectInstallerBase);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ScriptableObjectInstallerBase, "Zenject", "ScriptableObjectInstallerBase");
