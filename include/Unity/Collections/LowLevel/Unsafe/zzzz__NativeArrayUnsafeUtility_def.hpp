#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Collections {
struct Allocator;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class NativeArrayUnsafeUtility;
}
// Type: Unity.Collections.LowLevel.Unsafe::NativeArrayUnsafeUtility
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9955))
// CS Name: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility
class CORDL_TYPE NativeArrayUnsafeUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NativeArrayUnsafeUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeArrayUnsafeUtility", modifiers: " const&", def_value: None }]
constexpr NativeArrayUnsafeUtility(NativeArrayUnsafeUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeArrayUnsafeUtility", modifiers: "&&", def_value: None }]
constexpr NativeArrayUnsafeUtility(NativeArrayUnsafeUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativeArrayUnsafeUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NativeArrayUnsafeUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativeArrayUnsafeUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativeArrayUnsafeUtility& operator=(NativeArrayUnsafeUtility&& o) noexcept = default;
  constexpr NativeArrayUnsafeUtility& operator=(NativeArrayUnsafeUtility const& o) noexcept = default;
                


// Methods

/// @brief Method ConvertExistingDataToNativeArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static Unity::Collections::NativeArray_1<T> ConvertExistingDataToNativeArray(void* dataPointer, int32_t length, Unity::Collections::Allocator allocator) ;

/// @brief Method GetUnsafePtr addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void* GetUnsafePtr(Unity::Collections::NativeArray_1<T> nativeArray) ;

/// @brief Method GetUnsafeReadOnlyPtr addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void* GetUnsafeReadOnlyPtr(Unity::Collections::NativeArray_1<T> nativeArray) ;

/// @brief Method GetUnsafeBufferPointerWithoutChecks addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void* GetUnsafeBufferPointerWithoutChecks(Unity::Collections::NativeArray_1<T> nativeArray) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(Unity::Collections::LowLevel::Unsafe::NativeArrayUnsafeUtility);
DEFINE_IL2CPP_ARG_TYPE(Unity::Collections::LowLevel::Unsafe::NativeArrayUnsafeUtility, "Unity.Collections.LowLevel.Unsafe", "NativeArrayUnsafeUtility");
