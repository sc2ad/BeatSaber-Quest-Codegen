#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace UnityEngine {
class ImageEffectAllowedInSceneView;
}
// Type: UnityEngine::ImageEffectAllowedInSceneView
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10028))
// CS Name: UnityEngine.ImageEffectAllowedInSceneView
class CORDL_TYPE ImageEffectAllowedInSceneView : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ImageEffectAllowedInSceneView() = default;

// Ctor Parameters [CppParam { name: "", ty: "ImageEffectAllowedInSceneView", modifiers: " const&", def_value: None }]
constexpr ImageEffectAllowedInSceneView(ImageEffectAllowedInSceneView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ImageEffectAllowedInSceneView", modifiers: "&&", def_value: None }]
constexpr ImageEffectAllowedInSceneView(ImageEffectAllowedInSceneView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ImageEffectAllowedInSceneView(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr ImageEffectAllowedInSceneView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ImageEffectAllowedInSceneView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ImageEffectAllowedInSceneView& operator=(ImageEffectAllowedInSceneView&& o) noexcept = default;
  constexpr ImageEffectAllowedInSceneView& operator=(ImageEffectAllowedInSceneView const& o) noexcept = default;
                


// Methods

static UnityEngine::ImageEffectAllowedInSceneView New_ctor() ;

/// @brief Method .ctor addr 0x2b40698 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::ImageEffectAllowedInSceneView);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ImageEffectAllowedInSceneView, "UnityEngine", "ImageEffectAllowedInSceneView");
