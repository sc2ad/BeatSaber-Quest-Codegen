#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace Unity::Collections {
class DeallocateOnJobCompletionAttribute;
}
// Type: Unity.Collections::DeallocateOnJobCompletionAttribute
namespace Unity::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9948))
// CS Name: Unity.Collections.DeallocateOnJobCompletionAttribute
class CORDL_TYPE DeallocateOnJobCompletionAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DeallocateOnJobCompletionAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "DeallocateOnJobCompletionAttribute", modifiers: " const&", def_value: None }]
constexpr DeallocateOnJobCompletionAttribute(DeallocateOnJobCompletionAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DeallocateOnJobCompletionAttribute", modifiers: "&&", def_value: None }]
constexpr DeallocateOnJobCompletionAttribute(DeallocateOnJobCompletionAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DeallocateOnJobCompletionAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr DeallocateOnJobCompletionAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DeallocateOnJobCompletionAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DeallocateOnJobCompletionAttribute& operator=(DeallocateOnJobCompletionAttribute&& o) noexcept = default;
  constexpr DeallocateOnJobCompletionAttribute& operator=(DeallocateOnJobCompletionAttribute const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Collections
NEED_NO_BOX(Unity::Collections::DeallocateOnJobCompletionAttribute);
DEFINE_IL2CPP_ARG_TYPE(Unity::Collections::DeallocateOnJobCompletionAttribute, "Unity.Collections", "DeallocateOnJobCompletionAttribute");
