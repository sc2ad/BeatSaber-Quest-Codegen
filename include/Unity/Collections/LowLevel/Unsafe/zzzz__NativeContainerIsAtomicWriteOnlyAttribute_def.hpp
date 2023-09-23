#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class NativeContainerIsAtomicWriteOnlyAttribute;
}
// Type: Unity.Collections.LowLevel.Unsafe::NativeContainerIsAtomicWriteOnlyAttribute
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9958))
// CS Name: Unity.Collections.LowLevel.Unsafe.NativeContainerIsAtomicWriteOnlyAttribute
class CORDL_TYPE NativeContainerIsAtomicWriteOnlyAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NativeContainerIsAtomicWriteOnlyAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeContainerIsAtomicWriteOnlyAttribute", modifiers: " const&", def_value: None }]
constexpr NativeContainerIsAtomicWriteOnlyAttribute(NativeContainerIsAtomicWriteOnlyAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeContainerIsAtomicWriteOnlyAttribute", modifiers: "&&", def_value: None }]
constexpr NativeContainerIsAtomicWriteOnlyAttribute(NativeContainerIsAtomicWriteOnlyAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativeContainerIsAtomicWriteOnlyAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr NativeContainerIsAtomicWriteOnlyAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativeContainerIsAtomicWriteOnlyAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativeContainerIsAtomicWriteOnlyAttribute& operator=(NativeContainerIsAtomicWriteOnlyAttribute&& o) noexcept = default;
  constexpr NativeContainerIsAtomicWriteOnlyAttribute& operator=(NativeContainerIsAtomicWriteOnlyAttribute const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(Unity::Collections::LowLevel::Unsafe::NativeContainerIsAtomicWriteOnlyAttribute);
DEFINE_IL2CPP_ARG_TYPE(Unity::Collections::LowLevel::Unsafe::NativeContainerIsAtomicWriteOnlyAttribute, "Unity.Collections.LowLevel.Unsafe", "NativeContainerIsAtomicWriteOnlyAttribute");
