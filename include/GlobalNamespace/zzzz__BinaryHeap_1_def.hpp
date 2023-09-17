#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class BinaryHeap_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class BinaryHeap_1<T>;
}
// Type: ::BinaryHeap`1
// Type: ::BinaryHeap`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13753))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13753), inst: 2 })
// CS Name: BinaryHeap`1
class CORDL_TYPE BinaryHeap_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BinaryHeap_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryHeap_1", modifiers: " const&", def_value: None }]
constexpr BinaryHeap_1(BinaryHeap_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryHeap_1", modifiers: "&&", def_value: None }]
constexpr BinaryHeap_1(BinaryHeap_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BinaryHeap_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BinaryHeap_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BinaryHeap_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BinaryHeap_1& operator=(BinaryHeap_1&& o) noexcept = default;
  constexpr BinaryHeap_1& operator=(BinaryHeap_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<T> __declspec(property(get=__get__data, put=__set__data))  _data;

constexpr void __set__data(::ArrayW<T> value) ;

constexpr ::ArrayW<T> __get__data() const;

 int32_t __declspec(property(get=__get__tail, put=__set__tail))  _tail;

constexpr void __set__tail(int32_t value) ;

constexpr int32_t __get__tail() const;


// Methods

// Ctor Parameters []
explicit BinaryHeap_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit BinaryHeap_1(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method Insert addr 0x0 size 0xffffffffffffffff virtual false final false
 void Insert(T item) ;

/// @brief Method RemoveMin addr 0x0 size 0xffffffffffffffff virtual false final false
 bool RemoveMin(ByRef<T> output) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::BinaryHeap_1, "", "BinaryHeap`1");
