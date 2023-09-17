#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System {
class Type;
}
namespace UnityEngine {
class GameObject;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class InjectContext;
}
namespace System {
class Action;
}
namespace Zenject {
class DiContainer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class AddToGameObjectComponentProviderBase;
}
namespace Zenject {
class ____Zenject__AddToGameObjectComponentProviderBase____c__DisplayClass17_0;
}
// Type: ::<>c__DisplayClass17_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11126))
// CS Name: Zenject.AddToGameObjectComponentProviderBase::<>c__DisplayClass17_0
class CORDL_TYPE ____Zenject__AddToGameObjectComponentProviderBase____c__DisplayClass17_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____Zenject__AddToGameObjectComponentProviderBase____c__DisplayClass17_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__AddToGameObjectComponentProviderBase____c__DisplayClass17_0", modifiers: " const&", def_value: None }]
constexpr ____Zenject__AddToGameObjectComponentProviderBase____c__DisplayClass17_0(____Zenject__AddToGameObjectComponentProviderBase____c__DisplayClass17_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__AddToGameObjectComponentProviderBase____c__DisplayClass17_0", modifiers: "&&", def_value: None }]
constexpr ____Zenject__AddToGameObjectComponentProviderBase____c__DisplayClass17_0(____Zenject__AddToGameObjectComponentProviderBase____c__DisplayClass17_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__AddToGameObjectComponentProviderBase____c__DisplayClass17_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__AddToGameObjectComponentProviderBase____c__DisplayClass17_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__AddToGameObjectComponentProviderBase____c__DisplayClass17_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__AddToGameObjectComponentProviderBase____c__DisplayClass17_0& operator=(____Zenject__AddToGameObjectComponentProviderBase____c__DisplayClass17_0&& o) noexcept = default;
  constexpr ____Zenject__AddToGameObjectComponentProviderBase____c__DisplayClass17_0& operator=(____Zenject__AddToGameObjectComponentProviderBase____c__DisplayClass17_0 const& o) noexcept = default;
                


// Fields

 ::Zenject::AddToGameObjectComponentProviderBase __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::Zenject::AddToGameObjectComponentProviderBase value) ;

constexpr ::Zenject::AddToGameObjectComponentProviderBase __get___4__this() const;

 ::System::Collections::Generic::List_1<::Zenject::TypeValuePair> __declspec(property(get=__get_args, put=__set_args))  args;

constexpr void __set_args(::System::Collections::Generic::List_1<::Zenject::TypeValuePair> value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair> __get_args() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_instance, put=__set_instance))  instance;

constexpr void __set_instance(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_instance() const;

 ::Zenject::InjectContext __declspec(property(get=__get_context, put=__set_context))  context;

constexpr void __set_context(::Zenject::InjectContext value) ;

constexpr ::Zenject::InjectContext __get_context() const;

 bool __declspec(property(get=__get_wasActive, put=__set_wasActive))  wasActive;

constexpr void __set_wasActive(bool value) ;

constexpr bool __get_wasActive() const;

 ::UnityEngine::GameObject __declspec(property(get=__get_gameObj, put=__set_gameObj))  gameObj;

constexpr void __set_gameObj(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get_gameObj() const;


// Methods

// Ctor Parameters []
explicit ____Zenject__AddToGameObjectComponentProviderBase____c__DisplayClass17_0() ;

/// @brief Method .ctor addr 0x2d8d218 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetAllInstancesWithInjectSplit>b__0 addr 0x2d8d220 size 0x244 virtual false final false
 void _GetAllInstancesWithInjectSplit_b__0() ;

/// @brief Method __zenCreate addr 0x2d8d464 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d8d4c0 size 0x1c0 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::AddToGameObjectComponentProviderBase
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11127))
// CS Name: Zenject.AddToGameObjectComponentProviderBase
class CORDL_TYPE AddToGameObjectComponentProviderBase : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass17_0 = ::Zenject::____Zenject__AddToGameObjectComponentProviderBase____c__DisplayClass17_0;

/// @brief Convert operator to ::Zenject::IProvider
constexpr operator  ::Zenject::IProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~AddToGameObjectComponentProviderBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "AddToGameObjectComponentProviderBase", modifiers: " const&", def_value: None }]
constexpr AddToGameObjectComponentProviderBase(AddToGameObjectComponentProviderBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AddToGameObjectComponentProviderBase", modifiers: "&&", def_value: None }]
constexpr AddToGameObjectComponentProviderBase(AddToGameObjectComponentProviderBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AddToGameObjectComponentProviderBase(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AddToGameObjectComponentProviderBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AddToGameObjectComponentProviderBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AddToGameObjectComponentProviderBase& operator=(AddToGameObjectComponentProviderBase&& o) noexcept = default;
  constexpr AddToGameObjectComponentProviderBase& operator=(AddToGameObjectComponentProviderBase const& o) noexcept = default;
                


// Fields

 ::System::Type __declspec(property(get=__get__componentType, put=__set__componentType))  _componentType;

constexpr void __set__componentType(::System::Type value) ;

constexpr ::System::Type __get__componentType() const;

 ::Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(::Zenject::DiContainer value) ;

constexpr ::Zenject::DiContainer __get__container() const;

 ::System::Collections::Generic::List_1<::Zenject::TypeValuePair> __declspec(property(get=__get__extraArguments, put=__set__extraArguments))  _extraArguments;

constexpr void __set__extraArguments(::System::Collections::Generic::List_1<::Zenject::TypeValuePair> value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair> __get__extraArguments() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__concreteIdentifier, put=__set__concreteIdentifier))  _concreteIdentifier;

constexpr void __set__concreteIdentifier(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__concreteIdentifier() const;

 ::System::Action_2<::Zenject::InjectContext,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__instantiateCallback, put=__set__instantiateCallback))  _instantiateCallback;

constexpr void __set__instantiateCallback(::System::Action_2<::Zenject::InjectContext,::bs_hook::Il2CppWrapperType> value) ;

constexpr ::System::Action_2<::Zenject::InjectContext,::bs_hook::Il2CppWrapperType> __get__instantiateCallback() const;


// Properties

 bool __declspec(property(get=get_IsCached))  IsCached;

 bool __declspec(property(get=get_TypeVariesBasedOnMemberType))  TypeVariesBasedOnMemberType;

 ::Zenject::DiContainer __declspec(property(get=get_Container))  Container;

 ::System::Type __declspec(property(get=get_ComponentType))  ComponentType;

 bool __declspec(property(get=get_ShouldToggleActive))  ShouldToggleActive;


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "componentType", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "extraArguments", ty: "::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>", modifiers: "", def_value: None }, CppParam { name: "concreteIdentifier", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "instantiateCallback", ty: "::System::Action_2<::Zenject::InjectContext,::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }]
explicit AddToGameObjectComponentProviderBase(::Zenject::DiContainer container, ::System::Type componentType, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair> extraArguments, ::bs_hook::Il2CppWrapperType concreteIdentifier, ::System::Action_2<::Zenject::InjectContext,::bs_hook::Il2CppWrapperType> instantiateCallback) ;

/// @brief Method .ctor addr 0x2d8cd7c size 0xe0 virtual false final false
 void _ctor(::Zenject::DiContainer container, ::System::Type componentType, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair> extraArguments, ::bs_hook::Il2CppWrapperType concreteIdentifier, ::System::Action_2<::Zenject::InjectContext,::bs_hook::Il2CppWrapperType> instantiateCallback) ;

/// @brief Method get_IsCached addr 0x2d8cf24 size 0x8 virtual true final true
 bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x2d8cf2c size 0x8 virtual true final true
 bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method get_Container addr 0x2d8cf34 size 0x8 virtual false final false
 ::Zenject::DiContainer get_Container() ;

/// @brief Method get_ComponentType addr 0x2d8cf3c size 0x8 virtual false final false
 ::System::Type get_ComponentType() ;

/// @brief Method get_ShouldToggleActive addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_ShouldToggleActive() ;

/// @brief Method GetInstanceType addr 0x2d8cf44 size 0x8 virtual true final true
 ::System::Type GetInstanceType(::Zenject::InjectContext context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x2d8cf4c size 0x2cc virtual true final true
 void GetAllInstancesWithInjectSplit(::Zenject::InjectContext context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair> args, ByRef<::System::Action> injectAction, ::System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

/// @brief Method GetGameObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::GameObject GetGameObject(::Zenject::InjectContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::AddToGameObjectComponentProviderBase);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::AddToGameObjectComponentProviderBase, "Zenject", "AddToGameObjectComponentProviderBase");
NEED_NO_BOX(::Zenject::____Zenject__AddToGameObjectComponentProviderBase____c__DisplayClass17_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::____Zenject__AddToGameObjectComponentProviderBase____c__DisplayClass17_0, "Zenject", "AddToGameObjectComponentProviderBase/<>c__DisplayClass17_0");
