#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
struct ArrayBuilder_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
struct LargeArrayBuilder_1;
}
namespace System::Collections::Generic {
template<::cordl_internals::il2cpp_reference_type T>
struct LargeArrayBuilder_1<T>;
}
// Type: System.Collections.Generic::LargeArrayBuilder`1
// Type: System.Collections.Generic::LargeArrayBuilder`1
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(3832))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3832), inst: 2 })
// CS Name: System.Collections.Generic.LargeArrayBuilder`1
struct CORDL_TYPE LargeArrayBuilder_1<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_maxCapacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_first", ty: "::ArrayW<T>", modifiers: "", def_value: None }, CppParam { name: "_buffers", ty: "System::Collections::Generic::ArrayBuilder_1<::ArrayW<T>>", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "::ArrayW<T>", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LargeArrayBuilder_1(int32_t _maxCapacity, ::ArrayW<T> _first, System::Collections::Generic::ArrayBuilder_1<::ArrayW<T>> _buffers, ::ArrayW<T> _current, int32_t _index, int32_t _count) noexcept;


                    constexpr LargeArrayBuilder_1(LargeArrayBuilder_1 const&) = default;
                    constexpr LargeArrayBuilder_1(LargeArrayBuilder_1&&) = default;
                    constexpr LargeArrayBuilder_1& operator=(LargeArrayBuilder_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LargeArrayBuilder_1& operator=(LargeArrayBuilder_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LargeArrayBuilder_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get__maxCapacity, put=__set__maxCapacity))  _maxCapacity;

constexpr void __set__maxCapacity(int32_t value) ;

constexpr int32_t __get__maxCapacity() const;

 ::ArrayW<T> __declspec(property(get=__get__first, put=__set__first))  _first;

constexpr void __set__first(::ArrayW<T> value) ;

constexpr ::ArrayW<T> __get__first() const;

 System::Collections::Generic::ArrayBuilder_1<::ArrayW<T>> __declspec(property(get=__get__buffers, put=__set__buffers))  _buffers;

constexpr void __set__buffers(System::Collections::Generic::ArrayBuilder_1<::ArrayW<T>> value) ;

constexpr System::Collections::Generic::ArrayBuilder_1<::ArrayW<T>> __get__buffers() const;

 ::ArrayW<T> __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(::ArrayW<T> value) ;

constexpr ::ArrayW<T> __get__current() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 int32_t __declspec(property(get=__get__count, put=__set__count))  _count;

constexpr void __set__count(int32_t value) ;

constexpr int32_t __get__count() const;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(bool initialize) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t maxCapacity) ;

/// @brief Method AddRange addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddRange(System::Collections::Generic::IEnumerable_1<T> items) ;

/// @brief Method AddWithBufferAllocation addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddWithBufferAllocation(T item, ByRef<::ArrayW<T>> destination, ByRef<int32_t> index) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyTo(::ArrayW<T> array, int32_t arrayIndex, int32_t count) ;

/// @brief Method GetBuffer addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<T> GetBuffer(int32_t index) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<T> ToArray() ;

/// @brief Method TryMove addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryMove(ByRef<::ArrayW<T>> array) ;

/// @brief Method AllocateBuffer addr 0x0 size 0xffffffffffffffff virtual false final false
 void AllocateBuffer() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Collections::Generic::LargeArrayBuilder_1, "System.Collections.Generic", "LargeArrayBuilder`1");
