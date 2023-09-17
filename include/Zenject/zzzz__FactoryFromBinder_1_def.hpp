#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__FactoryFromBinderBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Zenject {
class FactoryBindInfo;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace Zenject {
class ArgConditionCopyNonLazyBinder;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
struct InjectSources;
}
namespace Zenject {
class ConditionCopyNonLazyBinder;
}
namespace Zenject {
template<typename TContract>
class FactorySubContainerBinder_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
template<typename TContract>
class ConcreteBinderGeneric_1;
}
namespace Zenject {
template<typename TValue>
class IFactory_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace Zenject {
class IProvider;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class FactoryFromBinder_1;
}
namespace Zenject {
template<typename TContract>
class ____Zenject__FactoryFromBinder_1____c;
}
namespace Zenject {
template<typename TContract,typename TSubFactory>
class ____Zenject__FactoryFromBinder_1____c__5_1;
}
namespace Zenject {
template<typename TContract,typename TObj>
class ____Zenject__FactoryFromBinder_1____c__DisplayClass3_0_1;
}
namespace Zenject {
template<typename TContract>
class ____Zenject__FactoryFromBinder_1____c__DisplayClass4_0;
}
namespace Zenject {
template<typename TContract>
class ____Zenject__FactoryFromBinder_1____c__DisplayClass8_0;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class FactoryFromBinder_1<TContract>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class ____Zenject__FactoryFromBinder_1____c<TContract>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract,::cordl_internals::il2cpp_reference_type TSubFactory>
class ____Zenject__FactoryFromBinder_1____c__5_1<TContract,TSubFactory>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract,::cordl_internals::il2cpp_reference_type TObj>
class ____Zenject__FactoryFromBinder_1____c__DisplayClass3_0_1<TContract,TObj>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class ____Zenject__FactoryFromBinder_1____c__DisplayClass4_0<TContract>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class ____Zenject__FactoryFromBinder_1____c__DisplayClass8_0<TContract>;
}
// Type: ::<>c__DisplayClass3_0`1
// Type: ::<>c__DisplayClass4_0
// Type: ::<>c__5`1
// Type: ::<>c__DisplayClass8_0
// Type: ::<>c
// Type: Zenject::FactoryFromBinder`1
// Type: ::<>c__DisplayClass3_0`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract,::cordl_internals::il2cpp_reference_type TObj>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10653))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10653), inst: 80 })
// CS Name: Zenject.FactoryFromBinder`1::<>c__DisplayClass3_0`1
class CORDL_TYPE ____Zenject__FactoryFromBinder_1____c__DisplayClass3_0_1<TContract,TObj> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____Zenject__FactoryFromBinder_1____c__DisplayClass3_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__FactoryFromBinder_1____c__DisplayClass3_0_1", modifiers: " const&", def_value: None }]
constexpr ____Zenject__FactoryFromBinder_1____c__DisplayClass3_0_1(____Zenject__FactoryFromBinder_1____c__DisplayClass3_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__FactoryFromBinder_1____c__DisplayClass3_0_1", modifiers: "&&", def_value: None }]
constexpr ____Zenject__FactoryFromBinder_1____c__DisplayClass3_0_1(____Zenject__FactoryFromBinder_1____c__DisplayClass3_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__FactoryFromBinder_1____c__DisplayClass3_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__FactoryFromBinder_1____c__DisplayClass3_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__FactoryFromBinder_1____c__DisplayClass3_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__FactoryFromBinder_1____c__DisplayClass3_0_1& operator=(____Zenject__FactoryFromBinder_1____c__DisplayClass3_0_1&& o) noexcept = default;
  constexpr ____Zenject__FactoryFromBinder_1____c__DisplayClass3_0_1& operator=(____Zenject__FactoryFromBinder_1____c__DisplayClass3_0_1 const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_subIdentifier, put=__set_subIdentifier))  subIdentifier;

constexpr void __set_subIdentifier(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_subIdentifier() const;

 ::System::Func_2<TObj,TContract> __declspec(property(get=__get_method, put=__set_method))  method;

constexpr void __set_method(::System::Func_2<TObj,TContract> value) ;

constexpr ::System::Func_2<TObj,TContract> __get_method() const;

 ::Zenject::InjectSources __declspec(property(get=__get_source, put=__set_source))  source;

constexpr void __set_source(::Zenject::InjectSources value) ;

constexpr ::Zenject::InjectSources __get_source() const;


// Methods

// Ctor Parameters []
explicit ____Zenject__FactoryFromBinder_1____c__DisplayClass3_0_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <FromResolveGetter>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 ::Zenject::IProvider _FromResolveGetter_b__0(::Zenject::DiContainer container) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass4_0
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10654))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10654), inst: 2 })
// CS Name: Zenject.FactoryFromBinder`1::<>c__DisplayClass4_0
class CORDL_TYPE ____Zenject__FactoryFromBinder_1____c__DisplayClass4_0<TContract> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____Zenject__FactoryFromBinder_1____c__DisplayClass4_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__FactoryFromBinder_1____c__DisplayClass4_0", modifiers: " const&", def_value: None }]
constexpr ____Zenject__FactoryFromBinder_1____c__DisplayClass4_0(____Zenject__FactoryFromBinder_1____c__DisplayClass4_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__FactoryFromBinder_1____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
constexpr ____Zenject__FactoryFromBinder_1____c__DisplayClass4_0(____Zenject__FactoryFromBinder_1____c__DisplayClass4_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__FactoryFromBinder_1____c__DisplayClass4_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__FactoryFromBinder_1____c__DisplayClass4_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__FactoryFromBinder_1____c__DisplayClass4_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__FactoryFromBinder_1____c__DisplayClass4_0& operator=(____Zenject__FactoryFromBinder_1____c__DisplayClass4_0&& o) noexcept = default;
  constexpr ____Zenject__FactoryFromBinder_1____c__DisplayClass4_0& operator=(____Zenject__FactoryFromBinder_1____c__DisplayClass4_0 const& o) noexcept = default;
                


// Fields

 ::System::Func_2<::Zenject::DiContainer,TContract> __declspec(property(get=__get_method, put=__set_method))  method;

constexpr void __set_method(::System::Func_2<::Zenject::DiContainer,TContract> value) ;

constexpr ::System::Func_2<::Zenject::DiContainer,TContract> __get_method() const;


// Methods

// Ctor Parameters []
explicit ____Zenject__FactoryFromBinder_1____c__DisplayClass4_0() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <FromMethod>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 ::Zenject::IProvider _FromMethod_b__0(::Zenject::DiContainer container) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__5`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract,::cordl_internals::il2cpp_reference_type TSubFactory>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10655))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10655), inst: 80 })
// CS Name: Zenject.FactoryFromBinder`1::<>c__5`1
class CORDL_TYPE ____Zenject__FactoryFromBinder_1____c__5_1<TContract,TSubFactory> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____Zenject__FactoryFromBinder_1____c__5_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__FactoryFromBinder_1____c__5_1", modifiers: " const&", def_value: None }]
constexpr ____Zenject__FactoryFromBinder_1____c__5_1(____Zenject__FactoryFromBinder_1____c__5_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__FactoryFromBinder_1____c__5_1", modifiers: "&&", def_value: None }]
constexpr ____Zenject__FactoryFromBinder_1____c__5_1(____Zenject__FactoryFromBinder_1____c__5_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__FactoryFromBinder_1____c__5_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__FactoryFromBinder_1____c__5_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__FactoryFromBinder_1____c__5_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__FactoryFromBinder_1____c__5_1& operator=(____Zenject__FactoryFromBinder_1____c__5_1&& o) noexcept = default;
  constexpr ____Zenject__FactoryFromBinder_1____c__5_1& operator=(____Zenject__FactoryFromBinder_1____c__5_1 const& o) noexcept = default;
                


// Fields

static ::Zenject::____Zenject__FactoryFromBinder_1____c__5_1<TContract,TSubFactory> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::Zenject::____Zenject__FactoryFromBinder_1____c__5_1<TContract,TSubFactory> value) ;

static ::Zenject::____Zenject__FactoryFromBinder_1____c__5_1<TContract,TSubFactory> __get___9() ;

static ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>>> __declspec(property(get=__get___9__5_0, put=__set___9__5_0))  __9__5_0;

static void __set___9__5_0(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>>> value) ;

static ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>>> __get___9__5_0() ;


// Methods

// Ctor Parameters []
explicit ____Zenject__FactoryFromBinder_1____c__5_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <FromFactory>b__5_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _FromFactory_b__5_0(::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>> x) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass8_0
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10656))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10656), inst: 2 })
// CS Name: Zenject.FactoryFromBinder`1::<>c__DisplayClass8_0
class CORDL_TYPE ____Zenject__FactoryFromBinder_1____c__DisplayClass8_0<TContract> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____Zenject__FactoryFromBinder_1____c__DisplayClass8_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__FactoryFromBinder_1____c__DisplayClass8_0", modifiers: " const&", def_value: None }]
constexpr ____Zenject__FactoryFromBinder_1____c__DisplayClass8_0(____Zenject__FactoryFromBinder_1____c__DisplayClass8_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__FactoryFromBinder_1____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
constexpr ____Zenject__FactoryFromBinder_1____c__DisplayClass8_0(____Zenject__FactoryFromBinder_1____c__DisplayClass8_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__FactoryFromBinder_1____c__DisplayClass8_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__FactoryFromBinder_1____c__DisplayClass8_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__FactoryFromBinder_1____c__DisplayClass8_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__FactoryFromBinder_1____c__DisplayClass8_0& operator=(____Zenject__FactoryFromBinder_1____c__DisplayClass8_0&& o) noexcept = default;
  constexpr ____Zenject__FactoryFromBinder_1____c__DisplayClass8_0& operator=(____Zenject__FactoryFromBinder_1____c__DisplayClass8_0 const& o) noexcept = default;
                


// Fields

 ::Zenject::FactoryFromBinder_1<TContract> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::Zenject::FactoryFromBinder_1<TContract> value) ;

constexpr ::Zenject::FactoryFromBinder_1<TContract> __get___4__this() const;

 bool __declspec(property(get=__get_includeInactive, put=__set_includeInactive))  includeInactive;

constexpr void __set_includeInactive(bool value) ;

constexpr bool __get_includeInactive() const;

 ::System::Func_2<::UnityEngine::GameObject,TContract> __declspec(property(get=__get___9__1, put=__set___9__1))  __9__1;

constexpr void __set___9__1(::System::Func_2<::UnityEngine::GameObject,TContract> value) ;

constexpr ::System::Func_2<::UnityEngine::GameObject,TContract> __get___9__1() const;


// Methods

// Ctor Parameters []
explicit ____Zenject__FactoryFromBinder_1____c__DisplayClass8_0() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <FromComponentInHierarchy>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 TContract _FromComponentInHierarchy_b__0(::Zenject::DiContainer _) ;

/// @brief Method <FromComponentInHierarchy>b__1 addr 0x0 size 0xffffffffffffffff virtual false final false
 TContract _FromComponentInHierarchy_b__1(::UnityEngine::GameObject x) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10657))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10657), inst: 2 })
// CS Name: Zenject.FactoryFromBinder`1::<>c
class CORDL_TYPE ____Zenject__FactoryFromBinder_1____c<TContract> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____Zenject__FactoryFromBinder_1____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__FactoryFromBinder_1____c", modifiers: " const&", def_value: None }]
constexpr ____Zenject__FactoryFromBinder_1____c(____Zenject__FactoryFromBinder_1____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__FactoryFromBinder_1____c", modifiers: "&&", def_value: None }]
constexpr ____Zenject__FactoryFromBinder_1____c(____Zenject__FactoryFromBinder_1____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__FactoryFromBinder_1____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__FactoryFromBinder_1____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__FactoryFromBinder_1____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__FactoryFromBinder_1____c& operator=(____Zenject__FactoryFromBinder_1____c&& o) noexcept = default;
  constexpr ____Zenject__FactoryFromBinder_1____c& operator=(____Zenject__FactoryFromBinder_1____c const& o) noexcept = default;
                


// Fields

static ::Zenject::____Zenject__FactoryFromBinder_1____c<TContract> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::Zenject::____Zenject__FactoryFromBinder_1____c<TContract> value) ;

static ::Zenject::____Zenject__FactoryFromBinder_1____c<TContract> __get___9() ;

static ::System::Func_2<TContract,bool> __declspec(property(get=__get___9__8_2, put=__set___9__8_2))  __9__8_2;

static void __set___9__8_2(::System::Func_2<TContract,bool> value) ;

static ::System::Func_2<TContract,bool> __get___9__8_2() ;


// Methods

// Ctor Parameters []
explicit ____Zenject__FactoryFromBinder_1____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <FromComponentInHierarchy>b__8_2 addr 0x0 size 0xffffffffffffffff virtual false final false
 bool _FromComponentInHierarchy_b__8_2(TContract x) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::FactoryFromBinder`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10658)), TypeDefinitionIndex(TypeDefinitionIndex(10788))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10658), inst: 2 })
// CS Name: Zenject.FactoryFromBinder`1
class CORDL_TYPE FactoryFromBinder_1<TContract> : public ::Zenject::FactoryFromBinderBase {
public:
// Declarations
using __c = ::Zenject::____Zenject__FactoryFromBinder_1____c<TContract>;

using __c__DisplayClass8_0 = ::Zenject::____Zenject__FactoryFromBinder_1____c__DisplayClass8_0<TContract>;

template<typename TSubFactory>
using __c__5_1 = ::Zenject::____Zenject__FactoryFromBinder_1____c__5_1<TContract, TContract, TSubFactory>;

using __c__DisplayClass4_0 = ::Zenject::____Zenject__FactoryFromBinder_1____c__DisplayClass4_0<TContract>;

template<typename TObj>
using __c__DisplayClass3_0_1 = ::Zenject::____Zenject__FactoryFromBinder_1____c__DisplayClass3_0_1<TContract, TContract, TObj>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~FactoryFromBinder_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_1", modifiers: " const&", def_value: None }]
constexpr FactoryFromBinder_1(FactoryFromBinder_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_1", modifiers: "&&", def_value: None }]
constexpr FactoryFromBinder_1(FactoryFromBinder_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FactoryFromBinder_1(void* ptr) noexcept : ::Zenject::FactoryFromBinderBase(ptr) {
}


  constexpr FactoryFromBinder_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FactoryFromBinder_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FactoryFromBinder_1& operator=(FactoryFromBinder_1&& o) noexcept = default;
  constexpr FactoryFromBinder_1& operator=(FactoryFromBinder_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "::Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "::Zenject::FactoryBindInfo", modifiers: "", def_value: None }]
explicit FactoryFromBinder_1(::Zenject::DiContainer container, ::Zenject::BindInfo bindInfo, ::Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::Zenject::DiContainer container, ::Zenject::BindInfo bindInfo, ::Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
 ::Zenject::ConditionCopyNonLazyBinder FromResolveGetter(::System::Func_2<TObj,TContract> method) ;

/// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
 ::Zenject::ConditionCopyNonLazyBinder FromResolveGetter(::bs_hook::Il2CppWrapperType subIdentifier, ::System::Func_2<TObj,TContract> method) ;

/// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
 ::Zenject::ConditionCopyNonLazyBinder FromResolveGetter(::bs_hook::Il2CppWrapperType subIdentifier, ::System::Func_2<TObj,TContract> method, ::Zenject::InjectSources source) ;

/// @brief Method FromMethod addr 0x0 size 0xffffffffffffffff virtual false final false
 ::Zenject::ConditionCopyNonLazyBinder FromMethod(::System::Func_2<::Zenject::DiContainer,TContract> method) ;

/// @brief Method FromFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSubFactory>
 ::Zenject::ArgConditionCopyNonLazyBinder FromFactory() ;

/// @brief Method FromSubContainerResolve addr 0x0 size 0xffffffffffffffff virtual false final false
 ::Zenject::FactorySubContainerBinder_1<TContract> FromSubContainerResolve() ;

/// @brief Method FromSubContainerResolve addr 0x0 size 0xffffffffffffffff virtual false final false
 ::Zenject::FactorySubContainerBinder_1<TContract> FromSubContainerResolve(::bs_hook::Il2CppWrapperType subIdentifier) ;

/// @brief Method FromComponentInHierarchy addr 0x0 size 0xffffffffffffffff virtual false final false
 ::Zenject::ConditionCopyNonLazyBinder FromComponentInHierarchy(bool includeInactive) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryFromBinder_1, "Zenject", "FactoryFromBinder`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::____Zenject__FactoryFromBinder_1____c, "Zenject", "FactoryFromBinder`1/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::____Zenject__FactoryFromBinder_1____c__5_1, "Zenject", "FactoryFromBinder`1/<>c__5`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::____Zenject__FactoryFromBinder_1____c__DisplayClass3_0_1, "Zenject", "FactoryFromBinder`1/<>c__DisplayClass3_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::____Zenject__FactoryFromBinder_1____c__DisplayClass4_0, "Zenject", "FactoryFromBinder`1/<>c__DisplayClass4_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::____Zenject__FactoryFromBinder_1____c__DisplayClass8_0, "Zenject", "FactoryFromBinder`1/<>c__DisplayClass8_0");
