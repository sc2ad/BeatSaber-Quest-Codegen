#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace Unity::Collections {
class NativeDisableParallelForRestrictionAttribute;
}
// Type: Unity.Collections::NativeDisableParallelForRestrictionAttribute
namespace Unity::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9951))
// CS Name: Unity.Collections.NativeDisableParallelForRestrictionAttribute
class CORDL_TYPE NativeDisableParallelForRestrictionAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NativeDisableParallelForRestrictionAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeDisableParallelForRestrictionAttribute", modifiers: " const&", def_value: None }]
constexpr NativeDisableParallelForRestrictionAttribute(NativeDisableParallelForRestrictionAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeDisableParallelForRestrictionAttribute", modifiers: "&&", def_value: None }]
constexpr NativeDisableParallelForRestrictionAttribute(NativeDisableParallelForRestrictionAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativeDisableParallelForRestrictionAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr NativeDisableParallelForRestrictionAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativeDisableParallelForRestrictionAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativeDisableParallelForRestrictionAttribute& operator=(NativeDisableParallelForRestrictionAttribute&& o) noexcept = default;
  constexpr NativeDisableParallelForRestrictionAttribute& operator=(NativeDisableParallelForRestrictionAttribute const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Collections
NEED_NO_BOX(Unity::Collections::NativeDisableParallelForRestrictionAttribute);
DEFINE_IL2CPP_ARG_TYPE(Unity::Collections::NativeDisableParallelForRestrictionAttribute, "Unity.Collections", "NativeDisableParallelForRestrictionAttribute");
