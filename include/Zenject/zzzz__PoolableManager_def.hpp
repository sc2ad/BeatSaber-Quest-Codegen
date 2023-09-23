#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace ModestTree::Util {
template<typename T1,typename T2>
class ValuePair_2;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class IPoolable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Type;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Zenject {
class PoolableManager;
}
namespace Zenject {
class Zenject__PoolableManager____c;
}
namespace Zenject {
class Zenject__PoolableManager____c__DisplayClass2_0;
}
namespace Zenject {
class Zenject__PoolableManager____c__DisplayClass3_0;
}
namespace Zenject {
struct Zenject__PoolableManager__PoolableInfo;
}
// Type: ::PoolableInfo
namespace Zenject {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11269))
// CS Name: Zenject.PoolableManager::PoolableInfo
struct CORDL_TYPE Zenject__PoolableManager__PoolableInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Poolable", ty: "Zenject::IPoolable", modifiers: "", def_value: None }, CppParam { name: "Priority", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Zenject__PoolableManager__PoolableInfo(Zenject::IPoolable Poolable, int32_t Priority) noexcept;


                    constexpr Zenject__PoolableManager__PoolableInfo(Zenject__PoolableManager__PoolableInfo const&) = default;
                    constexpr Zenject__PoolableManager__PoolableInfo(Zenject__PoolableManager__PoolableInfo&&) = default;
                    constexpr Zenject__PoolableManager__PoolableInfo& operator=(Zenject__PoolableManager__PoolableInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Zenject__PoolableManager__PoolableInfo& operator=(Zenject__PoolableManager__PoolableInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Zenject__PoolableManager__PoolableInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Zenject::IPoolable __declspec(property(get=__get_Poolable, put=__set_Poolable))  Poolable;

constexpr void __set_Poolable(Zenject::IPoolable value) ;

constexpr Zenject::IPoolable __get_Poolable() const;

 int32_t __declspec(property(get=__get_Priority, put=__set_Priority))  Priority;

constexpr void __set_Priority(int32_t value) ;

constexpr int32_t __get_Priority() const;


// Methods

/// @brief Method .ctor addr 0x2d9de14 size 0xc virtual false final false
 void _ctor(Zenject::IPoolable poolable, int32_t priority) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass2_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11270))
// CS Name: Zenject.PoolableManager::<>c__DisplayClass2_0
class CORDL_TYPE Zenject__PoolableManager____c__DisplayClass2_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__PoolableManager____c__DisplayClass2_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__PoolableManager____c__DisplayClass2_0", modifiers: " const&", def_value: None }]
constexpr Zenject__PoolableManager____c__DisplayClass2_0(Zenject__PoolableManager____c__DisplayClass2_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__PoolableManager____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
constexpr Zenject__PoolableManager____c__DisplayClass2_0(Zenject__PoolableManager____c__DisplayClass2_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__PoolableManager____c__DisplayClass2_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__PoolableManager____c__DisplayClass2_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__PoolableManager____c__DisplayClass2_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__PoolableManager____c__DisplayClass2_0& operator=(Zenject__PoolableManager____c__DisplayClass2_0&& o) noexcept = default;
  constexpr Zenject__PoolableManager____c__DisplayClass2_0& operator=(Zenject__PoolableManager____c__DisplayClass2_0 const& o) noexcept = default;
                


// Fields

 Zenject::PoolableManager __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Zenject::PoolableManager value) ;

constexpr Zenject::PoolableManager __get___4__this() const;

 System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>> __declspec(property(get=__get_priorities, put=__set_priorities))  priorities;

constexpr void __set_priorities(System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>> value) ;

constexpr System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>> __get_priorities() const;


// Methods

// Ctor Parameters []
explicit Zenject__PoolableManager____c__DisplayClass2_0() ;

/// @brief Method .ctor addr 0x2d9dbec size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.ctor>b__0 addr 0x2d9e468 size 0x1c virtual false final false
 Zenject::Zenject__PoolableManager__PoolableInfo __ctor_b__0(Zenject::IPoolable x) ;

/// @brief Method __zenCreate addr 0x2d9e484 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d9e4e0 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11271))
// CS Name: Zenject.PoolableManager::<>c
class CORDL_TYPE Zenject__PoolableManager____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Zenject__PoolableManager____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__PoolableManager____c", modifiers: " const&", def_value: None }]
constexpr Zenject__PoolableManager____c(Zenject__PoolableManager____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__PoolableManager____c", modifiers: "&&", def_value: None }]
constexpr Zenject__PoolableManager____c(Zenject__PoolableManager____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__PoolableManager____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__PoolableManager____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__PoolableManager____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__PoolableManager____c& operator=(Zenject__PoolableManager____c&& o) noexcept = default;
  constexpr Zenject__PoolableManager____c& operator=(Zenject__PoolableManager____c const& o) noexcept = default;
                


// Fields

static Zenject::Zenject__PoolableManager____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Zenject::Zenject__PoolableManager____c value) ;

static Zenject::Zenject__PoolableManager____c __get___9() ;

static System::Func_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t> __declspec(property(get=__get___9__2_1, put=__set___9__2_1))  __9__2_1;

static void __set___9__2_1(System::Func_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t> value) ;

static System::Func_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t> __get___9__2_1() ;

static System::Func_2<Zenject::Zenject__PoolableManager__PoolableInfo,Zenject::IPoolable> __declspec(property(get=__get___9__2_2, put=__set___9__2_2))  __9__2_2;

static void __set___9__2_2(System::Func_2<Zenject::Zenject__PoolableManager__PoolableInfo,Zenject::IPoolable> value) ;

static System::Func_2<Zenject::Zenject__PoolableManager__PoolableInfo,Zenject::IPoolable> __get___9__2_2() ;

static System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,System::Nullable_1<int32_t>> __declspec(property(get=__get___9__3_1, put=__set___9__3_1))  __9__3_1;

static void __set___9__3_1(System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,System::Nullable_1<int32_t>> value) ;

static System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,System::Nullable_1<int32_t>> __get___9__3_1() ;


// Methods

// Ctor Parameters []
explicit Zenject__PoolableManager____c() ;

/// @brief Method .ctor addr 0x2d9e704 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.ctor>b__2_1 addr 0x2d9e70c size 0x8 virtual false final false
 int32_t __ctor_b__2_1(Zenject::Zenject__PoolableManager__PoolableInfo x) ;

/// @brief Method <.ctor>b__2_2 addr 0x2d9e714 size 0x8 virtual false final false
 Zenject::IPoolable __ctor_b__2_2(Zenject::Zenject__PoolableManager__PoolableInfo x) ;

/// @brief Method <CreatePoolableInfo>b__3_1 addr 0x2d9e71c size 0x60 virtual false final false
 System::Nullable_1<int32_t> _CreatePoolableInfo_b__3_1(ModestTree::Util::ValuePair_2<System::Type,int32_t> x) ;

/// @brief Method __zenCreate addr 0x2d9e77c size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d9e7d8 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass3_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11272))
// CS Name: Zenject.PoolableManager::<>c__DisplayClass3_0
class CORDL_TYPE Zenject__PoolableManager____c__DisplayClass3_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Zenject__PoolableManager____c__DisplayClass3_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__PoolableManager____c__DisplayClass3_0", modifiers: " const&", def_value: None }]
constexpr Zenject__PoolableManager____c__DisplayClass3_0(Zenject__PoolableManager____c__DisplayClass3_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__PoolableManager____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
constexpr Zenject__PoolableManager____c__DisplayClass3_0(Zenject__PoolableManager____c__DisplayClass3_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__PoolableManager____c__DisplayClass3_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__PoolableManager____c__DisplayClass3_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__PoolableManager____c__DisplayClass3_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__PoolableManager____c__DisplayClass3_0& operator=(Zenject__PoolableManager____c__DisplayClass3_0&& o) noexcept = default;
  constexpr Zenject__PoolableManager____c__DisplayClass3_0& operator=(Zenject__PoolableManager____c__DisplayClass3_0 const& o) noexcept = default;
                


// Fields

 Zenject::IPoolable __declspec(property(get=__get_poolable, put=__set_poolable))  poolable;

constexpr void __set_poolable(Zenject::IPoolable value) ;

constexpr Zenject::IPoolable __get_poolable() const;


// Methods

// Ctor Parameters []
explicit Zenject__PoolableManager____c__DisplayClass3_0() ;

/// @brief Method .ctor addr 0x2d9de0c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <CreatePoolableInfo>b__0 addr 0x2d9e998 size 0x80 virtual false final false
 bool _CreatePoolableInfo_b__0(ModestTree::Util::ValuePair_2<System::Type,int32_t> x) ;

/// @brief Method __zenCreate addr 0x2d9ea18 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d9ea74 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::PoolableManager
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11273))
// CS Name: Zenject.PoolableManager
class CORDL_TYPE PoolableManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass3_0 = Zenject::Zenject__PoolableManager____c__DisplayClass3_0;

using __c = Zenject::Zenject__PoolableManager____c;

using __c__DisplayClass2_0 = Zenject::Zenject__PoolableManager____c__DisplayClass2_0;

using PoolableInfo = Zenject::Zenject__PoolableManager__PoolableInfo;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PoolableManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolableManager", modifiers: " const&", def_value: None }]
constexpr PoolableManager(PoolableManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolableManager", modifiers: "&&", def_value: None }]
constexpr PoolableManager(PoolableManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PoolableManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PoolableManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PoolableManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PoolableManager& operator=(PoolableManager&& o) noexcept = default;
  constexpr PoolableManager& operator=(PoolableManager const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<Zenject::IPoolable> __declspec(property(get=__get__poolables, put=__set__poolables))  _poolables;

constexpr void __set__poolables(System::Collections::Generic::List_1<Zenject::IPoolable> value) ;

constexpr System::Collections::Generic::List_1<Zenject::IPoolable> __get__poolables() const;

 bool __declspec(property(get=__get__isSpawned, put=__set__isSpawned))  _isSpawned;

constexpr void __set__isSpawned(bool value) ;

constexpr bool __get__isSpawned() const;


// Methods

// Ctor Parameters [CppParam { name: "poolables", ty: "System::Collections::Generic::List_1<Zenject::IPoolable>", modifiers: "", def_value: None }, CppParam { name: "priorities", ty: "System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>>", modifiers: "", def_value: None }]
explicit PoolableManager(System::Collections::Generic::List_1<Zenject::IPoolable> poolables, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>> priorities) ;

/// @brief Method .ctor addr 0x2d9d948 size 0x2a4 virtual false final false
 void _ctor(System::Collections::Generic::List_1<Zenject::IPoolable> poolables, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>> priorities) ;

/// @brief Method CreatePoolableInfo addr 0x2d9dbf4 size 0x218 virtual false final false
 Zenject::Zenject__PoolableManager__PoolableInfo CreatePoolableInfo(Zenject::IPoolable poolable, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>> priorities) ;

/// @brief Method TriggerOnSpawned addr 0x2d9de20 size 0x11c virtual false final false
 void TriggerOnSpawned() ;

/// @brief Method TriggerOnDespawned addr 0x2d9df3c size 0x10c virtual false final false
 void TriggerOnDespawned() ;

/// @brief Method __zenCreate addr 0x2d9e048 size 0x11c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d9e164 size 0x304 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::PoolableManager);
DEFINE_IL2CPP_ARG_TYPE(Zenject::PoolableManager, "Zenject", "PoolableManager");
NEED_NO_BOX(Zenject::Zenject__PoolableManager____c);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__PoolableManager____c, "Zenject", "PoolableManager/<>c");
NEED_NO_BOX(Zenject::Zenject__PoolableManager____c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__PoolableManager____c__DisplayClass2_0, "Zenject", "PoolableManager/<>c__DisplayClass2_0");
NEED_NO_BOX(Zenject::Zenject__PoolableManager____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__PoolableManager____c__DisplayClass3_0, "Zenject", "PoolableManager/<>c__DisplayClass3_0");
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__PoolableManager__PoolableInfo, "Zenject", "PoolableManager/PoolableInfo");
