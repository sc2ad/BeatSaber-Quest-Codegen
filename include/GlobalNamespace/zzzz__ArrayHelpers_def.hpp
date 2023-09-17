#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
class ArrayHelpers;
}
// Type: ::ArrayHelpers
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13768))
// CS Name: ArrayHelpers
class CORDL_TYPE ArrayHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ArrayHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "ArrayHelpers", modifiers: " const&", def_value: None }]
constexpr ArrayHelpers(ArrayHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ArrayHelpers", modifiers: "&&", def_value: None }]
constexpr ArrayHelpers(ArrayHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ArrayHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ArrayHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ArrayHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ArrayHelpers& operator=(ArrayHelpers&& o) noexcept = default;
  constexpr ArrayHelpers& operator=(ArrayHelpers const& o) noexcept = default;
                


// Methods

/// @brief Method CreateOrEnlargeArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::ArrayW<T> CreateOrEnlargeArray(::ArrayW<T> array, int32_t minimumCapacity) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ArrayHelpers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ArrayHelpers, "", "ArrayHelpers");
