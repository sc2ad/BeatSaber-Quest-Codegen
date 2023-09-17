#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Unity::Collections {
template<typename T>
struct NativeSlice_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
// Forward declare root types
namespace Unity::Collections {
class NativeSliceExtensions;
}
// Type: Unity.Collections::NativeSliceExtensions
namespace Unity::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9934))
// CS Name: Unity.Collections.NativeSliceExtensions
class CORDL_TYPE NativeSliceExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NativeSliceExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeSliceExtensions", modifiers: " const&", def_value: None }]
constexpr NativeSliceExtensions(NativeSliceExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeSliceExtensions", modifiers: "&&", def_value: None }]
constexpr NativeSliceExtensions(NativeSliceExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativeSliceExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NativeSliceExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativeSliceExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativeSliceExtensions& operator=(NativeSliceExtensions&& o) noexcept = default;
  constexpr NativeSliceExtensions& operator=(NativeSliceExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method Slice addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::Unity::Collections::NativeSlice_1<T> Slice(::Unity::Collections::NativeArray_1<T> thisArray, int32_t start, int32_t length) ;

/// @brief Method Slice addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::Unity::Collections::NativeSlice_1<T> Slice(::Unity::Collections::NativeSlice_1<T> thisSlice, int32_t start, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Collections
} // end anonymous namespace
NEED_NO_BOX(::Unity::Collections::NativeSliceExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeSliceExtensions, "Unity.Collections", "NativeSliceExtensions");
