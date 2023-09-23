#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct ByReference_1;
}
// Forward declare root types
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T>
struct Span_1<T>;
}
namespace System {
template<>
struct Span_1<char16_t>;
}
namespace System {
template<>
struct Span_1<int32_t>;
}
namespace System {
template<>
struct Span_1<uint16_t>;
}
namespace System {
template<>
struct Span_1<uint32_t>;
}
namespace System {
template<>
struct Span_1<uint8_t>;
}
// Type: System::Span`1
// Type: System::Span`1
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(2469))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2469), inst: 2 })
// CS Name: System.Span`1
struct CORDL_TYPE Span_1<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_pointer", ty: "System::ByReference_1<T>", modifiers: "", def_value: None }, CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Span_1(System::ByReference_1<T> _pointer, int32_t _length) noexcept;


                    constexpr Span_1(Span_1 const&) = default;
                    constexpr Span_1(Span_1&&) = default;
                    constexpr Span_1& operator=(Span_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Span_1& operator=(Span_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Span_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::ByReference_1<T> __declspec(property(get=__get__pointer, put=__set__pointer))  _pointer;

constexpr void __set__pointer(System::ByReference_1<T> value) ;

constexpr System::ByReference_1<T> __get__pointer() const;

 int32_t __declspec(property(get=__get__length, put=__set__length))  _length;

constexpr void __set__length(int32_t value) ;

constexpr int32_t __get__length() const;


// Properties

 T __declspec(property(get=get_Item))  Item;

 int32_t __declspec(property(get=get_Length))  Length;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<T> array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<T> array, int32_t start, int32_t length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(void* pointer, int32_t length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<T> ptr, int32_t length) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 ByRef<T> get_Item(int32_t index) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method Fill addr 0x0 size 0xffffffffffffffff virtual false final false
 void Fill(T value) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyTo(System::Span_1<T> destination) ;

/// @brief Method TryCopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryCopyTo(System::Span_1<T> destination) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static System::ReadOnlySpan_1<T> op_Implicit_System__ReadOnlySpan_1_T_(System::Span_1<T> span) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Slice addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Span_1<T> Slice(int32_t start) ;

/// @brief Method Slice addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Span_1<T> Slice(int32_t start, int32_t length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<T> ToArray() ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static System::Span_1<T> op_Implicit_System__Span_1_T_(::ArrayW<T> array) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Span`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2469)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2469), inst: 92 })
// CS Name: System.Span`1
struct CORDL_TYPE Span_1<int32_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_pointer", ty: "System::ByReference_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Span_1(System::ByReference_1<int32_t> _pointer, int32_t _length) noexcept;


                    constexpr Span_1(Span_1 const&) = default;
                    constexpr Span_1(Span_1&&) = default;
                    constexpr Span_1& operator=(Span_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Span_1& operator=(Span_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Span_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::ByReference_1<int32_t> __declspec(property(get=__get__pointer, put=__set__pointer))  _pointer;

constexpr void __set__pointer(System::ByReference_1<int32_t> value) ;

constexpr System::ByReference_1<int32_t> __get__pointer() const;

 int32_t __declspec(property(get=__get__length, put=__set__length))  _length;

constexpr void __set__length(int32_t value) ;

constexpr int32_t __get__length() const;


// Properties

 int32_t __declspec(property(get=get_Item))  Item;

 int32_t __declspec(property(get=get_Length))  Length;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<int32_t> array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<int32_t> array, int32_t start, int32_t length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(void* pointer, int32_t length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<int32_t> ptr, int32_t length) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 ByRef<int32_t> get_Item(int32_t index) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method Fill addr 0x0 size 0xffffffffffffffff virtual false final false
 void Fill(int32_t value) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyTo(System::Span_1<int32_t> destination) ;

/// @brief Method TryCopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryCopyTo(System::Span_1<int32_t> destination) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static System::ReadOnlySpan_1<int32_t> op_Implicit_System__ReadOnlySpan_1_int32_t_(System::Span_1<int32_t> span) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Slice addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Span_1<int32_t> Slice(int32_t start) ;

/// @brief Method Slice addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Span_1<int32_t> Slice(int32_t start, int32_t length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<int32_t> ToArray() ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static System::Span_1<int32_t> op_Implicit_System__Span_1_int32_t_(::ArrayW<int32_t> array) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Span`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2469)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2469), inst: 279 })
// CS Name: System.Span`1
struct CORDL_TYPE Span_1<char16_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_pointer", ty: "System::ByReference_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Span_1(System::ByReference_1<char16_t> _pointer, int32_t _length) noexcept;


                    constexpr Span_1(Span_1 const&) = default;
                    constexpr Span_1(Span_1&&) = default;
                    constexpr Span_1& operator=(Span_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Span_1& operator=(Span_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Span_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::ByReference_1<char16_t> __declspec(property(get=__get__pointer, put=__set__pointer))  _pointer;

constexpr void __set__pointer(System::ByReference_1<char16_t> value) ;

constexpr System::ByReference_1<char16_t> __get__pointer() const;

 int32_t __declspec(property(get=__get__length, put=__set__length))  _length;

constexpr void __set__length(int32_t value) ;

constexpr int32_t __get__length() const;


// Properties

 char16_t __declspec(property(get=get_Item))  Item;

 int32_t __declspec(property(get=get_Length))  Length;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<char16_t> array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<char16_t> array, int32_t start, int32_t length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(void* pointer, int32_t length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<char16_t> ptr, int32_t length) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 ByRef<char16_t> get_Item(int32_t index) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method Fill addr 0x0 size 0xffffffffffffffff virtual false final false
 void Fill(char16_t value) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyTo(System::Span_1<char16_t> destination) ;

/// @brief Method TryCopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryCopyTo(System::Span_1<char16_t> destination) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static System::ReadOnlySpan_1<char16_t> op_Implicit_System__ReadOnlySpan_1_char16_t_(System::Span_1<char16_t> span) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Slice addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Span_1<char16_t> Slice(int32_t start) ;

/// @brief Method Slice addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Span_1<char16_t> Slice(int32_t start, int32_t length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<char16_t> ToArray() ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static System::Span_1<char16_t> op_Implicit_System__Span_1_char16_t_(::ArrayW<char16_t> array) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Span`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2469)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2469), inst: 717 })
// CS Name: System.Span`1
struct CORDL_TYPE Span_1<uint8_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_pointer", ty: "System::ByReference_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Span_1(System::ByReference_1<uint8_t> _pointer, int32_t _length) noexcept;


                    constexpr Span_1(Span_1 const&) = default;
                    constexpr Span_1(Span_1&&) = default;
                    constexpr Span_1& operator=(Span_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Span_1& operator=(Span_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Span_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::ByReference_1<uint8_t> __declspec(property(get=__get__pointer, put=__set__pointer))  _pointer;

constexpr void __set__pointer(System::ByReference_1<uint8_t> value) ;

constexpr System::ByReference_1<uint8_t> __get__pointer() const;

 int32_t __declspec(property(get=__get__length, put=__set__length))  _length;

constexpr void __set__length(int32_t value) ;

constexpr int32_t __get__length() const;


// Properties

 uint8_t __declspec(property(get=get_Item))  Item;

 int32_t __declspec(property(get=get_Length))  Length;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<uint8_t> array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<uint8_t> array, int32_t start, int32_t length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(void* pointer, int32_t length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<uint8_t> ptr, int32_t length) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 ByRef<uint8_t> get_Item(int32_t index) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method Fill addr 0x0 size 0xffffffffffffffff virtual false final false
 void Fill(uint8_t value) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyTo(System::Span_1<uint8_t> destination) ;

/// @brief Method TryCopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryCopyTo(System::Span_1<uint8_t> destination) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static System::ReadOnlySpan_1<uint8_t> op_Implicit_System__ReadOnlySpan_1_uint8_t_(System::Span_1<uint8_t> span) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Slice addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Span_1<uint8_t> Slice(int32_t start) ;

/// @brief Method Slice addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Span_1<uint8_t> Slice(int32_t start, int32_t length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<uint8_t> ToArray() ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static System::Span_1<uint8_t> op_Implicit_System__Span_1_uint8_t_(::ArrayW<uint8_t> array) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Span`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(2469))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2469), inst: 728 })
// CS Name: System.Span`1
struct CORDL_TYPE Span_1<uint16_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_pointer", ty: "System::ByReference_1<uint16_t>", modifiers: "", def_value: None }, CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Span_1(System::ByReference_1<uint16_t> _pointer, int32_t _length) noexcept;


                    constexpr Span_1(Span_1 const&) = default;
                    constexpr Span_1(Span_1&&) = default;
                    constexpr Span_1& operator=(Span_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Span_1& operator=(Span_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Span_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::ByReference_1<uint16_t> __declspec(property(get=__get__pointer, put=__set__pointer))  _pointer;

constexpr void __set__pointer(System::ByReference_1<uint16_t> value) ;

constexpr System::ByReference_1<uint16_t> __get__pointer() const;

 int32_t __declspec(property(get=__get__length, put=__set__length))  _length;

constexpr void __set__length(int32_t value) ;

constexpr int32_t __get__length() const;


// Properties

 uint16_t __declspec(property(get=get_Item))  Item;

 int32_t __declspec(property(get=get_Length))  Length;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<uint16_t> array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<uint16_t> array, int32_t start, int32_t length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(void* pointer, int32_t length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<uint16_t> ptr, int32_t length) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 ByRef<uint16_t> get_Item(int32_t index) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method Fill addr 0x0 size 0xffffffffffffffff virtual false final false
 void Fill(uint16_t value) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyTo(System::Span_1<uint16_t> destination) ;

/// @brief Method TryCopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryCopyTo(System::Span_1<uint16_t> destination) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static System::ReadOnlySpan_1<uint16_t> op_Implicit_System__ReadOnlySpan_1_uint16_t_(System::Span_1<uint16_t> span) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Slice addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Span_1<uint16_t> Slice(int32_t start) ;

/// @brief Method Slice addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Span_1<uint16_t> Slice(int32_t start, int32_t length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<uint16_t> ToArray() ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static System::Span_1<uint16_t> op_Implicit_System__Span_1_uint16_t_(::ArrayW<uint16_t> array) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Span`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(2469))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2469), inst: 729 })
// CS Name: System.Span`1
struct CORDL_TYPE Span_1<uint32_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_pointer", ty: "System::ByReference_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Span_1(System::ByReference_1<uint32_t> _pointer, int32_t _length) noexcept;


                    constexpr Span_1(Span_1 const&) = default;
                    constexpr Span_1(Span_1&&) = default;
                    constexpr Span_1& operator=(Span_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Span_1& operator=(Span_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Span_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::ByReference_1<uint32_t> __declspec(property(get=__get__pointer, put=__set__pointer))  _pointer;

constexpr void __set__pointer(System::ByReference_1<uint32_t> value) ;

constexpr System::ByReference_1<uint32_t> __get__pointer() const;

 int32_t __declspec(property(get=__get__length, put=__set__length))  _length;

constexpr void __set__length(int32_t value) ;

constexpr int32_t __get__length() const;


// Properties

 uint32_t __declspec(property(get=get_Item))  Item;

 int32_t __declspec(property(get=get_Length))  Length;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<uint32_t> array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<uint32_t> array, int32_t start, int32_t length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(void* pointer, int32_t length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<uint32_t> ptr, int32_t length) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 ByRef<uint32_t> get_Item(int32_t index) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method Fill addr 0x0 size 0xffffffffffffffff virtual false final false
 void Fill(uint32_t value) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyTo(System::Span_1<uint32_t> destination) ;

/// @brief Method TryCopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryCopyTo(System::Span_1<uint32_t> destination) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static System::ReadOnlySpan_1<uint32_t> op_Implicit_System__ReadOnlySpan_1_uint32_t_(System::Span_1<uint32_t> span) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Slice addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Span_1<uint32_t> Slice(int32_t start) ;

/// @brief Method Slice addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Span_1<uint32_t> Slice(int32_t start, int32_t length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<uint32_t> ToArray() ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static System::Span_1<uint32_t> op_Implicit_System__Span_1_uint32_t_(::ArrayW<uint32_t> array) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Span_1, "System", "Span`1");
