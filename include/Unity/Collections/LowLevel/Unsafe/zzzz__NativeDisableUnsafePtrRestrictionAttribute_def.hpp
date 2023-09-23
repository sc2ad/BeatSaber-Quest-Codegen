#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class NativeDisableUnsafePtrRestrictionAttribute;
}
// Type: Unity.Collections.LowLevel.Unsafe::NativeDisableUnsafePtrRestrictionAttribute
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9965))
// CS Name: Unity.Collections.LowLevel.Unsafe.NativeDisableUnsafePtrRestrictionAttribute
class CORDL_TYPE NativeDisableUnsafePtrRestrictionAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NativeDisableUnsafePtrRestrictionAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeDisableUnsafePtrRestrictionAttribute", modifiers: " const&", def_value: None }]
constexpr NativeDisableUnsafePtrRestrictionAttribute(NativeDisableUnsafePtrRestrictionAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeDisableUnsafePtrRestrictionAttribute", modifiers: "&&", def_value: None }]
constexpr NativeDisableUnsafePtrRestrictionAttribute(NativeDisableUnsafePtrRestrictionAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativeDisableUnsafePtrRestrictionAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr NativeDisableUnsafePtrRestrictionAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativeDisableUnsafePtrRestrictionAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativeDisableUnsafePtrRestrictionAttribute& operator=(NativeDisableUnsafePtrRestrictionAttribute&& o) noexcept = default;
  constexpr NativeDisableUnsafePtrRestrictionAttribute& operator=(NativeDisableUnsafePtrRestrictionAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit NativeDisableUnsafePtrRestrictionAttribute() ;

/// @brief Method .ctor addr 0x2b28ae8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(Unity::Collections::LowLevel::Unsafe::NativeDisableUnsafePtrRestrictionAttribute);
DEFINE_IL2CPP_ARG_TYPE(Unity::Collections::LowLevel::Unsafe::NativeDisableUnsafePtrRestrictionAttribute, "Unity.Collections.LowLevel.Unsafe", "NativeDisableUnsafePtrRestrictionAttribute");
