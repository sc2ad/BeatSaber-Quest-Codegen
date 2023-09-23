#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
template<typename T>
struct ReadOnlyMemory_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System::Buffers {
struct MemoryHandle;
}
// Forward declare root types
namespace System {
template<typename T>
struct Memory_1;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T>
struct Memory_1<T>;
}
namespace System {
template<>
struct Memory_1<uint8_t>;
}
// Type: System::Memory`1
// Type: System::Memory`1
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2436)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2436), inst: 2 })
// CS Name: System.Memory`1
struct CORDL_TYPE Memory_1<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<System::Memory_1<T>>
constexpr operator  System::IEquatable_1<System::Memory_1<T>>() const;

// Ctor Parameters [CppParam { name: "_object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Memory_1(::bs_hook::Il2CppWrapperType _object, int32_t _index, int32_t _length) noexcept;


                    constexpr Memory_1(Memory_1 const&) = default;
                    constexpr Memory_1(Memory_1&&) = default;
                    constexpr Memory_1& operator=(Memory_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Memory_1& operator=(Memory_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Memory_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__object, put=__set__object))  _object;

constexpr void __set__object(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__object() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 int32_t __declspec(property(get=__get__length, put=__set__length))  _length;

constexpr void __set__length(int32_t value) ;

constexpr int32_t __get__length() const;

/// @brief Field RemoveFlagsBitMask offset 0
static constexpr int32_t  RemoveFlagsBitMask{2147483647};


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 System::Span_1<T> __declspec(property(get=get_Span))  Span;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<T> array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<T> array, int32_t start, int32_t length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType obj, int32_t start, int32_t length) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static System::Memory_1<T> op_Implicit_System__Memory_1_T_(::ArrayW<T> array) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static System::ReadOnlyMemory_1<T> op_Implicit_System__ReadOnlyMemory_1_T_(System::Memory_1<T> memory) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Slice addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Memory_1<T> Slice(int32_t start) ;

/// @brief Method Slice addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Memory_1<T> Slice(int32_t start, int32_t length) ;

/// @brief Method get_Span addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Span_1<T> get_Span() ;

/// @brief Method Pin addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Buffers::MemoryHandle Pin() ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<T> ToArray() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(System::Memory_1<T> other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method CombineHashCodes addr 0x0 size 0xffffffffffffffff virtual false final false
static int32_t CombineHashCodes(int32_t left, int32_t right) ;

/// @brief Method CombineHashCodes addr 0x0 size 0xffffffffffffffff virtual false final false
static int32_t CombineHashCodes(int32_t h1, int32_t h2, int32_t h3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Memory`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2436)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2436), inst: 717 })
// CS Name: System.Memory`1
struct CORDL_TYPE Memory_1<uint8_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<System::Memory_1<uint8_t>>
constexpr operator  System::IEquatable_1<System::Memory_1<uint8_t>>() const;

// Ctor Parameters [CppParam { name: "_object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Memory_1(::bs_hook::Il2CppWrapperType _object, int32_t _index, int32_t _length) noexcept;


                    constexpr Memory_1(Memory_1 const&) = default;
                    constexpr Memory_1(Memory_1&&) = default;
                    constexpr Memory_1& operator=(Memory_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Memory_1& operator=(Memory_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Memory_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__object, put=__set__object))  _object;

constexpr void __set__object(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__object() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 int32_t __declspec(property(get=__get__length, put=__set__length))  _length;

constexpr void __set__length(int32_t value) ;

constexpr int32_t __get__length() const;

/// @brief Field RemoveFlagsBitMask offset 0
static constexpr int32_t  RemoveFlagsBitMask{2147483647};


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 System::Span_1<uint8_t> __declspec(property(get=get_Span))  Span;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<uint8_t> array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<uint8_t> array, int32_t start, int32_t length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType obj, int32_t start, int32_t length) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static System::Memory_1<uint8_t> op_Implicit_System__Memory_1_uint8_t_(::ArrayW<uint8_t> array) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static System::ReadOnlyMemory_1<uint8_t> op_Implicit_System__ReadOnlyMemory_1_uint8_t_(System::Memory_1<uint8_t> memory) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Slice addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Memory_1<uint8_t> Slice(int32_t start) ;

/// @brief Method Slice addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Memory_1<uint8_t> Slice(int32_t start, int32_t length) ;

/// @brief Method get_Span addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Span_1<uint8_t> get_Span() ;

/// @brief Method Pin addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Buffers::MemoryHandle Pin() ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<uint8_t> ToArray() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(System::Memory_1<uint8_t> other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method CombineHashCodes addr 0x0 size 0xffffffffffffffff virtual false final false
static int32_t CombineHashCodes(int32_t left, int32_t right) ;

/// @brief Method CombineHashCodes addr 0x0 size 0xffffffffffffffff virtual false final false
static int32_t CombineHashCodes(int32_t h1, int32_t h2, int32_t h3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Memory_1, "System", "Memory`1");
