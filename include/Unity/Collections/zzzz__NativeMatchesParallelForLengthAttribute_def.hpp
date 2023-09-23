#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace Unity::Collections {
class NativeMatchesParallelForLengthAttribute;
}
// Type: Unity.Collections::NativeMatchesParallelForLengthAttribute
namespace Unity::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9950))
// CS Name: Unity.Collections.NativeMatchesParallelForLengthAttribute
class CORDL_TYPE NativeMatchesParallelForLengthAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NativeMatchesParallelForLengthAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeMatchesParallelForLengthAttribute", modifiers: " const&", def_value: None }]
constexpr NativeMatchesParallelForLengthAttribute(NativeMatchesParallelForLengthAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeMatchesParallelForLengthAttribute", modifiers: "&&", def_value: None }]
constexpr NativeMatchesParallelForLengthAttribute(NativeMatchesParallelForLengthAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativeMatchesParallelForLengthAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr NativeMatchesParallelForLengthAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativeMatchesParallelForLengthAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativeMatchesParallelForLengthAttribute& operator=(NativeMatchesParallelForLengthAttribute&& o) noexcept = default;
  constexpr NativeMatchesParallelForLengthAttribute& operator=(NativeMatchesParallelForLengthAttribute const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Collections
NEED_NO_BOX(Unity::Collections::NativeMatchesParallelForLengthAttribute);
DEFINE_IL2CPP_ARG_TYPE(Unity::Collections::NativeMatchesParallelForLengthAttribute, "Unity.Collections", "NativeMatchesParallelForLengthAttribute");
