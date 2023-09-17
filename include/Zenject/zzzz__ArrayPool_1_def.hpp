#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__StaticMemoryPoolBaseBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Zenject {
template<typename T>
class ArrayPool_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type T>
class ArrayPool_1<T>;
}
// Type: Zenject::ArrayPool`1
// Type: Zenject::ArrayPool`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11036)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11026), inst: 2701 }), TypeDefinitionIndex(TypeDefinitionIndex(11026))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11036), inst: 2 })
// CS Name: Zenject.ArrayPool`1
class CORDL_TYPE ArrayPool_1<T> : public ::Zenject::StaticMemoryPoolBaseBase_1<::ArrayW<T>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ArrayPool_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPool_1", modifiers: " const&", def_value: None }]
constexpr ArrayPool_1(ArrayPool_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPool_1", modifiers: "&&", def_value: None }]
constexpr ArrayPool_1(ArrayPool_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ArrayPool_1(void* ptr) noexcept : ::Zenject::StaticMemoryPoolBaseBase_1<::ArrayW<T>>(ptr) {
}


  constexpr ArrayPool_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ArrayPool_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ArrayPool_1& operator=(ArrayPool_1&& o) noexcept = default;
  constexpr ArrayPool_1& operator=(ArrayPool_1 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__length, put=__set__length))  _length;

constexpr void __set__length(int32_t value) ;

constexpr int32_t __get__length() const;

static ::System::Collections::Generic::Dictionary_2<int32_t,::Zenject::ArrayPool_1<T>> __declspec(property(get=__get__pools, put=__set__pools))  _pools;

static void __set__pools(::System::Collections::Generic::Dictionary_2<int32_t,::Zenject::ArrayPool_1<T>> value) ;

static ::System::Collections::Generic::Dictionary_2<int32_t,::Zenject::ArrayPool_1<T>> __get__pools() ;


// Methods

// Ctor Parameters [CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
explicit ArrayPool_1(int32_t length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t length) ;

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual false final false
static void OnDespawned(::ArrayW<T> arr) ;

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<T> Spawn() ;

/// @brief Method Alloc addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<T> Alloc() ;

/// @brief Method GetPool addr 0x0 size 0xffffffffffffffff virtual false final false
static ::Zenject::ArrayPool_1<T> GetPool(int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::ArrayPool_1, "Zenject", "ArrayPool`1");
