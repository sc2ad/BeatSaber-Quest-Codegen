#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Unity::Collections {
template<typename T>
struct NativeSlice_1;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class NativeSliceUnsafeUtility;
}
// Type: Unity.Collections.LowLevel.Unsafe::NativeSliceUnsafeUtility
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9954))
// CS Name: Unity.Collections.LowLevel.Unsafe.NativeSliceUnsafeUtility
class CORDL_TYPE NativeSliceUnsafeUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NativeSliceUnsafeUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeSliceUnsafeUtility", modifiers: " const&", def_value: None }]
constexpr NativeSliceUnsafeUtility(NativeSliceUnsafeUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeSliceUnsafeUtility", modifiers: "&&", def_value: None }]
constexpr NativeSliceUnsafeUtility(NativeSliceUnsafeUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativeSliceUnsafeUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NativeSliceUnsafeUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativeSliceUnsafeUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativeSliceUnsafeUtility& operator=(NativeSliceUnsafeUtility&& o) noexcept = default;
  constexpr NativeSliceUnsafeUtility& operator=(NativeSliceUnsafeUtility const& o) noexcept = default;
                


// Methods

/// @brief Method ConvertExistingDataToNativeSlice addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static Unity::Collections::NativeSlice_1<T> ConvertExistingDataToNativeSlice(void* dataPointer, int32_t stride, int32_t length) ;

/// @brief Method GetUnsafePtr addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void* GetUnsafePtr(Unity::Collections::NativeSlice_1<T> nativeSlice) ;

/// @brief Method GetUnsafeReadOnlyPtr addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void* GetUnsafeReadOnlyPtr(Unity::Collections::NativeSlice_1<T> nativeSlice) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(Unity::Collections::LowLevel::Unsafe::NativeSliceUnsafeUtility);
DEFINE_IL2CPP_ARG_TYPE(Unity::Collections::LowLevel::Unsafe::NativeSliceUnsafeUtility, "Unity.Collections.LowLevel.Unsafe", "NativeSliceUnsafeUtility");
