#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
// Forward declare root types
namespace UnityEngine {
class CustomRenderTexture;
}
// Type: UnityEngine::CustomRenderTexture
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10020))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10021))
// CS Name: UnityEngine.CustomRenderTexture
class CORDL_TYPE CustomRenderTexture : public UnityEngine::RenderTexture {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CustomRenderTexture() = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomRenderTexture", modifiers: " const&", def_value: None }]
constexpr CustomRenderTexture(CustomRenderTexture const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomRenderTexture", modifiers: "&&", def_value: None }]
constexpr CustomRenderTexture(CustomRenderTexture&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CustomRenderTexture(void* ptr) noexcept : UnityEngine::RenderTexture(ptr) {
}


  constexpr CustomRenderTexture& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CustomRenderTexture& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CustomRenderTexture& operator=(CustomRenderTexture&& o) noexcept = default;
  constexpr CustomRenderTexture& operator=(CustomRenderTexture const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::CustomRenderTexture);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::CustomRenderTexture, "UnityEngine", "CustomRenderTexture");
