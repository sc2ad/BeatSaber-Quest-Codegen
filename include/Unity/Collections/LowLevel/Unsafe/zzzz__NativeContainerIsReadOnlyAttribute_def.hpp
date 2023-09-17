#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class NativeContainerIsReadOnlyAttribute;
}
// Type: Unity.Collections.LowLevel.Unsafe::NativeContainerIsReadOnlyAttribute
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9957))
// CS Name: Unity.Collections.LowLevel.Unsafe.NativeContainerIsReadOnlyAttribute
class CORDL_TYPE NativeContainerIsReadOnlyAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NativeContainerIsReadOnlyAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeContainerIsReadOnlyAttribute", modifiers: " const&", def_value: None }]
constexpr NativeContainerIsReadOnlyAttribute(NativeContainerIsReadOnlyAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeContainerIsReadOnlyAttribute", modifiers: "&&", def_value: None }]
constexpr NativeContainerIsReadOnlyAttribute(NativeContainerIsReadOnlyAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativeContainerIsReadOnlyAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr NativeContainerIsReadOnlyAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativeContainerIsReadOnlyAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativeContainerIsReadOnlyAttribute& operator=(NativeContainerIsReadOnlyAttribute&& o) noexcept = default;
  constexpr NativeContainerIsReadOnlyAttribute& operator=(NativeContainerIsReadOnlyAttribute const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Collections::LowLevel::Unsafe
} // end anonymous namespace
NEED_NO_BOX(::Unity::Collections::LowLevel::Unsafe::NativeContainerIsReadOnlyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::NativeContainerIsReadOnlyAttribute, "Unity.Collections.LowLevel.Unsafe", "NativeContainerIsReadOnlyAttribute");
