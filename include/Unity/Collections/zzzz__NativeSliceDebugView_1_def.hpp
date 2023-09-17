#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace Unity::Collections {
template<typename T>
class NativeSliceDebugView_1;
}
// Type: Unity.Collections::NativeSliceDebugView`1
namespace Unity::Collections {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9937))
// CS Name: Unity.Collections.NativeSliceDebugView`1
class CORDL_TYPE NativeSliceDebugView_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NativeSliceDebugView_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeSliceDebugView_1", modifiers: " const&", def_value: None }]
constexpr NativeSliceDebugView_1(NativeSliceDebugView_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeSliceDebugView_1", modifiers: "&&", def_value: None }]
constexpr NativeSliceDebugView_1(NativeSliceDebugView_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativeSliceDebugView_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NativeSliceDebugView_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativeSliceDebugView_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativeSliceDebugView_1& operator=(NativeSliceDebugView_1&& o) noexcept = default;
  constexpr NativeSliceDebugView_1& operator=(NativeSliceDebugView_1 const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Collections
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Collections::NativeSliceDebugView_1, "Unity.Collections", "NativeSliceDebugView`1");
