#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class BuiltinMaterials;
}
// Type: UnityEngine.ProBuilder::BuiltinMaterials
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12048))
// CS Name: UnityEngine.ProBuilder.BuiltinMaterials
class CORDL_TYPE BuiltinMaterials : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BuiltinMaterials() = default;

// Ctor Parameters [CppParam { name: "", ty: "BuiltinMaterials", modifiers: " const&", def_value: None }]
constexpr BuiltinMaterials(BuiltinMaterials const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BuiltinMaterials", modifiers: "&&", def_value: None }]
constexpr BuiltinMaterials(BuiltinMaterials&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BuiltinMaterials(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BuiltinMaterials& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BuiltinMaterials& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BuiltinMaterials& operator=(BuiltinMaterials&& o) noexcept = default;
  constexpr BuiltinMaterials& operator=(BuiltinMaterials const& o) noexcept = default;
                


// Fields

static bool __declspec(property(get=__get_s_IsInitialized, put=__set_s_IsInitialized))  s_IsInitialized;

static void __set_s_IsInitialized(bool value) ;

static bool __get_s_IsInitialized() ;

/// @brief Field faceShader offset 0
static constexpr ::ConstString  faceShader{u"Hidden/ProBuilder/FaceHighlight"};

/// @brief Field lineShader offset 0
static constexpr ::ConstString  lineShader{u"Hidden/ProBuilder/LineBillboard"};

/// @brief Field lineShaderMetal offset 0
static constexpr ::ConstString  lineShaderMetal{u"Hidden/ProBuilder/LineBillboardMetal"};

/// @brief Field pointShader offset 0
static constexpr ::ConstString  pointShader{u"Hidden/ProBuilder/PointBillboard"};

/// @brief Field wireShader offset 0
static constexpr ::ConstString  wireShader{u"Hidden/ProBuilder/FaceHighlight"};

/// @brief Field dotShader offset 0
static constexpr ::ConstString  dotShader{u"Hidden/ProBuilder/VertexShader"};

static UnityEngine::Color __declspec(property(get=__get_previewColor, put=__set_previewColor))  previewColor;

static void __set_previewColor(UnityEngine::Color value) ;

static UnityEngine::Color __get_previewColor() ;

static UnityEngine::Shader __declspec(property(get=__get_s_SelectionPickerShader, put=__set_s_SelectionPickerShader))  s_SelectionPickerShader;

static void __set_s_SelectionPickerShader(UnityEngine::Shader value) ;

static UnityEngine::Shader __get_s_SelectionPickerShader() ;

static bool __declspec(property(get=__get_s_GeometryShadersSupported, put=__set_s_GeometryShadersSupported))  s_GeometryShadersSupported;

static void __set_s_GeometryShadersSupported(bool value) ;

static bool __get_s_GeometryShadersSupported() ;

static UnityEngine::Material __declspec(property(get=__get_s_DefaultMaterial, put=__set_s_DefaultMaterial))  s_DefaultMaterial;

static void __set_s_DefaultMaterial(UnityEngine::Material value) ;

static UnityEngine::Material __get_s_DefaultMaterial() ;

static UnityEngine::Material __declspec(property(get=__get_s_FacePickerMaterial, put=__set_s_FacePickerMaterial))  s_FacePickerMaterial;

static void __set_s_FacePickerMaterial(UnityEngine::Material value) ;

static UnityEngine::Material __get_s_FacePickerMaterial() ;

static UnityEngine::Material __declspec(property(get=__get_s_VertexPickerMaterial, put=__set_s_VertexPickerMaterial))  s_VertexPickerMaterial;

static void __set_s_VertexPickerMaterial(UnityEngine::Material value) ;

static UnityEngine::Material __get_s_VertexPickerMaterial() ;

static UnityEngine::Material __declspec(property(get=__get_s_EdgePickerMaterial, put=__set_s_EdgePickerMaterial))  s_EdgePickerMaterial;

static void __set_s_EdgePickerMaterial(UnityEngine::Material value) ;

static UnityEngine::Material __get_s_EdgePickerMaterial() ;

static UnityEngine::Material __declspec(property(get=__get_s_UnityDefaultDiffuse, put=__set_s_UnityDefaultDiffuse))  s_UnityDefaultDiffuse;

static void __set_s_UnityDefaultDiffuse(UnityEngine::Material value) ;

static UnityEngine::Material __get_s_UnityDefaultDiffuse() ;

static UnityEngine::Material __declspec(property(get=__get_s_UnlitVertexColorMaterial, put=__set_s_UnlitVertexColorMaterial))  s_UnlitVertexColorMaterial;

static void __set_s_UnlitVertexColorMaterial(UnityEngine::Material value) ;

static UnityEngine::Material __get_s_UnlitVertexColorMaterial() ;

static UnityEngine::Material __declspec(property(get=__get_s_ShapePreviewMaterial, put=__set_s_ShapePreviewMaterial))  s_ShapePreviewMaterial;

static void __set_s_ShapePreviewMaterial(UnityEngine::Material value) ;

static UnityEngine::Material __get_s_ShapePreviewMaterial() ;

static ::StringW __declspec(property(get=__get_k_EdgePickerMaterial, put=__set_k_EdgePickerMaterial))  k_EdgePickerMaterial;

static void __set_k_EdgePickerMaterial(::StringW value) ;

static ::StringW __get_k_EdgePickerMaterial() ;

static ::StringW __declspec(property(get=__get_k_FacePickerMaterial, put=__set_k_FacePickerMaterial))  k_FacePickerMaterial;

static void __set_k_FacePickerMaterial(::StringW value) ;

static ::StringW __get_k_FacePickerMaterial() ;

static ::StringW __declspec(property(get=__get_k_VertexPickerMaterial, put=__set_k_VertexPickerMaterial))  k_VertexPickerMaterial;

static void __set_k_VertexPickerMaterial(::StringW value) ;

static ::StringW __get_k_VertexPickerMaterial() ;

static ::StringW __declspec(property(get=__get_k_EdgePickerShader, put=__set_k_EdgePickerShader))  k_EdgePickerShader;

static void __set_k_EdgePickerShader(::StringW value) ;

static ::StringW __get_k_EdgePickerShader() ;

static ::StringW __declspec(property(get=__get_k_FacePickerShader, put=__set_k_FacePickerShader))  k_FacePickerShader;

static void __set_k_FacePickerShader(::StringW value) ;

static ::StringW __get_k_FacePickerShader() ;

static ::StringW __declspec(property(get=__get_k_VertexPickerShader, put=__set_k_VertexPickerShader))  k_VertexPickerShader;

static void __set_k_VertexPickerShader(::StringW value) ;

static ::StringW __get_k_VertexPickerShader() ;


// Properties

static bool __declspec(property(get=get_geometryShadersSupported))  geometryShadersSupported;

static UnityEngine::Material __declspec(property(get=get_defaultMaterial))  defaultMaterial;

static UnityEngine::Shader __declspec(property(get=get_selectionPickerShader))  selectionPickerShader;

static UnityEngine::Material __declspec(property(get=get_facePickerMaterial))  facePickerMaterial;

static UnityEngine::Material __declspec(property(get=get_vertexPickerMaterial))  vertexPickerMaterial;

static UnityEngine::Material __declspec(property(get=get_edgePickerMaterial))  edgePickerMaterial;

static UnityEngine::Material __declspec(property(get=get_triggerMaterial))  triggerMaterial;

static UnityEngine::Material __declspec(property(get=get_colliderMaterial))  colliderMaterial;

static UnityEngine::Material __declspec(property(get=get_noDrawMaterial))  noDrawMaterial;

static UnityEngine::Material __declspec(property(get=get_unlitVertexColor))  unlitVertexColor;

static UnityEngine::Material __declspec(property(get=get_ShapePreviewMaterial))  ShapePreviewMaterial;


// Methods

/// @brief Method Init addr 0x29a7040 size 0x6a0 virtual false final false
static void Init() ;

/// @brief Method get_geometryShadersSupported addr 0x29a7950 size 0x5c virtual false final false
static bool get_geometryShadersSupported() ;

/// @brief Method get_defaultMaterial addr 0x29a79ac size 0x5c virtual false final false
static UnityEngine::Material get_defaultMaterial() ;

/// @brief Method get_selectionPickerShader addr 0x29a7a08 size 0x5c virtual false final false
static UnityEngine::Shader get_selectionPickerShader() ;

/// @brief Method get_facePickerMaterial addr 0x29a7a64 size 0x5c virtual false final false
static UnityEngine::Material get_facePickerMaterial() ;

/// @brief Method get_vertexPickerMaterial addr 0x29a7ac0 size 0x5c virtual false final false
static UnityEngine::Material get_vertexPickerMaterial() ;

/// @brief Method get_edgePickerMaterial addr 0x29a7b1c size 0x5c virtual false final false
static UnityEngine::Material get_edgePickerMaterial() ;

/// @brief Method get_triggerMaterial addr 0x29a7b78 size 0x108 virtual false final false
static UnityEngine::Material get_triggerMaterial() ;

/// @brief Method get_colliderMaterial addr 0x29a7c80 size 0x108 virtual false final false
static UnityEngine::Material get_colliderMaterial() ;

/// @brief Method get_noDrawMaterial addr 0x29a7d88 size 0x108 virtual false final false
static UnityEngine::Material get_noDrawMaterial() ;

/// @brief Method GetLegacyDiffuse addr 0x29a7e90 size 0x2a0 virtual false final false
static UnityEngine::Material GetLegacyDiffuse() ;

/// @brief Method GetDefaultMaterial addr 0x29a76e0 size 0x1f0 virtual false final false
static UnityEngine::Material GetDefaultMaterial() ;

/// @brief Method get_unlitVertexColor addr 0x29a8130 size 0x5c virtual false final false
static UnityEngine::Material get_unlitVertexColor() ;

/// @brief Method get_ShapePreviewMaterial addr 0x29a818c size 0x5c virtual false final false
static UnityEngine::Material get_ShapePreviewMaterial() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::BuiltinMaterials);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::BuiltinMaterials, "UnityEngine.ProBuilder", "BuiltinMaterials");
