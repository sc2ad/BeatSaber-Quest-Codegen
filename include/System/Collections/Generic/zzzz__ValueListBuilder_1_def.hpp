#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
struct ValueListBuilder_1;
}
namespace System::Collections::Generic {
template<::cordl_internals::il2cpp_reference_type T>
struct ValueListBuilder_1<T>;
}
namespace System::Collections::Generic {
template<>
struct ValueListBuilder_1<int32_t>;
}
// Type: System.Collections.Generic::ValueListBuilder`1
// Type: System.Collections.Generic::ValueListBuilder`1
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3829)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3829), inst: 2 })
// CS Name: System.Collections.Generic.ValueListBuilder`1
struct CORDL_TYPE ValueListBuilder_1<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_span", ty: "System::Span_1<T>", modifiers: "", def_value: None }, CppParam { name: "_arrayFromPool", ty: "::ArrayW<T>", modifiers: "", def_value: None }, CppParam { name: "_pos", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ValueListBuilder_1(System::Span_1<T> _span, ::ArrayW<T> _arrayFromPool, int32_t _pos) noexcept;


                    constexpr ValueListBuilder_1(ValueListBuilder_1 const&) = default;
                    constexpr ValueListBuilder_1(ValueListBuilder_1&&) = default;
                    constexpr ValueListBuilder_1& operator=(ValueListBuilder_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ValueListBuilder_1& operator=(ValueListBuilder_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ValueListBuilder_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Span_1<T> __declspec(property(get=__get__span, put=__set__span))  _span;

constexpr void __set__span(System::Span_1<T> value) ;

constexpr System::Span_1<T> __get__span() const;

 ::ArrayW<T> __declspec(property(get=__get__arrayFromPool, put=__set__arrayFromPool))  _arrayFromPool;

constexpr void __set__arrayFromPool(::ArrayW<T> value) ;

constexpr ::ArrayW<T> __get__arrayFromPool() const;

 int32_t __declspec(property(get=__get__pos, put=__set__pos))  _pos;

constexpr void __set__pos(int32_t value) ;

constexpr int32_t __get__pos() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Span_1<T> initialSpan) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
 void Append(T item) ;

/// @brief Method AsSpan addr 0x0 size 0xffffffffffffffff virtual false final false
 System::ReadOnlySpan_1<T> AsSpan() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 void Dispose() ;

/// @brief Method Grow addr 0x0 size 0xffffffffffffffff virtual false final false
 void Grow() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::ValueListBuilder`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3829)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3829), inst: 92 })
// CS Name: System.Collections.Generic.ValueListBuilder`1
struct CORDL_TYPE ValueListBuilder_1<int32_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_span", ty: "System::Span_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "_arrayFromPool", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }, CppParam { name: "_pos", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ValueListBuilder_1(System::Span_1<int32_t> _span, ::ArrayW<int32_t> _arrayFromPool, int32_t _pos) noexcept;


                    constexpr ValueListBuilder_1(ValueListBuilder_1 const&) = default;
                    constexpr ValueListBuilder_1(ValueListBuilder_1&&) = default;
                    constexpr ValueListBuilder_1& operator=(ValueListBuilder_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ValueListBuilder_1& operator=(ValueListBuilder_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ValueListBuilder_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Span_1<int32_t> __declspec(property(get=__get__span, put=__set__span))  _span;

constexpr void __set__span(System::Span_1<int32_t> value) ;

constexpr System::Span_1<int32_t> __get__span() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__arrayFromPool, put=__set__arrayFromPool))  _arrayFromPool;

constexpr void __set__arrayFromPool(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__arrayFromPool() const;

 int32_t __declspec(property(get=__get__pos, put=__set__pos))  _pos;

constexpr void __set__pos(int32_t value) ;

constexpr int32_t __get__pos() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Span_1<int32_t> initialSpan) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
 void Append(int32_t item) ;

/// @brief Method AsSpan addr 0x0 size 0xffffffffffffffff virtual false final false
 System::ReadOnlySpan_1<int32_t> AsSpan() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 void Dispose() ;

/// @brief Method Grow addr 0x0 size 0xffffffffffffffff virtual false final false
 void Grow() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Collections::Generic::ValueListBuilder_1, "System.Collections.Generic", "ValueListBuilder`1");
