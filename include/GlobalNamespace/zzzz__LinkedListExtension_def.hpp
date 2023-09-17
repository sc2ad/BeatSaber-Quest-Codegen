#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LinkedListExtension;
}
// Type: ::LinkedListExtension
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13747))
// CS Name: LinkedListExtension
class CORDL_TYPE LinkedListExtension : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~LinkedListExtension() = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedListExtension", modifiers: " const&", def_value: None }]
constexpr LinkedListExtension(LinkedListExtension const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedListExtension", modifiers: "&&", def_value: None }]
constexpr LinkedListExtension(LinkedListExtension&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LinkedListExtension(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LinkedListExtension& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LinkedListExtension& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LinkedListExtension& operator=(LinkedListExtension&& o) noexcept = default;
  constexpr LinkedListExtension& operator=(LinkedListExtension const& o) noexcept = default;
                


// Methods

/// @brief Method Index addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static int32_t Index(::System::Collections::Generic::LinkedListNode_1<T> searchNode) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LinkedListExtension);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LinkedListExtension, "", "LinkedListExtension");
