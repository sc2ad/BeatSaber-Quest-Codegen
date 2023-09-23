#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Array;
}
// Forward declare root types
namespace UnityEngine {
class NoAllocHelpers;
}
// Type: UnityEngine::NoAllocHelpers
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10178))
// CS Name: UnityEngine.NoAllocHelpers
class CORDL_TYPE NoAllocHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NoAllocHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoAllocHelpers", modifiers: " const&", def_value: None }]
constexpr NoAllocHelpers(NoAllocHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoAllocHelpers", modifiers: "&&", def_value: None }]
constexpr NoAllocHelpers(NoAllocHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoAllocHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NoAllocHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoAllocHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoAllocHelpers& operator=(NoAllocHelpers&& o) noexcept = default;
  constexpr NoAllocHelpers& operator=(NoAllocHelpers const& o) noexcept = default;
                


// Methods

/// @brief Method ResizeList addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void ResizeList(System::Collections::Generic::List_1<T> list, int32_t size) ;

/// @brief Method EnsureListElemCount addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void EnsureListElemCount(System::Collections::Generic::List_1<T> list, int32_t count) ;

/// @brief Method SafeLength addr 0x2b5c71c size 0x10 virtual false final false
static int32_t SafeLength(System::Array values) ;

/// @brief Method SafeLength addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static int32_t SafeLength(System::Collections::Generic::List_1<T> values) ;

/// @brief Method ExtractArrayFromListT addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::ArrayW<T> ExtractArrayFromListT(System::Collections::Generic::List_1<T> list) ;

/// @brief Method Internal_ResizeList addr 0x2b5c72c size 0x44 virtual false final false
static void Internal_ResizeList(::bs_hook::Il2CppWrapperType list, int32_t size) ;

/// @brief Method ExtractArrayFromList addr 0x2b5c770 size 0x3c virtual false final false
static System::Array ExtractArrayFromList(::bs_hook::Il2CppWrapperType list) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::NoAllocHelpers);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::NoAllocHelpers, "UnityEngine", "NoAllocHelpers");
