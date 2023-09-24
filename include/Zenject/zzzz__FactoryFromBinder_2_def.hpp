#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__FactoryFromBinderBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System {
struct Int32Enum;
}
namespace Zenject {
template<typename TParam1,typename TContract>
class FactorySubContainerBinder_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace Zenject {
template<typename TParam1,typename TContract,typename TSubFactory>
class Zenject__FactoryFromBinder_2____c__2_1;
}
namespace Zenject {
template<typename TParam1,typename TContract>
class Zenject__FactoryFromBinder_2____c__DisplayClass1_0;
}
namespace Zenject {
class ConditionCopyNonLazyBinder;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace System {
template<typename T>
class Action_1;
}
namespace Zenject {
template<typename TParam1,typename TValue>
class IFactory_2;
}
namespace Zenject {
template<typename TContract>
class ConcreteBinderGeneric_1;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class IProvider;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TContract>
class FactoryFromBinder_2;
}
namespace Zenject {
template<typename TParam1,typename TContract,typename TSubFactory>
class Zenject__FactoryFromBinder_2____c__2_1;
}
namespace Zenject {
template<typename TParam1,typename TContract>
class Zenject__FactoryFromBinder_2____c__DisplayClass1_0;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class FactoryFromBinder_2<System::Int32Enum,TContract>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TContract>
class FactoryFromBinder_2<TParam1,TContract>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TContract,::cordl_internals::il2cpp_reference_type TSubFactory>
class Zenject__FactoryFromBinder_2____c__2_1<TParam1,TContract,TSubFactory>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class Zenject__FactoryFromBinder_2____c__DisplayClass1_0<System::Int32Enum,TContract>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TContract>
class Zenject__FactoryFromBinder_2____c__DisplayClass1_0<TParam1,TContract>;
}
// Type: ::<>c__DisplayClass1_0
// Type: ::<>c__2`1
// Type: Zenject::FactoryFromBinder`2
// Type: ::<>c__DisplayClass1_0
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10665))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10665), inst: 1536 })
// CS Name: Zenject.FactoryFromBinder`2::<>c__DisplayClass1_0
class CORDL_TYPE Zenject__FactoryFromBinder_2____c__DisplayClass1_0<System::Int32Enum,TContract> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__FactoryFromBinder_2____c__DisplayClass1_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FactoryFromBinder_2____c__DisplayClass1_0", modifiers: " const&", def_value: None }]
constexpr Zenject__FactoryFromBinder_2____c__DisplayClass1_0(Zenject__FactoryFromBinder_2____c__DisplayClass1_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FactoryFromBinder_2____c__DisplayClass1_0", modifiers: "&&", def_value: None }]
constexpr Zenject__FactoryFromBinder_2____c__DisplayClass1_0(Zenject__FactoryFromBinder_2____c__DisplayClass1_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__FactoryFromBinder_2____c__DisplayClass1_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__FactoryFromBinder_2____c__DisplayClass1_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__FactoryFromBinder_2____c__DisplayClass1_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__FactoryFromBinder_2____c__DisplayClass1_0& operator=(Zenject__FactoryFromBinder_2____c__DisplayClass1_0&& o) noexcept = default;
  constexpr Zenject__FactoryFromBinder_2____c__DisplayClass1_0& operator=(Zenject__FactoryFromBinder_2____c__DisplayClass1_0 const& o) noexcept = default;
                


// Fields

 System::Func_3<Zenject::DiContainer,System::Int32Enum,TContract> __declspec(property(get=__get_method, put=__set_method))  method;

constexpr void __set_method(System::Func_3<Zenject::DiContainer,System::Int32Enum,TContract> value) ;

constexpr System::Func_3<Zenject::DiContainer,System::Int32Enum,TContract> __get_method() const;


// Methods

static Zenject::Zenject__FactoryFromBinder_2____c__DisplayClass1_0<System::Int32Enum,TContract> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <FromMethod>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::IProvider _FromMethod_b__0(Zenject::DiContainer container) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass1_0
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10665))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10665), inst: 80 })
// CS Name: Zenject.FactoryFromBinder`2::<>c__DisplayClass1_0
class CORDL_TYPE Zenject__FactoryFromBinder_2____c__DisplayClass1_0<TParam1,TContract> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__FactoryFromBinder_2____c__DisplayClass1_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FactoryFromBinder_2____c__DisplayClass1_0", modifiers: " const&", def_value: None }]
constexpr Zenject__FactoryFromBinder_2____c__DisplayClass1_0(Zenject__FactoryFromBinder_2____c__DisplayClass1_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FactoryFromBinder_2____c__DisplayClass1_0", modifiers: "&&", def_value: None }]
constexpr Zenject__FactoryFromBinder_2____c__DisplayClass1_0(Zenject__FactoryFromBinder_2____c__DisplayClass1_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__FactoryFromBinder_2____c__DisplayClass1_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__FactoryFromBinder_2____c__DisplayClass1_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__FactoryFromBinder_2____c__DisplayClass1_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__FactoryFromBinder_2____c__DisplayClass1_0& operator=(Zenject__FactoryFromBinder_2____c__DisplayClass1_0&& o) noexcept = default;
  constexpr Zenject__FactoryFromBinder_2____c__DisplayClass1_0& operator=(Zenject__FactoryFromBinder_2____c__DisplayClass1_0 const& o) noexcept = default;
                


// Fields

 System::Func_3<Zenject::DiContainer,TParam1,TContract> __declspec(property(get=__get_method, put=__set_method))  method;

constexpr void __set_method(System::Func_3<Zenject::DiContainer,TParam1,TContract> value) ;

constexpr System::Func_3<Zenject::DiContainer,TParam1,TContract> __get_method() const;


// Methods

static Zenject::Zenject__FactoryFromBinder_2____c__DisplayClass1_0<TParam1,TContract> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <FromMethod>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::IProvider _FromMethod_b__0(Zenject::DiContainer container) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__2`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TContract,::cordl_internals::il2cpp_reference_type TSubFactory>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10666))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10666), inst: 5155 })
// CS Name: Zenject.FactoryFromBinder`2::<>c__2`1
class CORDL_TYPE Zenject__FactoryFromBinder_2____c__2_1<TParam1,TContract,TSubFactory> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Zenject__FactoryFromBinder_2____c__2_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FactoryFromBinder_2____c__2_1", modifiers: " const&", def_value: None }]
constexpr Zenject__FactoryFromBinder_2____c__2_1(Zenject__FactoryFromBinder_2____c__2_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FactoryFromBinder_2____c__2_1", modifiers: "&&", def_value: None }]
constexpr Zenject__FactoryFromBinder_2____c__2_1(Zenject__FactoryFromBinder_2____c__2_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__FactoryFromBinder_2____c__2_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__FactoryFromBinder_2____c__2_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__FactoryFromBinder_2____c__2_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__FactoryFromBinder_2____c__2_1& operator=(Zenject__FactoryFromBinder_2____c__2_1&& o) noexcept = default;
  constexpr Zenject__FactoryFromBinder_2____c__2_1& operator=(Zenject__FactoryFromBinder_2____c__2_1 const& o) noexcept = default;
                


// Fields

static Zenject::Zenject__FactoryFromBinder_2____c__2_1<TParam1,TContract,TSubFactory> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Zenject::Zenject__FactoryFromBinder_2____c__2_1<TParam1,TContract,TSubFactory> value) ;

static Zenject::Zenject__FactoryFromBinder_2____c__2_1<TParam1,TContract,TSubFactory> __get___9() ;

static System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_2<TParam1,TContract>>> __declspec(property(get=__get___9__2_0, put=__set___9__2_0))  __9__2_0;

static void __set___9__2_0(System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_2<TParam1,TContract>>> value) ;

static System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_2<TParam1,TContract>>> __get___9__2_0() ;


// Methods

static Zenject::Zenject__FactoryFromBinder_2____c__2_1<TParam1,TContract,TSubFactory> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <FromFactory>b__2_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _FromFactory_b__2_0(Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_2<TParam1,TContract>> x) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::FactoryFromBinder`2
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10788)), TypeDefinitionIndex(TypeDefinitionIndex(10667))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10667), inst: 1536 })
// CS Name: Zenject.FactoryFromBinder`2
class CORDL_TYPE FactoryFromBinder_2<System::Int32Enum,TContract> : public Zenject::FactoryFromBinderBase {
public:
// Declarations
template<typename TSubFactory>
using __c__2_1 = Zenject::Zenject__FactoryFromBinder_2____c__2_1<System::Int32Enum, TContract, TParam1, TContract, TSubFactory>;

using __c__DisplayClass1_0 = Zenject::Zenject__FactoryFromBinder_2____c__DisplayClass1_0<System::Int32Enum, TContract>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~FactoryFromBinder_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_2", modifiers: " const&", def_value: None }]
constexpr FactoryFromBinder_2(FactoryFromBinder_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_2", modifiers: "&&", def_value: None }]
constexpr FactoryFromBinder_2(FactoryFromBinder_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FactoryFromBinder_2(void* ptr) noexcept : Zenject::FactoryFromBinderBase(ptr) {
}


  constexpr FactoryFromBinder_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FactoryFromBinder_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FactoryFromBinder_2& operator=(FactoryFromBinder_2&& o) noexcept = default;
  constexpr FactoryFromBinder_2& operator=(FactoryFromBinder_2 const& o) noexcept = default;
                


// Methods

static Zenject::FactoryFromBinder_2<System::Int32Enum,TContract> New_ctor(Zenject::DiContainer container, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer container, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method FromMethod addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::ConditionCopyNonLazyBinder FromMethod(System::Func_3<Zenject::DiContainer,System::Int32Enum,TContract> method) ;

/// @brief Method FromFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSubFactory>
 Zenject::ConditionCopyNonLazyBinder FromFactory() ;

/// @brief Method FromSubContainerResolve addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::FactorySubContainerBinder_2<System::Int32Enum,TContract> FromSubContainerResolve() ;

/// @brief Method FromSubContainerResolve addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::FactorySubContainerBinder_2<System::Int32Enum,TContract> FromSubContainerResolve(::bs_hook::Il2CppWrapperType subIdentifier) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::FactoryFromBinder`2
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10667)), TypeDefinitionIndex(TypeDefinitionIndex(10788))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10667), inst: 80 })
// CS Name: Zenject.FactoryFromBinder`2
class CORDL_TYPE FactoryFromBinder_2<TParam1,TContract> : public Zenject::FactoryFromBinderBase {
public:
// Declarations
template<typename TSubFactory>
using __c__2_1 = Zenject::Zenject__FactoryFromBinder_2____c__2_1<TParam1, TContract, TParam1, TContract, TSubFactory>;

using __c__DisplayClass1_0 = Zenject::Zenject__FactoryFromBinder_2____c__DisplayClass1_0<TParam1, TContract>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~FactoryFromBinder_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_2", modifiers: " const&", def_value: None }]
constexpr FactoryFromBinder_2(FactoryFromBinder_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_2", modifiers: "&&", def_value: None }]
constexpr FactoryFromBinder_2(FactoryFromBinder_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FactoryFromBinder_2(void* ptr) noexcept : Zenject::FactoryFromBinderBase(ptr) {
}


  constexpr FactoryFromBinder_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FactoryFromBinder_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FactoryFromBinder_2& operator=(FactoryFromBinder_2&& o) noexcept = default;
  constexpr FactoryFromBinder_2& operator=(FactoryFromBinder_2 const& o) noexcept = default;
                


// Methods

static Zenject::FactoryFromBinder_2<TParam1,TContract> New_ctor(Zenject::DiContainer container, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer container, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method FromMethod addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::ConditionCopyNonLazyBinder FromMethod(System::Func_3<Zenject::DiContainer,TParam1,TContract> method) ;

/// @brief Method FromFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSubFactory>
 Zenject::ConditionCopyNonLazyBinder FromFactory() ;

/// @brief Method FromSubContainerResolve addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::FactorySubContainerBinder_2<TParam1,TContract> FromSubContainerResolve() ;

/// @brief Method FromSubContainerResolve addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::FactorySubContainerBinder_2<TParam1,TContract> FromSubContainerResolve(::bs_hook::Il2CppWrapperType subIdentifier) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryFromBinder_2, "Zenject", "FactoryFromBinder`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Zenject__FactoryFromBinder_2____c__2_1, "Zenject", "FactoryFromBinder`2/<>c__2`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Zenject__FactoryFromBinder_2____c__DisplayClass1_0, "Zenject", "FactoryFromBinder`2/<>c__DisplayClass1_0");
