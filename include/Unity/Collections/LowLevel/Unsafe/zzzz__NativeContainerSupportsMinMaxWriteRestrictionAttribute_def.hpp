#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class NativeContainerSupportsMinMaxWriteRestrictionAttribute;
}
// Type: Unity.Collections.LowLevel.Unsafe::NativeContainerSupportsMinMaxWriteRestrictionAttribute
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9959))
// CS Name: Unity.Collections.LowLevel.Unsafe.NativeContainerSupportsMinMaxWriteRestrictionAttribute
class CORDL_TYPE NativeContainerSupportsMinMaxWriteRestrictionAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NativeContainerSupportsMinMaxWriteRestrictionAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeContainerSupportsMinMaxWriteRestrictionAttribute", modifiers: " const&", def_value: None }]
constexpr NativeContainerSupportsMinMaxWriteRestrictionAttribute(NativeContainerSupportsMinMaxWriteRestrictionAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeContainerSupportsMinMaxWriteRestrictionAttribute", modifiers: "&&", def_value: None }]
constexpr NativeContainerSupportsMinMaxWriteRestrictionAttribute(NativeContainerSupportsMinMaxWriteRestrictionAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativeContainerSupportsMinMaxWriteRestrictionAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr NativeContainerSupportsMinMaxWriteRestrictionAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativeContainerSupportsMinMaxWriteRestrictionAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativeContainerSupportsMinMaxWriteRestrictionAttribute& operator=(NativeContainerSupportsMinMaxWriteRestrictionAttribute&& o) noexcept = default;
  constexpr NativeContainerSupportsMinMaxWriteRestrictionAttribute& operator=(NativeContainerSupportsMinMaxWriteRestrictionAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit NativeContainerSupportsMinMaxWriteRestrictionAttribute() ;

/// @brief Method .ctor addr 0x2b28ac8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(Unity::Collections::LowLevel::Unsafe::NativeContainerSupportsMinMaxWriteRestrictionAttribute);
DEFINE_IL2CPP_ARG_TYPE(Unity::Collections::LowLevel::Unsafe::NativeContainerSupportsMinMaxWriteRestrictionAttribute, "Unity.Collections.LowLevel.Unsafe", "NativeContainerSupportsMinMaxWriteRestrictionAttribute");
