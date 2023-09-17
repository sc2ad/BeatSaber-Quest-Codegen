#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::ProBuilder {
template<typename T1,typename T2>
struct SimpleTuple_2;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
class Mesh;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
class Shader;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::ProBuilder {
class SharedVertex;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class SelectionPickerRenderer;
}
namespace UnityEngine::ProBuilder {
class ____UnityEngine__ProBuilder__SelectionPickerRenderer__ISelectionPickerRenderer;
}
namespace UnityEngine::ProBuilder {
class ____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererHDRP;
}
namespace UnityEngine::ProBuilder {
class ____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererStandard;
}
namespace UnityEngine::ProBuilder {
class ____UnityEngine__ProBuilder__SelectionPickerRenderer____c;
}
namespace UnityEngine::ProBuilder {
class ____UnityEngine__ProBuilder__SelectionPickerRenderer____c__DisplayClass19_0;
}
// Type: ::ISelectionPickerRenderer
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12127))
// CS Name: UnityEngine.ProBuilder.SelectionPickerRenderer::ISelectionPickerRenderer
class CORDL_TYPE ____UnityEngine__ProBuilder__SelectionPickerRenderer__ISelectionPickerRenderer : public ::cordl_internals::InterfaceW {
public:
// Declarations
~____UnityEngine__ProBuilder__SelectionPickerRenderer__ISelectionPickerRenderer() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__ProBuilder__SelectionPickerRenderer__ISelectionPickerRenderer(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method RenderLookupTexture addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Texture2D RenderLookupTexture(::UnityEngine::Camera camera, ::UnityEngine::Shader shader, ::StringW tag, int32_t width, int32_t height) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: ::SelectionPickerRendererHDRP
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12128))
// CS Name: UnityEngine.ProBuilder.SelectionPickerRenderer::SelectionPickerRendererHDRP
class CORDL_TYPE ____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererHDRP : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__SelectionPickerRenderer__ISelectionPickerRenderer
constexpr operator  ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__SelectionPickerRenderer__ISelectionPickerRenderer() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererHDRP() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererHDRP", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererHDRP(____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererHDRP const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererHDRP", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererHDRP(____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererHDRP&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererHDRP(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererHDRP& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererHDRP& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererHDRP& operator=(____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererHDRP&& o) noexcept = default;
  constexpr ____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererHDRP& operator=(____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererHDRP const& o) noexcept = default;
                


// Methods

/// @brief Method RenderLookupTexture addr 0x29d4fa0 size 0x8 virtual true final true
 ::UnityEngine::Texture2D RenderLookupTexture(::UnityEngine::Camera camera, ::UnityEngine::Shader shader, ::StringW tag, int32_t width, int32_t height) ;

// Ctor Parameters []
explicit ____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererHDRP() ;

/// @brief Method .ctor addr 0x29d4fa8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: ::SelectionPickerRendererStandard
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12129))
// CS Name: UnityEngine.ProBuilder.SelectionPickerRenderer::SelectionPickerRendererStandard
class CORDL_TYPE ____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererStandard : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__SelectionPickerRenderer__ISelectionPickerRenderer
constexpr operator  ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__SelectionPickerRenderer__ISelectionPickerRenderer() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererStandard() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererStandard", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererStandard(____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererStandard const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererStandard", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererStandard(____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererStandard&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererStandard(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererStandard& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererStandard& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererStandard& operator=(____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererStandard&& o) noexcept = default;
  constexpr ____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererStandard& operator=(____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererStandard const& o) noexcept = default;
                


// Methods

/// @brief Method RenderLookupTexture addr 0x29d4fb0 size 0x414 virtual true final true
 ::UnityEngine::Texture2D RenderLookupTexture(::UnityEngine::Camera camera, ::UnityEngine::Shader shader, ::StringW tag, int32_t width, int32_t height) ;

// Ctor Parameters []
explicit ____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererStandard() ;

/// @brief Method .ctor addr 0x29d53c4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: ::<>c__DisplayClass19_0
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12130))
// CS Name: UnityEngine.ProBuilder.SelectionPickerRenderer::<>c__DisplayClass19_0
class CORDL_TYPE ____UnityEngine__ProBuilder__SelectionPickerRenderer____c__DisplayClass19_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____UnityEngine__ProBuilder__SelectionPickerRenderer____c__DisplayClass19_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ProBuilder__SelectionPickerRenderer____c__DisplayClass19_0", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__ProBuilder__SelectionPickerRenderer____c__DisplayClass19_0(____UnityEngine__ProBuilder__SelectionPickerRenderer____c__DisplayClass19_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ProBuilder__SelectionPickerRenderer____c__DisplayClass19_0", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__ProBuilder__SelectionPickerRenderer____c__DisplayClass19_0(____UnityEngine__ProBuilder__SelectionPickerRenderer____c__DisplayClass19_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__ProBuilder__SelectionPickerRenderer____c__DisplayClass19_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__ProBuilder__SelectionPickerRenderer____c__DisplayClass19_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__ProBuilder__SelectionPickerRenderer____c__DisplayClass19_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__ProBuilder__SelectionPickerRenderer____c__DisplayClass19_0& operator=(____UnityEngine__ProBuilder__SelectionPickerRenderer____c__DisplayClass19_0&& o) noexcept = default;
  constexpr ____UnityEngine__ProBuilder__SelectionPickerRenderer____c__DisplayClass19_0& operator=(____UnityEngine__ProBuilder__SelectionPickerRenderer____c__DisplayClass19_0 const& o) noexcept = default;
                


// Fields

 ::ArrayW<::UnityEngine::Vector3> __declspec(property(get=__get_positions, put=__set_positions))  positions;

constexpr void __set_positions(::ArrayW<::UnityEngine::Vector3> value) ;

constexpr ::ArrayW<::UnityEngine::Vector3> __get_positions() const;

 ::ArrayW<::UnityEngine::ProBuilder::SharedVertex> __declspec(property(get=__get_sharedVertices, put=__set_sharedVertices))  sharedVertices;

constexpr void __set_sharedVertices(::ArrayW<::UnityEngine::ProBuilder::SharedVertex> value) ;

constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex> __get_sharedVertices() const;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__ProBuilder__SelectionPickerRenderer____c__DisplayClass19_0() ;

/// @brief Method .ctor addr 0x29d53cc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <PickVerticesInRect>b__0 addr 0x29d53d4 size 0x68 virtual false final false
 int32_t _PickVerticesInRect_b__0(int32_t x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: ::<>c
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12131))
// CS Name: UnityEngine.ProBuilder.SelectionPickerRenderer::<>c
class CORDL_TYPE ____UnityEngine__ProBuilder__SelectionPickerRenderer____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__ProBuilder__SelectionPickerRenderer____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ProBuilder__SelectionPickerRenderer____c", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__ProBuilder__SelectionPickerRenderer____c(____UnityEngine__ProBuilder__SelectionPickerRenderer____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ProBuilder__SelectionPickerRenderer____c", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__ProBuilder__SelectionPickerRenderer____c(____UnityEngine__ProBuilder__SelectionPickerRenderer____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__ProBuilder__SelectionPickerRenderer____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__ProBuilder__SelectionPickerRenderer____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__ProBuilder__SelectionPickerRenderer____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__ProBuilder__SelectionPickerRenderer____c& operator=(____UnityEngine__ProBuilder__SelectionPickerRenderer____c&& o) noexcept = default;
  constexpr ____UnityEngine__ProBuilder__SelectionPickerRenderer____c& operator=(____UnityEngine__ProBuilder__SelectionPickerRenderer____c const& o) noexcept = default;
                


// Fields

static ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__SelectionPickerRenderer____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__SelectionPickerRenderer____c value) ;

static ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__SelectionPickerRenderer____c __get___9() ;

static ::System::Func_2<::UnityEngine::ProBuilder::Face,::System::Collections::Generic::IEnumerable_1<int32_t>> __declspec(property(get=__get___9__24_0, put=__set___9__24_0))  __9__24_0;

static void __set___9__24_0(::System::Func_2<::UnityEngine::ProBuilder::Face,::System::Collections::Generic::IEnumerable_1<int32_t>> value) ;

static ::System::Func_2<::UnityEngine::ProBuilder::Face,::System::Collections::Generic::IEnumerable_1<int32_t>> __get___9__24_0() ;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__ProBuilder__SelectionPickerRenderer____c() ;

/// @brief Method .ctor addr 0x29d5580 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GenerateFacePickingObjects>b__24_0 addr 0x29d5588 size 0x18 virtual false final false
 ::System::Collections::Generic::IEnumerable_1<int32_t> _GenerateFacePickingObjects_b__24_0(::UnityEngine::ProBuilder::Face x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::SelectionPickerRenderer
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12132))
// CS Name: UnityEngine.ProBuilder.SelectionPickerRenderer
class CORDL_TYPE SelectionPickerRenderer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__SelectionPickerRenderer____c;

using __c__DisplayClass19_0 = ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__SelectionPickerRenderer____c__DisplayClass19_0;

using SelectionPickerRendererStandard = ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererStandard;

using SelectionPickerRendererHDRP = ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererHDRP;

using ISelectionPickerRenderer = ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__SelectionPickerRenderer__ISelectionPickerRenderer;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SelectionPickerRenderer() = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectionPickerRenderer", modifiers: " const&", def_value: None }]
constexpr SelectionPickerRenderer(SelectionPickerRenderer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectionPickerRenderer", modifiers: "&&", def_value: None }]
constexpr SelectionPickerRenderer(SelectionPickerRenderer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SelectionPickerRenderer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SelectionPickerRenderer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SelectionPickerRenderer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SelectionPickerRenderer& operator=(SelectionPickerRenderer&& o) noexcept = default;
  constexpr SelectionPickerRenderer& operator=(SelectionPickerRenderer const& o) noexcept = default;
                


// Fields

/// @brief Field k_FacePickerOcclusionTintUniform offset 0
static constexpr ::ConstString  k_FacePickerOcclusionTintUniform{u"_Tint"};

static ::UnityEngine::Color __declspec(property(get=__get_k_Blackf, put=__set_k_Blackf))  k_Blackf;

static void __set_k_Blackf(::UnityEngine::Color value) ;

static ::UnityEngine::Color __get_k_Blackf() ;

static ::UnityEngine::Color __declspec(property(get=__get_k_Whitef, put=__set_k_Whitef))  k_Whitef;

static void __set_k_Whitef(::UnityEngine::Color value) ;

static ::UnityEngine::Color __get_k_Whitef() ;

/// @brief Field k_PickerHashNone offset 0
static constexpr uint32_t  k_PickerHashNone{0u};

/// @brief Field k_PickerHashMin offset 0
static constexpr uint32_t  k_PickerHashMin{1u};

/// @brief Field k_PickerHashMax offset 0
static constexpr uint32_t  k_PickerHashMax{16777215u};

/// @brief Field k_MinEdgePixelsForValidSelection offset 0
static constexpr uint32_t  k_MinEdgePixelsForValidSelection{1u};

static bool __declspec(property(get=__get_s_Initialized, put=__set_s_Initialized))  s_Initialized;

static void __set_s_Initialized(bool value) ;

static bool __get_s_Initialized() ;

static ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__SelectionPickerRenderer__ISelectionPickerRenderer __declspec(property(get=__get_s_PickerRenderer, put=__set_s_PickerRenderer))  s_PickerRenderer;

static void __set_s_PickerRenderer(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__SelectionPickerRenderer__ISelectionPickerRenderer value) ;

static ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__SelectionPickerRenderer__ISelectionPickerRenderer __get_s_PickerRenderer() ;

static ::UnityEngine::RenderTextureFormat __declspec(property(get=__get_s_RenderTextureFormat, put=__set_s_RenderTextureFormat))  s_RenderTextureFormat;

static void __set_s_RenderTextureFormat(::UnityEngine::RenderTextureFormat value) ;

static ::UnityEngine::RenderTextureFormat __get_s_RenderTextureFormat() ;

static ::ArrayW<::UnityEngine::RenderTextureFormat> __declspec(property(get=__get_s_PreferredFormats, put=__set_s_PreferredFormats))  s_PreferredFormats;

static void __set_s_PreferredFormats(::ArrayW<::UnityEngine::RenderTextureFormat> value) ;

static ::ArrayW<::UnityEngine::RenderTextureFormat> __get_s_PreferredFormats() ;


// Properties

static ::UnityEngine::RenderTextureFormat __declspec(property(get=get_renderTextureFormat))  renderTextureFormat;

static ::UnityEngine::TextureFormat __declspec(property(get=get_textureFormat))  textureFormat;

static ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__SelectionPickerRenderer__ISelectionPickerRenderer __declspec(property(get=get_pickerRenderer))  pickerRenderer;


// Methods

/// @brief Method get_renderTextureFormat addr 0x29d28ac size 0x15c virtual false final false
static ::UnityEngine::RenderTextureFormat get_renderTextureFormat() ;

/// @brief Method get_textureFormat addr 0x29d2a08 size 0x8 virtual false final false
static ::UnityEngine::TextureFormat get_textureFormat() ;

/// @brief Method get_pickerRenderer addr 0x29d2a10 size 0xd8 virtual false final false
static ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__SelectionPickerRenderer__ISelectionPickerRenderer get_pickerRenderer() ;

/// @brief Method PickFacesInRect addr 0x29d1004 size 0x5e4 virtual false final false
static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh,::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face>> PickFacesInRect(::UnityEngine::Camera camera, ::UnityEngine::Rect pickerRect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh> selection, int32_t renderTextureWidth, int32_t renderTextureHeight) ;

/// @brief Method PickVerticesInRect addr 0x29cf708 size 0x9b8 virtual false final false
static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh,::System::Collections::Generic::HashSet_1<int32_t>> PickVerticesInRect(::UnityEngine::Camera camera, ::UnityEngine::Rect pickerRect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh> selection, bool doDepthTest, int32_t renderTextureWidth, int32_t renderTextureHeight) ;

/// @brief Method PickEdgesInRect addr 0x29d1e30 size 0x7a0 virtual false final false
static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh,::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>> PickEdgesInRect(::UnityEngine::Camera camera, ::UnityEngine::Rect pickerRect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh> selection, bool doDepthTest, int32_t renderTextureWidth, int32_t renderTextureHeight) ;

/// @brief Method RenderSelectionPickerTexture addr 0x29d2af0 size 0x24c virtual false final false
static ::UnityEngine::Texture2D RenderSelectionPickerTexture(::UnityEngine::Camera camera, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh> selection, ByRef<::System::Collections::Generic::Dictionary_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh,::UnityEngine::ProBuilder::Face>>> map, int32_t width, int32_t height) ;

/// @brief Method RenderSelectionPickerTexture addr 0x29d2dc0 size 0x2e0 virtual false final false
static ::UnityEngine::Texture2D RenderSelectionPickerTexture(::UnityEngine::Camera camera, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh> selection, bool doDepthTest, ByRef<::System::Collections::Generic::Dictionary_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh,int32_t>>> map, int32_t width, int32_t height) ;

/// @brief Method RenderSelectionPickerTexture addr 0x29d30a0 size 0x2e0 virtual false final false
static ::UnityEngine::Texture2D RenderSelectionPickerTexture(::UnityEngine::Camera camera, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh> selection, bool doDepthTest, ByRef<::System::Collections::Generic::Dictionary_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh,::UnityEngine::ProBuilder::Edge>>> map, int32_t width, int32_t height) ;

/// @brief Method GenerateFacePickingObjects addr 0x29d3380 size 0x590 virtual false final false
static ::ArrayW<::UnityEngine::GameObject> GenerateFacePickingObjects(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh> selection, ByRef<::System::Collections::Generic::Dictionary_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh,::UnityEngine::ProBuilder::Face>>> map) ;

/// @brief Method GenerateVertexPickingObjects addr 0x29d3910 size 0x480 virtual false final false
static void GenerateVertexPickingObjects(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh> selection, bool doDepthTest, ByRef<::System::Collections::Generic::Dictionary_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh,int32_t>>> map, ByRef<::ArrayW<::UnityEngine::GameObject>> depthObjects, ByRef<::ArrayW<::UnityEngine::GameObject>> pickerObjects) ;

/// @brief Method GenerateEdgePickingObjects addr 0x29d3d90 size 0x480 virtual false final false
static void GenerateEdgePickingObjects(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh> selection, bool doDepthTest, ByRef<::System::Collections::Generic::Dictionary_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh,::UnityEngine::ProBuilder::Edge>>> map, ByRef<::ArrayW<::UnityEngine::GameObject>> depthObjects, ByRef<::ArrayW<::UnityEngine::GameObject>> pickerObjects) ;

/// @brief Method BuildVertexMesh addr 0x29d4298 size 0x76c virtual false final false
static ::UnityEngine::Mesh BuildVertexMesh(::UnityEngine::ProBuilder::ProBuilderMesh pb, ::System::Collections::Generic::Dictionary_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh,int32_t>> map, ByRef<uint32_t> index) ;

/// @brief Method BuildEdgeMesh addr 0x29d4a04 size 0x4dc virtual false final false
static ::UnityEngine::Mesh BuildEdgeMesh(::UnityEngine::ProBuilder::ProBuilderMesh pb, ::System::Collections::Generic::Dictionary_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh,::UnityEngine::ProBuilder::Edge>> map, ByRef<uint32_t> index) ;

/// @brief Method DecodeRGBA addr 0x29d2d3c size 0x84 virtual false final false
static uint32_t DecodeRGBA(::UnityEngine::Color32 color) ;

/// @brief Method EncodeRGBA addr 0x29d4210 size 0x88 virtual false final false
static ::UnityEngine::Color32 EncodeRGBA(uint32_t hash) ;

/// @brief Method ShouldUseHDRP addr 0x29d2ae8 size 0x8 virtual false final false
static bool ShouldUseHDRP() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ProBuilder::SelectionPickerRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::SelectionPickerRenderer, "UnityEngine.ProBuilder", "SelectionPickerRenderer");
NEED_NO_BOX(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__SelectionPickerRenderer__ISelectionPickerRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__SelectionPickerRenderer__ISelectionPickerRenderer, "UnityEngine.ProBuilder", "SelectionPickerRenderer/ISelectionPickerRenderer");
NEED_NO_BOX(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererHDRP);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererHDRP, "UnityEngine.ProBuilder", "SelectionPickerRenderer/SelectionPickerRendererHDRP");
NEED_NO_BOX(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererStandard);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__SelectionPickerRenderer__SelectionPickerRendererStandard, "UnityEngine.ProBuilder", "SelectionPickerRenderer/SelectionPickerRendererStandard");
NEED_NO_BOX(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__SelectionPickerRenderer____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__SelectionPickerRenderer____c, "UnityEngine.ProBuilder", "SelectionPickerRenderer/<>c");
NEED_NO_BOX(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__SelectionPickerRenderer____c__DisplayClass19_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__SelectionPickerRenderer____c__DisplayClass19_0, "UnityEngine.ProBuilder", "SelectionPickerRenderer/<>c__DisplayClass19_0");
