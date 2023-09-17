#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
struct ArrayBuilder_1;
}
namespace System::Collections::Generic {
template<::cordl_internals::il2cpp_reference_type T>
struct ArrayBuilder_1<T>;
}
// Type: System.Collections.Generic::ArrayBuilder`1
// Type: System.Collections.Generic::ArrayBuilder`1
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(3830))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3830), inst: 2 })
// CS Name: System.Collections.Generic.ArrayBuilder`1
struct CORDL_TYPE ArrayBuilder_1<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_array", ty: "::ArrayW<T>", modifiers: "", def_value: None }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ArrayBuilder_1(::ArrayW<T> _array, int32_t _count) noexcept;


                    constexpr ArrayBuilder_1(ArrayBuilder_1 const&) = default;
                    constexpr ArrayBuilder_1(ArrayBuilder_1&&) = default;
                    constexpr ArrayBuilder_1& operator=(ArrayBuilder_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ArrayBuilder_1& operator=(ArrayBuilder_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ArrayBuilder_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<T> __declspec(property(get=__get__array, put=__set__array))  _array;

constexpr void __set__array(::ArrayW<T> value) ;

constexpr ::ArrayW<T> __get__array() const;

 int32_t __declspec(property(get=__get__count, put=__set__count))  _count;

constexpr void __set__count(int32_t value) ;

constexpr int32_t __get__count() const;


// Properties

 int32_t __declspec(property(get=get_Capacity))  Capacity;

 int32_t __declspec(property(get=get_Count))  Count;

 T __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Capacity() ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Count() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 T get_Item(int32_t index) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(T item) ;

/// @brief Method UncheckedAdd addr 0x0 size 0xffffffffffffffff virtual false final false
 void UncheckedAdd(T item) ;

/// @brief Method EnsureCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void EnsureCapacity(int32_t minimum) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::ArrayBuilder_1, "System.Collections.Generic", "ArrayBuilder`1");
