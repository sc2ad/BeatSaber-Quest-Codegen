#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class NativeSetThreadIndexAttribute;
}
// Type: Unity.Collections.LowLevel.Unsafe::NativeSetThreadIndexAttribute
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9962))
// CS Name: Unity.Collections.LowLevel.Unsafe.NativeSetThreadIndexAttribute
class CORDL_TYPE NativeSetThreadIndexAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NativeSetThreadIndexAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeSetThreadIndexAttribute", modifiers: " const&", def_value: None }]
constexpr NativeSetThreadIndexAttribute(NativeSetThreadIndexAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeSetThreadIndexAttribute", modifiers: "&&", def_value: None }]
constexpr NativeSetThreadIndexAttribute(NativeSetThreadIndexAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativeSetThreadIndexAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr NativeSetThreadIndexAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativeSetThreadIndexAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativeSetThreadIndexAttribute& operator=(NativeSetThreadIndexAttribute&& o) noexcept = default;
  constexpr NativeSetThreadIndexAttribute& operator=(NativeSetThreadIndexAttribute const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(Unity::Collections::LowLevel::Unsafe::NativeSetThreadIndexAttribute);
DEFINE_IL2CPP_ARG_TYPE(Unity::Collections::LowLevel::Unsafe::NativeSetThreadIndexAttribute, "Unity.Collections.LowLevel.Unsafe", "NativeSetThreadIndexAttribute");
