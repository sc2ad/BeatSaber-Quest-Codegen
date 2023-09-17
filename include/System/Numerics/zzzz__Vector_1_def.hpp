#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
class IFormatProvider;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class IFormattable;
}
namespace System::Numerics {
struct Register;
}
// Forward declare root types
namespace System::Numerics {
template<typename T>
struct Vector_1;
}
namespace System::Numerics {
template<>
struct Vector_1<uint16_t>;
}
namespace System::Numerics {
template<>
struct Vector_1<uint64_t>;
}
namespace System::Numerics {
template<typename T>
struct ____System__Numerics__Vector_1__VectorSizeHelper;
}
// Type: ::VectorSizeHelper
namespace System::Numerics {
// cpp template
template<typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3544))
// CS Name: System.Numerics.Vector`1::VectorSizeHelper
struct CORDL_TYPE ____System__Numerics__Vector_1__VectorSizeHelper : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_placeholder", ty: "::System::Numerics::Vector_1<T>", modifiers: "", def_value: None }, CppParam { name: "_byte", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr ____System__Numerics__Vector_1__VectorSizeHelper(::System::Numerics::Vector_1<T> _placeholder, uint8_t _byte) noexcept;


                    constexpr ____System__Numerics__Vector_1__VectorSizeHelper(____System__Numerics__Vector_1__VectorSizeHelper const&) = default;
                    constexpr ____System__Numerics__Vector_1__VectorSizeHelper(____System__Numerics__Vector_1__VectorSizeHelper&&) = default;
                    constexpr ____System__Numerics__Vector_1__VectorSizeHelper& operator=(____System__Numerics__Vector_1__VectorSizeHelper const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Numerics__Vector_1__VectorSizeHelper& operator=(____System__Numerics__Vector_1__VectorSizeHelper&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Numerics__Vector_1__VectorSizeHelper(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Numerics::Vector_1<T> __declspec(property(get=__get__placeholder, put=__set__placeholder))  _placeholder;

constexpr void __set__placeholder(::System::Numerics::Vector_1<T> value) ;

constexpr ::System::Numerics::Vector_1<T> __get__placeholder() const;

 uint8_t __declspec(property(get=__get__byte, put=__set__byte))  _byte;

constexpr void __set__byte(uint8_t value) ;

constexpr uint8_t __get__byte() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Numerics
// Type: System.Numerics::Vector`1
// Type: System.Numerics::Vector`1
namespace System::Numerics {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3545)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3545), inst: 389 })
// CS Name: System.Numerics.Vector`1
struct CORDL_TYPE Vector_1<uint64_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using VectorSizeHelper = ::System::Numerics::____System__Numerics__Vector_1__VectorSizeHelper<uint64_t>;

/// @brief Convert operator to ::System::IEquatable_1<::System::Numerics::Vector_1<uint64_t>>
constexpr operator  ::System::IEquatable_1<::System::Numerics::Vector_1<uint64_t>>() const;

/// @brief Convert operator to ::System::IFormattable
constexpr operator  ::System::IFormattable() const;

// Ctor Parameters [CppParam { name: "register", ty: "::System::Numerics::Register", modifiers: "", def_value: None }]
constexpr Vector_1(::System::Numerics::Register register) noexcept;


                    constexpr Vector_1(Vector_1 const&) = default;
                    constexpr Vector_1(Vector_1&&) = default;
                    constexpr Vector_1& operator=(Vector_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Vector_1& operator=(Vector_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Vector_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Numerics::Register __declspec(property(get=__get_register, put=__set_register))  register;

constexpr void __set_register(::System::Numerics::Register value) ;

constexpr ::System::Numerics::Register __get_register() const;

static int32_t __declspec(property(get=__get_s_count, put=__set_s_count))  s_count;

static void __set_s_count(int32_t value) ;

static int32_t __get_s_count() ;

static ::System::Numerics::Vector_1<uint64_t> __declspec(property(get=__get_s_zero, put=__set_s_zero))  s_zero;

static void __set_s_zero(::System::Numerics::Vector_1<uint64_t> value) ;

static ::System::Numerics::Vector_1<uint64_t> __get_s_zero() ;

static ::System::Numerics::Vector_1<uint64_t> __declspec(property(get=__get_s_one, put=__set_s_one))  s_one;

static void __set_s_one(::System::Numerics::Vector_1<uint64_t> value) ;

static ::System::Numerics::Vector_1<uint64_t> __get_s_one() ;

static ::System::Numerics::Vector_1<uint64_t> __declspec(property(get=__get_s_allOnes, put=__set_s_allOnes))  s_allOnes;

static void __set_s_allOnes(::System::Numerics::Vector_1<uint64_t> value) ;

static ::System::Numerics::Vector_1<uint64_t> __get_s_allOnes() ;


// Properties

static int32_t __declspec(property(get=get_Count))  Count;

static ::System::Numerics::Vector_1<uint64_t> __declspec(property(get=get_Zero))  Zero;

 uint64_t __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
static int32_t get_Count() ;

/// @brief Method get_Zero addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Numerics::Vector_1<uint64_t> get_Zero() ;

/// @brief Method InitializeCount addr 0x0 size 0xffffffffffffffff virtual false final false
static int32_t InitializeCount() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(uint64_t value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(void* dataPointer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(void* dataPointer, int32_t offset) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<::System::Numerics::Register> existingRegister) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 uint64_t get_Item(int32_t index) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(::System::Numerics::Vector_1<uint64_t> other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final true
 ::StringW ToString(::StringW format, ::System::IFormatProvider formatProvider) ;

/// @brief Method op_Equality addr 0x0 size 0xffffffffffffffff virtual false final false
static bool op_Equality(::System::Numerics::Vector_1<uint64_t> left, ::System::Numerics::Vector_1<uint64_t> right) ;

/// @brief Method op_Inequality addr 0x0 size 0xffffffffffffffff virtual false final false
static bool op_Inequality(::System::Numerics::Vector_1<uint64_t> left, ::System::Numerics::Vector_1<uint64_t> right) ;

/// @brief Method op_Explicit addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Numerics::Vector_1<uint64_t> op_Explicit___System__Numerics__Vector_1_uint64_t_(::System::Numerics::Vector_1<uint64_t> value) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Numerics::Vector_1<uint64_t> Equals(::System::Numerics::Vector_1<uint64_t> left, ::System::Numerics::Vector_1<uint64_t> right) ;

/// @brief Method ScalarEquals addr 0x0 size 0xffffffffffffffff virtual false final false
static bool ScalarEquals(uint64_t left, uint64_t right) ;

/// @brief Method GetOneValue addr 0x0 size 0xffffffffffffffff virtual false final false
static uint64_t GetOneValue() ;

/// @brief Method GetAllBitsSetValue addr 0x0 size 0xffffffffffffffff virtual false final false
static uint64_t GetAllBitsSetValue() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Numerics
// Type: System.Numerics::Vector`1
namespace System::Numerics {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3545)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3545), inst: 728 })
// CS Name: System.Numerics.Vector`1
struct CORDL_TYPE Vector_1<uint16_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using VectorSizeHelper = ::System::Numerics::____System__Numerics__Vector_1__VectorSizeHelper<uint16_t>;

/// @brief Convert operator to ::System::IEquatable_1<::System::Numerics::Vector_1<uint16_t>>
constexpr operator  ::System::IEquatable_1<::System::Numerics::Vector_1<uint16_t>>() const;

/// @brief Convert operator to ::System::IFormattable
constexpr operator  ::System::IFormattable() const;

// Ctor Parameters [CppParam { name: "register", ty: "::System::Numerics::Register", modifiers: "", def_value: None }]
constexpr Vector_1(::System::Numerics::Register register) noexcept;


                    constexpr Vector_1(Vector_1 const&) = default;
                    constexpr Vector_1(Vector_1&&) = default;
                    constexpr Vector_1& operator=(Vector_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Vector_1& operator=(Vector_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Vector_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Numerics::Register __declspec(property(get=__get_register, put=__set_register))  register;

constexpr void __set_register(::System::Numerics::Register value) ;

constexpr ::System::Numerics::Register __get_register() const;

static int32_t __declspec(property(get=__get_s_count, put=__set_s_count))  s_count;

static void __set_s_count(int32_t value) ;

static int32_t __get_s_count() ;

static ::System::Numerics::Vector_1<uint16_t> __declspec(property(get=__get_s_zero, put=__set_s_zero))  s_zero;

static void __set_s_zero(::System::Numerics::Vector_1<uint16_t> value) ;

static ::System::Numerics::Vector_1<uint16_t> __get_s_zero() ;

static ::System::Numerics::Vector_1<uint16_t> __declspec(property(get=__get_s_one, put=__set_s_one))  s_one;

static void __set_s_one(::System::Numerics::Vector_1<uint16_t> value) ;

static ::System::Numerics::Vector_1<uint16_t> __get_s_one() ;

static ::System::Numerics::Vector_1<uint16_t> __declspec(property(get=__get_s_allOnes, put=__set_s_allOnes))  s_allOnes;

static void __set_s_allOnes(::System::Numerics::Vector_1<uint16_t> value) ;

static ::System::Numerics::Vector_1<uint16_t> __get_s_allOnes() ;


// Properties

static int32_t __declspec(property(get=get_Count))  Count;

static ::System::Numerics::Vector_1<uint16_t> __declspec(property(get=get_Zero))  Zero;

 uint16_t __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
static int32_t get_Count() ;

/// @brief Method get_Zero addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Numerics::Vector_1<uint16_t> get_Zero() ;

/// @brief Method InitializeCount addr 0x0 size 0xffffffffffffffff virtual false final false
static int32_t InitializeCount() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(uint16_t value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(void* dataPointer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(void* dataPointer, int32_t offset) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<::System::Numerics::Register> existingRegister) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 uint16_t get_Item(int32_t index) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(::System::Numerics::Vector_1<uint16_t> other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final true
 ::StringW ToString(::StringW format, ::System::IFormatProvider formatProvider) ;

/// @brief Method op_Equality addr 0x0 size 0xffffffffffffffff virtual false final false
static bool op_Equality(::System::Numerics::Vector_1<uint16_t> left, ::System::Numerics::Vector_1<uint16_t> right) ;

/// @brief Method op_Inequality addr 0x0 size 0xffffffffffffffff virtual false final false
static bool op_Inequality(::System::Numerics::Vector_1<uint16_t> left, ::System::Numerics::Vector_1<uint16_t> right) ;

/// @brief Method op_Explicit addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Numerics::Vector_1<uint64_t> op_Explicit___System__Numerics__Vector_1_uint64_t_(::System::Numerics::Vector_1<uint16_t> value) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Numerics::Vector_1<uint16_t> Equals(::System::Numerics::Vector_1<uint16_t> left, ::System::Numerics::Vector_1<uint16_t> right) ;

/// @brief Method ScalarEquals addr 0x0 size 0xffffffffffffffff virtual false final false
static bool ScalarEquals(uint16_t left, uint16_t right) ;

/// @brief Method GetOneValue addr 0x0 size 0xffffffffffffffff virtual false final false
static uint16_t GetOneValue() ;

/// @brief Method GetAllBitsSetValue addr 0x0 size 0xffffffffffffffff virtual false final false
static uint16_t GetAllBitsSetValue() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Numerics
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Numerics::Vector_1, "System.Numerics", "Vector`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Numerics::____System__Numerics__Vector_1__VectorSizeHelper, "System.Numerics", "Vector`1/VectorSizeHelper");
