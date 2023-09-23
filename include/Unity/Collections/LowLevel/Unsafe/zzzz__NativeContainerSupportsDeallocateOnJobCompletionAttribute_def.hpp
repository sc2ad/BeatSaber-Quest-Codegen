#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class NativeContainerSupportsDeallocateOnJobCompletionAttribute;
}
// Type: Unity.Collections.LowLevel.Unsafe::NativeContainerSupportsDeallocateOnJobCompletionAttribute
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9960))
// CS Name: Unity.Collections.LowLevel.Unsafe.NativeContainerSupportsDeallocateOnJobCompletionAttribute
class CORDL_TYPE NativeContainerSupportsDeallocateOnJobCompletionAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NativeContainerSupportsDeallocateOnJobCompletionAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeContainerSupportsDeallocateOnJobCompletionAttribute", modifiers: " const&", def_value: None }]
constexpr NativeContainerSupportsDeallocateOnJobCompletionAttribute(NativeContainerSupportsDeallocateOnJobCompletionAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeContainerSupportsDeallocateOnJobCompletionAttribute", modifiers: "&&", def_value: None }]
constexpr NativeContainerSupportsDeallocateOnJobCompletionAttribute(NativeContainerSupportsDeallocateOnJobCompletionAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativeContainerSupportsDeallocateOnJobCompletionAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr NativeContainerSupportsDeallocateOnJobCompletionAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativeContainerSupportsDeallocateOnJobCompletionAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativeContainerSupportsDeallocateOnJobCompletionAttribute& operator=(NativeContainerSupportsDeallocateOnJobCompletionAttribute&& o) noexcept = default;
  constexpr NativeContainerSupportsDeallocateOnJobCompletionAttribute& operator=(NativeContainerSupportsDeallocateOnJobCompletionAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit NativeContainerSupportsDeallocateOnJobCompletionAttribute() ;

/// @brief Method .ctor addr 0x2b28ad0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(Unity::Collections::LowLevel::Unsafe::NativeContainerSupportsDeallocateOnJobCompletionAttribute);
DEFINE_IL2CPP_ARG_TYPE(Unity::Collections::LowLevel::Unsafe::NativeContainerSupportsDeallocateOnJobCompletionAttribute, "Unity.Collections.LowLevel.Unsafe", "NativeContainerSupportsDeallocateOnJobCompletionAttribute");
