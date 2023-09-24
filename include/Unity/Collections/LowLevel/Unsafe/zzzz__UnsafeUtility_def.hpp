#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections::LowLevel::Unsafe {
template<typename T>
struct Unity__Collections__LowLevel__Unsafe__UnsafeUtility__AlignOfHelper_1;
}
namespace System {
class Array;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class UnsafeUtility;
}
namespace Unity::Collections::LowLevel::Unsafe {
template<typename T>
struct Unity__Collections__LowLevel__Unsafe__UnsafeUtility__AlignOfHelper_1;
}
// Type: ::AlignOfHelper`1
namespace Unity::Collections::LowLevel::Unsafe {
// cpp template
template<typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9952))
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOfHelper`1
struct CORDL_TYPE Unity__Collections__LowLevel__Unsafe__UnsafeUtility__AlignOfHelper_1 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "dummy", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "data", ty: "T", modifiers: "", def_value: None }]
constexpr Unity__Collections__LowLevel__Unsafe__UnsafeUtility__AlignOfHelper_1(uint8_t dummy, T data) noexcept;


                    constexpr Unity__Collections__LowLevel__Unsafe__UnsafeUtility__AlignOfHelper_1(Unity__Collections__LowLevel__Unsafe__UnsafeUtility__AlignOfHelper_1 const&) = default;
                    constexpr Unity__Collections__LowLevel__Unsafe__UnsafeUtility__AlignOfHelper_1(Unity__Collections__LowLevel__Unsafe__UnsafeUtility__AlignOfHelper_1&&) = default;
                    constexpr Unity__Collections__LowLevel__Unsafe__UnsafeUtility__AlignOfHelper_1& operator=(Unity__Collections__LowLevel__Unsafe__UnsafeUtility__AlignOfHelper_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__LowLevel__Unsafe__UnsafeUtility__AlignOfHelper_1& operator=(Unity__Collections__LowLevel__Unsafe__UnsafeUtility__AlignOfHelper_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__LowLevel__Unsafe__UnsafeUtility__AlignOfHelper_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint8_t __declspec(property(get=__get_dummy, put=__set_dummy))  dummy;

constexpr void __set_dummy(uint8_t value) ;

constexpr uint8_t __get_dummy() const;

 T __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(T value) ;

constexpr T __get_data() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections::LowLevel::Unsafe
// Type: Unity.Collections.LowLevel.Unsafe::UnsafeUtility
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9953))
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeUtility
class CORDL_TYPE UnsafeUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename T>
using AlignOfHelper_1 = Unity::Collections::LowLevel::Unsafe::Unity__Collections__LowLevel__Unsafe__UnsafeUtility__AlignOfHelper_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnsafeUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnsafeUtility", modifiers: " const&", def_value: None }]
constexpr UnsafeUtility(UnsafeUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnsafeUtility", modifiers: "&&", def_value: None }]
constexpr UnsafeUtility(UnsafeUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnsafeUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnsafeUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnsafeUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnsafeUtility& operator=(UnsafeUtility&& o) noexcept = default;
  constexpr UnsafeUtility& operator=(UnsafeUtility const& o) noexcept = default;
                


// Methods

/// @brief Method ReadArrayElement addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T ReadArrayElement(void* source, int32_t index) ;

/// @brief Method ReadArrayElementWithStride addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T ReadArrayElementWithStride(void* source, int32_t index, int32_t stride) ;

/// @brief Method WriteArrayElement addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void WriteArrayElement(void* destination, int32_t index, T value) ;

/// @brief Method WriteArrayElementWithStride addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void WriteArrayElementWithStride(void* destination, int32_t index, int32_t stride, T value) ;

/// @brief Method AddressOf addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void* AddressOf(ByRef<T> output) ;

/// @brief Method SizeOf addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static int32_t SizeOf() ;

/// @brief Method EnumToInt addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static int32_t EnumToInt(T enumValue) ;

/// @brief Method InternalEnumToInt addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void InternalEnumToInt(ByRef<T> enumValue, ByRef<int32_t> intValue) ;

/// @brief Method EnumEquals addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool EnumEquals(T lhs, T rhs) ;

/// @brief Method IsBlittableValueType addr 0x2b2858c size 0x60 virtual false final false
static bool IsBlittableValueType(System::Type t) ;

/// @brief Method GetReasonForTypeNonBlittableImpl addr 0x2b28628 size 0x1bc virtual false final false
static ::StringW GetReasonForTypeNonBlittableImpl(System::Type t, ::StringW name) ;

/// @brief Method IsArrayBlittable addr 0x2b287e4 size 0x30 virtual false final false
static bool IsArrayBlittable(System::Array arr) ;

/// @brief Method IsGenericListBlittable addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool IsGenericListBlittable() ;

/// @brief Method GetReasonForArrayNonBlittable addr 0x2b28814 size 0x4c virtual false final false
static ::StringW GetReasonForArrayNonBlittable(System::Array arr) ;

/// @brief Method GetReasonForGenericListNonBlittable addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::StringW GetReasonForGenericListNonBlittable() ;

/// @brief Method AlignOf addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static int32_t AlignOf() ;

/// @brief Method IsBlittable addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool IsBlittable() ;

/// @brief Method Malloc addr 0x2b28860 size 0x54 virtual false final false
static void* Malloc(int64_t size, int32_t alignment, Unity::Collections::Allocator allocator) ;

/// @brief Method Free addr 0x2b284f4 size 0x44 virtual false final false
static void Free(void* memory, Unity::Collections::Allocator allocator) ;

/// @brief Method MemCpy addr 0x2b288b4 size 0x54 virtual false final false
static void MemCpy(void* destination, void* source, int64_t size) ;

/// @brief Method MemCpyStride addr 0x2b28908 size 0x74 virtual false final false
static void MemCpyStride(void* destination, int32_t destinationStride, void* source, int32_t sourceStride, int32_t elementSize, int32_t count) ;

/// @brief Method MemMove addr 0x2b2897c size 0x54 virtual false final false
static void MemMove(void* destination, void* source, int64_t size) ;

/// @brief Method MemSet addr 0x2b289d0 size 0x54 virtual false final false
static void MemSet(void* destination, uint8_t value, int64_t size) ;

/// @brief Method MemClear addr 0x2b28a24 size 0x48 virtual false final false
static void MemClear(void* destination, int64_t size) ;

/// @brief Method MemCmp addr 0x2b28a6c size 0x54 virtual false final false
static int32_t MemCmp(void* ptr1, void* ptr2, int64_t size) ;

/// @brief Method IsBlittable addr 0x2b285ec size 0x3c virtual false final false
static bool IsBlittable(System::Type type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(Unity::Collections::LowLevel::Unsafe::UnsafeUtility);
DEFINE_IL2CPP_ARG_TYPE(Unity::Collections::LowLevel::Unsafe::UnsafeUtility, "Unity.Collections.LowLevel.Unsafe", "UnsafeUtility");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(Unity::Collections::LowLevel::Unsafe::Unity__Collections__LowLevel__Unsafe__UnsafeUtility__AlignOfHelper_1, "Unity.Collections.LowLevel.Unsafe", "UnsafeUtility/AlignOfHelper`1");
