#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Zenject {
template<typename TContract>
class ConcreteBinderGeneric_1;
}
namespace Zenject {
template<typename TParam1,typename TValue>
class IFactory_2;
}
namespace Zenject {
template<typename TContract>
class MemoryPoolInitialSizeMaxSizeBinder_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace Zenject {
template<typename TParam1,typename TContract>
class FactoryFromBinder_2;
}
namespace Zenject {
class ArgConditionCopyNonLazyBinder;
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
template<typename TParam1,typename TContract>
class ____Zenject__FactoryFromBinder1Extensions____c__1_2;
}
namespace Zenject {
template<typename TParam1,typename TContract>
class ____Zenject__FactoryFromBinder1Extensions____c__3_2;
}
namespace Zenject {
template<typename TParam1,typename TContract,typename TMemoryPool>
class ____Zenject__FactoryFromBinder1Extensions____c__5_3;
}
namespace Zenject {
template<typename TParam1,typename TContract>
class ____Zenject__FactoryFromBinder1Extensions____c__DisplayClass0_0_2;
}
namespace Zenject {
template<typename TParam1,typename TContract,typename TMemoryPool>
class ____Zenject__FactoryFromBinder1Extensions____c__DisplayClass6_0_3;
}
namespace Zenject {
class FactoryFromBinder1Extensions;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TContract>
class ____Zenject__FactoryFromBinder1Extensions____c__1_2<TParam1,TContract>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TContract>
class ____Zenject__FactoryFromBinder1Extensions____c__3_2<TParam1,TContract>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TContract,::cordl_internals::il2cpp_reference_type TMemoryPool>
class ____Zenject__FactoryFromBinder1Extensions____c__5_3<TParam1,TContract,TMemoryPool>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TContract>
class ____Zenject__FactoryFromBinder1Extensions____c__DisplayClass0_0_2<TParam1,TContract>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TContract,::cordl_internals::il2cpp_reference_type TMemoryPool>
class ____Zenject__FactoryFromBinder1Extensions____c__DisplayClass6_0_3<TParam1,TContract,TMemoryPool>;
}
// Type: ::<>c__DisplayClass0_0`2
// Type: ::<>c__1`2
// Type: ::<>c__3`2
// Type: ::<>c__5`3
// Type: ::<>c__DisplayClass6_0`3
// Type: Zenject::FactoryFromBinder1Extensions
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10673))
// CS Name: Zenject.FactoryFromBinder1Extensions
class CORDL_TYPE FactoryFromBinder1Extensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename TParam1,typename TContract,typename TMemoryPool>
using __c__DisplayClass6_0_3 = ::Zenject::____Zenject__FactoryFromBinder1Extensions____c__DisplayClass6_0_3<TParam1, TContract, TMemoryPool>;

template<typename TParam1,typename TContract,typename TMemoryPool>
using __c__5_3 = ::Zenject::____Zenject__FactoryFromBinder1Extensions____c__5_3<TParam1, TContract, TMemoryPool>;

template<typename TParam1,typename TContract>
using __c__3_2 = ::Zenject::____Zenject__FactoryFromBinder1Extensions____c__3_2<TParam1, TContract>;

template<typename TParam1,typename TContract>
using __c__1_2 = ::Zenject::____Zenject__FactoryFromBinder1Extensions____c__1_2<TParam1, TContract>;

template<typename TParam1,typename TContract>
using __c__DisplayClass0_0_2 = ::Zenject::____Zenject__FactoryFromBinder1Extensions____c__DisplayClass0_0_2<TParam1, TContract>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FactoryFromBinder1Extensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder1Extensions", modifiers: " const&", def_value: None }]
constexpr FactoryFromBinder1Extensions(FactoryFromBinder1Extensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder1Extensions", modifiers: "&&", def_value: None }]
constexpr FactoryFromBinder1Extensions(FactoryFromBinder1Extensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FactoryFromBinder1Extensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FactoryFromBinder1Extensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FactoryFromBinder1Extensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FactoryFromBinder1Extensions& operator=(FactoryFromBinder1Extensions&& o) noexcept = default;
  constexpr FactoryFromBinder1Extensions& operator=(FactoryFromBinder1Extensions const& o) noexcept = default;
                


// Methods

/// @brief Method FromIFactory addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TContract>
static ::Zenject::ArgConditionCopyNonLazyBinder FromIFactory(::Zenject::FactoryFromBinder_2<TParam1,TContract> fromBinder, ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_2<TParam1,TContract>>> factoryBindGenerator) ;

/// @brief Method FromPoolableMemoryPool addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TContract>
static ::Zenject::ArgConditionCopyNonLazyBinder FromPoolableMemoryPool(::Zenject::FactoryFromBinder_2<TParam1,TContract> fromBinder) ;

/// @brief Method FromPoolableMemoryPool addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TContract>
static ::Zenject::ArgConditionCopyNonLazyBinder FromPoolableMemoryPool(::Zenject::FactoryFromBinder_2<TParam1,TContract> fromBinder, ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> poolBindGenerator) ;

/// @brief Method FromMonoPoolableMemoryPool addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TContract>
static ::Zenject::ArgConditionCopyNonLazyBinder FromMonoPoolableMemoryPool(::Zenject::FactoryFromBinder_2<TParam1,TContract> fromBinder) ;

/// @brief Method FromMonoPoolableMemoryPool addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TContract>
static ::Zenject::ArgConditionCopyNonLazyBinder FromMonoPoolableMemoryPool(::Zenject::FactoryFromBinder_2<TParam1,TContract> fromBinder, ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> poolBindGenerator) ;

/// @brief Method FromPoolableMemoryPool addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TContract,typename TMemoryPool>
static ::Zenject::ArgConditionCopyNonLazyBinder FromPoolableMemoryPool(::Zenject::FactoryFromBinder_2<TParam1,TContract> fromBinder) ;

/// @brief Method FromPoolableMemoryPool addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TContract,typename TMemoryPool>
static ::Zenject::ArgConditionCopyNonLazyBinder FromPoolableMemoryPool(::Zenject::FactoryFromBinder_2<TParam1,TContract> fromBinder, ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> poolBindGenerator) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass0_0`2
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10668))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10668), inst: 80 })
// CS Name: Zenject.FactoryFromBinder1Extensions::<>c__DisplayClass0_0`2
class CORDL_TYPE ____Zenject__FactoryFromBinder1Extensions____c__DisplayClass0_0_2<TParam1,TContract> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____Zenject__FactoryFromBinder1Extensions____c__DisplayClass0_0_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__FactoryFromBinder1Extensions____c__DisplayClass0_0_2", modifiers: " const&", def_value: None }]
constexpr ____Zenject__FactoryFromBinder1Extensions____c__DisplayClass0_0_2(____Zenject__FactoryFromBinder1Extensions____c__DisplayClass0_0_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__FactoryFromBinder1Extensions____c__DisplayClass0_0_2", modifiers: "&&", def_value: None }]
constexpr ____Zenject__FactoryFromBinder1Extensions____c__DisplayClass0_0_2(____Zenject__FactoryFromBinder1Extensions____c__DisplayClass0_0_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__FactoryFromBinder1Extensions____c__DisplayClass0_0_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__FactoryFromBinder1Extensions____c__DisplayClass0_0_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__FactoryFromBinder1Extensions____c__DisplayClass0_0_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__FactoryFromBinder1Extensions____c__DisplayClass0_0_2& operator=(____Zenject__FactoryFromBinder1Extensions____c__DisplayClass0_0_2&& o) noexcept = default;
  constexpr ____Zenject__FactoryFromBinder1Extensions____c__DisplayClass0_0_2& operator=(____Zenject__FactoryFromBinder1Extensions____c__DisplayClass0_0_2 const& o) noexcept = default;
                


// Fields

 ::System::Guid __declspec(property(get=__get_factoryId, put=__set_factoryId))  factoryId;

constexpr void __set_factoryId(::System::Guid value) ;

constexpr ::System::Guid __get_factoryId() const;


// Methods

// Ctor Parameters []
explicit ____Zenject__FactoryFromBinder1Extensions____c__DisplayClass0_0_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <FromIFactory>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 ::Zenject::IProvider _FromIFactory_b__0(::Zenject::DiContainer container) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__1`2
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10669))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10669), inst: 80 })
// CS Name: Zenject.FactoryFromBinder1Extensions::<>c__1`2
class CORDL_TYPE ____Zenject__FactoryFromBinder1Extensions____c__1_2<TParam1,TContract> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____Zenject__FactoryFromBinder1Extensions____c__1_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__FactoryFromBinder1Extensions____c__1_2", modifiers: " const&", def_value: None }]
constexpr ____Zenject__FactoryFromBinder1Extensions____c__1_2(____Zenject__FactoryFromBinder1Extensions____c__1_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__FactoryFromBinder1Extensions____c__1_2", modifiers: "&&", def_value: None }]
constexpr ____Zenject__FactoryFromBinder1Extensions____c__1_2(____Zenject__FactoryFromBinder1Extensions____c__1_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__FactoryFromBinder1Extensions____c__1_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__FactoryFromBinder1Extensions____c__1_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__FactoryFromBinder1Extensions____c__1_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__FactoryFromBinder1Extensions____c__1_2& operator=(____Zenject__FactoryFromBinder1Extensions____c__1_2&& o) noexcept = default;
  constexpr ____Zenject__FactoryFromBinder1Extensions____c__1_2& operator=(____Zenject__FactoryFromBinder1Extensions____c__1_2 const& o) noexcept = default;
                


// Fields

static ::Zenject::____Zenject__FactoryFromBinder1Extensions____c__1_2<TParam1,TContract> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::Zenject::____Zenject__FactoryFromBinder1Extensions____c__1_2<TParam1,TContract> value) ;

static ::Zenject::____Zenject__FactoryFromBinder1Extensions____c__1_2<TParam1,TContract> __get___9() ;

static ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> __declspec(property(get=__get___9__1_0, put=__set___9__1_0))  __9__1_0;

static void __set___9__1_0(::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> value) ;

static ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> __get___9__1_0() ;


// Methods

// Ctor Parameters []
explicit ____Zenject__FactoryFromBinder1Extensions____c__1_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <FromPoolableMemoryPool>b__1_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _FromPoolableMemoryPool_b__1_0(::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract> x) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__3`2
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10670))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10670), inst: 80 })
// CS Name: Zenject.FactoryFromBinder1Extensions::<>c__3`2
class CORDL_TYPE ____Zenject__FactoryFromBinder1Extensions____c__3_2<TParam1,TContract> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____Zenject__FactoryFromBinder1Extensions____c__3_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__FactoryFromBinder1Extensions____c__3_2", modifiers: " const&", def_value: None }]
constexpr ____Zenject__FactoryFromBinder1Extensions____c__3_2(____Zenject__FactoryFromBinder1Extensions____c__3_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__FactoryFromBinder1Extensions____c__3_2", modifiers: "&&", def_value: None }]
constexpr ____Zenject__FactoryFromBinder1Extensions____c__3_2(____Zenject__FactoryFromBinder1Extensions____c__3_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__FactoryFromBinder1Extensions____c__3_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__FactoryFromBinder1Extensions____c__3_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__FactoryFromBinder1Extensions____c__3_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__FactoryFromBinder1Extensions____c__3_2& operator=(____Zenject__FactoryFromBinder1Extensions____c__3_2&& o) noexcept = default;
  constexpr ____Zenject__FactoryFromBinder1Extensions____c__3_2& operator=(____Zenject__FactoryFromBinder1Extensions____c__3_2 const& o) noexcept = default;
                


// Fields

static ::Zenject::____Zenject__FactoryFromBinder1Extensions____c__3_2<TParam1,TContract> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::Zenject::____Zenject__FactoryFromBinder1Extensions____c__3_2<TParam1,TContract> value) ;

static ::Zenject::____Zenject__FactoryFromBinder1Extensions____c__3_2<TParam1,TContract> __get___9() ;

static ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> __declspec(property(get=__get___9__3_0, put=__set___9__3_0))  __9__3_0;

static void __set___9__3_0(::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> value) ;

static ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> __get___9__3_0() ;


// Methods

// Ctor Parameters []
explicit ____Zenject__FactoryFromBinder1Extensions____c__3_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <FromMonoPoolableMemoryPool>b__3_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _FromMonoPoolableMemoryPool_b__3_0(::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract> x) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__5`3
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TContract,::cordl_internals::il2cpp_reference_type TMemoryPool>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10671))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10671), inst: 5155 })
// CS Name: Zenject.FactoryFromBinder1Extensions::<>c__5`3
class CORDL_TYPE ____Zenject__FactoryFromBinder1Extensions____c__5_3<TParam1,TContract,TMemoryPool> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____Zenject__FactoryFromBinder1Extensions____c__5_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__FactoryFromBinder1Extensions____c__5_3", modifiers: " const&", def_value: None }]
constexpr ____Zenject__FactoryFromBinder1Extensions____c__5_3(____Zenject__FactoryFromBinder1Extensions____c__5_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__FactoryFromBinder1Extensions____c__5_3", modifiers: "&&", def_value: None }]
constexpr ____Zenject__FactoryFromBinder1Extensions____c__5_3(____Zenject__FactoryFromBinder1Extensions____c__5_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__FactoryFromBinder1Extensions____c__5_3(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__FactoryFromBinder1Extensions____c__5_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__FactoryFromBinder1Extensions____c__5_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__FactoryFromBinder1Extensions____c__5_3& operator=(____Zenject__FactoryFromBinder1Extensions____c__5_3&& o) noexcept = default;
  constexpr ____Zenject__FactoryFromBinder1Extensions____c__5_3& operator=(____Zenject__FactoryFromBinder1Extensions____c__5_3 const& o) noexcept = default;
                


// Fields

static ::Zenject::____Zenject__FactoryFromBinder1Extensions____c__5_3<TParam1,TContract,TMemoryPool> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::Zenject::____Zenject__FactoryFromBinder1Extensions____c__5_3<TParam1,TContract,TMemoryPool> value) ;

static ::Zenject::____Zenject__FactoryFromBinder1Extensions____c__5_3<TParam1,TContract,TMemoryPool> __get___9() ;

static ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> __declspec(property(get=__get___9__5_0, put=__set___9__5_0))  __9__5_0;

static void __set___9__5_0(::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> value) ;

static ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> __get___9__5_0() ;


// Methods

// Ctor Parameters []
explicit ____Zenject__FactoryFromBinder1Extensions____c__5_3() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <FromPoolableMemoryPool>b__5_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _FromPoolableMemoryPool_b__5_0(::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract> x) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass6_0`3
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TContract,::cordl_internals::il2cpp_reference_type TMemoryPool>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10672))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10672), inst: 5155 })
// CS Name: Zenject.FactoryFromBinder1Extensions::<>c__DisplayClass6_0`3
class CORDL_TYPE ____Zenject__FactoryFromBinder1Extensions____c__DisplayClass6_0_3<TParam1,TContract,TMemoryPool> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____Zenject__FactoryFromBinder1Extensions____c__DisplayClass6_0_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__FactoryFromBinder1Extensions____c__DisplayClass6_0_3", modifiers: " const&", def_value: None }]
constexpr ____Zenject__FactoryFromBinder1Extensions____c__DisplayClass6_0_3(____Zenject__FactoryFromBinder1Extensions____c__DisplayClass6_0_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__FactoryFromBinder1Extensions____c__DisplayClass6_0_3", modifiers: "&&", def_value: None }]
constexpr ____Zenject__FactoryFromBinder1Extensions____c__DisplayClass6_0_3(____Zenject__FactoryFromBinder1Extensions____c__DisplayClass6_0_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__FactoryFromBinder1Extensions____c__DisplayClass6_0_3(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__FactoryFromBinder1Extensions____c__DisplayClass6_0_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__FactoryFromBinder1Extensions____c__DisplayClass6_0_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__FactoryFromBinder1Extensions____c__DisplayClass6_0_3& operator=(____Zenject__FactoryFromBinder1Extensions____c__DisplayClass6_0_3&& o) noexcept = default;
  constexpr ____Zenject__FactoryFromBinder1Extensions____c__DisplayClass6_0_3& operator=(____Zenject__FactoryFromBinder1Extensions____c__DisplayClass6_0_3 const& o) noexcept = default;
                


// Fields

 ::System::Guid __declspec(property(get=__get_poolId, put=__set_poolId))  poolId;

constexpr void __set_poolId(::System::Guid value) ;

constexpr ::System::Guid __get_poolId() const;


// Methods

// Ctor Parameters []
explicit ____Zenject__FactoryFromBinder1Extensions____c__DisplayClass6_0_3() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <FromPoolableMemoryPool>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 ::Zenject::IProvider _FromPoolableMemoryPool_b__0(::Zenject::DiContainer container) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::____Zenject__FactoryFromBinder1Extensions____c__1_2, "Zenject", "FactoryFromBinder1Extensions/<>c__1`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::____Zenject__FactoryFromBinder1Extensions____c__3_2, "Zenject", "FactoryFromBinder1Extensions/<>c__3`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::____Zenject__FactoryFromBinder1Extensions____c__5_3, "Zenject", "FactoryFromBinder1Extensions/<>c__5`3");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::____Zenject__FactoryFromBinder1Extensions____c__DisplayClass0_0_2, "Zenject", "FactoryFromBinder1Extensions/<>c__DisplayClass0_0`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::____Zenject__FactoryFromBinder1Extensions____c__DisplayClass6_0_3, "Zenject", "FactoryFromBinder1Extensions/<>c__DisplayClass6_0`3");
NEED_NO_BOX(::Zenject::FactoryFromBinder1Extensions);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FactoryFromBinder1Extensions, "Zenject", "FactoryFromBinder1Extensions");
