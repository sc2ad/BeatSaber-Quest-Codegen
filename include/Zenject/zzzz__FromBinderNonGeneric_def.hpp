#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__FromBinder_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace Zenject {
class BindStatement;
}
namespace Zenject {
struct InjectSources;
}
namespace System {
template<typename T>
class Action_1;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
template<typename TContract>
class ConcreteBinderGeneric_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
template<typename TValue>
class IFactory_1;
}
namespace Zenject {
class ScopeConcreteIdArgConditionCopyNonLazyBinder;
}
namespace Zenject {
class InjectContext;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine {
class Component;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TConcrete,typename TFactory>
class Zenject__FromBinderNonGeneric____c__1_2;
}
namespace Zenject {
class FromBinderNonGeneric;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TConcrete,::cordl_internals::il2cpp_reference_type TFactory>
class Zenject__FromBinderNonGeneric____c__1_2<TConcrete,TFactory>;
}
// Type: ::<>c__1`2
// Type: Zenject::FromBinderNonGeneric
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10851))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10858))
// CS Name: Zenject.FromBinderNonGeneric
class CORDL_TYPE FromBinderNonGeneric : public Zenject::FromBinder {
public:
// Declarations
template<typename TConcrete,typename TFactory>
using __c__1_2 = Zenject::Zenject__FromBinderNonGeneric____c__1_2<TConcrete, TFactory>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~FromBinderNonGeneric() = default;

// Ctor Parameters [CppParam { name: "", ty: "FromBinderNonGeneric", modifiers: " const&", def_value: None }]
constexpr FromBinderNonGeneric(FromBinderNonGeneric const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FromBinderNonGeneric", modifiers: "&&", def_value: None }]
constexpr FromBinderNonGeneric(FromBinderNonGeneric&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FromBinderNonGeneric(void* ptr) noexcept : Zenject::FromBinder(ptr) {
}


  constexpr FromBinderNonGeneric& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FromBinderNonGeneric& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FromBinderNonGeneric& operator=(FromBinderNonGeneric&& o) noexcept = default;
  constexpr FromBinderNonGeneric& operator=(FromBinderNonGeneric const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bindContainer", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "bindStatement", ty: "Zenject::BindStatement", modifiers: "", def_value: None }]
explicit FromBinderNonGeneric(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::BindStatement bindStatement) ;

/// @brief Method .ctor addr 0x2d4d7a8 size 0x30 virtual false final false
 void _ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::BindStatement bindStatement) ;

/// @brief Method FromFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TConcrete,typename TFactory>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromFactory() ;

/// @brief Method FromIFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromIFactory(System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TContract>>> factoryBindGenerator) ;

/// @brief Method FromMethod addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TConcrete>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromMethod(System::Func_2<Zenject::InjectContext,TConcrete> method) ;

/// @brief Method FromMethodMultiple addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TConcrete>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromMethodMultiple(System::Func_2<Zenject::InjectContext,System::Collections::Generic::IEnumerable_1<TConcrete>> method) ;

/// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj,typename TContract>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveGetter(System::Func_2<TObj,TContract> method) ;

/// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj,typename TContract>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveGetter(::bs_hook::Il2CppWrapperType identifier, System::Func_2<TObj,TContract> method) ;

/// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj,typename TContract>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveGetter(::bs_hook::Il2CppWrapperType identifier, System::Func_2<TObj,TContract> method, Zenject::InjectSources source) ;

/// @brief Method FromResolveAllGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj,typename TContract>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveAllGetter(System::Func_2<TObj,TContract> method) ;

/// @brief Method FromResolveAllGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj,typename TContract>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveAllGetter(::bs_hook::Il2CppWrapperType identifier, System::Func_2<TObj,TContract> method) ;

/// @brief Method FromResolveAllGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj,typename TContract>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveAllGetter(::bs_hook::Il2CppWrapperType identifier, System::Func_2<TObj,TContract> method, Zenject::InjectSources source) ;

/// @brief Method FromInstance addr 0x2d60b60 size 0x4 virtual false final false
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromInstance(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method FromComponentsInChildren addr 0x2d60b64 size 0x14 virtual false final false
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentsInChildren(System::Func_2<UnityEngine::Component,bool> predicate, bool includeInactive) ;

/// @brief Method FromComponentsInChildren addr 0x2d60b78 size 0xc virtual false final false
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentsInChildren(bool excludeSelf, System::Func_2<UnityEngine::Component,bool> predicate, bool includeInactive) ;

/// @brief Method FromComponentsInHierarchy addr 0x2d60b84 size 0x8 virtual false final false
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentsInHierarchy(System::Func_2<UnityEngine::Component,bool> predicate, bool includeInactive) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__1`2
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TConcrete,::cordl_internals::il2cpp_reference_type TFactory>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10857))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10857), inst: 80 })
// CS Name: Zenject.FromBinderNonGeneric::<>c__1`2
class CORDL_TYPE Zenject__FromBinderNonGeneric____c__1_2<TConcrete,TFactory> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Zenject__FromBinderNonGeneric____c__1_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FromBinderNonGeneric____c__1_2", modifiers: " const&", def_value: None }]
constexpr Zenject__FromBinderNonGeneric____c__1_2(Zenject__FromBinderNonGeneric____c__1_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FromBinderNonGeneric____c__1_2", modifiers: "&&", def_value: None }]
constexpr Zenject__FromBinderNonGeneric____c__1_2(Zenject__FromBinderNonGeneric____c__1_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__FromBinderNonGeneric____c__1_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__FromBinderNonGeneric____c__1_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__FromBinderNonGeneric____c__1_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__FromBinderNonGeneric____c__1_2& operator=(Zenject__FromBinderNonGeneric____c__1_2&& o) noexcept = default;
  constexpr Zenject__FromBinderNonGeneric____c__1_2& operator=(Zenject__FromBinderNonGeneric____c__1_2 const& o) noexcept = default;
                


// Fields

static Zenject::Zenject__FromBinderNonGeneric____c__1_2<TConcrete,TFactory> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Zenject::Zenject__FromBinderNonGeneric____c__1_2<TConcrete,TFactory> value) ;

static Zenject::Zenject__FromBinderNonGeneric____c__1_2<TConcrete,TFactory> __get___9() ;

static System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TConcrete>>> __declspec(property(get=__get___9__1_0, put=__set___9__1_0))  __9__1_0;

static void __set___9__1_0(System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TConcrete>>> value) ;

static System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TConcrete>>> __get___9__1_0() ;


// Methods

// Ctor Parameters []
explicit Zenject__FromBinderNonGeneric____c__1_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <FromFactory>b__1_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _FromFactory_b__1_0(Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TConcrete>> x) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Zenject__FromBinderNonGeneric____c__1_2, "Zenject", "FromBinderNonGeneric/<>c__1`2");
NEED_NO_BOX(Zenject::FromBinderNonGeneric);
DEFINE_IL2CPP_ARG_TYPE(Zenject::FromBinderNonGeneric, "Zenject", "FromBinderNonGeneric");
