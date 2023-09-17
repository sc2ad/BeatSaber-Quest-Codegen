#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
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
template<typename T0,typename T1>
class MemoryPoolContainer_2;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T0,::cordl_internals::il2cpp_reference_type T1>
class MemoryPoolContainer_2<T0,T1>;
}
// Type: ::MemoryPoolContainer`2
// Type: ::MemoryPoolContainer`2
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T0,::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10550))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10550), inst: 80 })
// CS Name: MemoryPoolContainer`2
class CORDL_TYPE MemoryPoolContainer_2<T0,T1> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MemoryPoolContainer_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPoolContainer_2", modifiers: " const&", def_value: None }]
constexpr MemoryPoolContainer_2(MemoryPoolContainer_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPoolContainer_2", modifiers: "&&", def_value: None }]
constexpr MemoryPoolContainer_2(MemoryPoolContainer_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemoryPoolContainer_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MemoryPoolContainer_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemoryPoolContainer_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemoryPoolContainer_2& operator=(MemoryPoolContainer_2&& o) noexcept = default;
  constexpr MemoryPoolContainer_2& operator=(MemoryPoolContainer_2 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::LazyCopyHashSet_1<T1> __declspec(property(get=__get__activeItems, put=__set__activeItems))  _activeItems;

constexpr void __set__activeItems(::GlobalNamespace::LazyCopyHashSet_1<T1> value) ;

constexpr ::GlobalNamespace::LazyCopyHashSet_1<T1> __get__activeItems() const;

 ::Zenject::IMemoryPool_1<T0> __declspec(property(get=__get__memoryPool, put=__set__memoryPool))  _memoryPool;

constexpr void __set__memoryPool(::Zenject::IMemoryPool_1<T0> value) ;

constexpr ::Zenject::IMemoryPool_1<T0> __get__memoryPool() const;


// Properties

 ::System::Collections::Generic::List_1<T1> __declspec(property(get=get_activeItems))  activeItems;


// Methods

/// @brief Method get_activeItems addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::List_1<T1> get_activeItems() ;

// Ctor Parameters [CppParam { name: "memoryPool", ty: "::Zenject::IMemoryPool_1<T0>", modifiers: "", def_value: None }]
explicit MemoryPoolContainer_2(::Zenject::IMemoryPool_1<T0> memoryPool) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::Zenject::IMemoryPool_1<T0> memoryPool) ;

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual false final false
 T0 Spawn() ;

/// @brief Method Despawn addr 0x0 size 0xffffffffffffffff virtual false final false
 void Despawn(T0 item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::MemoryPoolContainer_2, "", "MemoryPoolContainer`2");
