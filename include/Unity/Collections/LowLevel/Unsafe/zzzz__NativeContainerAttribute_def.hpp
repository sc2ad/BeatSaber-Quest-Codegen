#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class NativeContainerAttribute;
}
// Type: Unity.Collections.LowLevel.Unsafe::NativeContainerAttribute
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9956))
// CS Name: Unity.Collections.LowLevel.Unsafe.NativeContainerAttribute
class CORDL_TYPE NativeContainerAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NativeContainerAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeContainerAttribute", modifiers: " const&", def_value: None }]
constexpr NativeContainerAttribute(NativeContainerAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeContainerAttribute", modifiers: "&&", def_value: None }]
constexpr NativeContainerAttribute(NativeContainerAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativeContainerAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr NativeContainerAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativeContainerAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativeContainerAttribute& operator=(NativeContainerAttribute&& o) noexcept = default;
  constexpr NativeContainerAttribute& operator=(NativeContainerAttribute const& o) noexcept = default;
                


// Methods

static Unity::Collections::LowLevel::Unsafe::NativeContainerAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2b28ac0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(Unity::Collections::LowLevel::Unsafe::NativeContainerAttribute);
DEFINE_IL2CPP_ARG_TYPE(Unity::Collections::LowLevel::Unsafe::NativeContainerAttribute, "Unity.Collections.LowLevel.Unsafe", "NativeContainerAttribute");
