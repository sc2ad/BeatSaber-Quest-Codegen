#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine {
class RenderTexture;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class DrawParams;
}
// Type: UnityEngine.UIElements.UIR::DrawParams
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7543))
// CS Name: UnityEngine.UIElements.UIR.DrawParams
class CORDL_TYPE DrawParams : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DrawParams() = default;

// Ctor Parameters [CppParam { name: "", ty: "DrawParams", modifiers: " const&", def_value: None }]
constexpr DrawParams(DrawParams const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DrawParams", modifiers: "&&", def_value: None }]
constexpr DrawParams(DrawParams&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DrawParams(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DrawParams& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DrawParams& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DrawParams& operator=(DrawParams&& o) noexcept = default;
  constexpr DrawParams& operator=(DrawParams const& o) noexcept = default;
                


// Fields

static UnityEngine::Rect __declspec(property(get=__get_k_UnlimitedRect, put=__set_k_UnlimitedRect))  k_UnlimitedRect;

static void __set_k_UnlimitedRect(UnityEngine::Rect value) ;

static UnityEngine::Rect __get_k_UnlimitedRect() ;

static UnityEngine::Rect __declspec(property(get=__get_k_FullNormalizedRect, put=__set_k_FullNormalizedRect))  k_FullNormalizedRect;

static void __set_k_FullNormalizedRect(UnityEngine::Rect value) ;

static UnityEngine::Rect __get_k_FullNormalizedRect() ;

 System::Collections::Generic::Stack_1<UnityEngine::Matrix4x4> __declspec(property(get=__get_view, put=__set_view))  view;

constexpr void __set_view(System::Collections::Generic::Stack_1<UnityEngine::Matrix4x4> value) ;

constexpr System::Collections::Generic::Stack_1<UnityEngine::Matrix4x4> __get_view() const;

 System::Collections::Generic::Stack_1<UnityEngine::Rect> __declspec(property(get=__get_scissor, put=__set_scissor))  scissor;

constexpr void __set_scissor(System::Collections::Generic::Stack_1<UnityEngine::Rect> value) ;

constexpr System::Collections::Generic::Stack_1<UnityEngine::Rect> __get_scissor() const;

 System::Collections::Generic::List_1<UnityEngine::RenderTexture> __declspec(property(get=__get_renderTexture, put=__set_renderTexture))  renderTexture;

constexpr void __set_renderTexture(System::Collections::Generic::List_1<UnityEngine::RenderTexture> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::RenderTexture> __get_renderTexture() const;

 System::Collections::Generic::List_1<UnityEngine::Material> __declspec(property(get=__get_defaultMaterial, put=__set_defaultMaterial))  defaultMaterial;

constexpr void __set_defaultMaterial(System::Collections::Generic::List_1<UnityEngine::Material> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Material> __get_defaultMaterial() const;


// Methods

/// @brief Method Reset addr 0x2c5ad18 size 0x1cc virtual false final false
 void Reset() ;

// Ctor Parameters []
explicit DrawParams() ;

/// @brief Method .ctor addr 0x2c55a1c size 0x158 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
NEED_NO_BOX(UnityEngine::UIElements::UIR::DrawParams);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::DrawParams, "UnityEngine.UIElements.UIR", "DrawParams");
