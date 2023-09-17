#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class IPrefabProvider;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Zenject {
struct TypeValuePair;
}
namespace UnityEngine {
class Object;
}
namespace System {
class Action;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace UnityEngine {
class GameObject;
}
namespace Zenject {
class DiContainer;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class IPrefabInstantiator;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class PrefabInstantiator;
}
namespace Zenject {
class ____Zenject__PrefabInstantiator____c__DisplayClass15_0;
}
// Type: ::<>c__DisplayClass15_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11170))
// CS Name: Zenject.PrefabInstantiator::<>c__DisplayClass15_0
class CORDL_TYPE ____Zenject__PrefabInstantiator____c__DisplayClass15_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~____Zenject__PrefabInstantiator____c__DisplayClass15_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__PrefabInstantiator____c__DisplayClass15_0", modifiers: " const&", def_value: None }]
constexpr ____Zenject__PrefabInstantiator____c__DisplayClass15_0(____Zenject__PrefabInstantiator____c__DisplayClass15_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__PrefabInstantiator____c__DisplayClass15_0", modifiers: "&&", def_value: None }]
constexpr ____Zenject__PrefabInstantiator____c__DisplayClass15_0(____Zenject__PrefabInstantiator____c__DisplayClass15_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__PrefabInstantiator____c__DisplayClass15_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__PrefabInstantiator____c__DisplayClass15_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__PrefabInstantiator____c__DisplayClass15_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__PrefabInstantiator____c__DisplayClass15_0& operator=(____Zenject__PrefabInstantiator____c__DisplayClass15_0&& o) noexcept = default;
  constexpr ____Zenject__PrefabInstantiator____c__DisplayClass15_0& operator=(____Zenject__PrefabInstantiator____c__DisplayClass15_0 const& o) noexcept = default;
                


// Fields

 ::Zenject::PrefabInstantiator __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::Zenject::PrefabInstantiator value) ;

constexpr ::Zenject::PrefabInstantiator __get___4__this() const;

 ::System::Collections::Generic::List_1<::Zenject::TypeValuePair> __declspec(property(get=__get_args, put=__set_args))  args;

constexpr void __set_args(::System::Collections::Generic::List_1<::Zenject::TypeValuePair> value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair> __get_args() const;

 ::UnityEngine::GameObject __declspec(property(get=__get_gameObject, put=__set_gameObject))  gameObject;

constexpr void __set_gameObject(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get_gameObject() const;

 ::Zenject::InjectContext __declspec(property(get=__get_context, put=__set_context))  context;

constexpr void __set_context(::Zenject::InjectContext value) ;

constexpr ::Zenject::InjectContext __get_context() const;

 bool __declspec(property(get=__get_shouldMakeActive, put=__set_shouldMakeActive))  shouldMakeActive;

constexpr void __set_shouldMakeActive(bool value) ;

constexpr bool __get_shouldMakeActive() const;


// Methods

// Ctor Parameters []
explicit ____Zenject__PrefabInstantiator____c__DisplayClass15_0() ;

/// @brief Method .ctor addr 0x2d8fac0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Instantiate>b__0 addr 0x2d8fac8 size 0x5a8 virtual false final false
 void _Instantiate_b__0() ;

/// @brief Method __zenCreate addr 0x2d90070 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d900cc size 0x1c0 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::PrefabInstantiator
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11171))
// CS Name: Zenject.PrefabInstantiator
class CORDL_TYPE PrefabInstantiator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass15_0 = ::Zenject::____Zenject__PrefabInstantiator____c__DisplayClass15_0;

/// @brief Convert operator to ::Zenject::IPrefabInstantiator
constexpr operator  ::Zenject::IPrefabInstantiator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~PrefabInstantiator() = default;

// Ctor Parameters [CppParam { name: "", ty: "PrefabInstantiator", modifiers: " const&", def_value: None }]
constexpr PrefabInstantiator(PrefabInstantiator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PrefabInstantiator", modifiers: "&&", def_value: None }]
constexpr PrefabInstantiator(PrefabInstantiator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PrefabInstantiator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PrefabInstantiator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PrefabInstantiator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PrefabInstantiator& operator=(PrefabInstantiator&& o) noexcept = default;
  constexpr PrefabInstantiator& operator=(PrefabInstantiator const& o) noexcept = default;
                


// Fields

 ::Zenject::IPrefabProvider __declspec(property(get=__get__prefabProvider, put=__set__prefabProvider))  _prefabProvider;

constexpr void __set__prefabProvider(::Zenject::IPrefabProvider value) ;

constexpr ::Zenject::IPrefabProvider __get__prefabProvider() const;

 ::Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(::Zenject::DiContainer value) ;

constexpr ::Zenject::DiContainer __get__container() const;

 ::System::Collections::Generic::List_1<::Zenject::TypeValuePair> __declspec(property(get=__get__extraArguments, put=__set__extraArguments))  _extraArguments;

constexpr void __set__extraArguments(::System::Collections::Generic::List_1<::Zenject::TypeValuePair> value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair> __get__extraArguments() const;

 ::Zenject::GameObjectCreationParameters __declspec(property(get=__get__gameObjectBindInfo, put=__set__gameObjectBindInfo))  _gameObjectBindInfo;

constexpr void __set__gameObjectBindInfo(::Zenject::GameObjectCreationParameters value) ;

constexpr ::Zenject::GameObjectCreationParameters __get__gameObjectBindInfo() const;

 ::System::Type __declspec(property(get=__get__argumentTarget, put=__set__argumentTarget))  _argumentTarget;

constexpr void __set__argumentTarget(::System::Type value) ;

constexpr ::System::Type __get__argumentTarget() const;

 ::System::Collections::Generic::List_1<::System::Type> __declspec(property(get=__get__instantiateCallbackTypes, put=__set__instantiateCallbackTypes))  _instantiateCallbackTypes;

constexpr void __set__instantiateCallbackTypes(::System::Collections::Generic::List_1<::System::Type> value) ;

constexpr ::System::Collections::Generic::List_1<::System::Type> __get__instantiateCallbackTypes() const;

 ::System::Action_2<::Zenject::InjectContext,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__instantiateCallback, put=__set__instantiateCallback))  _instantiateCallback;

constexpr void __set__instantiateCallback(::System::Action_2<::Zenject::InjectContext,::bs_hook::Il2CppWrapperType> value) ;

constexpr ::System::Action_2<::Zenject::InjectContext,::bs_hook::Il2CppWrapperType> __get__instantiateCallback() const;


// Properties

 ::Zenject::GameObjectCreationParameters __declspec(property(get=get_GameObjectCreationParameters))  GameObjectCreationParameters;

 ::System::Type __declspec(property(get=get_ArgumentTarget))  ArgumentTarget;

 ::System::Collections::Generic::List_1<::Zenject::TypeValuePair> __declspec(property(get=get_ExtraArguments))  ExtraArguments;


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "gameObjectBindInfo", ty: "::Zenject::GameObjectCreationParameters", modifiers: "", def_value: None }, CppParam { name: "argumentTarget", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "instantiateCallbackTypes", ty: "::System::Collections::Generic::IEnumerable_1<::System::Type>", modifiers: "", def_value: None }, CppParam { name: "extraArguments", ty: "::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>", modifiers: "", def_value: None }, CppParam { name: "prefabProvider", ty: "::Zenject::IPrefabProvider", modifiers: "", def_value: None }, CppParam { name: "instantiateCallback", ty: "::System::Action_2<::Zenject::InjectContext,::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }]
explicit PrefabInstantiator(::Zenject::DiContainer container, ::Zenject::GameObjectCreationParameters gameObjectBindInfo, ::System::Type argumentTarget, ::System::Collections::Generic::IEnumerable_1<::System::Type> instantiateCallbackTypes, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair> extraArguments, ::Zenject::IPrefabProvider prefabProvider, ::System::Action_2<::Zenject::InjectContext,::bs_hook::Il2CppWrapperType> instantiateCallback) ;

/// @brief Method .ctor addr 0x2d8f79c size 0xc4 virtual false final false
 void _ctor(::Zenject::DiContainer container, ::Zenject::GameObjectCreationParameters gameObjectBindInfo, ::System::Type argumentTarget, ::System::Collections::Generic::IEnumerable_1<::System::Type> instantiateCallbackTypes, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair> extraArguments, ::Zenject::IPrefabProvider prefabProvider, ::System::Action_2<::Zenject::InjectContext,::bs_hook::Il2CppWrapperType> instantiateCallback) ;

/// @brief Method get_GameObjectCreationParameters addr 0x2d8f860 size 0x8 virtual true final true
 ::Zenject::GameObjectCreationParameters get_GameObjectCreationParameters() ;

/// @brief Method get_ArgumentTarget addr 0x2d8f868 size 0x8 virtual true final true
 ::System::Type get_ArgumentTarget() ;

/// @brief Method get_ExtraArguments addr 0x2d8f870 size 0x8 virtual true final true
 ::System::Collections::Generic::List_1<::Zenject::TypeValuePair> get_ExtraArguments() ;

/// @brief Method GetPrefab addr 0x2d8f878 size 0xa0 virtual true final true
 ::UnityEngine::Object GetPrefab() ;

/// @brief Method Instantiate addr 0x2d8f918 size 0x1a8 virtual true final true
 ::UnityEngine::GameObject Instantiate(::Zenject::InjectContext context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair> args, ByRef<::System::Action> injectAction) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::PrefabInstantiator);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PrefabInstantiator, "Zenject", "PrefabInstantiator");
NEED_NO_BOX(::Zenject::____Zenject__PrefabInstantiator____c__DisplayClass15_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::____Zenject__PrefabInstantiator____c__DisplayClass15_0, "Zenject", "PrefabInstantiator/<>c__DisplayClass15_0");
