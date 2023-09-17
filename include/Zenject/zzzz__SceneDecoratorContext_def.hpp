#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__Context_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Zenject {
class MonoInstaller;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class ScriptableObjectInstaller;
}
namespace UnityEngine {
class GameObject;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class DiContainer;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine {
class MonoBehaviour;
}
// Forward declare root types
namespace Zenject {
class SceneDecoratorContext;
}
// Type: Zenject::SceneDecoratorContext
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11061))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11069))
// CS Name: Zenject.SceneDecoratorContext
class CORDL_TYPE SceneDecoratorContext : public ::Zenject::Context {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~SceneDecoratorContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneDecoratorContext", modifiers: " const&", def_value: None }]
constexpr SceneDecoratorContext(SceneDecoratorContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneDecoratorContext", modifiers: "&&", def_value: None }]
constexpr SceneDecoratorContext(SceneDecoratorContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SceneDecoratorContext(void* ptr) noexcept : ::Zenject::Context(ptr) {
}


  constexpr SceneDecoratorContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SceneDecoratorContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SceneDecoratorContext& operator=(SceneDecoratorContext&& o) noexcept = default;
  constexpr SceneDecoratorContext& operator=(SceneDecoratorContext const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::Zenject::MonoInstaller> __declspec(property(get=__get__lateInstallers, put=__set__lateInstallers))  _lateInstallers;

constexpr void __set__lateInstallers(::System::Collections::Generic::List_1<::Zenject::MonoInstaller> value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::MonoInstaller> __get__lateInstallers() const;

 ::System::Collections::Generic::List_1<::Zenject::MonoInstaller> __declspec(property(get=__get__lateInstallerPrefabs, put=__set__lateInstallerPrefabs))  _lateInstallerPrefabs;

constexpr void __set__lateInstallerPrefabs(::System::Collections::Generic::List_1<::Zenject::MonoInstaller> value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::MonoInstaller> __get__lateInstallerPrefabs() const;

 ::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller> __declspec(property(get=__get__lateScriptableObjectInstallers, put=__set__lateScriptableObjectInstallers))  _lateScriptableObjectInstallers;

constexpr void __set__lateScriptableObjectInstallers(::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller> value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller> __get__lateScriptableObjectInstallers() const;

 ::StringW __declspec(property(get=__get__decoratedContractName, put=__set__decoratedContractName))  _decoratedContractName;

constexpr void __set__decoratedContractName(::StringW value) ;

constexpr ::StringW __get__decoratedContractName() const;

 ::Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(::Zenject::DiContainer value) ;

constexpr ::Zenject::DiContainer __get__container() const;

 ::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour> __declspec(property(get=__get__injectableMonoBehaviours, put=__set__injectableMonoBehaviours))  _injectableMonoBehaviours;

constexpr void __set__injectableMonoBehaviours(::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour> __get__injectableMonoBehaviours() const;


// Properties

 ::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller> __declspec(property(get=get_LateInstallers, put=set_LateInstallers))  LateInstallers;

 ::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller> __declspec(property(get=get_LateInstallerPrefabs, put=set_LateInstallerPrefabs))  LateInstallerPrefabs;

 ::System::Collections::Generic::IEnumerable_1<::Zenject::ScriptableObjectInstaller> __declspec(property(get=get_LateScriptableObjectInstallers, put=set_LateScriptableObjectInstallers))  LateScriptableObjectInstallers;

 ::StringW __declspec(property(get=get_DecoratedContractName))  DecoratedContractName;

 ::Zenject::DiContainer __declspec(property(get=get_Container))  Container;


// Methods

/// @brief Method get_LateInstallers addr 0x2d7aee4 size 0x8 virtual false final false
 ::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller> get_LateInstallers() ;

/// @brief Method set_LateInstallers addr 0x2d7aeec size 0x90 virtual false final false
 void set_LateInstallers(::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller> value) ;

/// @brief Method get_LateInstallerPrefabs addr 0x2d7af7c size 0x8 virtual false final false
 ::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller> get_LateInstallerPrefabs() ;

/// @brief Method set_LateInstallerPrefabs addr 0x2d7af84 size 0x90 virtual false final false
 void set_LateInstallerPrefabs(::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller> value) ;

/// @brief Method get_LateScriptableObjectInstallers addr 0x2d7b014 size 0x8 virtual false final false
 ::System::Collections::Generic::IEnumerable_1<::Zenject::ScriptableObjectInstaller> get_LateScriptableObjectInstallers() ;

/// @brief Method set_LateScriptableObjectInstallers addr 0x2d7b01c size 0x90 virtual false final false
 void set_LateScriptableObjectInstallers(::System::Collections::Generic::IEnumerable_1<::Zenject::ScriptableObjectInstaller> value) ;

/// @brief Method get_DecoratedContractName addr 0x2d7b0ac size 0x8 virtual false final false
 ::StringW get_DecoratedContractName() ;

/// @brief Method get_Container addr 0x2d7b0b4 size 0x20 virtual true final false
 ::Zenject::DiContainer get_Container() ;

/// @brief Method GetRootGameObjects addr 0x2d7b0d4 size 0x28 virtual true final false
 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject> GetRootGameObjects() ;

/// @brief Method Initialize addr 0x2d797a0 size 0x1b4 virtual false final false
 void Initialize(::Zenject::DiContainer container) ;

/// @brief Method InstallDecoratorSceneBindings addr 0x2d7a060 size 0x80 virtual false final false
 void InstallDecoratorSceneBindings() ;

/// @brief Method InstallDecoratorInstallers addr 0x2d7a0e0 size 0x10 virtual false final false
 void InstallDecoratorInstallers() ;

/// @brief Method GetInjectableMonoBehaviours addr 0x2d7b0fc size 0x4c virtual true final false
 void GetInjectableMonoBehaviours(::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour> monoBehaviours) ;

/// @brief Method InstallLateDecoratorInstallers addr 0x2d7a0f0 size 0xc4 virtual false final false
 void InstallLateDecoratorInstallers() ;

// Ctor Parameters []
explicit SceneDecoratorContext() ;

/// @brief Method .ctor addr 0x2d7b148 size 0x124 virtual false final false
 void _ctor() ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d7b26c size 0x178 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::SceneDecoratorContext);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SceneDecoratorContext, "Zenject", "SceneDecoratorContext");
