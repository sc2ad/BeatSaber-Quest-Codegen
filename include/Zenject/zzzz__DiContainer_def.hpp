#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Zenject {
class IProvider;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TContract>
class FactoryToChoiceIdBinder_7;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
class Object;
}
namespace Zenject {
template<typename TParam1,typename TContract>
class FactoryToChoiceIdBinder_2;
}
namespace System::Collections {
class IList;
}
namespace Zenject {
template<typename TContract>
class ConcreteBinderGeneric_1;
}
namespace Zenject {
class ConcreteBinderNonGeneric;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class IValidatable;
}
namespace Zenject {
class BindingCondition;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
struct Quaternion;
}
namespace Zenject {
class ZenjectSettings;
}
namespace Zenject::Internal {
class SingletonMarkRegistry;
}
namespace Zenject {
struct BindingId;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TContract>
class FactoryToChoiceIdBinder_3;
}
namespace Zenject {
class ConventionSelectTypesBinder;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class IdScopeConcreteIdArgConditionCopyNonLazyBinder;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class Transform;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TContract>
class FactoryToChoiceIdBinder_6;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Type;
}
namespace Zenject {
class IInstantiator;
}
namespace Zenject {
class ConcreteIdBinderNonGeneric;
}
namespace Zenject {
template<typename TContract>
class ConcreteIdBinderGeneric_1;
}
namespace UnityEngine {
class GameObject;
}
namespace Zenject {
template<typename TContract>
class MemoryPoolIdInitialSizeMaxSizeBinder_1;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TParam7,typename TParam8,typename TParam9,typename TParam10,typename TContract>
class FactoryToChoiceIdBinder_11;
}
namespace System {
template<typename T>
class Action_1;
}
namespace Zenject {
class FromBinderNonGeneric;
}
namespace Zenject {
class CopyNonLazyBinder;
}
namespace Zenject {
class LazyInstanceInjector;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace Zenject {
class InjectContext;
}
namespace UnityEngine {
struct Vector3;
}
namespace Zenject::Internal {
class IDecoratorProvider;
}
namespace Zenject {
template<typename TContract>
class FactoryToChoiceIdBinder_1;
}
namespace Zenject {
struct InjectSources;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TContract>
class FactoryToChoiceIdBinder_4;
}
namespace Zenject::Internal {
class LookupId;
}
namespace Zenject {
template<typename TContract>
class DecoratorToChoiceFromBinder_1;
}
namespace Zenject {
class BindStatement;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TContract>
class FactoryToChoiceIdBinder_5;
}
namespace Zenject {
class InjectableInfo;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class Zenject__DiContainer____c__DisplayClass203_0_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class Zenject__DiContainer__ProviderInfo;
}
namespace Zenject {
class Zenject__DiContainer___GetDependencyContracts_d__96;
}
namespace Zenject {
class Zenject__DiContainer____c;
}
namespace Zenject {
class Zenject__DiContainer____c__DisplayClass178_0;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class Zenject__DiContainer____c__DisplayClass203_0_1<TContract>;
}
namespace Zenject {
class Zenject__DiContainer____c__DisplayClass86_0;
}
// Type: ::ProviderInfo
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11102))
// CS Name: Zenject.DiContainer::ProviderInfo
class CORDL_TYPE Zenject__DiContainer__ProviderInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Zenject__DiContainer__ProviderInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__DiContainer__ProviderInfo", modifiers: " const&", def_value: None }]
constexpr Zenject__DiContainer__ProviderInfo(Zenject__DiContainer__ProviderInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__DiContainer__ProviderInfo", modifiers: "&&", def_value: None }]
constexpr Zenject__DiContainer__ProviderInfo(Zenject__DiContainer__ProviderInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__DiContainer__ProviderInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__DiContainer__ProviderInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__DiContainer__ProviderInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__DiContainer__ProviderInfo& operator=(Zenject__DiContainer__ProviderInfo&& o) noexcept = default;
  constexpr Zenject__DiContainer__ProviderInfo& operator=(Zenject__DiContainer__ProviderInfo const& o) noexcept = default;
                


// Fields

 Zenject::DiContainer __declspec(property(get=__get_Container, put=__set_Container))  Container;

constexpr void __set_Container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get_Container() const;

 bool __declspec(property(get=__get_NonLazy, put=__set_NonLazy))  NonLazy;

constexpr void __set_NonLazy(bool value) ;

constexpr bool __get_NonLazy() const;

 Zenject::IProvider __declspec(property(get=__get_Provider, put=__set_Provider))  Provider;

constexpr void __set_Provider(Zenject::IProvider value) ;

constexpr Zenject::IProvider __get_Provider() const;

 Zenject::BindingCondition __declspec(property(get=__get_Condition, put=__set_Condition))  Condition;

constexpr void __set_Condition(Zenject::BindingCondition value) ;

constexpr Zenject::BindingCondition __get_Condition() const;


// Methods

// Ctor Parameters [CppParam { name: "provider", ty: "Zenject::IProvider", modifiers: "", def_value: None }, CppParam { name: "condition", ty: "Zenject::BindingCondition", modifiers: "", def_value: None }, CppParam { name: "nonLazy", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }]
explicit Zenject__DiContainer__ProviderInfo(Zenject::IProvider provider, Zenject::BindingCondition condition, bool nonLazy, Zenject::DiContainer container) ;

/// @brief Method .ctor addr 0x2d89884 size 0x44 virtual false final false
 void _ctor(Zenject::IProvider provider, Zenject::BindingCondition condition, bool nonLazy, Zenject::DiContainer container) ;

/// @brief Method __zenCreate addr 0x2d898c8 size 0x1b0 virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d89a78 size 0x424 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11103))
// CS Name: Zenject.DiContainer::<>c
class CORDL_TYPE Zenject__DiContainer____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Zenject__DiContainer____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__DiContainer____c", modifiers: " const&", def_value: None }]
constexpr Zenject__DiContainer____c(Zenject__DiContainer____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__DiContainer____c", modifiers: "&&", def_value: None }]
constexpr Zenject__DiContainer____c(Zenject__DiContainer____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__DiContainer____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__DiContainer____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__DiContainer____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__DiContainer____c& operator=(Zenject__DiContainer____c&& o) noexcept = default;
  constexpr Zenject__DiContainer____c& operator=(Zenject__DiContainer____c const& o) noexcept = default;
                


// Fields

static Zenject::Zenject__DiContainer____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Zenject::Zenject__DiContainer____c value) ;

static Zenject::Zenject__DiContainer____c __get___9() ;

static System::Func_2<System::Collections::Generic::List_1<Zenject::Zenject__DiContainer__ProviderInfo>,System::Collections::Generic::IEnumerable_1<Zenject::Zenject__DiContainer__ProviderInfo>> __declspec(property(get=__get___9__33_0, put=__set___9__33_0))  __9__33_0;

static void __set___9__33_0(System::Func_2<System::Collections::Generic::List_1<Zenject::Zenject__DiContainer__ProviderInfo>,System::Collections::Generic::IEnumerable_1<Zenject::Zenject__DiContainer__ProviderInfo>> value) ;

static System::Func_2<System::Collections::Generic::List_1<Zenject::Zenject__DiContainer__ProviderInfo>,System::Collections::Generic::IEnumerable_1<Zenject::Zenject__DiContainer__ProviderInfo>> __get___9__33_0() ;

static System::Func_2<Zenject::Zenject__DiContainer__ProviderInfo,Zenject::IProvider> __declspec(property(get=__get___9__33_1, put=__set___9__33_1))  __9__33_1;

static void __set___9__33_1(System::Func_2<Zenject::Zenject__DiContainer__ProviderInfo,Zenject::IProvider> value) ;

static System::Func_2<Zenject::Zenject__DiContainer__ProviderInfo,Zenject::IProvider> __get___9__33_1() ;

static System::Func_2<System::Type,bool> __declspec(property(get=__get___9__86_1, put=__set___9__86_1))  __9__86_1;

static void __set___9__86_1(System::Func_2<System::Type,bool> value) ;

static System::Func_2<System::Type,bool> __get___9__86_1() ;

static System::Func_2<Zenject::TypeValuePair,::StringW> __declspec(property(get=__get___9__97_0, put=__set___9__97_0))  __9__97_0;

static void __set___9__97_0(System::Func_2<Zenject::TypeValuePair,::StringW> value) ;

static System::Func_2<Zenject::TypeValuePair,::StringW> __get___9__97_0() ;

static System::Func_2<Zenject::TypeValuePair,::StringW> __declspec(property(get=__get___9__102_0, put=__set___9__102_0))  __9__102_0;

static void __set___9__102_0(System::Func_2<Zenject::TypeValuePair,::StringW> value) ;

static System::Func_2<Zenject::TypeValuePair,::StringW> __get___9__102_0() ;

static System::Func_2<System::Type,bool> __declspec(property(get=__get___9__197_0, put=__set___9__197_0))  __9__197_0;

static void __set___9__197_0(System::Func_2<System::Type,bool> value) ;

static System::Func_2<System::Type,bool> __get___9__197_0() ;

static System::Func_2<System::Type,bool> __declspec(property(get=__get___9__198_0, put=__set___9__198_0))  __9__198_0;

static void __set___9__198_0(System::Func_2<System::Type,bool> value) ;

static System::Func_2<System::Type,bool> __get___9__198_0() ;


// Methods

// Ctor Parameters []
explicit Zenject__DiContainer____c() ;

/// @brief Method .ctor addr 0x2d89f00 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <get_AllProviders>b__33_0 addr 0x2d89f08 size 0x8 virtual false final false
 System::Collections::Generic::IEnumerable_1<Zenject::Zenject__DiContainer__ProviderInfo> _get_AllProviders_b__33_0(System::Collections::Generic::List_1<Zenject::Zenject__DiContainer__ProviderInfo> x) ;

/// @brief Method <get_AllProviders>b__33_1 addr 0x2d89f10 size 0x18 virtual false final false
 Zenject::IProvider _get_AllProviders_b__33_1(Zenject::Zenject__DiContainer__ProviderInfo x) ;

/// @brief Method <ResolveTypeAll>b__86_1 addr 0x2d89f28 size 0x5c virtual false final false
 bool _ResolveTypeAll_b__86_1(System::Type x) ;

/// @brief Method <InstantiateInternal>b__97_0 addr 0x2d89f84 size 0x58 virtual false final false
 ::StringW _InstantiateInternal_b__97_0(Zenject::TypeValuePair x) ;

/// @brief Method <InjectExplicitInternal>b__102_0 addr 0x2d89fdc size 0x58 virtual false final false
 ::StringW _InjectExplicitInternal_b__102_0(Zenject::TypeValuePair x) ;

/// @brief Method <BindInternal>b__197_0 addr 0x2d8a034 size 0x78 virtual false final false
 bool _BindInternal_b__197_0(System::Type x) ;

/// @brief Method <Bind>b__198_0 addr 0x2d8a0ac size 0x78 virtual false final false
 bool _Bind_b__198_0(System::Type x) ;

/// @brief Method __zenCreate addr 0x2d8a124 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d8a180 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass86_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11104))
// CS Name: Zenject.DiContainer::<>c__DisplayClass86_0
class CORDL_TYPE Zenject__DiContainer____c__DisplayClass86_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Zenject__DiContainer____c__DisplayClass86_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__DiContainer____c__DisplayClass86_0", modifiers: " const&", def_value: None }]
constexpr Zenject__DiContainer____c__DisplayClass86_0(Zenject__DiContainer____c__DisplayClass86_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__DiContainer____c__DisplayClass86_0", modifiers: "&&", def_value: None }]
constexpr Zenject__DiContainer____c__DisplayClass86_0(Zenject__DiContainer____c__DisplayClass86_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__DiContainer____c__DisplayClass86_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__DiContainer____c__DisplayClass86_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__DiContainer____c__DisplayClass86_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__DiContainer____c__DisplayClass86_0& operator=(Zenject__DiContainer____c__DisplayClass86_0&& o) noexcept = default;
  constexpr Zenject__DiContainer____c__DisplayClass86_0& operator=(Zenject__DiContainer____c__DisplayClass86_0 const& o) noexcept = default;
                


// Fields

 Zenject::InjectContext __declspec(property(get=__get_context, put=__set_context))  context;

constexpr void __set_context(Zenject::InjectContext value) ;

constexpr Zenject::InjectContext __get_context() const;


// Methods

// Ctor Parameters []
explicit Zenject__DiContainer____c__DisplayClass86_0() ;

/// @brief Method .ctor addr 0x2d8a340 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ResolveTypeAll>b__0 addr 0x2d8a348 size 0xb4 virtual false final false
 System::Type _ResolveTypeAll_b__0(Zenject::Zenject__DiContainer__ProviderInfo x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<GetDependencyContracts>d__96
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11105))
// CS Name: Zenject.DiContainer::<GetDependencyContracts>d__96
class CORDL_TYPE Zenject__DiContainer___GetDependencyContracts_d__96 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::Type>
constexpr operator  System::Collections::Generic::IEnumerable_1<System::Type>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<System::Type>
constexpr operator  System::Collections::Generic::IEnumerator_1<System::Type>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~Zenject__DiContainer___GetDependencyContracts_d__96() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__DiContainer___GetDependencyContracts_d__96", modifiers: " const&", def_value: None }]
constexpr Zenject__DiContainer___GetDependencyContracts_d__96(Zenject__DiContainer___GetDependencyContracts_d__96 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__DiContainer___GetDependencyContracts_d__96", modifiers: "&&", def_value: None }]
constexpr Zenject__DiContainer___GetDependencyContracts_d__96(Zenject__DiContainer___GetDependencyContracts_d__96&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__DiContainer___GetDependencyContracts_d__96(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__DiContainer___GetDependencyContracts_d__96& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__DiContainer___GetDependencyContracts_d__96& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__DiContainer___GetDependencyContracts_d__96& operator=(Zenject__DiContainer___GetDependencyContracts_d__96&& o) noexcept = default;
  constexpr Zenject__DiContainer___GetDependencyContracts_d__96& operator=(Zenject__DiContainer___GetDependencyContracts_d__96 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Type __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(System::Type value) ;

constexpr System::Type __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 Zenject::DiContainer __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get___4__this() const;

 System::Type __declspec(property(get=__get_contract, put=__set_contract))  contract;

constexpr void __set_contract(System::Type value) ;

constexpr System::Type __get_contract() const;

 System::Type __declspec(property(get=__get___3__contract, put=__set___3__contract))  __3__contract;

constexpr void __set___3__contract(System::Type value) ;

constexpr System::Type __get___3__contract() const;

 System::Collections::Generic::IEnumerator_1<Zenject::InjectableInfo> __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(System::Collections::Generic::IEnumerator_1<Zenject::InjectableInfo> value) ;

constexpr System::Collections::Generic::IEnumerator_1<Zenject::InjectableInfo> __get___7__wrap1() const;


// Properties

 System::Type __declspec(property(get=System_Collections_Generic_IEnumerator_System_Type__get_Current))  System_Collections_Generic_IEnumerator_System_Type__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit Zenject__DiContainer___GetDependencyContracts_d__96(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2d8a3fc size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2d8a430 size 0x1c virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2d8a44c size 0x2fc virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x2d8a91c size 0xb0 virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Type>.get_Current addr 0x2d8a9cc size 0x8 virtual true final true
 System::Type System_Collections_Generic_IEnumerator_System_Type__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2d8a9d4 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2d8aa14 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator addr 0x2d8aa1c size 0xac virtual true final true
 System::Collections::Generic::IEnumerator_1<System::Type> System_Collections_Generic_IEnumerable_System_Type__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2d8aac8 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass178_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11106))
// CS Name: Zenject.DiContainer::<>c__DisplayClass178_0
class CORDL_TYPE Zenject__DiContainer____c__DisplayClass178_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Zenject__DiContainer____c__DisplayClass178_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__DiContainer____c__DisplayClass178_0", modifiers: " const&", def_value: None }]
constexpr Zenject__DiContainer____c__DisplayClass178_0(Zenject__DiContainer____c__DisplayClass178_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__DiContainer____c__DisplayClass178_0", modifiers: "&&", def_value: None }]
constexpr Zenject__DiContainer____c__DisplayClass178_0(Zenject__DiContainer____c__DisplayClass178_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__DiContainer____c__DisplayClass178_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__DiContainer____c__DisplayClass178_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__DiContainer____c__DisplayClass178_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__DiContainer____c__DisplayClass178_0& operator=(Zenject__DiContainer____c__DisplayClass178_0&& o) noexcept = default;
  constexpr Zenject__DiContainer____c__DisplayClass178_0& operator=(Zenject__DiContainer____c__DisplayClass178_0 const& o) noexcept = default;
                


// Fields

 Zenject::DiContainer __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get___4__this() const;

 System::Type __declspec(property(get=__get_contractType, put=__set_contractType))  contractType;

constexpr void __set_contractType(System::Type value) ;

constexpr System::Type __get_contractType() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_identifier, put=__set_identifier))  identifier;

constexpr void __set_identifier(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_identifier() const;

 System::Type __declspec(property(get=__get_concreteType, put=__set_concreteType))  concreteType;

constexpr void __set_concreteType(System::Type value) ;

constexpr System::Type __get_concreteType() const;


// Methods

// Ctor Parameters []
explicit Zenject__DiContainer____c__DisplayClass178_0() ;

/// @brief Method .ctor addr 0x2d8aacc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <UnbindId>b__0 addr 0x2d8aad4 size 0x140 virtual false final false
 bool _UnbindId_b__0(Zenject::Zenject__DiContainer__ProviderInfo x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass203_0`1
// Type: Zenject::DiContainer
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11108))
// CS Name: Zenject.DiContainer
class CORDL_TYPE DiContainer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename TContract>
using __c__DisplayClass203_0_1 = Zenject::Zenject__DiContainer____c__DisplayClass203_0_1<TContract>;

using __c__DisplayClass178_0 = Zenject::Zenject__DiContainer____c__DisplayClass178_0;

using _GetDependencyContracts_d__96 = Zenject::Zenject__DiContainer___GetDependencyContracts_d__96;

using __c__DisplayClass86_0 = Zenject::Zenject__DiContainer____c__DisplayClass86_0;

using __c = Zenject::Zenject__DiContainer____c;

using ProviderInfo = Zenject::Zenject__DiContainer__ProviderInfo;

/// @brief Convert operator to Zenject::IInstantiator
constexpr operator  Zenject::IInstantiator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~DiContainer() = default;

// Ctor Parameters [CppParam { name: "", ty: "DiContainer", modifiers: " const&", def_value: None }]
constexpr DiContainer(DiContainer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DiContainer", modifiers: "&&", def_value: None }]
constexpr DiContainer(DiContainer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DiContainer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DiContainer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DiContainer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DiContainer& operator=(DiContainer&& o) noexcept = default;
  constexpr DiContainer& operator=(DiContainer const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Dictionary_2<System::Type,Zenject::Internal::IDecoratorProvider> __declspec(property(get=__get__decorators, put=__set__decorators))  _decorators;

constexpr void __set__decorators(System::Collections::Generic::Dictionary_2<System::Type,Zenject::Internal::IDecoratorProvider> value) ;

constexpr System::Collections::Generic::Dictionary_2<System::Type,Zenject::Internal::IDecoratorProvider> __get__decorators() const;

 System::Collections::Generic::Dictionary_2<Zenject::BindingId,System::Collections::Generic::List_1<Zenject::Zenject__DiContainer__ProviderInfo>> __declspec(property(get=__get__providers, put=__set__providers))  _providers;

constexpr void __set__providers(System::Collections::Generic::Dictionary_2<Zenject::BindingId,System::Collections::Generic::List_1<Zenject::Zenject__DiContainer__ProviderInfo>> value) ;

constexpr System::Collections::Generic::Dictionary_2<Zenject::BindingId,System::Collections::Generic::List_1<Zenject::Zenject__DiContainer__ProviderInfo>> __get__providers() const;

 ::ArrayW<::ArrayW<Zenject::DiContainer>> __declspec(property(get=__get__containerLookups, put=__set__containerLookups))  _containerLookups;

constexpr void __set__containerLookups(::ArrayW<::ArrayW<Zenject::DiContainer>> value) ;

constexpr ::ArrayW<::ArrayW<Zenject::DiContainer>> __get__containerLookups() const;

 System::Collections::Generic::HashSet_1<Zenject::Internal::LookupId> __declspec(property(get=__get__resolvesInProgress, put=__set__resolvesInProgress))  _resolvesInProgress;

constexpr void __set__resolvesInProgress(System::Collections::Generic::HashSet_1<Zenject::Internal::LookupId> value) ;

constexpr System::Collections::Generic::HashSet_1<Zenject::Internal::LookupId> __get__resolvesInProgress() const;

 System::Collections::Generic::HashSet_1<Zenject::Internal::LookupId> __declspec(property(get=__get__resolvesTwiceInProgress, put=__set__resolvesTwiceInProgress))  _resolvesTwiceInProgress;

constexpr void __set__resolvesTwiceInProgress(System::Collections::Generic::HashSet_1<Zenject::Internal::LookupId> value) ;

constexpr System::Collections::Generic::HashSet_1<Zenject::Internal::LookupId> __get__resolvesTwiceInProgress() const;

 Zenject::LazyInstanceInjector __declspec(property(get=__get__lazyInjector, put=__set__lazyInjector))  _lazyInjector;

constexpr void __set__lazyInjector(Zenject::LazyInstanceInjector value) ;

constexpr Zenject::LazyInstanceInjector __get__lazyInjector() const;

 Zenject::Internal::SingletonMarkRegistry __declspec(property(get=__get__singletonMarkRegistry, put=__set__singletonMarkRegistry))  _singletonMarkRegistry;

constexpr void __set__singletonMarkRegistry(Zenject::Internal::SingletonMarkRegistry value) ;

constexpr Zenject::Internal::SingletonMarkRegistry __get__singletonMarkRegistry() const;

 System::Collections::Generic::Queue_1<Zenject::BindStatement> __declspec(property(get=__get__currentBindings, put=__set__currentBindings))  _currentBindings;

constexpr void __set__currentBindings(System::Collections::Generic::Queue_1<Zenject::BindStatement> value) ;

constexpr System::Collections::Generic::Queue_1<Zenject::BindStatement> __get__currentBindings() const;

 System::Collections::Generic::List_1<Zenject::BindStatement> __declspec(property(get=__get__childBindings, put=__set__childBindings))  _childBindings;

constexpr void __set__childBindings(System::Collections::Generic::List_1<Zenject::BindStatement> value) ;

constexpr System::Collections::Generic::List_1<Zenject::BindStatement> __get__childBindings() const;

 System::Collections::Generic::HashSet_1<System::Type> __declspec(property(get=__get__validatedTypes, put=__set__validatedTypes))  _validatedTypes;

constexpr void __set__validatedTypes(System::Collections::Generic::HashSet_1<System::Type> value) ;

constexpr System::Collections::Generic::HashSet_1<System::Type> __get__validatedTypes() const;

 System::Collections::Generic::List_1<Zenject::IValidatable> __declspec(property(get=__get__validationQueue, put=__set__validationQueue))  _validationQueue;

constexpr void __set__validationQueue(System::Collections::Generic::List_1<Zenject::IValidatable> value) ;

constexpr System::Collections::Generic::List_1<Zenject::IValidatable> __get__validationQueue() const;

 UnityEngine::Transform __declspec(property(get=__get__contextTransform, put=__set__contextTransform))  _contextTransform;

constexpr void __set__contextTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__contextTransform() const;

 bool __declspec(property(get=__get__hasLookedUpContextTransform, put=__set__hasLookedUpContextTransform))  _hasLookedUpContextTransform;

constexpr void __set__hasLookedUpContextTransform(bool value) ;

constexpr bool __get__hasLookedUpContextTransform() const;

 UnityEngine::Transform __declspec(property(get=__get__inheritedDefaultParent, put=__set__inheritedDefaultParent))  _inheritedDefaultParent;

constexpr void __set__inheritedDefaultParent(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__inheritedDefaultParent() const;

 UnityEngine::Transform __declspec(property(get=__get__explicitDefaultParent, put=__set__explicitDefaultParent))  _explicitDefaultParent;

constexpr void __set__explicitDefaultParent(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__explicitDefaultParent() const;

 bool __declspec(property(get=__get__hasExplicitDefaultParent, put=__set__hasExplicitDefaultParent))  _hasExplicitDefaultParent;

constexpr void __set__hasExplicitDefaultParent(bool value) ;

constexpr bool __get__hasExplicitDefaultParent() const;

 Zenject::ZenjectSettings __declspec(property(get=__get__settings, put=__set__settings))  _settings;

constexpr void __set__settings(Zenject::ZenjectSettings value) ;

constexpr Zenject::ZenjectSettings __get__settings() const;

 bool __declspec(property(get=__get__hasResolvedRoots, put=__set__hasResolvedRoots))  _hasResolvedRoots;

constexpr void __set__hasResolvedRoots(bool value) ;

constexpr bool __get__hasResolvedRoots() const;

 bool __declspec(property(get=__get__isFinalizingBinding, put=__set__isFinalizingBinding))  _isFinalizingBinding;

constexpr void __set__isFinalizingBinding(bool value) ;

constexpr bool __get__isFinalizingBinding() const;

 bool __declspec(property(get=__get__isValidating, put=__set__isValidating))  _isValidating;

constexpr void __set__isValidating(bool value) ;

constexpr bool __get__isValidating() const;

 bool __declspec(property(get=__get__isInstalling, put=__set__isInstalling))  _isInstalling;

constexpr void __set__isInstalling(bool value) ;

constexpr bool __get__isInstalling() const;

 bool __declspec(property(get=__get__AssertOnNewGameObjects_k__BackingField, put=__set__AssertOnNewGameObjects_k__BackingField))  _AssertOnNewGameObjects_k__BackingField;

constexpr void __set__AssertOnNewGameObjects_k__BackingField(bool value) ;

constexpr bool __get__AssertOnNewGameObjects_k__BackingField() const;


// Properties

 Zenject::ZenjectSettings __declspec(property(get=get_Settings, put=set_Settings))  Settings;

 Zenject::Internal::SingletonMarkRegistry __declspec(property(get=get_SingletonMarkRegistry))  SingletonMarkRegistry;

 System::Collections::Generic::IEnumerable_1<Zenject::IProvider> __declspec(property(get=get_AllProviders))  AllProviders;

 UnityEngine::Transform __declspec(property(get=get_ContextTransform))  ContextTransform;

 bool __declspec(property(get=get_AssertOnNewGameObjects, put=set_AssertOnNewGameObjects))  AssertOnNewGameObjects;

 UnityEngine::Transform __declspec(property(get=get_InheritedDefaultParent))  InheritedDefaultParent;

 UnityEngine::Transform __declspec(property(get=get_DefaultParent, put=set_DefaultParent))  DefaultParent;

 ::ArrayW<Zenject::DiContainer> __declspec(property(get=get_ParentContainers))  ParentContainers;

 ::ArrayW<Zenject::DiContainer> __declspec(property(get=get_AncestorContainers))  AncestorContainers;

 bool __declspec(property(get=get_ChecksForCircularDependencies))  ChecksForCircularDependencies;

 bool __declspec(property(get=get_IsValidating))  IsValidating;

 bool __declspec(property(get=get_IsInstalling, put=set_IsInstalling))  IsInstalling;

 System::Collections::Generic::IEnumerable_1<Zenject::BindingId> __declspec(property(get=get_AllContracts))  AllContracts;


// Methods

// Ctor Parameters [CppParam { name: "parentContainersEnumerable", ty: "System::Collections::Generic::IEnumerable_1<Zenject::DiContainer>", modifiers: "", def_value: None }, CppParam { name: "isValidating", ty: "bool", modifiers: "", def_value: None }]
explicit DiContainer(System::Collections::Generic::IEnumerable_1<Zenject::DiContainer> parentContainersEnumerable, bool isValidating) ;

/// @brief Method .ctor addr 0x2d76ee0 size 0xa10 virtual false final false
 void _ctor(System::Collections::Generic::IEnumerable_1<Zenject::DiContainer> parentContainersEnumerable, bool isValidating) ;

// Ctor Parameters [CppParam { name: "isValidating", ty: "bool", modifiers: "", def_value: None }]
explicit DiContainer(bool isValidating) ;

/// @brief Method .ctor addr 0x2d7d840 size 0x94 virtual false final false
 void _ctor(bool isValidating) ;

// Ctor Parameters []
explicit DiContainer() ;

/// @brief Method .ctor addr 0x2d7b47c size 0x88 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "parentContainer", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "isValidating", ty: "bool", modifiers: "", def_value: None }]
explicit DiContainer(Zenject::DiContainer parentContainer, bool isValidating) ;

/// @brief Method .ctor addr 0x2d7d8d4 size 0xa8 virtual false final false
 void _ctor(Zenject::DiContainer parentContainer, bool isValidating) ;

// Ctor Parameters [CppParam { name: "parentContainer", ty: "Zenject::DiContainer", modifiers: "", def_value: None }]
explicit DiContainer(Zenject::DiContainer parentContainer) ;

/// @brief Method .ctor addr 0x2d7d97c size 0xa4 virtual false final false
 void _ctor(Zenject::DiContainer parentContainer) ;

// Ctor Parameters [CppParam { name: "parentContainers", ty: "System::Collections::Generic::IEnumerable_1<Zenject::DiContainer>", modifiers: "", def_value: None }]
explicit DiContainer(System::Collections::Generic::IEnumerable_1<Zenject::DiContainer> parentContainers) ;

/// @brief Method .ctor addr 0x2d7da20 size 0x8 virtual false final false
 void _ctor(System::Collections::Generic::IEnumerable_1<Zenject::DiContainer> parentContainers) ;

/// @brief Method get_Settings addr 0x2d7da28 size 0x8 virtual false final false
 Zenject::ZenjectSettings get_Settings() ;

/// @brief Method set_Settings addr 0x2d77c6c size 0x80 virtual false final false
 void set_Settings(Zenject::ZenjectSettings value) ;

/// @brief Method get_SingletonMarkRegistry addr 0x2d7da30 size 0x8 virtual false final false
 Zenject::Internal::SingletonMarkRegistry get_SingletonMarkRegistry() ;

/// @brief Method get_AllProviders addr 0x2d7da38 size 0x200 virtual false final false
 System::Collections::Generic::IEnumerable_1<Zenject::IProvider> get_AllProviders() ;

/// @brief Method InstallDefaultBindings addr 0x2d7d180 size 0x22c virtual false final false
 void InstallDefaultBindings() ;

/// @brief Method CreateLazyBinding addr 0x2d7dc38 size 0x254 virtual false final false
 ::bs_hook::Il2CppWrapperType CreateLazyBinding(Zenject::InjectContext context) ;

/// @brief Method QueueForValidate addr 0x2d7de8c size 0x11c virtual false final false
 void QueueForValidate(Zenject::IValidatable validatable) ;

/// @brief Method ShouldInheritBinding addr 0x2d7d708 size 0xbc virtual false final false
 bool ShouldInheritBinding(Zenject::BindStatement binding, Zenject::DiContainer ancestorContainer) ;

/// @brief Method get_ContextTransform addr 0x2d7dfd4 size 0xb8 virtual false final false
 UnityEngine::Transform get_ContextTransform() ;

/// @brief Method get_AssertOnNewGameObjects addr 0x2d7e08c size 0x8 virtual false final false
 bool get_AssertOnNewGameObjects() ;

/// @brief Method set_AssertOnNewGameObjects addr 0x2d7e094 size 0xc virtual false final false
 void set_AssertOnNewGameObjects(bool value) ;

/// @brief Method get_InheritedDefaultParent addr 0x2d7e0a0 size 0x8 virtual false final false
 UnityEngine::Transform get_InheritedDefaultParent() ;

/// @brief Method get_DefaultParent addr 0x2d7e0a8 size 0x8 virtual false final false
 UnityEngine::Transform get_DefaultParent() ;

/// @brief Method set_DefaultParent addr 0x2d759d4 size 0x10 virtual false final false
 void set_DefaultParent(UnityEngine::Transform value) ;

/// @brief Method get_ParentContainers addr 0x2d7dfa8 size 0x2c virtual false final false
 ::ArrayW<Zenject::DiContainer> get_ParentContainers() ;

/// @brief Method get_AncestorContainers addr 0x2d7e0b0 size 0x2c virtual false final false
 ::ArrayW<Zenject::DiContainer> get_AncestorContainers() ;

/// @brief Method get_ChecksForCircularDependencies addr 0x2d7e0dc size 0x8 virtual false final false
 bool get_ChecksForCircularDependencies() ;

/// @brief Method get_IsValidating addr 0x2d7e0e4 size 0x8 virtual false final false
 bool get_IsValidating() ;

/// @brief Method get_IsInstalling addr 0x2d7e0ec size 0x8 virtual false final false
 bool get_IsInstalling() ;

/// @brief Method set_IsInstalling addr 0x2d7e0f4 size 0xc virtual false final false
 void set_IsInstalling(bool value) ;

/// @brief Method get_AllContracts addr 0x2d7e100 size 0x58 virtual false final false
 System::Collections::Generic::IEnumerable_1<Zenject::BindingId> get_AllContracts() ;

/// @brief Method ResolveRoots addr 0x2d7571c size 0x74 virtual false final false
 void ResolveRoots() ;

/// @brief Method ResolveDependencyRoots addr 0x2d7e158 size 0x80c virtual false final false
 void ResolveDependencyRoots() ;

/// @brief Method ValidateFullResolve addr 0x2d7eee4 size 0x380 virtual false final false
 void ValidateFullResolve() ;

/// @brief Method FlushValidationQueue addr 0x2d7e964 size 0x220 virtual false final false
 void FlushValidationQueue() ;

/// @brief Method CreateSubContainer addr 0x2d750b8 size 0x8 virtual false final false
 Zenject::DiContainer CreateSubContainer() ;

/// @brief Method QueueForInject addr 0x2d75508 size 0x1c virtual false final false
 void QueueForInject(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method LazyInject addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T LazyInject(T instance) ;

/// @brief Method CreateSubContainer addr 0x2d7f3bc size 0xcc virtual false final false
 Zenject::DiContainer CreateSubContainer(bool isValidating) ;

/// @brief Method RegisterProvider addr 0x2d6bf24 size 0x1b4 virtual false final false
 void RegisterProvider(Zenject::BindingId bindingId, Zenject::BindingCondition condition, Zenject::IProvider provider, bool nonLazy) ;

/// @brief Method GetProviderMatches addr 0x2d7f488 size 0x284 virtual false final false
 void GetProviderMatches(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::Zenject__DiContainer__ProviderInfo> buffer) ;

/// @brief Method TryGetUniqueProvider addr 0x2d7f7dc size 0x5c4 virtual false final false
 Zenject::Zenject__DiContainer__ProviderInfo TryGetUniqueProvider(Zenject::InjectContext context) ;

/// @brief Method FlattenInheritanceChain addr 0x2d7d4e0 size 0x228 virtual false final false
 System::Collections::Generic::List_1<Zenject::DiContainer> FlattenInheritanceChain() ;

/// @brief Method GetLocalProviders addr 0x2d7fe0c size 0x11c virtual false final false
 void GetLocalProviders(Zenject::BindingId bindingId, System::Collections::Generic::List_1<Zenject::Zenject__DiContainer__ProviderInfo> buffer) ;

/// @brief Method GetProvidersForContract addr 0x2d7f70c size 0xd0 virtual false final false
 void GetProvidersForContract(Zenject::BindingId bindingId, Zenject::InjectSources sourceType, System::Collections::Generic::List_1<Zenject::Zenject__DiContainer__ProviderInfo> buffer) ;

/// @brief Method Install addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstaller>
 void Install() ;

/// @brief Method Install addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstaller>
 void Install(::ArrayW<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method ResolveAll addr 0x2d7f264 size 0x158 virtual false final false
 System::Collections::IList ResolveAll(Zenject::InjectContext context) ;

/// @brief Method ResolveAll addr 0x2d7ff28 size 0x700 virtual false final false
 void ResolveAll(Zenject::InjectContext context, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

/// @brief Method CheckForInstallWarning addr 0x2d80628 size 0x30 virtual false final false
 void CheckForInstallWarning(Zenject::InjectContext context) ;

/// @brief Method ResolveType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 System::Type ResolveType() ;

/// @brief Method ResolveType addr 0x2d80658 size 0x1b0 virtual false final false
 System::Type ResolveType(System::Type type) ;

/// @brief Method ResolveType addr 0x2d80808 size 0x2a0 virtual false final false
 System::Type ResolveType(Zenject::InjectContext context) ;

/// @brief Method ResolveTypeAll addr 0x2d80aa8 size 0x8 virtual false final false
 System::Collections::Generic::List_1<System::Type> ResolveTypeAll(System::Type type) ;

/// @brief Method ResolveTypeAll addr 0x2d80ab0 size 0x1c0 virtual false final false
 System::Collections::Generic::List_1<System::Type> ResolveTypeAll(System::Type type, ::bs_hook::Il2CppWrapperType identifier) ;

/// @brief Method ResolveTypeAll addr 0x2d80c70 size 0x37c virtual false final false
 System::Collections::Generic::List_1<System::Type> ResolveTypeAll(Zenject::InjectContext context) ;

/// @brief Method Resolve addr 0x2d80fec size 0x1c0 virtual false final false
 ::bs_hook::Il2CppWrapperType Resolve(Zenject::BindingId id) ;

/// @brief Method Resolve addr 0x2d811ac size 0xc5c virtual false final false
 ::bs_hook::Il2CppWrapperType Resolve(Zenject::InjectContext context) ;

/// @brief Method SafeGetInstances addr 0x2d7eb84 size 0x360 virtual false final false
 void SafeGetInstances(Zenject::Zenject__DiContainer__ProviderInfo providerInfo, Zenject::InjectContext context, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> instances) ;

/// @brief Method Decorate addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract>
 Zenject::DecoratorToChoiceFromBinder_1<TContract> Decorate() ;

/// @brief Method GetDecoratedInstances addr 0x2d81e08 size 0x114 virtual false final false
 void GetDecoratedInstances(Zenject::IProvider provider, Zenject::InjectContext context, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

/// @brief Method TryGetDecoratorProvider addr 0x2d81f1c size 0xe0 virtual false final false
 Zenject::Internal::IDecoratorProvider TryGetDecoratorProvider(System::Type contractType) ;

/// @brief Method GetContainerHeirarchyDistance addr 0x2d7fda0 size 0x6c virtual false final false
 int32_t GetContainerHeirarchyDistance(Zenject::DiContainer container) ;

/// @brief Method GetContainerHeirarchyDistance addr 0x2d81ffc size 0x150 virtual false final false
 System::Nullable_1<int32_t> GetContainerHeirarchyDistance(Zenject::DiContainer container, int32_t depth) ;

/// @brief Method GetDependencyContracts addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract>
 System::Collections::Generic::IEnumerable_1<System::Type> GetDependencyContracts() ;

/// @brief Method GetDependencyContracts addr 0x2d8214c size 0x78 virtual false final false
 System::Collections::Generic::IEnumerable_1<System::Type> GetDependencyContracts(System::Type contract) ;

/// @brief Method InstantiateInternal addr 0x2d821c4 size 0xb20 virtual false final false
 ::bs_hook::Il2CppWrapperType InstantiateInternal(System::Type concreteType, bool autoInject, System::Collections::Generic::List_1<Zenject::TypeValuePair> extraArgs, Zenject::InjectContext context, ::bs_hook::Il2CppWrapperType concreteIdentifier) ;

/// @brief Method InjectExplicit addr 0x2d82e78 size 0xf4 virtual false final false
 void InjectExplicit(::bs_hook::Il2CppWrapperType injectable, System::Collections::Generic::List_1<Zenject::TypeValuePair> extraArgs) ;

/// @brief Method InjectExplicit addr 0x2d82ce4 size 0x194 virtual false final false
 void InjectExplicit(::bs_hook::Il2CppWrapperType injectable, System::Type injectableType, System::Collections::Generic::List_1<Zenject::TypeValuePair> extraArgs, Zenject::InjectContext context, ::bs_hook::Il2CppWrapperType concreteIdentifier) ;

/// @brief Method CallInjectMethodsTopDown addr 0x2d83430 size 0x5fc virtual false final false
 void CallInjectMethodsTopDown(::bs_hook::Il2CppWrapperType injectable, System::Type injectableType, Zenject::InjectTypeInfo typeInfo, System::Collections::Generic::List_1<Zenject::TypeValuePair> extraArgs, Zenject::InjectContext context, ::bs_hook::Il2CppWrapperType concreteIdentifier, bool isDryRun) ;

/// @brief Method InjectMembersTopDown addr 0x2d83a2c size 0x318 virtual false final false
 void InjectMembersTopDown(::bs_hook::Il2CppWrapperType injectable, System::Type injectableType, Zenject::InjectTypeInfo typeInfo, System::Collections::Generic::List_1<Zenject::TypeValuePair> extraArgs, Zenject::InjectContext context, ::bs_hook::Il2CppWrapperType concreteIdentifier, bool isDryRun) ;

/// @brief Method InjectExplicitInternal addr 0x2d82f6c size 0x4c4 virtual false final false
 void InjectExplicitInternal(::bs_hook::Il2CppWrapperType injectable, System::Type injectableType, System::Collections::Generic::List_1<Zenject::TypeValuePair> extraArgs, Zenject::InjectContext context, ::bs_hook::Il2CppWrapperType concreteIdentifier) ;

/// @brief Method CreateAndParentPrefabResource addr 0x2d83d44 size 0x134 virtual false final false
 UnityEngine::GameObject CreateAndParentPrefabResource(::StringW resourcePath, Zenject::GameObjectCreationParameters gameObjectBindInfo, Zenject::InjectContext context, ByRef<bool> shouldMakeActive) ;

/// @brief Method GetPrefabAsGameObject addr 0x2d842ac size 0x11c virtual false final false
 UnityEngine::GameObject GetPrefabAsGameObject(UnityEngine::Object prefab) ;

/// @brief Method CreateAndParentPrefab addr 0x2d83e78 size 0x434 virtual false final false
 UnityEngine::GameObject CreateAndParentPrefab(UnityEngine::Object prefab, Zenject::GameObjectCreationParameters gameObjectBindInfo, Zenject::InjectContext context, ByRef<bool> shouldMakeActive) ;

/// @brief Method CreateEmptyGameObject addr 0x2d84904 size 0x78 virtual true final true
 UnityEngine::GameObject CreateEmptyGameObject(::StringW name) ;

/// @brief Method CreateEmptyGameObject addr 0x2d8497c size 0x188 virtual false final false
 UnityEngine::GameObject CreateEmptyGameObject(Zenject::GameObjectCreationParameters gameObjectBindInfo, Zenject::InjectContext context) ;

/// @brief Method GetTransformGroup addr 0x2d843c8 size 0x53c virtual false final false
 UnityEngine::Transform GetTransformGroup(Zenject::GameObjectCreationParameters gameObjectBindInfo, Zenject::InjectContext context) ;

/// @brief Method CreateTransformGroup addr 0x2d84b04 size 0xc0 virtual false final false
 UnityEngine::GameObject CreateTransformGroup(::StringW groupName) ;

/// @brief Method Instantiate addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 T Instantiate() ;

/// @brief Method Instantiate addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 T Instantiate(System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method Instantiate addr 0x2d738bc size 0x64 virtual true final true
 ::bs_hook::Il2CppWrapperType Instantiate(System::Type concreteType) ;

/// @brief Method Instantiate addr 0x2d84bc4 size 0xa8 virtual true final true
 ::bs_hook::Il2CppWrapperType Instantiate(System::Type concreteType, System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method InstantiateComponent addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename TContract>
 TContract InstantiateComponent(UnityEngine::GameObject gameObject) ;

/// @brief Method InstantiateComponent addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename TContract>
 TContract InstantiateComponent(UnityEngine::GameObject gameObject, System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method InstantiateComponent addr 0x2d84d04 size 0x70 virtual true final true
 UnityEngine::Component InstantiateComponent(System::Type componentType, UnityEngine::GameObject gameObject) ;

/// @brief Method InstantiateComponent addr 0x2d84d74 size 0x38 virtual true final true
 UnityEngine::Component InstantiateComponent(System::Type componentType, UnityEngine::GameObject gameObject, System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method InstantiateComponentOnNewGameObject addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 T InstantiateComponentOnNewGameObject() ;

/// @brief Method InstantiateComponentOnNewGameObject addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 T InstantiateComponentOnNewGameObject(System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method InstantiateComponentOnNewGameObject addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 T InstantiateComponentOnNewGameObject(::StringW gameObjectName) ;

/// @brief Method InstantiateComponentOnNewGameObject addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 T InstantiateComponentOnNewGameObject(::StringW gameObjectName, System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method InstantiatePrefab addr 0x2d84e7c size 0x70 virtual true final true
 UnityEngine::GameObject InstantiatePrefab(UnityEngine::Object prefab) ;

/// @brief Method InstantiatePrefab addr 0x2d84f70 size 0x7c virtual true final true
 UnityEngine::GameObject InstantiatePrefab(UnityEngine::Object prefab, UnityEngine::Transform parentTransform) ;

/// @brief Method InstantiatePrefab addr 0x2d84fec size 0x14c virtual true final true
 UnityEngine::GameObject InstantiatePrefab(UnityEngine::Object prefab, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform parentTransform) ;

/// @brief Method InstantiatePrefab addr 0x2d84eec size 0x84 virtual false final false
 UnityEngine::GameObject InstantiatePrefab(UnityEngine::Object prefab, Zenject::GameObjectCreationParameters gameObjectBindInfo) ;

/// @brief Method InstantiatePrefabResource addr 0x2d852ec size 0x70 virtual true final true
 UnityEngine::GameObject InstantiatePrefabResource(::StringW resourcePath) ;

/// @brief Method InstantiatePrefabResource addr 0x2d85478 size 0x7c virtual true final true
 UnityEngine::GameObject InstantiatePrefabResource(::StringW resourcePath, UnityEngine::Transform parentTransform) ;

/// @brief Method InstantiatePrefabResource addr 0x2d854f4 size 0x14c virtual true final true
 UnityEngine::GameObject InstantiatePrefabResource(::StringW resourcePath, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform parentTransform) ;

/// @brief Method InstantiatePrefabResource addr 0x2d8535c size 0x11c virtual false final false
 UnityEngine::GameObject InstantiatePrefabResource(::StringW resourcePath, Zenject::GameObjectCreationParameters creationInfo) ;

/// @brief Method InstantiatePrefabForComponent addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 T InstantiatePrefabForComponent(UnityEngine::Object prefab) ;

/// @brief Method InstantiatePrefabForComponent addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 T InstantiatePrefabForComponent(UnityEngine::Object prefab, System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method InstantiatePrefabForComponent addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 T InstantiatePrefabForComponent(UnityEngine::Object prefab, UnityEngine::Transform parentTransform) ;

/// @brief Method InstantiatePrefabForComponent addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 T InstantiatePrefabForComponent(UnityEngine::Object prefab, UnityEngine::Transform parentTransform, System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method InstantiatePrefabForComponent addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 T InstantiatePrefabForComponent(UnityEngine::Object prefab, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform parentTransform) ;

/// @brief Method InstantiatePrefabForComponent addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 T InstantiatePrefabForComponent(UnityEngine::Object prefab, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform parentTransform, System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method InstantiatePrefabForComponent addr 0x2d85640 size 0x9c virtual true final true
 ::bs_hook::Il2CppWrapperType InstantiatePrefabForComponent(System::Type concreteType, UnityEngine::Object prefab, UnityEngine::Transform parentTransform, System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method InstantiatePrefabForComponent addr 0x2d856dc size 0x48 virtual false final false
 ::bs_hook::Il2CppWrapperType InstantiatePrefabForComponent(System::Type concreteType, UnityEngine::Object prefab, System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs, Zenject::GameObjectCreationParameters creationInfo) ;

/// @brief Method InstantiatePrefabResourceForComponent addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 T InstantiatePrefabResourceForComponent(::StringW resourcePath) ;

/// @brief Method InstantiatePrefabResourceForComponent addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 T InstantiatePrefabResourceForComponent(::StringW resourcePath, System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method InstantiatePrefabResourceForComponent addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 T InstantiatePrefabResourceForComponent(::StringW resourcePath, UnityEngine::Transform parentTransform) ;

/// @brief Method InstantiatePrefabResourceForComponent addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 T InstantiatePrefabResourceForComponent(::StringW resourcePath, UnityEngine::Transform parentTransform, System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method InstantiatePrefabResourceForComponent addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 T InstantiatePrefabResourceForComponent(::StringW resourcePath, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform parentTransform) ;

/// @brief Method InstantiatePrefabResourceForComponent addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 T InstantiatePrefabResourceForComponent(::StringW resourcePath, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform parentTransform, System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method InstantiatePrefabResourceForComponent addr 0x2d857d0 size 0xfc virtual true final true
 ::bs_hook::Il2CppWrapperType InstantiatePrefabResourceForComponent(System::Type concreteType, ::StringW resourcePath, UnityEngine::Transform parentTransform, System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method InstantiateScriptableObjectResource addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 T InstantiateScriptableObjectResource(::StringW resourcePath) ;

/// @brief Method InstantiateScriptableObjectResource addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 T InstantiateScriptableObjectResource(::StringW resourcePath, System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method InstantiateScriptableObjectResource addr 0x2d85978 size 0x6c virtual true final true
 ::bs_hook::Il2CppWrapperType InstantiateScriptableObjectResource(System::Type scriptableObjectType, ::StringW resourcePath) ;

/// @brief Method InstantiateScriptableObjectResource addr 0x2d859e4 size 0x80 virtual true final true
 ::bs_hook::Il2CppWrapperType InstantiateScriptableObjectResource(System::Type scriptableObjectType, ::StringW resourcePath, System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method InjectGameObject addr 0x2d85138 size 0x1b4 virtual false final false
 void InjectGameObject(UnityEngine::GameObject gameObject) ;

/// @brief Method InjectGameObjectForComponent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T InjectGameObjectForComponent(UnityEngine::GameObject gameObject) ;

/// @brief Method InjectGameObjectForComponent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T InjectGameObjectForComponent(UnityEngine::GameObject gameObject, System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method InjectGameObjectForComponent addr 0x2d85ba8 size 0xb4 virtual false final false
 ::bs_hook::Il2CppWrapperType InjectGameObjectForComponent(UnityEngine::GameObject gameObject, System::Type componentType, System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method InjectGameObjectForComponentExplicit addr 0x2d85c5c size 0x3ec virtual false final false
 UnityEngine::Component InjectGameObjectForComponentExplicit(UnityEngine::GameObject gameObject, System::Type componentType, System::Collections::Generic::List_1<Zenject::TypeValuePair> extraArgs, Zenject::InjectContext context, ::bs_hook::Il2CppWrapperType concreteIdentifier) ;

/// @brief Method Inject addr 0x2d73920 size 0x68 virtual false final false
 void Inject(::bs_hook::Il2CppWrapperType injectable) ;

/// @brief Method Inject addr 0x2d86048 size 0x30 virtual false final false
 void Inject(::bs_hook::Il2CppWrapperType injectable, System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method Resolve addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract>
 TContract Resolve() ;

/// @brief Method Resolve addr 0x2d86078 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType Resolve(System::Type contractType) ;

/// @brief Method ResolveId addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract>
 TContract ResolveId(::bs_hook::Il2CppWrapperType identifier) ;

/// @brief Method ResolveId addr 0x2d86080 size 0x1c0 virtual false final false
 ::bs_hook::Il2CppWrapperType ResolveId(System::Type contractType, ::bs_hook::Il2CppWrapperType identifier) ;

/// @brief Method TryResolve addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract>
 TContract TryResolve() ;

/// @brief Method TryResolve addr 0x2d86240 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType TryResolve(System::Type contractType) ;

/// @brief Method TryResolveId addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract>
 TContract TryResolveId(::bs_hook::Il2CppWrapperType identifier) ;

/// @brief Method TryResolveId addr 0x2d86248 size 0x1c8 virtual false final false
 ::bs_hook::Il2CppWrapperType TryResolveId(System::Type contractType, ::bs_hook::Il2CppWrapperType identifier) ;

/// @brief Method ResolveAll addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract>
 System::Collections::Generic::List_1<TContract> ResolveAll() ;

/// @brief Method ResolveAll addr 0x2d86410 size 0x8 virtual false final false
 System::Collections::IList ResolveAll(System::Type contractType) ;

/// @brief Method ResolveIdAll addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract>
 System::Collections::Generic::List_1<TContract> ResolveIdAll(::bs_hook::Il2CppWrapperType identifier) ;

/// @brief Method ResolveIdAll addr 0x2d86418 size 0x1c8 virtual false final false
 System::Collections::IList ResolveIdAll(System::Type contractType, ::bs_hook::Il2CppWrapperType identifier) ;

/// @brief Method UnbindAll addr 0x2d865e0 size 0x58 virtual false final false
 void UnbindAll() ;

/// @brief Method Unbind addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract>
 bool Unbind() ;

/// @brief Method Unbind addr 0x2d86638 size 0x8 virtual false final false
 bool Unbind(System::Type contractType) ;

/// @brief Method UnbindId addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract>
 bool UnbindId(::bs_hook::Il2CppWrapperType identifier) ;

/// @brief Method UnbindId addr 0x2d86640 size 0x70 virtual false final false
 bool UnbindId(System::Type contractType, ::bs_hook::Il2CppWrapperType identifier) ;

/// @brief Method UnbindInterfacesTo addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TConcrete>
 void UnbindInterfacesTo() ;

/// @brief Method UnbindInterfacesTo addr 0x2d866b0 size 0xbc virtual false final false
 void UnbindInterfacesTo(System::Type concreteType) ;

/// @brief Method Unbind addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract,typename TConcrete>
 bool Unbind() ;

/// @brief Method Unbind addr 0x2d8676c size 0x8 virtual false final false
 bool Unbind(System::Type contractType, System::Type concreteType) ;

/// @brief Method UnbindId addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract,typename TConcrete>
 bool UnbindId(::bs_hook::Il2CppWrapperType identifier) ;

/// @brief Method UnbindId addr 0x2d86774 size 0x294 virtual false final false
 bool UnbindId(System::Type contractType, System::Type concreteType, ::bs_hook::Il2CppWrapperType identifier) ;

/// @brief Method HasBinding addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract>
 bool HasBinding() ;

/// @brief Method HasBinding addr 0x2d86a08 size 0xc virtual false final false
 bool HasBinding(System::Type contractType) ;

/// @brief Method HasBindingId addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract>
 bool HasBindingId(::bs_hook::Il2CppWrapperType identifier) ;

/// @brief Method HasBindingId addr 0x2d6bf14 size 0x8 virtual false final false
 bool HasBindingId(System::Type contractType, ::bs_hook::Il2CppWrapperType identifier) ;

/// @brief Method HasBindingId addr 0x2d86a14 size 0x1d0 virtual false final false
 bool HasBindingId(System::Type contractType, ::bs_hook::Il2CppWrapperType identifier, Zenject::InjectSources sourceType) ;

/// @brief Method HasBinding addr 0x2d86be4 size 0x16c virtual false final false
 bool HasBinding(Zenject::InjectContext context) ;

/// @brief Method FlushBindings addr 0x2d7d3ac size 0x134 virtual false final false
 void FlushBindings() ;

/// @brief Method FinalizeBinding addr 0x2d7d7c4 size 0x7c virtual false final false
 void FinalizeBinding(Zenject::BindStatement binding) ;

/// @brief Method StartBinding addr 0x2d86d50 size 0xd4 virtual false final false
 Zenject::BindStatement StartBinding(bool flush) ;

/// @brief Method Rebind addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract>
 Zenject::ConcreteBinderGeneric_1<TContract> Rebind() ;

/// @brief Method RebindId addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract>
 Zenject::ConcreteBinderGeneric_1<TContract> RebindId(::bs_hook::Il2CppWrapperType identifier) ;

/// @brief Method Rebind addr 0x2d86e24 size 0x8 virtual false final false
 Zenject::ConcreteBinderNonGeneric Rebind(System::Type contractType) ;

/// @brief Method RebindId addr 0x2d86e2c size 0xc4 virtual false final false
 Zenject::ConcreteBinderNonGeneric RebindId(System::Type contractType, ::bs_hook::Il2CppWrapperType identifier) ;

/// @brief Method Bind addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract>
 Zenject::ConcreteIdBinderGeneric_1<TContract> Bind() ;

/// @brief Method BindNoFlush addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract>
 Zenject::ConcreteIdBinderGeneric_1<TContract> BindNoFlush() ;

/// @brief Method Bind addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract>
 Zenject::ConcreteIdBinderGeneric_1<TContract> Bind(Zenject::BindStatement bindStatement) ;

/// @brief Method Bind addr 0x2d74440 size 0x8c virtual false final false
 Zenject::ConcreteIdBinderNonGeneric Bind(::ArrayW<System::Type> contractTypes) ;

/// @brief Method Bind addr 0x2d87064 size 0x90 virtual false final false
 Zenject::ConcreteIdBinderNonGeneric Bind(System::Collections::Generic::IEnumerable_1<System::Type> contractTypes) ;

/// @brief Method BindInternal addr 0x2d86ef0 size 0x174 virtual false final false
 Zenject::ConcreteIdBinderNonGeneric BindInternal(Zenject::BindInfo bindInfo, Zenject::BindStatement bindingFinalizer) ;

/// @brief Method Bind addr 0x2d870f4 size 0x238 virtual false final false
 Zenject::ConcreteIdBinderNonGeneric Bind(System::Action_1<Zenject::ConventionSelectTypesBinder> generator) ;

/// @brief Method BindInterfacesTo addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 Zenject::FromBinderNonGeneric BindInterfacesTo() ;

/// @brief Method BindInterfacesTo addr 0x2d8732c size 0x1c8 virtual false final false
 Zenject::FromBinderNonGeneric BindInterfacesTo(System::Type type) ;

/// @brief Method BindInterfacesAndSelfTo addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 Zenject::FromBinderNonGeneric BindInterfacesAndSelfTo() ;

/// @brief Method BindInterfacesAndSelfTo addr 0x2d874f4 size 0x1b8 virtual false final false
 Zenject::FromBinderNonGeneric BindInterfacesAndSelfTo(System::Type type) ;

/// @brief Method BindInstance addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract>
 Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder BindInstance(TContract instance) ;

/// @brief Method BindInstances addr 0x2d876ac size 0x140 virtual false final false
 void BindInstances(::ArrayW<::bs_hook::Il2CppWrapperType> instances) ;

/// @brief Method BindFactoryInternal addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract,typename TFactoryContract,typename TFactoryConcrete>
 Zenject::FactoryToChoiceIdBinder_1<TContract> BindFactoryInternal() ;

/// @brief Method BindIFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract>
 Zenject::FactoryToChoiceIdBinder_1<TContract> BindIFactory() ;

/// @brief Method BindFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract,typename TFactory>
 Zenject::FactoryToChoiceIdBinder_1<TContract> BindFactory() ;

/// @brief Method BindFactoryCustomInterface addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract,typename TFactoryConcrete,typename TFactoryContract>
 Zenject::FactoryToChoiceIdBinder_1<TContract> BindFactoryCustomInterface() ;

/// @brief Method BindMemoryPool addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TItemContract>
 Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract> BindMemoryPool() ;

/// @brief Method BindMemoryPool addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TItemContract,typename TPool>
 Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract> BindMemoryPool() ;

/// @brief Method BindMemoryPoolCustomInterface addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TItemContract,typename TPoolConcrete,typename TPoolContract>
 Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract> BindMemoryPoolCustomInterface(bool includeConcreteType) ;

/// @brief Method BindMemoryPoolCustomInterfaceNoFlush addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TItemContract,typename TPoolConcrete,typename TPoolContract>
 Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract> BindMemoryPoolCustomInterfaceNoFlush(bool includeConcreteType) ;

/// @brief Method BindMemoryPoolCustomInterfaceInternal addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TItemContract,typename TPoolConcrete,typename TPoolContract>
 Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract> BindMemoryPoolCustomInterfaceInternal(bool includeConcreteType, Zenject::BindStatement statement) ;

/// @brief Method BindFactoryInternal addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TContract,typename TFactoryContract,typename TFactoryConcrete>
 Zenject::FactoryToChoiceIdBinder_2<TParam1,TContract> BindFactoryInternal() ;

/// @brief Method BindIFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TContract>
 Zenject::FactoryToChoiceIdBinder_2<TParam1,TContract> BindIFactory() ;

/// @brief Method BindFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TContract,typename TFactory>
 Zenject::FactoryToChoiceIdBinder_2<TParam1,TContract> BindFactory() ;

/// @brief Method BindFactoryCustomInterface addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TContract,typename TFactoryConcrete,typename TFactoryContract>
 Zenject::FactoryToChoiceIdBinder_2<TParam1,TContract> BindFactoryCustomInterface() ;

/// @brief Method BindFactoryInternal addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TContract,typename TFactoryContract,typename TFactoryConcrete>
 Zenject::FactoryToChoiceIdBinder_3<TParam1,TParam2,TContract> BindFactoryInternal() ;

/// @brief Method BindIFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TContract>
 Zenject::FactoryToChoiceIdBinder_3<TParam1,TParam2,TContract> BindIFactory() ;

/// @brief Method BindFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TContract,typename TFactory>
 Zenject::FactoryToChoiceIdBinder_3<TParam1,TParam2,TContract> BindFactory() ;

/// @brief Method BindFactoryCustomInterface addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TContract,typename TFactoryConcrete,typename TFactoryContract>
 Zenject::FactoryToChoiceIdBinder_3<TParam1,TParam2,TContract> BindFactoryCustomInterface() ;

/// @brief Method BindFactoryInternal addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3,typename TContract,typename TFactoryContract,typename TFactoryConcrete>
 Zenject::FactoryToChoiceIdBinder_4<TParam1,TParam2,TParam3,TContract> BindFactoryInternal() ;

/// @brief Method BindIFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3,typename TContract>
 Zenject::FactoryToChoiceIdBinder_4<TParam1,TParam2,TParam3,TContract> BindIFactory() ;

/// @brief Method BindFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3,typename TContract,typename TFactory>
 Zenject::FactoryToChoiceIdBinder_4<TParam1,TParam2,TParam3,TContract> BindFactory() ;

/// @brief Method BindFactoryCustomInterface addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3,typename TContract,typename TFactoryConcrete,typename TFactoryContract>
 Zenject::FactoryToChoiceIdBinder_4<TParam1,TParam2,TParam3,TContract> BindFactoryCustomInterface() ;

/// @brief Method BindFactoryInternal addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TContract,typename TFactoryContract,typename TFactoryConcrete>
 Zenject::FactoryToChoiceIdBinder_5<TParam1,TParam2,TParam3,TParam4,TContract> BindFactoryInternal() ;

/// @brief Method BindIFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TContract>
 Zenject::FactoryToChoiceIdBinder_5<TParam1,TParam2,TParam3,TParam4,TContract> BindIFactory() ;

/// @brief Method BindFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TContract,typename TFactory>
 Zenject::FactoryToChoiceIdBinder_5<TParam1,TParam2,TParam3,TParam4,TContract> BindFactory() ;

/// @brief Method BindFactoryCustomInterface addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TContract,typename TFactoryConcrete,typename TFactoryContract>
 Zenject::FactoryToChoiceIdBinder_5<TParam1,TParam2,TParam3,TParam4,TContract> BindFactoryCustomInterface() ;

/// @brief Method BindFactoryInternal addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TContract,typename TFactoryContract,typename TFactoryConcrete>
 Zenject::FactoryToChoiceIdBinder_6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> BindFactoryInternal() ;

/// @brief Method BindIFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TContract>
 Zenject::FactoryToChoiceIdBinder_6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> BindIFactory() ;

/// @brief Method BindFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TContract,typename TFactory>
 Zenject::FactoryToChoiceIdBinder_6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> BindFactory() ;

/// @brief Method BindFactoryCustomInterface addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TContract,typename TFactoryConcrete,typename TFactoryContract>
 Zenject::FactoryToChoiceIdBinder_6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> BindFactoryCustomInterface() ;

/// @brief Method BindFactoryInternal addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TContract,typename TFactoryContract,typename TFactoryConcrete>
 Zenject::FactoryToChoiceIdBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> BindFactoryInternal() ;

/// @brief Method BindIFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TContract>
 Zenject::FactoryToChoiceIdBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> BindIFactory() ;

/// @brief Method BindFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TContract,typename TFactory>
 Zenject::FactoryToChoiceIdBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> BindFactory() ;

/// @brief Method BindFactoryCustomInterface addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TContract,typename TFactoryConcrete,typename TFactoryContract>
 Zenject::FactoryToChoiceIdBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> BindFactoryCustomInterface() ;

/// @brief Method BindFactoryInternal addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TParam7,typename TParam8,typename TParam9,typename TParam10,typename TContract,typename TFactoryContract,typename TFactoryConcrete>
 Zenject::FactoryToChoiceIdBinder_11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract> BindFactoryInternal() ;

/// @brief Method BindIFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TParam7,typename TParam8,typename TParam9,typename TParam10,typename TContract>
 Zenject::FactoryToChoiceIdBinder_11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract> BindIFactory() ;

/// @brief Method BindFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TParam7,typename TParam8,typename TParam9,typename TParam10,typename TContract,typename TFactory>
 Zenject::FactoryToChoiceIdBinder_11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract> BindFactory() ;

/// @brief Method BindFactoryCustomInterface addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TParam7,typename TParam8,typename TParam9,typename TParam10,typename TContract,typename TFactoryConcrete,typename TFactoryContract>
 Zenject::FactoryToChoiceIdBinder_11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract> BindFactoryCustomInterface() ;

/// @brief Method InstantiateExplicit addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T InstantiateExplicit(System::Collections::Generic::List_1<Zenject::TypeValuePair> extraArgs) ;

/// @brief Method InstantiateExplicit addr 0x2d84c6c size 0x98 virtual false final false
 ::bs_hook::Il2CppWrapperType InstantiateExplicit(System::Type concreteType, System::Collections::Generic::List_1<Zenject::TypeValuePair> extraArgs) ;

/// @brief Method InstantiateExplicit addr 0x2d877ec size 0x108 virtual false final false
 ::bs_hook::Il2CppWrapperType InstantiateExplicit(System::Type concreteType, bool autoInject, System::Collections::Generic::List_1<Zenject::TypeValuePair> extraArgs, Zenject::InjectContext context, ::bs_hook::Il2CppWrapperType concreteIdentifier) ;

/// @brief Method InstantiateComponentExplicit addr 0x2d84dac size 0xd0 virtual false final false
 UnityEngine::Component InstantiateComponentExplicit(System::Type componentType, UnityEngine::GameObject gameObject, System::Collections::Generic::List_1<Zenject::TypeValuePair> extraArgs) ;

/// @brief Method InstantiateScriptableObjectResourceExplicit addr 0x2d85a64 size 0x144 virtual false final false
 ::bs_hook::Il2CppWrapperType InstantiateScriptableObjectResourceExplicit(System::Type scriptableObjectType, ::StringW resourcePath, System::Collections::Generic::List_1<Zenject::TypeValuePair> extraArgs) ;

/// @brief Method InstantiatePrefabResourceForComponentExplicit addr 0x2d858cc size 0xac virtual false final false
 ::bs_hook::Il2CppWrapperType InstantiatePrefabResourceForComponentExplicit(System::Type componentType, ::StringW resourcePath, System::Collections::Generic::List_1<Zenject::TypeValuePair> extraArgs, Zenject::GameObjectCreationParameters creationInfo) ;

/// @brief Method InstantiatePrefabResourceForComponentExplicit addr 0x2d878f4 size 0x14c virtual false final false
 ::bs_hook::Il2CppWrapperType InstantiatePrefabResourceForComponentExplicit(System::Type componentType, ::StringW resourcePath, System::Collections::Generic::List_1<Zenject::TypeValuePair> extraArgs, Zenject::InjectContext context, ::bs_hook::Il2CppWrapperType concreteIdentifier, Zenject::GameObjectCreationParameters creationInfo) ;

/// @brief Method InstantiatePrefabForComponentExplicit addr 0x2d87bd8 size 0x88 virtual false final false
 ::bs_hook::Il2CppWrapperType InstantiatePrefabForComponentExplicit(System::Type componentType, UnityEngine::Object prefab, System::Collections::Generic::List_1<Zenject::TypeValuePair> extraArgs) ;

/// @brief Method InstantiatePrefabForComponentExplicit addr 0x2d85724 size 0xac virtual false final false
 ::bs_hook::Il2CppWrapperType InstantiatePrefabForComponentExplicit(System::Type componentType, UnityEngine::Object prefab, System::Collections::Generic::List_1<Zenject::TypeValuePair> extraArgs, Zenject::GameObjectCreationParameters gameObjectBindInfo) ;

/// @brief Method InstantiatePrefabForComponentExplicit addr 0x2d87a40 size 0x198 virtual false final false
 ::bs_hook::Il2CppWrapperType InstantiatePrefabForComponentExplicit(System::Type componentType, UnityEngine::Object prefab, System::Collections::Generic::List_1<Zenject::TypeValuePair> extraArgs, Zenject::InjectContext context, ::bs_hook::Il2CppWrapperType concreteIdentifier, Zenject::GameObjectCreationParameters gameObjectBindInfo) ;

/// @brief Method BindExecutionOrder addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void BindExecutionOrder(int32_t order) ;

/// @brief Method BindExecutionOrder addr 0x2d87c60 size 0x370 virtual false final false
 void BindExecutionOrder(System::Type type, int32_t order) ;

/// @brief Method BindTickableExecutionOrder addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 Zenject::CopyNonLazyBinder BindTickableExecutionOrder(int32_t order) ;

/// @brief Method BindTickableExecutionOrder addr 0x2d87fd0 size 0x118 virtual false final false
 Zenject::CopyNonLazyBinder BindTickableExecutionOrder(System::Type type, int32_t order) ;

/// @brief Method BindInitializableExecutionOrder addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 Zenject::CopyNonLazyBinder BindInitializableExecutionOrder(int32_t order) ;

/// @brief Method BindInitializableExecutionOrder addr 0x2d880e8 size 0x118 virtual false final false
 Zenject::CopyNonLazyBinder BindInitializableExecutionOrder(System::Type type, int32_t order) ;

/// @brief Method BindDisposableExecutionOrder addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 Zenject::CopyNonLazyBinder BindDisposableExecutionOrder(int32_t order) ;

/// @brief Method BindLateDisposableExecutionOrder addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 Zenject::CopyNonLazyBinder BindLateDisposableExecutionOrder(int32_t order) ;

/// @brief Method BindDisposableExecutionOrder addr 0x2d88200 size 0x118 virtual false final false
 Zenject::CopyNonLazyBinder BindDisposableExecutionOrder(System::Type type, int32_t order) ;

/// @brief Method BindLateDisposableExecutionOrder addr 0x2d88318 size 0x13c virtual false final false
 Zenject::CopyNonLazyBinder BindLateDisposableExecutionOrder(System::Type type, int32_t order) ;

/// @brief Method BindFixedTickableExecutionOrder addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 Zenject::CopyNonLazyBinder BindFixedTickableExecutionOrder(int32_t order) ;

/// @brief Method BindFixedTickableExecutionOrder addr 0x2d88454 size 0x178 virtual false final false
 Zenject::CopyNonLazyBinder BindFixedTickableExecutionOrder(System::Type type, int32_t order) ;

/// @brief Method BindLateTickableExecutionOrder addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 Zenject::CopyNonLazyBinder BindLateTickableExecutionOrder(int32_t order) ;

/// @brief Method BindLateTickableExecutionOrder addr 0x2d885cc size 0x178 virtual false final false
 Zenject::CopyNonLazyBinder BindLateTickableExecutionOrder(System::Type type, int32_t order) ;

/// @brief Method BindPoolableExecutionOrder addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 Zenject::CopyNonLazyBinder BindPoolableExecutionOrder(int32_t order) ;

/// @brief Method BindPoolableExecutionOrder addr 0x2d88744 size 0x1140 virtual false final false
 Zenject::CopyNonLazyBinder BindPoolableExecutionOrder(System::Type type, int32_t order) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass203_0`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11107))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11107), inst: 2 })
// CS Name: Zenject.DiContainer::<>c__DisplayClass203_0`1
class CORDL_TYPE Zenject__DiContainer____c__DisplayClass203_0_1<TContract> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__DiContainer____c__DisplayClass203_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__DiContainer____c__DisplayClass203_0_1", modifiers: " const&", def_value: None }]
constexpr Zenject__DiContainer____c__DisplayClass203_0_1(Zenject__DiContainer____c__DisplayClass203_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__DiContainer____c__DisplayClass203_0_1", modifiers: "&&", def_value: None }]
constexpr Zenject__DiContainer____c__DisplayClass203_0_1(Zenject__DiContainer____c__DisplayClass203_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__DiContainer____c__DisplayClass203_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__DiContainer____c__DisplayClass203_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__DiContainer____c__DisplayClass203_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__DiContainer____c__DisplayClass203_0_1& operator=(Zenject__DiContainer____c__DisplayClass203_0_1&& o) noexcept = default;
  constexpr Zenject__DiContainer____c__DisplayClass203_0_1& operator=(Zenject__DiContainer____c__DisplayClass203_0_1 const& o) noexcept = default;
                


// Fields

 TContract __declspec(property(get=__get_instance, put=__set_instance))  instance;

constexpr void __set_instance(TContract value) ;

constexpr TContract __get_instance() const;


// Methods

// Ctor Parameters []
explicit Zenject__DiContainer____c__DisplayClass203_0_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <BindInstance>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::IProvider _BindInstance_b__0(Zenject::DiContainer container, System::Type type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Zenject__DiContainer____c__DisplayClass203_0_1, "Zenject", "DiContainer/<>c__DisplayClass203_0`1");
NEED_NO_BOX(Zenject::DiContainer);
DEFINE_IL2CPP_ARG_TYPE(Zenject::DiContainer, "Zenject", "DiContainer");
NEED_NO_BOX(Zenject::Zenject__DiContainer__ProviderInfo);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__DiContainer__ProviderInfo, "Zenject", "DiContainer/ProviderInfo");
NEED_NO_BOX(Zenject::Zenject__DiContainer___GetDependencyContracts_d__96);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__DiContainer___GetDependencyContracts_d__96, "Zenject", "DiContainer/<GetDependencyContracts>d__96");
NEED_NO_BOX(Zenject::Zenject__DiContainer____c);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__DiContainer____c, "Zenject", "DiContainer/<>c");
NEED_NO_BOX(Zenject::Zenject__DiContainer____c__DisplayClass178_0);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__DiContainer____c__DisplayClass178_0, "Zenject", "DiContainer/<>c__DisplayClass178_0");
NEED_NO_BOX(Zenject::Zenject__DiContainer____c__DisplayClass86_0);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__DiContainer____c__DisplayClass86_0, "Zenject", "DiContainer/<>c__DisplayClass86_0");
