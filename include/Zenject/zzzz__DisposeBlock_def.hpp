#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TValue>
class IMemoryPool_6;
}
namespace Zenject {
template<typename TValue>
class IDespawnableMemoryPool_1;
}
namespace Zenject {
template<typename TValue>
class StaticMemoryPool_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TParam7,typename TValue>
class IMemoryPool_8;
}
namespace Zenject {
template<typename TValue>
class IMemoryPool_1;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TValue>
class IMemoryPool_3;
}
namespace System {
class IDisposable;
}
namespace Zenject {
template<typename TParam1,typename TValue>
class IMemoryPool_2;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TValue>
class IMemoryPool_4;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TValue>
class IMemoryPool_5;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TValue>
class IMemoryPool_7;
}
namespace Zenject {
class IMemoryPool;
}
// Forward declare root types
namespace Zenject {
class DisposeBlock;
}
namespace Zenject {
struct Zenject__DisposeBlock__SpawnedObjectPoolPair;
}
// Type: ::SpawnedObjectPoolPair
namespace Zenject {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11291))
// CS Name: Zenject.DisposeBlock::SpawnedObjectPoolPair
struct CORDL_TYPE Zenject__DisposeBlock__SpawnedObjectPoolPair : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Pool", ty: "Zenject::IMemoryPool", modifiers: "", def_value: None }, CppParam { name: "Object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
constexpr Zenject__DisposeBlock__SpawnedObjectPoolPair(Zenject::IMemoryPool Pool, ::bs_hook::Il2CppWrapperType Object) noexcept;


                    constexpr Zenject__DisposeBlock__SpawnedObjectPoolPair(Zenject__DisposeBlock__SpawnedObjectPoolPair const&) = default;
                    constexpr Zenject__DisposeBlock__SpawnedObjectPoolPair(Zenject__DisposeBlock__SpawnedObjectPoolPair&&) = default;
                    constexpr Zenject__DisposeBlock__SpawnedObjectPoolPair& operator=(Zenject__DisposeBlock__SpawnedObjectPoolPair const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Zenject__DisposeBlock__SpawnedObjectPoolPair& operator=(Zenject__DisposeBlock__SpawnedObjectPoolPair&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Zenject__DisposeBlock__SpawnedObjectPoolPair(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Zenject::IMemoryPool __declspec(property(get=__get_Pool, put=__set_Pool))  Pool;

constexpr void __set_Pool(Zenject::IMemoryPool value) ;

constexpr Zenject::IMemoryPool __get_Pool() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_Object, put=__set_Object))  Object;

constexpr void __set_Object(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_Object() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::DisposeBlock
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11292))
// CS Name: Zenject.DisposeBlock
class CORDL_TYPE DisposeBlock : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using SpawnedObjectPoolPair = Zenject::Zenject__DisposeBlock__SpawnedObjectPoolPair;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DisposeBlock() = default;

// Ctor Parameters [CppParam { name: "", ty: "DisposeBlock", modifiers: " const&", def_value: None }]
constexpr DisposeBlock(DisposeBlock const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DisposeBlock", modifiers: "&&", def_value: None }]
constexpr DisposeBlock(DisposeBlock&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DisposeBlock(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DisposeBlock& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DisposeBlock& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DisposeBlock& operator=(DisposeBlock&& o) noexcept = default;
  constexpr DisposeBlock& operator=(DisposeBlock const& o) noexcept = default;
                


// Fields

static Zenject::StaticMemoryPool_1<Zenject::DisposeBlock> __declspec(property(get=__get__pool, put=__set__pool))  _pool;

static void __set__pool(Zenject::StaticMemoryPool_1<Zenject::DisposeBlock> value) ;

static Zenject::StaticMemoryPool_1<Zenject::DisposeBlock> __get__pool() ;

 System::Collections::Generic::List_1<System::IDisposable> __declspec(property(get=__get__disposables, put=__set__disposables))  _disposables;

constexpr void __set__disposables(System::Collections::Generic::List_1<System::IDisposable> value) ;

constexpr System::Collections::Generic::List_1<System::IDisposable> __get__disposables() const;

 System::Collections::Generic::List_1<Zenject::Zenject__DisposeBlock__SpawnedObjectPoolPair> __declspec(property(get=__get__objectPoolPairs, put=__set__objectPoolPairs))  _objectPoolPairs;

constexpr void __set__objectPoolPairs(System::Collections::Generic::List_1<Zenject::Zenject__DisposeBlock__SpawnedObjectPoolPair> value) ;

constexpr System::Collections::Generic::List_1<Zenject::Zenject__DisposeBlock__SpawnedObjectPoolPair> __get__objectPoolPairs() const;


// Methods

/// @brief Method OnSpawned addr 0x2da4384 size 0x2c virtual false final false
static void OnSpawned(Zenject::DisposeBlock that) ;

/// @brief Method OnDespawned addr 0x2da43b0 size 0x360 virtual false final false
static void OnDespawned(Zenject::DisposeBlock that) ;

/// @brief Method LazyInitializeDisposableList addr 0x2da4710 size 0xf4 virtual false final false
 void LazyInitializeDisposableList() ;

/// @brief Method AddRange addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void AddRange(System::Collections::Generic::IList_1<T> disposables) ;

/// @brief Method Add addr 0x2da4804 size 0xe8 virtual false final false
 void Add(System::IDisposable disposable) ;

/// @brief Method Remove addr 0x2da48ec size 0x64 virtual false final false
 void Remove(System::IDisposable disposable) ;

/// @brief Method StoreSpawnedObject addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void StoreSpawnedObject(T obj, Zenject::IDespawnableMemoryPool_1<T> pool) ;

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T Spawn(Zenject::IMemoryPool_1<T> pool) ;

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue,typename TParam1>
 TValue Spawn(Zenject::IMemoryPool_2<TParam1,TValue> pool, TParam1 p1) ;

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue,typename TParam1,typename TParam2>
 TValue Spawn(Zenject::IMemoryPool_3<TParam1,TParam2,TValue> pool, TParam1 p1, TParam2 p2) ;

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue,typename TParam1,typename TParam2,typename TParam3>
 TValue Spawn(Zenject::IMemoryPool_4<TParam1,TParam2,TParam3,TValue> pool, TParam1 p1, TParam2 p2, TParam3 p3) ;

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue,typename TParam1,typename TParam2,typename TParam3,typename TParam4>
 TValue Spawn(Zenject::IMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue> pool, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4) ;

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue,typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5>
 TValue Spawn(Zenject::IMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue> pool, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5) ;

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue,typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6>
 TValue Spawn(Zenject::IMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue> pool, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6) ;

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue,typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TParam7>
 TValue Spawn(Zenject::IMemoryPool_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue> pool, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7) ;

/// @brief Method SpawnList addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 System::Collections::Generic::List_1<T> SpawnList(System::Collections::Generic::IEnumerable_1<T> elements) ;

/// @brief Method SpawnList addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 System::Collections::Generic::List_1<T> SpawnList() ;

/// @brief Method Spawn addr 0x2da4950 size 0x78 virtual false final false
static Zenject::DisposeBlock Spawn() ;

/// @brief Method Dispose addr 0x2da49c8 size 0x80 virtual true final true
 void Dispose() ;

// Ctor Parameters []
explicit DisposeBlock() ;

/// @brief Method .ctor addr 0x2da4a48 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::DisposeBlock);
DEFINE_IL2CPP_ARG_TYPE(Zenject::DisposeBlock, "Zenject", "DisposeBlock");
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__DisposeBlock__SpawnedObjectPoolPair, "Zenject", "DisposeBlock/SpawnedObjectPoolPair");
