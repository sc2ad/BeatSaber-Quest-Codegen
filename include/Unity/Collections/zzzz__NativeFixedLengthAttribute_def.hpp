#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace Unity::Collections {
class NativeFixedLengthAttribute;
}
// Type: Unity.Collections::NativeFixedLengthAttribute
namespace Unity::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9949))
// CS Name: Unity.Collections.NativeFixedLengthAttribute
class CORDL_TYPE NativeFixedLengthAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NativeFixedLengthAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeFixedLengthAttribute", modifiers: " const&", def_value: None }]
constexpr NativeFixedLengthAttribute(NativeFixedLengthAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeFixedLengthAttribute", modifiers: "&&", def_value: None }]
constexpr NativeFixedLengthAttribute(NativeFixedLengthAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativeFixedLengthAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr NativeFixedLengthAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativeFixedLengthAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativeFixedLengthAttribute& operator=(NativeFixedLengthAttribute&& o) noexcept = default;
  constexpr NativeFixedLengthAttribute& operator=(NativeFixedLengthAttribute const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Collections
NEED_NO_BOX(Unity::Collections::NativeFixedLengthAttribute);
DEFINE_IL2CPP_ARG_TYPE(Unity::Collections::NativeFixedLengthAttribute, "Unity.Collections", "NativeFixedLengthAttribute");
