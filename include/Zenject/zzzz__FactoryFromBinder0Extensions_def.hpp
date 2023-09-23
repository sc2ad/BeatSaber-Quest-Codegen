#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Zenject {
class ArgConditionCopyNonLazyBinder;
}
namespace Zenject {
template<typename TContract>
class MemoryPoolInitialSizeMaxSizeBinder_1;
}
namespace Zenject {
template<typename TContract>
class FactoryFromBinder_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace Zenject {
template<typename TContract>
class ConcreteBinderGeneric_1;
}
namespace Zenject {
template<typename TValue>
class IFactory_1;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class DiContainer;
}
namespace System {
struct Guid;
}
namespace Zenject {
class IProvider;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class Zenject__FactoryFromBinder0Extensions____c__1_1;
}
namespace Zenject {
template<typename TContract>
class Zenject__FactoryFromBinder0Extensions____c__3_1;
}
namespace Zenject {
template<typename TContract,typename TMemoryPool>
class Zenject__FactoryFromBinder0Extensions____c__5_2;
}
namespace Zenject {
template<typename TContract,typename TMemoryPool>
class Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2;
}
namespace Zenject {
template<typename TContract>
class Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1;
}
namespace Zenject {
class FactoryFromBinder0Extensions;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class Zenject__FactoryFromBinder0Extensions____c__1_1<TContract>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class Zenject__FactoryFromBinder0Extensions____c__3_1<TContract>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract,::cordl_internals::il2cpp_reference_type TMemoryPool>
class Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract,::cordl_internals::il2cpp_reference_type TMemoryPool>
class Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2<TContract,TMemoryPool>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1<TContract>;
}
// Type: ::<>c__DisplayClass0_0`2
// Type: ::<>c__1`1
// Type: ::<>c__3`1
// Type: ::<>c__5`2
// Type: ::<>c__DisplayClass6_0`1
// Type: Zenject::FactoryFromBinder0Extensions
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10664))
// CS Name: Zenject.FactoryFromBinder0Extensions
class CORDL_TYPE FactoryFromBinder0Extensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename TContract>
using __c__DisplayClass6_0_1 = Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1<TContract>;

template<typename TContract,typename TMemoryPool>
using __c__5_2 = Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2<TContract, TMemoryPool>;

template<typename TContract>
using __c__3_1 = Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1<TContract>;

template<typename TContract>
using __c__1_1 = Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1<TContract>;

template<typename TContract,typename TMemoryPool>
using __c__DisplayClass0_0_2 = Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2<TContract, TMemoryPool>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FactoryFromBinder0Extensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder0Extensions", modifiers: " const&", def_value: None }]
constexpr FactoryFromBinder0Extensions(FactoryFromBinder0Extensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder0Extensions", modifiers: "&&", def_value: None }]
constexpr FactoryFromBinder0Extensions(FactoryFromBinder0Extensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FactoryFromBinder0Extensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FactoryFromBinder0Extensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FactoryFromBinder0Extensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FactoryFromBinder0Extensions& operator=(FactoryFromBinder0Extensions&& o) noexcept = default;
  constexpr FactoryFromBinder0Extensions& operator=(FactoryFromBinder0Extensions const& o) noexcept = default;
                


// Methods

/// @brief Method FromPoolableMemoryPool addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract,typename TMemoryPool>
static Zenject::ArgConditionCopyNonLazyBinder FromPoolableMemoryPool(Zenject::FactoryFromBinder_1<TContract> fromBinder, System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> poolBindGenerator) ;

/// @brief Method FromPoolableMemoryPool addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract>
static Zenject::ArgConditionCopyNonLazyBinder FromPoolableMemoryPool(Zenject::FactoryFromBinder_1<TContract> fromBinder) ;

/// @brief Method FromPoolableMemoryPool addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract>
static Zenject::ArgConditionCopyNonLazyBinder FromPoolableMemoryPool(Zenject::FactoryFromBinder_1<TContract> fromBinder, System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> poolBindGenerator) ;

/// @brief Method FromMonoPoolableMemoryPool addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract>
static Zenject::ArgConditionCopyNonLazyBinder FromMonoPoolableMemoryPool(Zenject::FactoryFromBinder_1<TContract> fromBinder) ;

/// @brief Method FromMonoPoolableMemoryPool addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract>
static Zenject::ArgConditionCopyNonLazyBinder FromMonoPoolableMemoryPool(Zenject::FactoryFromBinder_1<TContract> fromBinder, System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> poolBindGenerator) ;

/// @brief Method FromPoolableMemoryPool addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract,typename TMemoryPool>
static Zenject::ArgConditionCopyNonLazyBinder FromPoolableMemoryPool(Zenject::FactoryFromBinder_1<TContract> fromBinder) ;

/// @brief Method FromIFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract>
static Zenject::ArgConditionCopyNonLazyBinder FromIFactory(Zenject::FactoryFromBinder_1<TContract> fromBinder, System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TContract>>> factoryBindGenerator) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass0_0`2
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract,::cordl_internals::il2cpp_reference_type TMemoryPool>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10659))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10659), inst: 80 })
// CS Name: Zenject.FactoryFromBinder0Extensions::<>c__DisplayClass0_0`2
class CORDL_TYPE Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2<TContract,TMemoryPool> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2", modifiers: " const&", def_value: None }]
constexpr Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2(Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2", modifiers: "&&", def_value: None }]
constexpr Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2(Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2& operator=(Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2&& o) noexcept = default;
  constexpr Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2& operator=(Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2 const& o) noexcept = default;
                


// Fields

 System::Guid __declspec(property(get=__get_poolId, put=__set_poolId))  poolId;

constexpr void __set_poolId(System::Guid value) ;

constexpr System::Guid __get_poolId() const;


// Methods

// Ctor Parameters []
explicit Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <FromPoolableMemoryPool>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::IProvider _FromPoolableMemoryPool_b__0(Zenject::DiContainer container) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__1`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10660))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10660), inst: 2 })
// CS Name: Zenject.FactoryFromBinder0Extensions::<>c__1`1
class CORDL_TYPE Zenject__FactoryFromBinder0Extensions____c__1_1<TContract> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Zenject__FactoryFromBinder0Extensions____c__1_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FactoryFromBinder0Extensions____c__1_1", modifiers: " const&", def_value: None }]
constexpr Zenject__FactoryFromBinder0Extensions____c__1_1(Zenject__FactoryFromBinder0Extensions____c__1_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FactoryFromBinder0Extensions____c__1_1", modifiers: "&&", def_value: None }]
constexpr Zenject__FactoryFromBinder0Extensions____c__1_1(Zenject__FactoryFromBinder0Extensions____c__1_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__FactoryFromBinder0Extensions____c__1_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__FactoryFromBinder0Extensions____c__1_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__FactoryFromBinder0Extensions____c__1_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__FactoryFromBinder0Extensions____c__1_1& operator=(Zenject__FactoryFromBinder0Extensions____c__1_1&& o) noexcept = default;
  constexpr Zenject__FactoryFromBinder0Extensions____c__1_1& operator=(Zenject__FactoryFromBinder0Extensions____c__1_1 const& o) noexcept = default;
                


// Fields

static Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1<TContract> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1<TContract> value) ;

static Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1<TContract> __get___9() ;

static System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> __declspec(property(get=__get___9__1_0, put=__set___9__1_0))  __9__1_0;

static void __set___9__1_0(System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> value) ;

static System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> __get___9__1_0() ;


// Methods

// Ctor Parameters []
explicit Zenject__FactoryFromBinder0Extensions____c__1_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <FromPoolableMemoryPool>b__1_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _FromPoolableMemoryPool_b__1_0(Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract> x) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__3`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10661))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10661), inst: 2 })
// CS Name: Zenject.FactoryFromBinder0Extensions::<>c__3`1
class CORDL_TYPE Zenject__FactoryFromBinder0Extensions____c__3_1<TContract> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Zenject__FactoryFromBinder0Extensions____c__3_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FactoryFromBinder0Extensions____c__3_1", modifiers: " const&", def_value: None }]
constexpr Zenject__FactoryFromBinder0Extensions____c__3_1(Zenject__FactoryFromBinder0Extensions____c__3_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FactoryFromBinder0Extensions____c__3_1", modifiers: "&&", def_value: None }]
constexpr Zenject__FactoryFromBinder0Extensions____c__3_1(Zenject__FactoryFromBinder0Extensions____c__3_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__FactoryFromBinder0Extensions____c__3_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__FactoryFromBinder0Extensions____c__3_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__FactoryFromBinder0Extensions____c__3_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__FactoryFromBinder0Extensions____c__3_1& operator=(Zenject__FactoryFromBinder0Extensions____c__3_1&& o) noexcept = default;
  constexpr Zenject__FactoryFromBinder0Extensions____c__3_1& operator=(Zenject__FactoryFromBinder0Extensions____c__3_1 const& o) noexcept = default;
                


// Fields

static Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1<TContract> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1<TContract> value) ;

static Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1<TContract> __get___9() ;

static System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> __declspec(property(get=__get___9__3_0, put=__set___9__3_0))  __9__3_0;

static void __set___9__3_0(System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> value) ;

static System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> __get___9__3_0() ;


// Methods

// Ctor Parameters []
explicit Zenject__FactoryFromBinder0Extensions____c__3_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <FromMonoPoolableMemoryPool>b__3_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _FromMonoPoolableMemoryPool_b__3_0(Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract> x) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__5`2
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract,::cordl_internals::il2cpp_reference_type TMemoryPool>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10662))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10662), inst: 80 })
// CS Name: Zenject.FactoryFromBinder0Extensions::<>c__5`2
class CORDL_TYPE Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Zenject__FactoryFromBinder0Extensions____c__5_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FactoryFromBinder0Extensions____c__5_2", modifiers: " const&", def_value: None }]
constexpr Zenject__FactoryFromBinder0Extensions____c__5_2(Zenject__FactoryFromBinder0Extensions____c__5_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FactoryFromBinder0Extensions____c__5_2", modifiers: "&&", def_value: None }]
constexpr Zenject__FactoryFromBinder0Extensions____c__5_2(Zenject__FactoryFromBinder0Extensions____c__5_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__FactoryFromBinder0Extensions____c__5_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__FactoryFromBinder0Extensions____c__5_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__FactoryFromBinder0Extensions____c__5_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__FactoryFromBinder0Extensions____c__5_2& operator=(Zenject__FactoryFromBinder0Extensions____c__5_2&& o) noexcept = default;
  constexpr Zenject__FactoryFromBinder0Extensions____c__5_2& operator=(Zenject__FactoryFromBinder0Extensions____c__5_2 const& o) noexcept = default;
                


// Fields

static Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool> value) ;

static Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool> __get___9() ;

static System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> __declspec(property(get=__get___9__5_0, put=__set___9__5_0))  __9__5_0;

static void __set___9__5_0(System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> value) ;

static System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> __get___9__5_0() ;


// Methods

// Ctor Parameters []
explicit Zenject__FactoryFromBinder0Extensions____c__5_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <FromPoolableMemoryPool>b__5_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _FromPoolableMemoryPool_b__5_0(Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract> x) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass6_0`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10663))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10663), inst: 2 })
// CS Name: Zenject.FactoryFromBinder0Extensions::<>c__DisplayClass6_0`1
class CORDL_TYPE Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1<TContract> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1", modifiers: " const&", def_value: None }]
constexpr Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1(Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1", modifiers: "&&", def_value: None }]
constexpr Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1(Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1& operator=(Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1&& o) noexcept = default;
  constexpr Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1& operator=(Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1 const& o) noexcept = default;
                


// Fields

 System::Guid __declspec(property(get=__get_factoryId, put=__set_factoryId))  factoryId;

constexpr void __set_factoryId(System::Guid value) ;

constexpr System::Guid __get_factoryId() const;


// Methods

// Ctor Parameters []
explicit Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <FromIFactory>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::IProvider _FromIFactory_b__0(Zenject::DiContainer container) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1, "Zenject", "FactoryFromBinder0Extensions/<>c__1`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1, "Zenject", "FactoryFromBinder0Extensions/<>c__3`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2, "Zenject", "FactoryFromBinder0Extensions/<>c__5`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2, "Zenject", "FactoryFromBinder0Extensions/<>c__DisplayClass0_0`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1, "Zenject", "FactoryFromBinder0Extensions/<>c__DisplayClass6_0`1");
NEED_NO_BOX(Zenject::FactoryFromBinder0Extensions);
DEFINE_IL2CPP_ARG_TYPE(Zenject::FactoryFromBinder0Extensions, "Zenject", "FactoryFromBinder0Extensions");
