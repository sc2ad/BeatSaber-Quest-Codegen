#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace Zenject {
template<typename TValue>
class IDespawnableMemoryPool_1;
}
namespace Zenject {
class IMemoryPool;
}
namespace System {
class IDisposable;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Zenject {
template<typename TValue>
class StaticMemoryPoolBaseBase_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TValue>
class StaticMemoryPoolBaseBase_1<TValue>;
}
// Type: Zenject::StaticMemoryPoolBaseBase`1
// Type: Zenject::StaticMemoryPoolBaseBase`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11026))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11026), inst: 2 })
// CS Name: Zenject.StaticMemoryPoolBaseBase`1
class CORDL_TYPE StaticMemoryPoolBaseBase_1<TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Zenject::IDespawnableMemoryPool_1<TValue>
constexpr operator  ::Zenject::IDespawnableMemoryPool_1<TValue>() const noexcept;

/// @brief Convert operator to ::Zenject::IMemoryPool
constexpr operator  ::Zenject::IMemoryPool() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~StaticMemoryPoolBaseBase_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPoolBaseBase_1", modifiers: " const&", def_value: None }]
constexpr StaticMemoryPoolBaseBase_1(StaticMemoryPoolBaseBase_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPoolBaseBase_1", modifiers: "&&", def_value: None }]
constexpr StaticMemoryPoolBaseBase_1(StaticMemoryPoolBaseBase_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StaticMemoryPoolBaseBase_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StaticMemoryPoolBaseBase_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StaticMemoryPoolBaseBase_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StaticMemoryPoolBaseBase_1& operator=(StaticMemoryPoolBaseBase_1&& o) noexcept = default;
  constexpr StaticMemoryPoolBaseBase_1& operator=(StaticMemoryPoolBaseBase_1 const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::Stack_1<TValue> __declspec(property(get=__get__stack, put=__set__stack))  _stack;

constexpr void __set__stack(::System::Collections::Generic::Stack_1<TValue> value) ;

constexpr ::System::Collections::Generic::Stack_1<TValue> __get__stack() const;

 ::System::Action_1<TValue> __declspec(property(get=__get__onDespawnedMethod, put=__set__onDespawnedMethod))  _onDespawnedMethod;

constexpr void __set__onDespawnedMethod(::System::Action_1<TValue> value) ;

constexpr ::System::Action_1<TValue> __get__onDespawnedMethod() const;

 int32_t __declspec(property(get=__get__activeCount, put=__set__activeCount))  _activeCount;

constexpr void __set__activeCount(int32_t value) ;

constexpr int32_t __get__activeCount() const;


// Properties

 ::System::Action_1<TValue> __declspec(property(put=set_OnDespawnedMethod))  OnDespawnedMethod;

 int32_t __declspec(property(get=get_NumTotal))  NumTotal;

 int32_t __declspec(property(get=get_NumActive))  NumActive;

 int32_t __declspec(property(get=get_NumInactive))  NumInactive;

 ::System::Type __declspec(property(get=get_ItemType))  ItemType;


// Methods

// Ctor Parameters [CppParam { name: "onDespawnedMethod", ty: "::System::Action_1<TValue>", modifiers: "", def_value: None }]
explicit StaticMemoryPoolBaseBase_1(::System::Action_1<TValue> onDespawnedMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Action_1<TValue> onDespawnedMethod) ;

/// @brief Method set_OnDespawnedMethod addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_OnDespawnedMethod(::System::Action_1<TValue> value) ;

/// @brief Method get_NumTotal addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_NumTotal() ;

/// @brief Method get_NumActive addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_NumActive() ;

/// @brief Method get_NumInactive addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_NumInactive() ;

/// @brief Method get_ItemType addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Type get_ItemType() ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual true final true
 void Resize(int32_t desiredPoolSize) ;

/// @brief Method ResizeInternal addr 0x0 size 0xffffffffffffffff virtual false final false
 void ResizeInternal(int32_t desiredPoolSize) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method ClearActiveCount addr 0x0 size 0xffffffffffffffff virtual false final false
 void ClearActiveCount() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method ShrinkBy addr 0x0 size 0xffffffffffffffff virtual true final true
 void ShrinkBy(int32_t numToRemove) ;

/// @brief Method ExpandBy addr 0x0 size 0xffffffffffffffff virtual true final true
 void ExpandBy(int32_t numToAdd) ;

/// @brief Method SpawnInternal addr 0x0 size 0xffffffffffffffff virtual false final false
 TValue SpawnInternal() ;

/// @brief Method Zenject.IMemoryPool.Despawn addr 0x0 size 0xffffffffffffffff virtual true final true
 void Zenject_IMemoryPool_Despawn(::bs_hook::Il2CppWrapperType item) ;

/// @brief Method Despawn addr 0x0 size 0xffffffffffffffff virtual true final true
 void Despawn(TValue element) ;

/// @brief Method Alloc addr 0x0 size 0xffffffffffffffff virtual true final false
 TValue Alloc() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::StaticMemoryPoolBaseBase_1, "Zenject", "StaticMemoryPoolBaseBase`1");
