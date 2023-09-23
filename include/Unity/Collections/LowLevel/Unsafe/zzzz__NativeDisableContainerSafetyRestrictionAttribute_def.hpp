#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class NativeDisableContainerSafetyRestrictionAttribute;
}
// Type: Unity.Collections.LowLevel.Unsafe::NativeDisableContainerSafetyRestrictionAttribute
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9966))
// CS Name: Unity.Collections.LowLevel.Unsafe.NativeDisableContainerSafetyRestrictionAttribute
class CORDL_TYPE NativeDisableContainerSafetyRestrictionAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NativeDisableContainerSafetyRestrictionAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeDisableContainerSafetyRestrictionAttribute", modifiers: " const&", def_value: None }]
constexpr NativeDisableContainerSafetyRestrictionAttribute(NativeDisableContainerSafetyRestrictionAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeDisableContainerSafetyRestrictionAttribute", modifiers: "&&", def_value: None }]
constexpr NativeDisableContainerSafetyRestrictionAttribute(NativeDisableContainerSafetyRestrictionAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativeDisableContainerSafetyRestrictionAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr NativeDisableContainerSafetyRestrictionAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativeDisableContainerSafetyRestrictionAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativeDisableContainerSafetyRestrictionAttribute& operator=(NativeDisableContainerSafetyRestrictionAttribute&& o) noexcept = default;
  constexpr NativeDisableContainerSafetyRestrictionAttribute& operator=(NativeDisableContainerSafetyRestrictionAttribute const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(Unity::Collections::LowLevel::Unsafe::NativeDisableContainerSafetyRestrictionAttribute);
DEFINE_IL2CPP_ARG_TYPE(Unity::Collections::LowLevel::Unsafe::NativeDisableContainerSafetyRestrictionAttribute, "Unity.Collections.LowLevel.Unsafe", "NativeDisableContainerSafetyRestrictionAttribute");
