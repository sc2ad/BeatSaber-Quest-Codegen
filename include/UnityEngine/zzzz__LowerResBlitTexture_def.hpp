#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
// Forward declare root types
namespace UnityEngine {
class LowerResBlitTexture;
}
// Type: UnityEngine::LowerResBlitTexture
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10213))
// CS Name: UnityEngine.LowerResBlitTexture
class CORDL_TYPE LowerResBlitTexture : public UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~LowerResBlitTexture() = default;

// Ctor Parameters [CppParam { name: "", ty: "LowerResBlitTexture", modifiers: " const&", def_value: None }]
constexpr LowerResBlitTexture(LowerResBlitTexture const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LowerResBlitTexture", modifiers: "&&", def_value: None }]
constexpr LowerResBlitTexture(LowerResBlitTexture&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LowerResBlitTexture(void* ptr) noexcept : UnityEngine::Object(ptr) {
}


  constexpr LowerResBlitTexture& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LowerResBlitTexture& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LowerResBlitTexture& operator=(LowerResBlitTexture&& o) noexcept = default;
  constexpr LowerResBlitTexture& operator=(LowerResBlitTexture const& o) noexcept = default;
                


// Methods

/// @brief Method LowerResBlitTextureDontStripMe addr 0x2b69768 size 0x4 virtual false final false
 void LowerResBlitTextureDontStripMe() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::LowerResBlitTexture);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::LowerResBlitTexture, "UnityEngine", "LowerResBlitTexture");
