#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class Zenject__Context____c;
}
namespace Zenject {
class MonoInstaller;
}
namespace Zenject {
class InstallerBase;
}
namespace Zenject {
class DiContainer;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Zenject {
class ScriptableObjectInstaller;
}
namespace UnityEngine {
class GameObject;
}
namespace Zenject {
class ZenjectBinding;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Zenject {
class Context;
}
namespace Zenject {
class Zenject__Context____c;
}
// Type: ::<>c
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11060))
// CS Name: Zenject.Context::<>c
class CORDL_TYPE Zenject__Context____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Zenject__Context____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__Context____c", modifiers: " const&", def_value: None }]
constexpr Zenject__Context____c(Zenject__Context____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__Context____c", modifiers: "&&", def_value: None }]
constexpr Zenject__Context____c(Zenject__Context____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__Context____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__Context____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__Context____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__Context____c& operator=(Zenject__Context____c&& o) noexcept = default;
  constexpr Zenject__Context____c& operator=(Zenject__Context____c const& o) noexcept = default;
                


// Fields

static Zenject::Zenject__Context____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Zenject::Zenject__Context____c value) ;

static Zenject::Zenject__Context____c __get___9() ;

static System::Func_2<System::Type,bool> __declspec(property(get=__get___9__16_0, put=__set___9__16_0))  __9__16_0;

static void __set___9__16_0(System::Func_2<System::Type,bool> value) ;

static System::Func_2<System::Type,bool> __get___9__16_0() ;


// Methods

static Zenject::Zenject__Context____c New_ctor() ;

/// @brief Method .ctor addr 0x2d74814 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <set_NormalInstallerTypes>b__16_0 addr 0x2d7481c size 0xb4 virtual false final false
 bool _set_NormalInstallerTypes_b__16_0(System::Type x) ;

/// @brief Method __zenCreate addr 0x2d748d0 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d7492c size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::Context
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11061))
// CS Name: Zenject.Context
class CORDL_TYPE Context : public UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = Zenject::Zenject__Context____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Context() = default;

// Ctor Parameters [CppParam { name: "", ty: "Context", modifiers: " const&", def_value: None }]
constexpr Context(Context const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Context", modifiers: "&&", def_value: None }]
constexpr Context(Context&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Context(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr Context& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Context& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Context& operator=(Context&& o) noexcept = default;
  constexpr Context& operator=(Context const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<Zenject::ScriptableObjectInstaller> __declspec(property(get=__get__scriptableObjectInstallers, put=__set__scriptableObjectInstallers))  _scriptableObjectInstallers;

constexpr void __set__scriptableObjectInstallers(System::Collections::Generic::List_1<Zenject::ScriptableObjectInstaller> value) ;

constexpr System::Collections::Generic::List_1<Zenject::ScriptableObjectInstaller> __get__scriptableObjectInstallers() const;

 System::Collections::Generic::List_1<Zenject::MonoInstaller> __declspec(property(get=__get__monoInstallers, put=__set__monoInstallers))  _monoInstallers;

constexpr void __set__monoInstallers(System::Collections::Generic::List_1<Zenject::MonoInstaller> value) ;

constexpr System::Collections::Generic::List_1<Zenject::MonoInstaller> __get__monoInstallers() const;

 System::Collections::Generic::List_1<Zenject::MonoInstaller> __declspec(property(get=__get__installerPrefabs, put=__set__installerPrefabs))  _installerPrefabs;

constexpr void __set__installerPrefabs(System::Collections::Generic::List_1<Zenject::MonoInstaller> value) ;

constexpr System::Collections::Generic::List_1<Zenject::MonoInstaller> __get__installerPrefabs() const;

 System::Collections::Generic::List_1<Zenject::InstallerBase> __declspec(property(get=__get__normalInstallers, put=__set__normalInstallers))  _normalInstallers;

constexpr void __set__normalInstallers(System::Collections::Generic::List_1<Zenject::InstallerBase> value) ;

constexpr System::Collections::Generic::List_1<Zenject::InstallerBase> __get__normalInstallers() const;

 System::Collections::Generic::List_1<System::Type> __declspec(property(get=__get__normalInstallerTypes, put=__set__normalInstallerTypes))  _normalInstallerTypes;

constexpr void __set__normalInstallerTypes(System::Collections::Generic::List_1<System::Type> value) ;

constexpr System::Collections::Generic::List_1<System::Type> __get__normalInstallerTypes() const;


// Properties

 System::Collections::Generic::IEnumerable_1<Zenject::MonoInstaller> __declspec(property(get=get_Installers, put=set_Installers))  Installers;

 System::Collections::Generic::IEnumerable_1<Zenject::MonoInstaller> __declspec(property(get=get_InstallerPrefabs, put=set_InstallerPrefabs))  InstallerPrefabs;

 System::Collections::Generic::IEnumerable_1<Zenject::ScriptableObjectInstaller> __declspec(property(get=get_ScriptableObjectInstallers, put=set_ScriptableObjectInstallers))  ScriptableObjectInstallers;

 System::Collections::Generic::IEnumerable_1<System::Type> __declspec(property(get=get_NormalInstallerTypes, put=set_NormalInstallerTypes))  NormalInstallerTypes;

 System::Collections::Generic::IEnumerable_1<Zenject::InstallerBase> __declspec(property(get=get_NormalInstallers, put=set_NormalInstallers))  NormalInstallers;

 Zenject::DiContainer __declspec(property(get=get_Container))  Container;


// Methods

/// @brief Method get_Installers addr 0x2d72894 size 0x8 virtual false final false
 System::Collections::Generic::IEnumerable_1<Zenject::MonoInstaller> get_Installers() ;

/// @brief Method set_Installers addr 0x2d7289c size 0x90 virtual false final false
 void set_Installers(System::Collections::Generic::IEnumerable_1<Zenject::MonoInstaller> value) ;

/// @brief Method get_InstallerPrefabs addr 0x2d7292c size 0x8 virtual false final false
 System::Collections::Generic::IEnumerable_1<Zenject::MonoInstaller> get_InstallerPrefabs() ;

/// @brief Method set_InstallerPrefabs addr 0x2d72934 size 0x90 virtual false final false
 void set_InstallerPrefabs(System::Collections::Generic::IEnumerable_1<Zenject::MonoInstaller> value) ;

/// @brief Method get_ScriptableObjectInstallers addr 0x2d729c4 size 0x8 virtual false final false
 System::Collections::Generic::IEnumerable_1<Zenject::ScriptableObjectInstaller> get_ScriptableObjectInstallers() ;

/// @brief Method set_ScriptableObjectInstallers addr 0x2d729cc size 0x90 virtual false final false
 void set_ScriptableObjectInstallers(System::Collections::Generic::IEnumerable_1<Zenject::ScriptableObjectInstaller> value) ;

/// @brief Method get_NormalInstallerTypes addr 0x2d72a5c size 0x8 virtual false final false
 System::Collections::Generic::IEnumerable_1<System::Type> get_NormalInstallerTypes() ;

/// @brief Method set_NormalInstallerTypes addr 0x2d72a64 size 0x168 virtual false final false
 void set_NormalInstallerTypes(System::Collections::Generic::IEnumerable_1<System::Type> value) ;

/// @brief Method get_NormalInstallers addr 0x2d72bcc size 0x8 virtual false final false
 System::Collections::Generic::IEnumerable_1<Zenject::InstallerBase> get_NormalInstallers() ;

/// @brief Method set_NormalInstallers addr 0x2d72bd4 size 0x90 virtual false final false
 void set_NormalInstallers(System::Collections::Generic::IEnumerable_1<Zenject::InstallerBase> value) ;

/// @brief Method get_Container addr 0x0 size 0xffffffffffffffff virtual true final false
 Zenject::DiContainer get_Container() ;

/// @brief Method GetRootGameObjects addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject> GetRootGameObjects() ;

/// @brief Method AddNormalInstallerType addr 0x2d72c64 size 0x110 virtual false final false
 void AddNormalInstallerType(System::Type installerType) ;

/// @brief Method AddNormalInstaller addr 0x2d72d74 size 0xa8 virtual false final false
 void AddNormalInstaller(Zenject::InstallerBase installer) ;

/// @brief Method CheckInstallerPrefabTypes addr 0x2d72e1c size 0x304 virtual false final false
 void CheckInstallerPrefabTypes(System::Collections::Generic::List_1<Zenject::MonoInstaller> installers, System::Collections::Generic::List_1<Zenject::MonoInstaller> installerPrefabs) ;

/// @brief Method InstallInstallers addr 0x2d73120 size 0x10 virtual false final false
 void InstallInstallers() ;

/// @brief Method InstallInstallers addr 0x2d73130 size 0x78c virtual false final false
 void InstallInstallers(System::Collections::Generic::List_1<Zenject::InstallerBase> normalInstallers, System::Collections::Generic::List_1<System::Type> normalInstallerTypes, System::Collections::Generic::List_1<Zenject::ScriptableObjectInstaller> scriptableObjectInstallers, System::Collections::Generic::List_1<Zenject::MonoInstaller> installers, System::Collections::Generic::List_1<Zenject::MonoInstaller> installerPrefabs) ;

/// @brief Method InstallSceneBindings addr 0x2d73988 size 0x554 virtual false final false
 void InstallSceneBindings(System::Collections::Generic::List_1<UnityEngine::MonoBehaviour> injectableMonoBehaviours) ;

/// @brief Method InstallZenjectBinding addr 0x2d73edc size 0x564 virtual false final false
 void InstallZenjectBinding(Zenject::ZenjectBinding binding) ;

/// @brief Method GetInjectableMonoBehaviours addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetInjectableMonoBehaviours(System::Collections::Generic::List_1<UnityEngine::MonoBehaviour> components) ;

static Zenject::Context New_ctor() ;

/// @brief Method .ctor addr 0x2d744cc size 0x16c virtual false final false
 void _ctor() ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d74638 size 0x178 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::Context);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Context, "Zenject", "Context");
NEED_NO_BOX(Zenject::Zenject__Context____c);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__Context____c, "Zenject", "Context/<>c");
