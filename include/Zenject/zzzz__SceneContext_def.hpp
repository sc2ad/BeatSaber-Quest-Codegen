#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__RunnableContext_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class SceneDecoratorContext;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace System {
class Action;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
// Forward declare root types
namespace Zenject {
class SceneContext;
}
namespace Zenject {
class ____Zenject__SceneContext____c;
}
namespace Zenject {
class ____Zenject__SceneContext____c__DisplayClass49_0;
}
namespace Zenject {
class ____Zenject__SceneContext____c__DisplayClass51_0;
}
// Type: ::<>c__DisplayClass49_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11065))
// CS Name: Zenject.SceneContext::<>c__DisplayClass49_0
class CORDL_TYPE ____Zenject__SceneContext____c__DisplayClass49_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____Zenject__SceneContext____c__DisplayClass49_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__SceneContext____c__DisplayClass49_0", modifiers: " const&", def_value: None }]
constexpr ____Zenject__SceneContext____c__DisplayClass49_0(____Zenject__SceneContext____c__DisplayClass49_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__SceneContext____c__DisplayClass49_0", modifiers: "&&", def_value: None }]
constexpr ____Zenject__SceneContext____c__DisplayClass49_0(____Zenject__SceneContext____c__DisplayClass49_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__SceneContext____c__DisplayClass49_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__SceneContext____c__DisplayClass49_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__SceneContext____c__DisplayClass49_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__SceneContext____c__DisplayClass49_0& operator=(____Zenject__SceneContext____c__DisplayClass49_0&& o) noexcept = default;
  constexpr ____Zenject__SceneContext____c__DisplayClass49_0& operator=(____Zenject__SceneContext____c__DisplayClass49_0 const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::IEnumerable_1<::StringW> __declspec(property(get=__get_parentContractNames, put=__set_parentContractNames))  parentContractNames;

constexpr void __set_parentContractNames(::System::Collections::Generic::IEnumerable_1<::StringW> value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<::StringW> __get_parentContractNames() const;

 ::System::Func_2<::StringW,bool> __declspec(property(get=__get___9__4, put=__set___9__4))  __9__4;

constexpr void __set___9__4(::System::Func_2<::StringW,bool> value) ;

constexpr ::System::Func_2<::StringW,bool> __get___9__4() const;


// Methods

// Ctor Parameters []
explicit ____Zenject__SceneContext____c__DisplayClass49_0() ;

/// @brief Method .ctor addr 0x2d79480 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetParentContainers>b__2 addr 0x2d7a590 size 0xcc virtual false final false
 bool _GetParentContainers_b__2(::Zenject::SceneContext sceneContext) ;

/// @brief Method <GetParentContainers>b__4 addr 0x2d7a65c size 0x58 virtual false final false
 bool _GetParentContainers_b__4(::StringW x) ;

/// @brief Method __zenCreate addr 0x2d7a6b4 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d7a710 size 0x1c0 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11066))
// CS Name: Zenject.SceneContext::<>c
class CORDL_TYPE ____Zenject__SceneContext____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____Zenject__SceneContext____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__SceneContext____c", modifiers: " const&", def_value: None }]
constexpr ____Zenject__SceneContext____c(____Zenject__SceneContext____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__SceneContext____c", modifiers: "&&", def_value: None }]
constexpr ____Zenject__SceneContext____c(____Zenject__SceneContext____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__SceneContext____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__SceneContext____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__SceneContext____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__SceneContext____c& operator=(____Zenject__SceneContext____c&& o) noexcept = default;
  constexpr ____Zenject__SceneContext____c& operator=(____Zenject__SceneContext____c const& o) noexcept = default;
                


// Fields

static ::Zenject::____Zenject__SceneContext____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::Zenject::____Zenject__SceneContext____c value) ;

static ::Zenject::____Zenject__SceneContext____c __get___9() ;

static ::System::Func_2<::UnityEngine::SceneManagement::Scene,::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject>> __declspec(property(get=__get___9__49_0, put=__set___9__49_0))  __9__49_0;

static void __set___9__49_0(::System::Func_2<::UnityEngine::SceneManagement::Scene,::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject>> value) ;

static ::System::Func_2<::UnityEngine::SceneManagement::Scene,::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject>> __get___9__49_0() ;

static ::System::Func_2<::UnityEngine::GameObject,::System::Collections::Generic::IEnumerable_1<::Zenject::SceneContext>> __declspec(property(get=__get___9__49_1, put=__set___9__49_1))  __9__49_1;

static void __set___9__49_1(::System::Func_2<::UnityEngine::GameObject,::System::Collections::Generic::IEnumerable_1<::Zenject::SceneContext>> value) ;

static ::System::Func_2<::UnityEngine::GameObject,::System::Collections::Generic::IEnumerable_1<::Zenject::SceneContext>> __get___9__49_1() ;

static ::System::Func_2<::Zenject::SceneContext,::Zenject::DiContainer> __declspec(property(get=__get___9__49_3, put=__set___9__49_3))  __9__49_3;

static void __set___9__49_3(::System::Func_2<::Zenject::SceneContext,::Zenject::DiContainer> value) ;

static ::System::Func_2<::Zenject::SceneContext,::Zenject::DiContainer> __get___9__49_3() ;

static ::System::Func_2<::UnityEngine::SceneManagement::Scene,::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject>> __declspec(property(get=__get___9__50_0, put=__set___9__50_0))  __9__50_0;

static void __set___9__50_0(::System::Func_2<::UnityEngine::SceneManagement::Scene,::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject>> value) ;

static ::System::Func_2<::UnityEngine::SceneManagement::Scene,::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject>> __get___9__50_0() ;

static ::System::Func_2<::UnityEngine::GameObject,::System::Collections::Generic::IEnumerable_1<::Zenject::SceneDecoratorContext>> __declspec(property(get=__get___9__50_1, put=__set___9__50_1))  __9__50_1;

static void __set___9__50_1(::System::Func_2<::UnityEngine::GameObject,::System::Collections::Generic::IEnumerable_1<::Zenject::SceneDecoratorContext>> value) ;

static ::System::Func_2<::UnityEngine::GameObject,::System::Collections::Generic::IEnumerable_1<::Zenject::SceneDecoratorContext>> __get___9__50_1() ;


// Methods

// Ctor Parameters []
explicit ____Zenject__SceneContext____c() ;

/// @brief Method .ctor addr 0x2d7a934 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetParentContainers>b__49_0 addr 0x2d7a93c size 0x1c virtual false final false
 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject> _GetParentContainers_b__49_0(::UnityEngine::SceneManagement::Scene scene) ;

/// @brief Method <GetParentContainers>b__49_1 addr 0x2d7a958 size 0x50 virtual false final false
 ::System::Collections::Generic::IEnumerable_1<::Zenject::SceneContext> _GetParentContainers_b__49_1(::UnityEngine::GameObject root) ;

/// @brief Method <GetParentContainers>b__49_3 addr 0x2d7a9a8 size 0x20 virtual false final false
 ::Zenject::DiContainer _GetParentContainers_b__49_3(::Zenject::SceneContext x) ;

/// @brief Method <LookupDecoratorContexts>b__50_0 addr 0x2d7a9c8 size 0x1c virtual false final false
 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject> _LookupDecoratorContexts_b__50_0(::UnityEngine::SceneManagement::Scene scene) ;

/// @brief Method <LookupDecoratorContexts>b__50_1 addr 0x2d7a9e4 size 0x50 virtual false final false
 ::System::Collections::Generic::IEnumerable_1<::Zenject::SceneDecoratorContext> _LookupDecoratorContexts_b__50_1(::UnityEngine::GameObject root) ;

/// @brief Method __zenCreate addr 0x2d7aa34 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d7aa90 size 0x1c0 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass51_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11067))
// CS Name: Zenject.SceneContext::<>c__DisplayClass51_0
class CORDL_TYPE ____Zenject__SceneContext____c__DisplayClass51_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____Zenject__SceneContext____c__DisplayClass51_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__SceneContext____c__DisplayClass51_0", modifiers: " const&", def_value: None }]
constexpr ____Zenject__SceneContext____c__DisplayClass51_0(____Zenject__SceneContext____c__DisplayClass51_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__SceneContext____c__DisplayClass51_0", modifiers: "&&", def_value: None }]
constexpr ____Zenject__SceneContext____c__DisplayClass51_0(____Zenject__SceneContext____c__DisplayClass51_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__SceneContext____c__DisplayClass51_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__SceneContext____c__DisplayClass51_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__SceneContext____c__DisplayClass51_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__SceneContext____c__DisplayClass51_0& operator=(____Zenject__SceneContext____c__DisplayClass51_0&& o) noexcept = default;
  constexpr ____Zenject__SceneContext____c__DisplayClass51_0& operator=(____Zenject__SceneContext____c__DisplayClass51_0 const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer> __declspec(property(get=__get_parents, put=__set_parents))  parents;

constexpr void __set_parents(::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer> value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer> __get_parents() const;


// Methods

// Ctor Parameters []
explicit ____Zenject__SceneContext____c__DisplayClass51_0() ;

/// @brief Method .ctor addr 0x2d79798 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Install>b__0 addr 0x2d7ac50 size 0x78 virtual false final false
 bool _Install_b__0(::Zenject::DiContainer x) ;

/// @brief Method __zenCreate addr 0x2d7acc8 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d7ad24 size 0x1c0 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::SceneContext
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11064))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11068))
// CS Name: Zenject.SceneContext
class CORDL_TYPE SceneContext : public ::Zenject::RunnableContext {
public:
// Declarations
using __c__DisplayClass51_0 = ::Zenject::____Zenject__SceneContext____c__DisplayClass51_0;

using __c = ::Zenject::____Zenject__SceneContext____c;

using __c__DisplayClass49_0 = ::Zenject::____Zenject__SceneContext____c__DisplayClass49_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb8};

virtual ~SceneContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneContext", modifiers: " const&", def_value: None }]
constexpr SceneContext(SceneContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneContext", modifiers: "&&", def_value: None }]
constexpr SceneContext(SceneContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SceneContext(void* ptr) noexcept : ::Zenject::RunnableContext(ptr) {
}


  constexpr SceneContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SceneContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SceneContext& operator=(SceneContext&& o) noexcept = default;
  constexpr SceneContext& operator=(SceneContext const& o) noexcept = default;
                


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

 ::UnityEngine::Events::UnityEvent __declspec(property(get=__get_OnPreInstall, put=__set_OnPreInstall))  OnPreInstall;

constexpr void __set_OnPreInstall(::UnityEngine::Events::UnityEvent value) ;

constexpr ::UnityEngine::Events::UnityEvent __get_OnPreInstall() const;

 ::UnityEngine::Events::UnityEvent __declspec(property(get=__get_OnPostInstall, put=__set_OnPostInstall))  OnPostInstall;

constexpr void __set_OnPostInstall(::UnityEngine::Events::UnityEvent value) ;

constexpr ::UnityEngine::Events::UnityEvent __get_OnPostInstall() const;

 ::UnityEngine::Events::UnityEvent __declspec(property(get=__get_OnPreResolve, put=__set_OnPreResolve))  OnPreResolve;

constexpr void __set_OnPreResolve(::UnityEngine::Events::UnityEvent value) ;

constexpr ::UnityEngine::Events::UnityEvent __get_OnPreResolve() const;

 ::UnityEngine::Events::UnityEvent __declspec(property(get=__get_OnPostResolve, put=__set_OnPostResolve))  OnPostResolve;

constexpr void __set_OnPostResolve(::UnityEngine::Events::UnityEvent value) ;

constexpr ::UnityEngine::Events::UnityEvent __get_OnPostResolve() const;

static ::System::Action_1<::Zenject::DiContainer> __declspec(property(get=__get_ExtraBindingsEarlyInstallMethod, put=__set_ExtraBindingsEarlyInstallMethod))  ExtraBindingsEarlyInstallMethod;

static void __set_ExtraBindingsEarlyInstallMethod(::System::Action_1<::Zenject::DiContainer> value) ;

static ::System::Action_1<::Zenject::DiContainer> __get_ExtraBindingsEarlyInstallMethod() ;

static ::System::Action_1<::Zenject::DiContainer> __declspec(property(get=__get_ExtraBindingsInstallMethod, put=__set_ExtraBindingsInstallMethod))  ExtraBindingsInstallMethod;

static void __set_ExtraBindingsInstallMethod(::System::Action_1<::Zenject::DiContainer> value) ;

static ::System::Action_1<::Zenject::DiContainer> __get_ExtraBindingsInstallMethod() ;

static ::System::Action_1<::Zenject::DiContainer> __declspec(property(get=__get_ExtraBindingsLateInstallMethod, put=__set_ExtraBindingsLateInstallMethod))  ExtraBindingsLateInstallMethod;

static void __set_ExtraBindingsLateInstallMethod(::System::Action_1<::Zenject::DiContainer> value) ;

static ::System::Action_1<::Zenject::DiContainer> __get_ExtraBindingsLateInstallMethod() ;

static ::System::Action_1<::Zenject::DiContainer> __declspec(property(get=__get_ExtraPostInstallMethod, put=__set_ExtraPostInstallMethod))  ExtraPostInstallMethod;

static void __set_ExtraPostInstallMethod(::System::Action_1<::Zenject::DiContainer> value) ;

static ::System::Action_1<::Zenject::DiContainer> __get_ExtraPostInstallMethod() ;

static ::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer> __declspec(property(get=__get_ParentContainers, put=__set_ParentContainers))  ParentContainers;

static void __set_ParentContainers(::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer> value) ;

static ::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer> __get_ParentContainers() ;

 bool __declspec(property(get=__get__parentNewObjectsUnderSceneContext, put=__set__parentNewObjectsUnderSceneContext))  _parentNewObjectsUnderSceneContext;

constexpr void __set__parentNewObjectsUnderSceneContext(bool value) ;

constexpr bool __get__parentNewObjectsUnderSceneContext() const;

 ::System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get__contractNames, put=__set__contractNames))  _contractNames;

constexpr void __set__contractNames(::System::Collections::Generic::List_1<::StringW> value) ;

constexpr ::System::Collections::Generic::List_1<::StringW> __get__contractNames() const;

 ::System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get__parentContractNames, put=__set__parentContractNames))  _parentContractNames;

constexpr void __set__parentContractNames(::System::Collections::Generic::List_1<::StringW> value) ;

constexpr ::System::Collections::Generic::List_1<::StringW> __get__parentContractNames() const;

 ::Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(::Zenject::DiContainer value) ;

constexpr ::Zenject::DiContainer __get__container() const;

 ::System::Collections::Generic::List_1<::Zenject::SceneDecoratorContext> __declspec(property(get=__get__decoratorContexts, put=__set__decoratorContexts))  _decoratorContexts;

constexpr void __set__decoratorContexts(::System::Collections::Generic::List_1<::Zenject::SceneDecoratorContext> value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::SceneDecoratorContext> __get__decoratorContexts() const;

 bool __declspec(property(get=__get__hasInstalled, put=__set__hasInstalled))  _hasInstalled;

constexpr void __set__hasInstalled(bool value) ;

constexpr bool __get__hasInstalled() const;

 bool __declspec(property(get=__get__hasResolved, put=__set__hasResolved))  _hasResolved;

constexpr void __set__hasResolved(bool value) ;

constexpr bool __get__hasResolved() const;


// Properties

 ::Zenject::DiContainer __declspec(property(get=get_Container))  Container;

 bool __declspec(property(get=get_HasResolved))  HasResolved;

 bool __declspec(property(get=get_HasInstalled))  HasInstalled;

 bool __declspec(property(get=get_IsValidating))  IsValidating;

 ::System::Collections::Generic::IEnumerable_1<::StringW> __declspec(property(get=get_ContractNames, put=set_ContractNames))  ContractNames;

 ::System::Collections::Generic::IEnumerable_1<::StringW> __declspec(property(get=get_ParentContractNames, put=set_ParentContractNames))  ParentContractNames;

 bool __declspec(property(get=get_ParentNewObjectsUnderSceneContext, put=set_ParentNewObjectsUnderSceneContext))  ParentNewObjectsUnderSceneContext;


// Methods

/// @brief Method add_PreInstall addr 0x2d780b8 size 0x9c virtual false final false
 void add_PreInstall(::System::Action value) ;

/// @brief Method remove_PreInstall addr 0x2d78154 size 0x9c virtual false final false
 void remove_PreInstall(::System::Action value) ;

/// @brief Method add_PostInstall addr 0x2d781f0 size 0x9c virtual false final false
 void add_PostInstall(::System::Action value) ;

/// @brief Method remove_PostInstall addr 0x2d7828c size 0x9c virtual false final false
 void remove_PostInstall(::System::Action value) ;

/// @brief Method add_PreResolve addr 0x2d78328 size 0x9c virtual false final false
 void add_PreResolve(::System::Action value) ;

/// @brief Method remove_PreResolve addr 0x2d783c4 size 0x9c virtual false final false
 void remove_PreResolve(::System::Action value) ;

/// @brief Method add_PostResolve addr 0x2d78460 size 0x9c virtual false final false
 void add_PostResolve(::System::Action value) ;

/// @brief Method remove_PostResolve addr 0x2d784fc size 0x9c virtual false final false
 void remove_PostResolve(::System::Action value) ;

/// @brief Method get_Container addr 0x2d78598 size 0x8 virtual true final false
 ::Zenject::DiContainer get_Container() ;

/// @brief Method get_HasResolved addr 0x2d785a0 size 0x8 virtual false final false
 bool get_HasResolved() ;

/// @brief Method get_HasInstalled addr 0x2d785a8 size 0x8 virtual false final false
 bool get_HasInstalled() ;

/// @brief Method get_IsValidating addr 0x2d785b0 size 0x2c virtual false final false
 bool get_IsValidating() ;

/// @brief Method get_ContractNames addr 0x2d785dc size 0x8 virtual false final false
 ::System::Collections::Generic::IEnumerable_1<::StringW> get_ContractNames() ;

/// @brief Method set_ContractNames addr 0x2d785e4 size 0x90 virtual false final false
 void set_ContractNames(::System::Collections::Generic::IEnumerable_1<::StringW> value) ;

/// @brief Method get_ParentContractNames addr 0x2d78674 size 0x98 virtual false final false
 ::System::Collections::Generic::IEnumerable_1<::StringW> get_ParentContractNames() ;

/// @brief Method set_ParentContractNames addr 0x2d7870c size 0x5c virtual false final false
 void set_ParentContractNames(::System::Collections::Generic::IEnumerable_1<::StringW> value) ;

/// @brief Method get_ParentNewObjectsUnderSceneContext addr 0x2d78768 size 0x8 virtual false final false
 bool get_ParentNewObjectsUnderSceneContext() ;

/// @brief Method set_ParentNewObjectsUnderSceneContext addr 0x2d78770 size 0xc virtual false final false
 void set_ParentNewObjectsUnderSceneContext(bool value) ;

/// @brief Method Awake addr 0x2d7877c size 0x4 virtual false final false
 void Awake() ;

/// @brief Method Validate addr 0x2d78780 size 0x2c virtual false final false
 void Validate() ;

/// @brief Method RunInternal addr 0x2d78e48 size 0x28 virtual true final false
 void RunInternal() ;

/// @brief Method GetRootGameObjects addr 0x2d78e70 size 0x2c virtual true final false
 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject> GetRootGameObjects() ;

/// @brief Method GetParentContainers addr 0x2d78e9c size 0x5e4 virtual false final false
 ::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer> GetParentContainers() ;

/// @brief Method LookupDecoratorContexts addr 0x2d79488 size 0x310 virtual false final false
 ::System::Collections::Generic::List_1<::Zenject::SceneDecoratorContext> LookupDecoratorContexts() ;

/// @brief Method Install addr 0x2d787ac size 0x600 virtual false final false
 void Install() ;

/// @brief Method Resolve addr 0x2d78dac size 0x9c virtual false final false
 void Resolve() ;

/// @brief Method InstallBindings addr 0x2d79954 size 0x70c virtual false final false
 void InstallBindings(::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour> injectableMonoBehaviours) ;

/// @brief Method GetInjectableMonoBehaviours addr 0x2d7a1b4 size 0x4c virtual true final false
 void GetInjectableMonoBehaviours(::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour> monoBehaviours) ;

/// @brief Method Create addr 0x2d7a200 size 0xb0 virtual false final false
static ::Zenject::SceneContext Create() ;

// Ctor Parameters []
explicit SceneContext() ;

/// @brief Method .ctor addr 0x2d7a2b0 size 0x10c virtual false final false
 void _ctor() ;

/// @brief Method <LookupDecoratorContexts>b__50_2 addr 0x2d7a3bc size 0x5c virtual false final false
 bool _LookupDecoratorContexts_b__50_2(::Zenject::SceneDecoratorContext decoratorContext) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d7a418 size 0x178 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::SceneContext);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SceneContext, "Zenject", "SceneContext");
NEED_NO_BOX(::Zenject::____Zenject__SceneContext____c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::____Zenject__SceneContext____c, "Zenject", "SceneContext/<>c");
NEED_NO_BOX(::Zenject::____Zenject__SceneContext____c__DisplayClass49_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::____Zenject__SceneContext____c__DisplayClass49_0, "Zenject", "SceneContext/<>c__DisplayClass49_0");
NEED_NO_BOX(::Zenject::____Zenject__SceneContext____c__DisplayClass51_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::____Zenject__SceneContext____c__DisplayClass51_0, "Zenject", "SceneContext/<>c__DisplayClass51_0");
