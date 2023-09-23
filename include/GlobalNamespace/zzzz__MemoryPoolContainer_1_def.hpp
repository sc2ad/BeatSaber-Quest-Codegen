#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
template<typename T>
class LazyCopyHashSet_1;
}
namespace Zenject {
template<typename TValue>
class IMemoryPool_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class MemoryPoolContainer_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class MemoryPoolContainer_1<T>;
}
// Type: ::MemoryPoolContainer`1
// Type: ::MemoryPoolContainer`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10549))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10549), inst: 2 })
// CS Name: MemoryPoolContainer`1
class CORDL_TYPE MemoryPoolContainer_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MemoryPoolContainer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPoolContainer_1", modifiers: " const&", def_value: None }]
constexpr MemoryPoolContainer_1(MemoryPoolContainer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPoolContainer_1", modifiers: "&&", def_value: None }]
constexpr MemoryPoolContainer_1(MemoryPoolContainer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemoryPoolContainer_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MemoryPoolContainer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemoryPoolContainer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemoryPoolContainer_1& operator=(MemoryPoolContainer_1&& o) noexcept = default;
  constexpr MemoryPoolContainer_1& operator=(MemoryPoolContainer_1 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::LazyCopyHashSet_1<T> __declspec(property(get=__get__activeItems, put=__set__activeItems))  _activeItems;

constexpr void __set__activeItems(GlobalNamespace::LazyCopyHashSet_1<T> value) ;

constexpr GlobalNamespace::LazyCopyHashSet_1<T> __get__activeItems() const;

 Zenject::IMemoryPool_1<T> __declspec(property(get=__get__memoryPool, put=__set__memoryPool))  _memoryPool;

constexpr void __set__memoryPool(Zenject::IMemoryPool_1<T> value) ;

constexpr Zenject::IMemoryPool_1<T> __get__memoryPool() const;


// Properties

 System::Collections::Generic::List_1<T> __declspec(property(get=get_activeItems))  activeItems;


// Methods

/// @brief Method get_activeItems addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::List_1<T> get_activeItems() ;

// Ctor Parameters [CppParam { name: "memoryPool", ty: "Zenject::IMemoryPool_1<T>", modifiers: "", def_value: None }]
explicit MemoryPoolContainer_1(Zenject::IMemoryPool_1<T> memoryPool) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::IMemoryPool_1<T> memoryPool) ;

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual false final false
 T Spawn() ;

/// @brief Method Despawn addr 0x0 size 0xffffffffffffffff virtual false final false
 void Despawn(T item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::MemoryPoolContainer_1, "", "MemoryPoolContainer`1");
