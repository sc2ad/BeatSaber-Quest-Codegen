#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__FromBinder_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace System {
template<typename T>
class Action_1;
}
namespace Zenject {
class ScopeConcreteIdArgConditionCopyNonLazyBinder;
}
namespace Zenject {
class DiContainer;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace Zenject {
template<typename TValue>
class IFactory_1;
}
namespace Zenject {
template<typename TContract>
class ConcreteBinderGeneric_1;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class BindStatement;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace Zenject {
struct InjectSources;
}
namespace Zenject {
class InjectContext;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
struct Int32Enum;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace UnityEngine {
class Component;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class FromBinderGeneric_1;
}
namespace Zenject {
template<typename TContract,typename TFactory>
class Zenject__FromBinderGeneric_1____c__1_1;
}
namespace Zenject {
template<typename TContract>
class Zenject__FromBinderGeneric_1____c__DisplayClass14_0;
}
namespace Zenject {
template<typename TContract>
class Zenject__FromBinderGeneric_1____c__DisplayClass15_0;
}
namespace Zenject {
template<typename TContract>
class Zenject__FromBinderGeneric_1____c__DisplayClass3_0;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class FromBinderGeneric_1<TContract>;
}
namespace Zenject {
template<>
class FromBinderGeneric_1<System::Int32Enum>;
}
namespace Zenject {
template<>
class FromBinderGeneric_1<float_t>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract,::cordl_internals::il2cpp_reference_type TFactory>
class Zenject__FromBinderGeneric_1____c__1_1<TContract,TFactory>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class Zenject__FromBinderGeneric_1____c__DisplayClass14_0<TContract>;
}
namespace Zenject {
template<>
class Zenject__FromBinderGeneric_1____c__DisplayClass14_0<System::Int32Enum>;
}
namespace Zenject {
template<>
class Zenject__FromBinderGeneric_1____c__DisplayClass14_0<float_t>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class Zenject__FromBinderGeneric_1____c__DisplayClass15_0<TContract>;
}
namespace Zenject {
template<>
class Zenject__FromBinderGeneric_1____c__DisplayClass15_0<System::Int32Enum>;
}
namespace Zenject {
template<>
class Zenject__FromBinderGeneric_1____c__DisplayClass15_0<float_t>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class Zenject__FromBinderGeneric_1____c__DisplayClass3_0<TContract>;
}
namespace Zenject {
template<>
class Zenject__FromBinderGeneric_1____c__DisplayClass3_0<System::Int32Enum>;
}
namespace Zenject {
template<>
class Zenject__FromBinderGeneric_1____c__DisplayClass3_0<float_t>;
}
// Type: ::<>c__1`1
// Type: ::<>c__DisplayClass3_0
// Type: ::<>c__DisplayClass14_0
// Type: ::<>c__DisplayClass15_0
// Type: Zenject::FromBinderGeneric`1
// Type: ::<>c__1`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract,::cordl_internals::il2cpp_reference_type TFactory>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10852))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10852), inst: 80 })
// CS Name: Zenject.FromBinderGeneric`1::<>c__1`1
class CORDL_TYPE Zenject__FromBinderGeneric_1____c__1_1<TContract,TFactory> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Zenject__FromBinderGeneric_1____c__1_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FromBinderGeneric_1____c__1_1", modifiers: " const&", def_value: None }]
constexpr Zenject__FromBinderGeneric_1____c__1_1(Zenject__FromBinderGeneric_1____c__1_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FromBinderGeneric_1____c__1_1", modifiers: "&&", def_value: None }]
constexpr Zenject__FromBinderGeneric_1____c__1_1(Zenject__FromBinderGeneric_1____c__1_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__FromBinderGeneric_1____c__1_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__FromBinderGeneric_1____c__1_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__FromBinderGeneric_1____c__1_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__FromBinderGeneric_1____c__1_1& operator=(Zenject__FromBinderGeneric_1____c__1_1&& o) noexcept = default;
  constexpr Zenject__FromBinderGeneric_1____c__1_1& operator=(Zenject__FromBinderGeneric_1____c__1_1 const& o) noexcept = default;
                


// Fields

static Zenject::Zenject__FromBinderGeneric_1____c__1_1<TContract,TFactory> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Zenject::Zenject__FromBinderGeneric_1____c__1_1<TContract,TFactory> value) ;

static Zenject::Zenject__FromBinderGeneric_1____c__1_1<TContract,TFactory> __get___9() ;

static System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TContract>>> __declspec(property(get=__get___9__1_0, put=__set___9__1_0))  __9__1_0;

static void __set___9__1_0(System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TContract>>> value) ;

static System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TContract>>> __get___9__1_0() ;


// Methods

// Ctor Parameters []
explicit Zenject__FromBinderGeneric_1____c__1_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <FromFactory>b__1_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _FromFactory_b__1_0(Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TContract>> x) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass3_0
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10853))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10853), inst: 2 })
// CS Name: Zenject.FromBinderGeneric`1::<>c__DisplayClass3_0
class CORDL_TYPE Zenject__FromBinderGeneric_1____c__DisplayClass3_0<TContract> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__FromBinderGeneric_1____c__DisplayClass3_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FromBinderGeneric_1____c__DisplayClass3_0", modifiers: " const&", def_value: None }]
constexpr Zenject__FromBinderGeneric_1____c__DisplayClass3_0(Zenject__FromBinderGeneric_1____c__DisplayClass3_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FromBinderGeneric_1____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
constexpr Zenject__FromBinderGeneric_1____c__DisplayClass3_0(Zenject__FromBinderGeneric_1____c__DisplayClass3_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__FromBinderGeneric_1____c__DisplayClass3_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass3_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass3_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass3_0& operator=(Zenject__FromBinderGeneric_1____c__DisplayClass3_0&& o) noexcept = default;
  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass3_0& operator=(Zenject__FromBinderGeneric_1____c__DisplayClass3_0 const& o) noexcept = default;
                


// Fields

 System::Func_1<TContract> __declspec(property(get=__get_method, put=__set_method))  method;

constexpr void __set_method(System::Func_1<TContract> value) ;

constexpr System::Func_1<TContract> __get_method() const;


// Methods

// Ctor Parameters []
explicit Zenject__FromBinderGeneric_1____c__DisplayClass3_0() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <FromMethod>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 TContract _FromMethod_b__0(Zenject::InjectContext ctx) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass3_0
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10853))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10853), inst: 374 })
// CS Name: Zenject.FromBinderGeneric`1::<>c__DisplayClass3_0
class CORDL_TYPE Zenject__FromBinderGeneric_1____c__DisplayClass3_0<float_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__FromBinderGeneric_1____c__DisplayClass3_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FromBinderGeneric_1____c__DisplayClass3_0", modifiers: " const&", def_value: None }]
constexpr Zenject__FromBinderGeneric_1____c__DisplayClass3_0(Zenject__FromBinderGeneric_1____c__DisplayClass3_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FromBinderGeneric_1____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
constexpr Zenject__FromBinderGeneric_1____c__DisplayClass3_0(Zenject__FromBinderGeneric_1____c__DisplayClass3_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__FromBinderGeneric_1____c__DisplayClass3_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass3_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass3_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass3_0& operator=(Zenject__FromBinderGeneric_1____c__DisplayClass3_0&& o) noexcept = default;
  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass3_0& operator=(Zenject__FromBinderGeneric_1____c__DisplayClass3_0 const& o) noexcept = default;
                


// Fields

 System::Func_1<float_t> __declspec(property(get=__get_method, put=__set_method))  method;

constexpr void __set_method(System::Func_1<float_t> value) ;

constexpr System::Func_1<float_t> __get_method() const;


// Methods

// Ctor Parameters []
explicit Zenject__FromBinderGeneric_1____c__DisplayClass3_0() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <FromMethod>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t _FromMethod_b__0(Zenject::InjectContext ctx) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass3_0
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10853))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10853), inst: 4825 })
// CS Name: Zenject.FromBinderGeneric`1::<>c__DisplayClass3_0
class CORDL_TYPE Zenject__FromBinderGeneric_1____c__DisplayClass3_0<System::Int32Enum> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__FromBinderGeneric_1____c__DisplayClass3_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FromBinderGeneric_1____c__DisplayClass3_0", modifiers: " const&", def_value: None }]
constexpr Zenject__FromBinderGeneric_1____c__DisplayClass3_0(Zenject__FromBinderGeneric_1____c__DisplayClass3_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FromBinderGeneric_1____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
constexpr Zenject__FromBinderGeneric_1____c__DisplayClass3_0(Zenject__FromBinderGeneric_1____c__DisplayClass3_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__FromBinderGeneric_1____c__DisplayClass3_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass3_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass3_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass3_0& operator=(Zenject__FromBinderGeneric_1____c__DisplayClass3_0&& o) noexcept = default;
  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass3_0& operator=(Zenject__FromBinderGeneric_1____c__DisplayClass3_0 const& o) noexcept = default;
                


// Fields

 System::Func_1<System::Int32Enum> __declspec(property(get=__get_method, put=__set_method))  method;

constexpr void __set_method(System::Func_1<System::Int32Enum> value) ;

constexpr System::Func_1<System::Int32Enum> __get_method() const;


// Methods

// Ctor Parameters []
explicit Zenject__FromBinderGeneric_1____c__DisplayClass3_0() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <FromMethod>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Int32Enum _FromMethod_b__0(Zenject::InjectContext ctx) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass14_0
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10854))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10854), inst: 2 })
// CS Name: Zenject.FromBinderGeneric`1::<>c__DisplayClass14_0
class CORDL_TYPE Zenject__FromBinderGeneric_1____c__DisplayClass14_0<TContract> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__FromBinderGeneric_1____c__DisplayClass14_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FromBinderGeneric_1____c__DisplayClass14_0", modifiers: " const&", def_value: None }]
constexpr Zenject__FromBinderGeneric_1____c__DisplayClass14_0(Zenject__FromBinderGeneric_1____c__DisplayClass14_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FromBinderGeneric_1____c__DisplayClass14_0", modifiers: "&&", def_value: None }]
constexpr Zenject__FromBinderGeneric_1____c__DisplayClass14_0(Zenject__FromBinderGeneric_1____c__DisplayClass14_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__FromBinderGeneric_1____c__DisplayClass14_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass14_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass14_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass14_0& operator=(Zenject__FromBinderGeneric_1____c__DisplayClass14_0&& o) noexcept = default;
  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass14_0& operator=(Zenject__FromBinderGeneric_1____c__DisplayClass14_0 const& o) noexcept = default;
                


// Fields

 System::Func_2<TContract,bool> __declspec(property(get=__get_predicate, put=__set_predicate))  predicate;

constexpr void __set_predicate(System::Func_2<TContract,bool> value) ;

constexpr System::Func_2<TContract,bool> __get_predicate() const;


// Methods

// Ctor Parameters []
explicit Zenject__FromBinderGeneric_1____c__DisplayClass14_0() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <FromComponentsInChildren>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 bool _FromComponentsInChildren_b__0(UnityEngine::Component component) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass14_0
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10854))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10854), inst: 374 })
// CS Name: Zenject.FromBinderGeneric`1::<>c__DisplayClass14_0
class CORDL_TYPE Zenject__FromBinderGeneric_1____c__DisplayClass14_0<float_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__FromBinderGeneric_1____c__DisplayClass14_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FromBinderGeneric_1____c__DisplayClass14_0", modifiers: " const&", def_value: None }]
constexpr Zenject__FromBinderGeneric_1____c__DisplayClass14_0(Zenject__FromBinderGeneric_1____c__DisplayClass14_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FromBinderGeneric_1____c__DisplayClass14_0", modifiers: "&&", def_value: None }]
constexpr Zenject__FromBinderGeneric_1____c__DisplayClass14_0(Zenject__FromBinderGeneric_1____c__DisplayClass14_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__FromBinderGeneric_1____c__DisplayClass14_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass14_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass14_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass14_0& operator=(Zenject__FromBinderGeneric_1____c__DisplayClass14_0&& o) noexcept = default;
  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass14_0& operator=(Zenject__FromBinderGeneric_1____c__DisplayClass14_0 const& o) noexcept = default;
                


// Fields

 System::Func_2<float_t,bool> __declspec(property(get=__get_predicate, put=__set_predicate))  predicate;

constexpr void __set_predicate(System::Func_2<float_t,bool> value) ;

constexpr System::Func_2<float_t,bool> __get_predicate() const;


// Methods

// Ctor Parameters []
explicit Zenject__FromBinderGeneric_1____c__DisplayClass14_0() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <FromComponentsInChildren>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 bool _FromComponentsInChildren_b__0(UnityEngine::Component component) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass14_0
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10854))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10854), inst: 4825 })
// CS Name: Zenject.FromBinderGeneric`1::<>c__DisplayClass14_0
class CORDL_TYPE Zenject__FromBinderGeneric_1____c__DisplayClass14_0<System::Int32Enum> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__FromBinderGeneric_1____c__DisplayClass14_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FromBinderGeneric_1____c__DisplayClass14_0", modifiers: " const&", def_value: None }]
constexpr Zenject__FromBinderGeneric_1____c__DisplayClass14_0(Zenject__FromBinderGeneric_1____c__DisplayClass14_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FromBinderGeneric_1____c__DisplayClass14_0", modifiers: "&&", def_value: None }]
constexpr Zenject__FromBinderGeneric_1____c__DisplayClass14_0(Zenject__FromBinderGeneric_1____c__DisplayClass14_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__FromBinderGeneric_1____c__DisplayClass14_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass14_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass14_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass14_0& operator=(Zenject__FromBinderGeneric_1____c__DisplayClass14_0&& o) noexcept = default;
  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass14_0& operator=(Zenject__FromBinderGeneric_1____c__DisplayClass14_0 const& o) noexcept = default;
                


// Fields

 System::Func_2<System::Int32Enum,bool> __declspec(property(get=__get_predicate, put=__set_predicate))  predicate;

constexpr void __set_predicate(System::Func_2<System::Int32Enum,bool> value) ;

constexpr System::Func_2<System::Int32Enum,bool> __get_predicate() const;


// Methods

// Ctor Parameters []
explicit Zenject__FromBinderGeneric_1____c__DisplayClass14_0() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <FromComponentsInChildren>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 bool _FromComponentsInChildren_b__0(UnityEngine::Component component) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass15_0
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10855), inst: 2 })
// CS Name: Zenject.FromBinderGeneric`1::<>c__DisplayClass15_0
class CORDL_TYPE Zenject__FromBinderGeneric_1____c__DisplayClass15_0<TContract> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__FromBinderGeneric_1____c__DisplayClass15_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FromBinderGeneric_1____c__DisplayClass15_0", modifiers: " const&", def_value: None }]
constexpr Zenject__FromBinderGeneric_1____c__DisplayClass15_0(Zenject__FromBinderGeneric_1____c__DisplayClass15_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FromBinderGeneric_1____c__DisplayClass15_0", modifiers: "&&", def_value: None }]
constexpr Zenject__FromBinderGeneric_1____c__DisplayClass15_0(Zenject__FromBinderGeneric_1____c__DisplayClass15_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__FromBinderGeneric_1____c__DisplayClass15_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass15_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass15_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass15_0& operator=(Zenject__FromBinderGeneric_1____c__DisplayClass15_0&& o) noexcept = default;
  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass15_0& operator=(Zenject__FromBinderGeneric_1____c__DisplayClass15_0 const& o) noexcept = default;
                


// Fields

 System::Func_2<TContract,bool> __declspec(property(get=__get_predicate, put=__set_predicate))  predicate;

constexpr void __set_predicate(System::Func_2<TContract,bool> value) ;

constexpr System::Func_2<TContract,bool> __get_predicate() const;


// Methods

// Ctor Parameters []
explicit Zenject__FromBinderGeneric_1____c__DisplayClass15_0() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <FromComponentsInHierarchy>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 bool _FromComponentsInHierarchy_b__0(UnityEngine::Component component) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass15_0
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10855), inst: 374 })
// CS Name: Zenject.FromBinderGeneric`1::<>c__DisplayClass15_0
class CORDL_TYPE Zenject__FromBinderGeneric_1____c__DisplayClass15_0<float_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__FromBinderGeneric_1____c__DisplayClass15_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FromBinderGeneric_1____c__DisplayClass15_0", modifiers: " const&", def_value: None }]
constexpr Zenject__FromBinderGeneric_1____c__DisplayClass15_0(Zenject__FromBinderGeneric_1____c__DisplayClass15_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FromBinderGeneric_1____c__DisplayClass15_0", modifiers: "&&", def_value: None }]
constexpr Zenject__FromBinderGeneric_1____c__DisplayClass15_0(Zenject__FromBinderGeneric_1____c__DisplayClass15_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__FromBinderGeneric_1____c__DisplayClass15_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass15_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass15_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass15_0& operator=(Zenject__FromBinderGeneric_1____c__DisplayClass15_0&& o) noexcept = default;
  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass15_0& operator=(Zenject__FromBinderGeneric_1____c__DisplayClass15_0 const& o) noexcept = default;
                


// Fields

 System::Func_2<float_t,bool> __declspec(property(get=__get_predicate, put=__set_predicate))  predicate;

constexpr void __set_predicate(System::Func_2<float_t,bool> value) ;

constexpr System::Func_2<float_t,bool> __get_predicate() const;


// Methods

// Ctor Parameters []
explicit Zenject__FromBinderGeneric_1____c__DisplayClass15_0() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <FromComponentsInHierarchy>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 bool _FromComponentsInHierarchy_b__0(UnityEngine::Component component) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass15_0
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10855), inst: 4825 })
// CS Name: Zenject.FromBinderGeneric`1::<>c__DisplayClass15_0
class CORDL_TYPE Zenject__FromBinderGeneric_1____c__DisplayClass15_0<System::Int32Enum> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__FromBinderGeneric_1____c__DisplayClass15_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FromBinderGeneric_1____c__DisplayClass15_0", modifiers: " const&", def_value: None }]
constexpr Zenject__FromBinderGeneric_1____c__DisplayClass15_0(Zenject__FromBinderGeneric_1____c__DisplayClass15_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FromBinderGeneric_1____c__DisplayClass15_0", modifiers: "&&", def_value: None }]
constexpr Zenject__FromBinderGeneric_1____c__DisplayClass15_0(Zenject__FromBinderGeneric_1____c__DisplayClass15_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__FromBinderGeneric_1____c__DisplayClass15_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass15_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass15_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass15_0& operator=(Zenject__FromBinderGeneric_1____c__DisplayClass15_0&& o) noexcept = default;
  constexpr Zenject__FromBinderGeneric_1____c__DisplayClass15_0& operator=(Zenject__FromBinderGeneric_1____c__DisplayClass15_0 const& o) noexcept = default;
                


// Fields

 System::Func_2<System::Int32Enum,bool> __declspec(property(get=__get_predicate, put=__set_predicate))  predicate;

constexpr void __set_predicate(System::Func_2<System::Int32Enum,bool> value) ;

constexpr System::Func_2<System::Int32Enum,bool> __get_predicate() const;


// Methods

// Ctor Parameters []
explicit Zenject__FromBinderGeneric_1____c__DisplayClass15_0() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <FromComponentsInHierarchy>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 bool _FromComponentsInHierarchy_b__0(UnityEngine::Component component) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::FromBinderGeneric`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10851)), TypeDefinitionIndex(TypeDefinitionIndex(10856))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10856), inst: 2 })
// CS Name: Zenject.FromBinderGeneric`1
class CORDL_TYPE FromBinderGeneric_1<TContract> : public Zenject::FromBinder {
public:
// Declarations
using __c__DisplayClass15_0 = Zenject::Zenject__FromBinderGeneric_1____c__DisplayClass15_0<TContract>;

using __c__DisplayClass14_0 = Zenject::Zenject__FromBinderGeneric_1____c__DisplayClass14_0<TContract>;

using __c__DisplayClass3_0 = Zenject::Zenject__FromBinderGeneric_1____c__DisplayClass3_0<TContract>;

template<typename TFactory>
using __c__1_1 = Zenject::Zenject__FromBinderGeneric_1____c__1_1<TContract, TContract, TFactory>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~FromBinderGeneric_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "FromBinderGeneric_1", modifiers: " const&", def_value: None }]
constexpr FromBinderGeneric_1(FromBinderGeneric_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FromBinderGeneric_1", modifiers: "&&", def_value: None }]
constexpr FromBinderGeneric_1(FromBinderGeneric_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FromBinderGeneric_1(void* ptr) noexcept : Zenject::FromBinder(ptr) {
}


  constexpr FromBinderGeneric_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FromBinderGeneric_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FromBinderGeneric_1& operator=(FromBinderGeneric_1&& o) noexcept = default;
  constexpr FromBinderGeneric_1& operator=(FromBinderGeneric_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bindContainer", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "bindStatement", ty: "Zenject::BindStatement", modifiers: "", def_value: None }]
explicit FromBinderGeneric_1(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::BindStatement bindStatement) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::BindStatement bindStatement) ;

/// @brief Method FromFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFactory>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromFactory() ;

/// @brief Method FromIFactory addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromIFactory(System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TContract>>> factoryBindGenerator) ;

/// @brief Method FromMethod addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromMethod(System::Func_1<TContract> method) ;

/// @brief Method FromMethod addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromMethod(System::Func_2<Zenject::InjectContext,TContract> method) ;

/// @brief Method FromMethodMultiple addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromMethodMultiple(System::Func_2<Zenject::InjectContext,System::Collections::Generic::IEnumerable_1<TContract>> method) ;

/// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveGetter(System::Func_2<TObj,TContract> method) ;

/// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveGetter(::bs_hook::Il2CppWrapperType identifier, System::Func_2<TObj,TContract> method) ;

/// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveGetter(::bs_hook::Il2CppWrapperType identifier, System::Func_2<TObj,TContract> method, Zenject::InjectSources source) ;

/// @brief Method FromResolveAllGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveAllGetter(System::Func_2<TObj,TContract> method) ;

/// @brief Method FromResolveAllGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveAllGetter(::bs_hook::Il2CppWrapperType identifier, System::Func_2<TObj,TContract> method) ;

/// @brief Method FromResolveAllGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveAllGetter(::bs_hook::Il2CppWrapperType identifier, System::Func_2<TObj,TContract> method, Zenject::InjectSources source) ;

/// @brief Method FromInstance addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromInstance(TContract instance) ;

/// @brief Method FromComponentsInChildren addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentsInChildren(System::Func_2<TContract,bool> predicate, bool includeInactive) ;

/// @brief Method FromComponentsInChildren addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentsInChildren(bool excludeSelf, System::Func_2<TContract,bool> predicate, bool includeInactive) ;

/// @brief Method FromComponentsInHierarchy addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentsInHierarchy(System::Func_2<TContract,bool> predicate, bool includeInactive) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::FromBinderGeneric`1
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10851)), TypeDefinitionIndex(TypeDefinitionIndex(10856))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10856), inst: 374 })
// CS Name: Zenject.FromBinderGeneric`1
class CORDL_TYPE FromBinderGeneric_1<float_t> : public Zenject::FromBinder {
public:
// Declarations
using __c__DisplayClass15_0 = Zenject::Zenject__FromBinderGeneric_1____c__DisplayClass15_0<float_t>;

using __c__DisplayClass14_0 = Zenject::Zenject__FromBinderGeneric_1____c__DisplayClass14_0<float_t>;

using __c__DisplayClass3_0 = Zenject::Zenject__FromBinderGeneric_1____c__DisplayClass3_0<float_t>;

template<typename TFactory>
using __c__1_1 = Zenject::Zenject__FromBinderGeneric_1____c__1_1<float_t, TContract, TFactory>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~FromBinderGeneric_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "FromBinderGeneric_1", modifiers: " const&", def_value: None }]
constexpr FromBinderGeneric_1(FromBinderGeneric_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FromBinderGeneric_1", modifiers: "&&", def_value: None }]
constexpr FromBinderGeneric_1(FromBinderGeneric_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FromBinderGeneric_1(void* ptr) noexcept : Zenject::FromBinder(ptr) {
}


  constexpr FromBinderGeneric_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FromBinderGeneric_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FromBinderGeneric_1& operator=(FromBinderGeneric_1&& o) noexcept = default;
  constexpr FromBinderGeneric_1& operator=(FromBinderGeneric_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bindContainer", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "bindStatement", ty: "Zenject::BindStatement", modifiers: "", def_value: None }]
explicit FromBinderGeneric_1(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::BindStatement bindStatement) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::BindStatement bindStatement) ;

/// @brief Method FromFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFactory>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromFactory() ;

/// @brief Method FromIFactory addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromIFactory(System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<float_t>>> factoryBindGenerator) ;

/// @brief Method FromMethod addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromMethod(System::Func_1<float_t> method) ;

/// @brief Method FromMethod addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromMethod(System::Func_2<Zenject::InjectContext,float_t> method) ;

/// @brief Method FromMethodMultiple addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromMethodMultiple(System::Func_2<Zenject::InjectContext,System::Collections::Generic::IEnumerable_1<float_t>> method) ;

/// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveGetter(System::Func_2<TObj,float_t> method) ;

/// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveGetter(::bs_hook::Il2CppWrapperType identifier, System::Func_2<TObj,float_t> method) ;

/// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveGetter(::bs_hook::Il2CppWrapperType identifier, System::Func_2<TObj,float_t> method, Zenject::InjectSources source) ;

/// @brief Method FromResolveAllGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveAllGetter(System::Func_2<TObj,float_t> method) ;

/// @brief Method FromResolveAllGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveAllGetter(::bs_hook::Il2CppWrapperType identifier, System::Func_2<TObj,float_t> method) ;

/// @brief Method FromResolveAllGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveAllGetter(::bs_hook::Il2CppWrapperType identifier, System::Func_2<TObj,float_t> method, Zenject::InjectSources source) ;

/// @brief Method FromInstance addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromInstance(float_t instance) ;

/// @brief Method FromComponentsInChildren addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentsInChildren(System::Func_2<float_t,bool> predicate, bool includeInactive) ;

/// @brief Method FromComponentsInChildren addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentsInChildren(bool excludeSelf, System::Func_2<float_t,bool> predicate, bool includeInactive) ;

/// @brief Method FromComponentsInHierarchy addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentsInHierarchy(System::Func_2<float_t,bool> predicate, bool includeInactive) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::FromBinderGeneric`1
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10856)), TypeDefinitionIndex(TypeDefinitionIndex(10851))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10856), inst: 4825 })
// CS Name: Zenject.FromBinderGeneric`1
class CORDL_TYPE FromBinderGeneric_1<System::Int32Enum> : public Zenject::FromBinder {
public:
// Declarations
using __c__DisplayClass15_0 = Zenject::Zenject__FromBinderGeneric_1____c__DisplayClass15_0<System::Int32Enum>;

using __c__DisplayClass14_0 = Zenject::Zenject__FromBinderGeneric_1____c__DisplayClass14_0<System::Int32Enum>;

using __c__DisplayClass3_0 = Zenject::Zenject__FromBinderGeneric_1____c__DisplayClass3_0<System::Int32Enum>;

template<typename TFactory>
using __c__1_1 = Zenject::Zenject__FromBinderGeneric_1____c__1_1<System::Int32Enum, TContract, TFactory>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~FromBinderGeneric_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "FromBinderGeneric_1", modifiers: " const&", def_value: None }]
constexpr FromBinderGeneric_1(FromBinderGeneric_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FromBinderGeneric_1", modifiers: "&&", def_value: None }]
constexpr FromBinderGeneric_1(FromBinderGeneric_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FromBinderGeneric_1(void* ptr) noexcept : Zenject::FromBinder(ptr) {
}


  constexpr FromBinderGeneric_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FromBinderGeneric_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FromBinderGeneric_1& operator=(FromBinderGeneric_1&& o) noexcept = default;
  constexpr FromBinderGeneric_1& operator=(FromBinderGeneric_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bindContainer", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "bindStatement", ty: "Zenject::BindStatement", modifiers: "", def_value: None }]
explicit FromBinderGeneric_1(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::BindStatement bindStatement) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::BindStatement bindStatement) ;

/// @brief Method FromFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFactory>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromFactory() ;

/// @brief Method FromIFactory addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromIFactory(System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<System::Int32Enum>>> factoryBindGenerator) ;

/// @brief Method FromMethod addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromMethod(System::Func_1<System::Int32Enum> method) ;

/// @brief Method FromMethod addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromMethod(System::Func_2<Zenject::InjectContext,System::Int32Enum> method) ;

/// @brief Method FromMethodMultiple addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromMethodMultiple(System::Func_2<Zenject::InjectContext,System::Collections::Generic::IEnumerable_1<System::Int32Enum>> method) ;

/// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveGetter(System::Func_2<TObj,System::Int32Enum> method) ;

/// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveGetter(::bs_hook::Il2CppWrapperType identifier, System::Func_2<TObj,System::Int32Enum> method) ;

/// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveGetter(::bs_hook::Il2CppWrapperType identifier, System::Func_2<TObj,System::Int32Enum> method, Zenject::InjectSources source) ;

/// @brief Method FromResolveAllGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveAllGetter(System::Func_2<TObj,System::Int32Enum> method) ;

/// @brief Method FromResolveAllGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveAllGetter(::bs_hook::Il2CppWrapperType identifier, System::Func_2<TObj,System::Int32Enum> method) ;

/// @brief Method FromResolveAllGetter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObj>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromResolveAllGetter(::bs_hook::Il2CppWrapperType identifier, System::Func_2<TObj,System::Int32Enum> method, Zenject::InjectSources source) ;

/// @brief Method FromInstance addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromInstance(System::Int32Enum instance) ;

/// @brief Method FromComponentsInChildren addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentsInChildren(System::Func_2<System::Int32Enum,bool> predicate, bool includeInactive) ;

/// @brief Method FromComponentsInChildren addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentsInChildren(bool excludeSelf, System::Func_2<System::Int32Enum,bool> predicate, bool includeInactive) ;

/// @brief Method FromComponentsInHierarchy addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentsInHierarchy(System::Func_2<System::Int32Enum,bool> predicate, bool includeInactive) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FromBinderGeneric_1, "Zenject", "FromBinderGeneric`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Zenject__FromBinderGeneric_1____c__1_1, "Zenject", "FromBinderGeneric`1/<>c__1`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Zenject__FromBinderGeneric_1____c__DisplayClass14_0, "Zenject", "FromBinderGeneric`1/<>c__DisplayClass14_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Zenject__FromBinderGeneric_1____c__DisplayClass15_0, "Zenject", "FromBinderGeneric`1/<>c__DisplayClass15_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Zenject__FromBinderGeneric_1____c__DisplayClass3_0, "Zenject", "FromBinderGeneric`1/<>c__DisplayClass3_0");
