#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class NativeContainerNeedsThreadIndexAttribute;
}
// Type: Unity.Collections.LowLevel.Unsafe::NativeContainerNeedsThreadIndexAttribute
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9963))
// CS Name: Unity.Collections.LowLevel.Unsafe.NativeContainerNeedsThreadIndexAttribute
class CORDL_TYPE NativeContainerNeedsThreadIndexAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NativeContainerNeedsThreadIndexAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeContainerNeedsThreadIndexAttribute", modifiers: " const&", def_value: None }]
constexpr NativeContainerNeedsThreadIndexAttribute(NativeContainerNeedsThreadIndexAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeContainerNeedsThreadIndexAttribute", modifiers: "&&", def_value: None }]
constexpr NativeContainerNeedsThreadIndexAttribute(NativeContainerNeedsThreadIndexAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativeContainerNeedsThreadIndexAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr NativeContainerNeedsThreadIndexAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativeContainerNeedsThreadIndexAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativeContainerNeedsThreadIndexAttribute& operator=(NativeContainerNeedsThreadIndexAttribute&& o) noexcept = default;
  constexpr NativeContainerNeedsThreadIndexAttribute& operator=(NativeContainerNeedsThreadIndexAttribute const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Collections::LowLevel::Unsafe
} // end anonymous namespace
NEED_NO_BOX(::Unity::Collections::LowLevel::Unsafe::NativeContainerNeedsThreadIndexAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::NativeContainerNeedsThreadIndexAttribute, "Unity.Collections.LowLevel.Unsafe", "NativeContainerNeedsThreadIndexAttribute");
