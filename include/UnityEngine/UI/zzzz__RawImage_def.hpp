#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UI/zzzz__MaskableGraphic_def.hpp"
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine::UI {
class VertexHelper;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::UI {
class RawImage;
}
// Type: UnityEngine.UI::RawImage
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13038))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13045))
// CS Name: UnityEngine.UI.RawImage
class CORDL_TYPE RawImage : public UnityEngine::UI::MaskableGraphic {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xe8};

virtual ~RawImage() = default;

// Ctor Parameters [CppParam { name: "", ty: "RawImage", modifiers: " const&", def_value: None }]
constexpr RawImage(RawImage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RawImage", modifiers: "&&", def_value: None }]
constexpr RawImage(RawImage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RawImage(void* ptr) noexcept : UnityEngine::UI::MaskableGraphic(ptr) {
}


  constexpr RawImage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RawImage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RawImage& operator=(RawImage&& o) noexcept = default;
  constexpr RawImage& operator=(RawImage const& o) noexcept = default;
                


// Fields

 UnityEngine::Texture __declspec(property(get=__get_m_Texture, put=__set_m_Texture))  m_Texture;

constexpr void __set_m_Texture(UnityEngine::Texture value) ;

constexpr UnityEngine::Texture __get_m_Texture() const;

 UnityEngine::Rect __declspec(property(get=__get_m_UVRect, put=__set_m_UVRect))  m_UVRect;

constexpr void __set_m_UVRect(UnityEngine::Rect value) ;

constexpr UnityEngine::Rect __get_m_UVRect() const;


// Properties

 UnityEngine::Texture __declspec(property(get=get_mainTexture))  mainTexture;

 UnityEngine::Texture __declspec(property(get=get_texture, put=set_texture))  texture;

 UnityEngine::Rect __declspec(property(get=get_uvRect, put=set_uvRect))  uvRect;


// Methods

// Ctor Parameters []
explicit RawImage() ;

/// @brief Method .ctor addr 0x2c05008 size 0x50 virtual false final false
 void _ctor() ;

/// @brief Method get_mainTexture addr 0x2c05058 size 0x158 virtual true final false
 UnityEngine::Texture get_mainTexture() ;

/// @brief Method get_texture addr 0x2c051b0 size 0x8 virtual false final false
 UnityEngine::Texture get_texture() ;

/// @brief Method set_texture addr 0x2c051b8 size 0xac virtual false final false
 void set_texture(UnityEngine::Texture value) ;

/// @brief Method get_uvRect addr 0x2c05264 size 0xc virtual false final false
 UnityEngine::Rect get_uvRect() ;

/// @brief Method set_uvRect addr 0x2c05270 size 0x80 virtual false final false
 void set_uvRect(UnityEngine::Rect value) ;

/// @brief Method SetNativeSize addr 0x2c052f0 size 0x2e0 virtual true final false
 void SetNativeSize() ;

/// @brief Method OnPopulateMesh addr 0x2c055d0 size 0xd18 virtual true final false
 void OnPopulateMesh(UnityEngine::UI::VertexHelper vh) ;

/// @brief Method OnDidApplyAnimationProperties addr 0x2c066b0 size 0x3c virtual true final false
 void OnDidApplyAnimationProperties() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::RawImage);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::RawImage, "UnityEngine.UI", "RawImage");
