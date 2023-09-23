#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace UnityEngine {
class PreferBinarySerialization;
}
// Type: UnityEngine::PreferBinarySerialization
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9992))
// CS Name: UnityEngine.PreferBinarySerialization
class CORDL_TYPE PreferBinarySerialization : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PreferBinarySerialization() = default;

// Ctor Parameters [CppParam { name: "", ty: "PreferBinarySerialization", modifiers: " const&", def_value: None }]
constexpr PreferBinarySerialization(PreferBinarySerialization const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PreferBinarySerialization", modifiers: "&&", def_value: None }]
constexpr PreferBinarySerialization(PreferBinarySerialization&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PreferBinarySerialization(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr PreferBinarySerialization& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PreferBinarySerialization& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PreferBinarySerialization& operator=(PreferBinarySerialization&& o) noexcept = default;
  constexpr PreferBinarySerialization& operator=(PreferBinarySerialization const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::PreferBinarySerialization);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PreferBinarySerialization, "UnityEngine", "PreferBinarySerialization");
