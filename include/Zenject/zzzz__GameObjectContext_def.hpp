#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__RunnableContext_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace System {
class Action;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace Zenject {
class MonoKernel;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
class GameObjectContext;
}
// Type: Zenject::GameObjectContext
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11064))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11062))
// CS Name: Zenject.GameObjectContext
class CORDL_TYPE GameObjectContext : public ::Zenject::RunnableContext {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~GameObjectContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameObjectContext", modifiers: " const&", def_value: None }]
constexpr GameObjectContext(GameObjectContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameObjectContext", modifiers: "&&", def_value: None }]
constexpr GameObjectContext(GameObjectContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameObjectContext(void* ptr) noexcept : ::Zenject::RunnableContext(ptr) {
}


  constexpr GameObjectContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameObjectContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameObjectContext& operator=(GameObjectContext&& o) noexcept = default;
  constexpr GameObjectContext& operator=(GameObjectContext const& o) noexcept = default;
                


// Fields

 ::System::Action __declspec(property(get=__get_PreInstall, put=__set_PreInstall))  PreInstall;

constexpr void __set_PreInstall(::System::Action value) ;

constexpr ::System::Action __get_PreInstall() const;

 ::System::Action __declspec(property(get=__get_PostInstall, put=__set_PostInstall))  PostInstall;

constexpr void __set_PostInstall(::System::Action value) ;

constexpr ::System::Action __get_PostInstall() const;

 ::System::Action __declspec(property(get=__get_PreResolve, put=__set_PreResolve))  PreResolve;

constexpr void __set_PreResolve(::System::Action value) ;

constexpr ::System::Action __get_PreResolve() const;

 ::System::Action __declspec(property(get=__get_PostResolve, put=__set_PostResolve))  PostResolve;

constexpr void __set_PostResolve(::System::Action value) ;

constexpr ::System::Action __get_PostResolve() const;

 ::Zenject::MonoKernel __declspec(property(get=__get__kernel, put=__set__kernel))  _kernel;

constexpr void __set__kernel(::Zenject::MonoKernel value) ;

constexpr ::Zenject::MonoKernel __get__kernel() const;

 ::Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(::Zenject::DiContainer value) ;

constexpr ::Zenject::DiContainer __get__container() const;


// Properties

 ::Zenject::DiContainer __declspec(property(get=get_Container))  Container;


// Methods

/// @brief Method add_PreInstall addr 0x2d74aec size 0x9c virtual false final false
 void add_PreInstall(::System::Action value) ;

/// @brief Method remove_PreInstall addr 0x2d74b88 size 0x9c virtual false final false
 void remove_PreInstall(::System::Action value) ;

/// @brief Method add_PostInstall addr 0x2d74c24 size 0x9c virtual false final false
 void add_PostInstall(::System::Action value) ;

/// @brief Method remove_PostInstall addr 0x2d74cc0 size 0x9c virtual false final false
 void remove_PostInstall(::System::Action value) ;

/// @brief Method add_PreResolve addr 0x2d74d5c size 0x9c virtual false final false
 void add_PreResolve(::System::Action value) ;

/// @brief Method remove_PreResolve addr 0x2d74df8 size 0x9c virtual false final false
 void remove_PreResolve(::System::Action value) ;

/// @brief Method add_PostResolve addr 0x2d74e94 size 0x9c virtual false final false
 void add_PostResolve(::System::Action value) ;

/// @brief Method remove_PostResolve addr 0x2d74f30 size 0x9c virtual false final false
 void remove_PostResolve(::System::Action value) ;

/// @brief Method get_Container addr 0x2d74fcc size 0x8 virtual true final false
 ::Zenject::DiContainer get_Container() ;

/// @brief Method GetRootGameObjects addr 0x2d74fd4 size 0xa0 virtual true final false
 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject> GetRootGameObjects() ;

/// @brief Method Construct addr 0x2d75074 size 0x44 virtual false final false
 void Construct(::Zenject::DiContainer parentContainer) ;

/// @brief Method RunInternal addr 0x2d75154 size 0x3b4 virtual true final false
 void RunInternal() ;

/// @brief Method GetInjectableMonoBehaviours addr 0x2d75790 size 0x244 virtual true final false
 void GetInjectableMonoBehaviours(::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour> monoBehaviours) ;

/// @brief Method InstallBindings addr 0x2d75524 size 0x1f8 virtual false final false
 void InstallBindings(::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour> injectableMonoBehaviours) ;

// Ctor Parameters []
explicit GameObjectContext() ;

/// @brief Method .ctor addr 0x2d759e4 size 0x5c virtual false final false
 void _ctor() ;

/// @brief Method __zenInjectMethod0 addr 0x2d75a4c size 0xe8 virtual false final false
static void __zenInjectMethod0(::bs_hook::Il2CppWrapperType P_0, ::ArrayW<::bs_hook::Il2CppWrapperType> P_1) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d75b34 size 0x2f8 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::GameObjectContext);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::GameObjectContext, "Zenject", "GameObjectContext");
