#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class WriteAccessRequiredAttribute;
}
// Type: Unity.Collections.LowLevel.Unsafe::WriteAccessRequiredAttribute
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9964))
// CS Name: Unity.Collections.LowLevel.Unsafe.WriteAccessRequiredAttribute
class CORDL_TYPE WriteAccessRequiredAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~WriteAccessRequiredAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "WriteAccessRequiredAttribute", modifiers: " const&", def_value: None }]
constexpr WriteAccessRequiredAttribute(WriteAccessRequiredAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WriteAccessRequiredAttribute", modifiers: "&&", def_value: None }]
constexpr WriteAccessRequiredAttribute(WriteAccessRequiredAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WriteAccessRequiredAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr WriteAccessRequiredAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WriteAccessRequiredAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WriteAccessRequiredAttribute& operator=(WriteAccessRequiredAttribute&& o) noexcept = default;
  constexpr WriteAccessRequiredAttribute& operator=(WriteAccessRequiredAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit WriteAccessRequiredAttribute() ;

/// @brief Method .ctor addr 0x2b28ae0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Collections::LowLevel::Unsafe
} // end anonymous namespace
NEED_NO_BOX(::Unity::Collections::LowLevel::Unsafe::WriteAccessRequiredAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::WriteAccessRequiredAttribute, "Unity.Collections.LowLevel.Unsafe", "WriteAccessRequiredAttribute");
