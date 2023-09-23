#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Zenject {
class ILateDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Type;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class IMemoryPool;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Zenject {
class PoolCleanupChecker;
}
namespace Zenject {
class Zenject__PoolCleanupChecker____c;
}
// Type: ::<>c
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11040))
// CS Name: Zenject.PoolCleanupChecker::<>c
class CORDL_TYPE Zenject__PoolCleanupChecker____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Zenject__PoolCleanupChecker____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__PoolCleanupChecker____c", modifiers: " const&", def_value: None }]
constexpr Zenject__PoolCleanupChecker____c(Zenject__PoolCleanupChecker____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__PoolCleanupChecker____c", modifiers: "&&", def_value: None }]
constexpr Zenject__PoolCleanupChecker____c(Zenject__PoolCleanupChecker____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__PoolCleanupChecker____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__PoolCleanupChecker____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__PoolCleanupChecker____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__PoolCleanupChecker____c& operator=(Zenject__PoolCleanupChecker____c&& o) noexcept = default;
  constexpr Zenject__PoolCleanupChecker____c& operator=(Zenject__PoolCleanupChecker____c const& o) noexcept = default;
                


// Fields

static Zenject::Zenject__PoolCleanupChecker____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Zenject::Zenject__PoolCleanupChecker____c value) ;

static Zenject::Zenject__PoolCleanupChecker____c __get___9() ;

static System::Func_2<System::Type,bool> __declspec(property(get=__get___9__2_0, put=__set___9__2_0))  __9__2_0;

static void __set___9__2_0(System::Func_2<System::Type,bool> value) ;

static System::Func_2<System::Type,bool> __get___9__2_0() ;


// Methods

// Ctor Parameters []
explicit Zenject__PoolCleanupChecker____c() ;

/// @brief Method .ctor addr 0x2d6ff30 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.ctor>b__2_0 addr 0x2d6ff38 size 0x6c virtual false final false
 bool __ctor_b__2_0(System::Type x) ;

/// @brief Method __zenCreate addr 0x2d6ffa4 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d70000 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::PoolCleanupChecker
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11041))
// CS Name: Zenject.PoolCleanupChecker
class CORDL_TYPE PoolCleanupChecker : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = Zenject::Zenject__PoolCleanupChecker____c;

/// @brief Convert operator to Zenject::ILateDisposable
constexpr operator  Zenject::ILateDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PoolCleanupChecker() = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolCleanupChecker", modifiers: " const&", def_value: None }]
constexpr PoolCleanupChecker(PoolCleanupChecker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolCleanupChecker", modifiers: "&&", def_value: None }]
constexpr PoolCleanupChecker(PoolCleanupChecker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PoolCleanupChecker(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PoolCleanupChecker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PoolCleanupChecker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PoolCleanupChecker& operator=(PoolCleanupChecker&& o) noexcept = default;
  constexpr PoolCleanupChecker& operator=(PoolCleanupChecker const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<Zenject::IMemoryPool> __declspec(property(get=__get__poolFactories, put=__set__poolFactories))  _poolFactories;

constexpr void __set__poolFactories(System::Collections::Generic::List_1<Zenject::IMemoryPool> value) ;

constexpr System::Collections::Generic::List_1<Zenject::IMemoryPool> __get__poolFactories() const;

 System::Collections::Generic::List_1<System::Type> __declspec(property(get=__get__ignoredPools, put=__set__ignoredPools))  _ignoredPools;

constexpr void __set__ignoredPools(System::Collections::Generic::List_1<System::Type> value) ;

constexpr System::Collections::Generic::List_1<System::Type> __get__ignoredPools() const;


// Methods

// Ctor Parameters [CppParam { name: "poolFactories", ty: "System::Collections::Generic::List_1<Zenject::IMemoryPool>", modifiers: "", def_value: None }, CppParam { name: "ignoredPools", ty: "System::Collections::Generic::List_1<System::Type>", modifiers: "", def_value: None }]
explicit PoolCleanupChecker(System::Collections::Generic::List_1<Zenject::IMemoryPool> poolFactories, System::Collections::Generic::List_1<System::Type> ignoredPools) ;

/// @brief Method .ctor addr 0x2d6f5bc size 0x11c virtual false final false
 void _ctor(System::Collections::Generic::List_1<Zenject::IMemoryPool> poolFactories, System::Collections::Generic::List_1<System::Type> ignoredPools) ;

/// @brief Method LateDispose addr 0x2d6f6d8 size 0x3d4 virtual true final true
 void LateDispose() ;

/// @brief Method __zenCreate addr 0x2d6faac size 0x11c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d6fbc8 size 0x304 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::PoolCleanupChecker);
DEFINE_IL2CPP_ARG_TYPE(Zenject::PoolCleanupChecker, "Zenject", "PoolCleanupChecker");
NEED_NO_BOX(Zenject::Zenject__PoolCleanupChecker____c);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__PoolCleanupChecker____c, "Zenject", "PoolCleanupChecker/<>c");
