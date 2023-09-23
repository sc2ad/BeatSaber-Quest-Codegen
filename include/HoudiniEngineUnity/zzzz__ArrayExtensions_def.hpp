#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class ArrayExtensions;
}
// Type: HoudiniEngineUnity::ArrayExtensions
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9763))
// CS Name: HoudiniEngineUnity.ArrayExtensions
class CORDL_TYPE ArrayExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ArrayExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "ArrayExtensions", modifiers: " const&", def_value: None }]
constexpr ArrayExtensions(ArrayExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ArrayExtensions", modifiers: "&&", def_value: None }]
constexpr ArrayExtensions(ArrayExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ArrayExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ArrayExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ArrayExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ArrayExtensions& operator=(ArrayExtensions&& o) noexcept = default;
  constexpr ArrayExtensions& operator=(ArrayExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void Init(::ArrayW<T> array, T defaultValue) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void Init(System::Collections::Generic::List_1<T> array, T defaultValue) ;

/// @brief Method CopyToWithResize addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void CopyToWithResize(::ArrayW<T> srcArray, ByRef<::ArrayW<T>> destArray) ;

/// @brief Method IsEquivalentArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool IsEquivalentArray(::ArrayW<T> arr, ::ArrayW<T> other) ;

/// @brief Method IsNull addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool IsNull(::ArrayW<T> arr) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::ArrayExtensions);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::ArrayExtensions, "HoudiniEngineUnity", "ArrayExtensions");
