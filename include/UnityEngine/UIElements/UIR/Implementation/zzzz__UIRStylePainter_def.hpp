#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams;
}
namespace UnityEngine::UIElements {
class AtlasBase;
}
namespace UnityEngine::UIElements {
class MeshGenerationContext;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace UnityEngine {
class Texture;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements::UIR {
class RenderChainCommand;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements::UIR {
class VectorImageManager;
}
namespace UnityEngine::UIElements::UIR {
struct BMPAlloc;
}
namespace UnityEngine::UIElements {
class ITextHandle;
}
namespace Unity::Collections {
template<typename T>
struct NativeSlice_1;
}
namespace UnityEngine::UIElements::UIR {
class RenderChain;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine::UIElements {
class IStylePainter;
}
namespace UnityEngine::UIElements::UIR {
struct UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__MeshGenerationContext__MeshFlags;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__MeshGenerationContextUtils__TextParams;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams;
}
namespace GlobalNamespace {
class UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator;
}
namespace UnityEngine::UIElements {
class MeshWriteData;
}
namespace UnityEngine::UIElements::UIR {
struct VertexFlags;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR::Implementation {
class UIRStylePainter;
}
namespace UnityEngine::UIElements::UIR::Implementation {
template<typename T>
struct UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1;
}
namespace UnityEngine::UIElements::UIR::Implementation {
struct UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo;
}
namespace UnityEngine::UIElements::UIR::Implementation {
struct UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry;
}
namespace UnityEngine::UIElements::UIR::Implementation {
template<>
struct UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<UnityEngine::UIElements::Vertex>;
}
namespace UnityEngine::UIElements::UIR::Implementation {
template<>
struct UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>;
}
// Type: ::Entry
namespace UnityEngine::UIElements::UIR::Implementation {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7547))
// CS Name: UnityEngine.UIElements.UIR.Implementation.UIRStylePainter::Entry
struct CORDL_TYPE UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "vertices", ty: "Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex>", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "Unity::Collections::NativeSlice_1<uint16_t>", modifiers: "", def_value: None }, CppParam { name: "material", ty: "UnityEngine::Material", modifiers: "", def_value: None }, CppParam { name: "custom", ty: "UnityEngine::Texture", modifiers: "", def_value: None }, CppParam { name: "font", ty: "UnityEngine::Texture", modifiers: "", def_value: None }, CppParam { name: "fontTexSDFScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "texture", ty: "UnityEngine::UIElements::TextureId", modifiers: "", def_value: None }, CppParam { name: "customCommand", ty: "UnityEngine::UIElements::UIR::RenderChainCommand", modifiers: "", def_value: None }, CppParam { name: "clipRectID", ty: "UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "addFlags", ty: "UnityEngine::UIElements::UIR::VertexFlags", modifiers: "", def_value: None }, CppParam { name: "uvIsDisplacement", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isTextEntry", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isClipRegisterEntry", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "stencilRef", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maskDepth", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry(Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex> vertices, Unity::Collections::NativeSlice_1<uint16_t> indices, UnityEngine::Material material, UnityEngine::Texture custom, UnityEngine::Texture font, float_t fontTexSDFScale, UnityEngine::UIElements::TextureId texture, UnityEngine::UIElements::UIR::RenderChainCommand customCommand, UnityEngine::UIElements::UIR::BMPAlloc clipRectID, UnityEngine::UIElements::UIR::VertexFlags addFlags, bool uvIsDisplacement, bool isTextEntry, bool isClipRegisterEntry, int32_t stencilRef, int32_t maskDepth) noexcept;


                    constexpr UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry(UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry const&) = default;
                    constexpr UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry(UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry&&) = default;
                    constexpr UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry& operator=(UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry& operator=(UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x60};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex> __declspec(property(get=__get_vertices, put=__set_vertices))  vertices;

constexpr void __set_vertices(Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex> value) ;

constexpr Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex> __get_vertices() const;

 Unity::Collections::NativeSlice_1<uint16_t> __declspec(property(get=__get_indices, put=__set_indices))  indices;

constexpr void __set_indices(Unity::Collections::NativeSlice_1<uint16_t> value) ;

constexpr Unity::Collections::NativeSlice_1<uint16_t> __get_indices() const;

 UnityEngine::Material __declspec(property(get=__get_material, put=__set_material))  material;

constexpr void __set_material(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_material() const;

 UnityEngine::Texture __declspec(property(get=__get_custom, put=__set_custom))  custom;

constexpr void __set_custom(UnityEngine::Texture value) ;

constexpr UnityEngine::Texture __get_custom() const;

 UnityEngine::Texture __declspec(property(get=__get_font, put=__set_font))  font;

constexpr void __set_font(UnityEngine::Texture value) ;

constexpr UnityEngine::Texture __get_font() const;

 float_t __declspec(property(get=__get_fontTexSDFScale, put=__set_fontTexSDFScale))  fontTexSDFScale;

constexpr void __set_fontTexSDFScale(float_t value) ;

constexpr float_t __get_fontTexSDFScale() const;

 UnityEngine::UIElements::TextureId __declspec(property(get=__get_texture, put=__set_texture))  texture;

constexpr void __set_texture(UnityEngine::UIElements::TextureId value) ;

constexpr UnityEngine::UIElements::TextureId __get_texture() const;

 UnityEngine::UIElements::UIR::RenderChainCommand __declspec(property(get=__get_customCommand, put=__set_customCommand))  customCommand;

constexpr void __set_customCommand(UnityEngine::UIElements::UIR::RenderChainCommand value) ;

constexpr UnityEngine::UIElements::UIR::RenderChainCommand __get_customCommand() const;

 UnityEngine::UIElements::UIR::BMPAlloc __declspec(property(get=__get_clipRectID, put=__set_clipRectID))  clipRectID;

constexpr void __set_clipRectID(UnityEngine::UIElements::UIR::BMPAlloc value) ;

constexpr UnityEngine::UIElements::UIR::BMPAlloc __get_clipRectID() const;

 UnityEngine::UIElements::UIR::VertexFlags __declspec(property(get=__get_addFlags, put=__set_addFlags))  addFlags;

constexpr void __set_addFlags(UnityEngine::UIElements::UIR::VertexFlags value) ;

constexpr UnityEngine::UIElements::UIR::VertexFlags __get_addFlags() const;

 bool __declspec(property(get=__get_uvIsDisplacement, put=__set_uvIsDisplacement))  uvIsDisplacement;

constexpr void __set_uvIsDisplacement(bool value) ;

constexpr bool __get_uvIsDisplacement() const;

 bool __declspec(property(get=__get_isTextEntry, put=__set_isTextEntry))  isTextEntry;

constexpr void __set_isTextEntry(bool value) ;

constexpr bool __get_isTextEntry() const;

 bool __declspec(property(get=__get_isClipRegisterEntry, put=__set_isClipRegisterEntry))  isClipRegisterEntry;

constexpr void __set_isClipRegisterEntry(bool value) ;

constexpr bool __get_isClipRegisterEntry() const;

 int32_t __declspec(property(get=__get_stencilRef, put=__set_stencilRef))  stencilRef;

constexpr void __set_stencilRef(int32_t value) ;

constexpr int32_t __get_stencilRef() const;

 int32_t __declspec(property(get=__get_maskDepth, put=__set_maskDepth))  maskDepth;

constexpr void __set_maskDepth(int32_t value) ;

constexpr int32_t __get_maskDepth() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR::Implementation
// Type: ::ClosingInfo
namespace UnityEngine::UIElements::UIR::Implementation {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7548))
// CS Name: UnityEngine.UIElements.UIR.Implementation.UIRStylePainter::ClosingInfo
struct CORDL_TYPE UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "needsClosing", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "popViewMatrix", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "popScissorClip", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "blitAndPopRenderTexture", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "PopDefaultMaterial", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "clipUnregisterDrawCommand", ty: "UnityEngine::UIElements::UIR::RenderChainCommand", modifiers: "", def_value: None }, CppParam { name: "clipperRegisterVertices", ty: "Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex>", modifiers: "", def_value: None }, CppParam { name: "clipperRegisterIndices", ty: "Unity::Collections::NativeSlice_1<uint16_t>", modifiers: "", def_value: None }, CppParam { name: "clipperRegisterIndexOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maskStencilRef", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo(bool needsClosing, bool popViewMatrix, bool popScissorClip, bool blitAndPopRenderTexture, bool PopDefaultMaterial, UnityEngine::UIElements::UIR::RenderChainCommand clipUnregisterDrawCommand, Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex> clipperRegisterVertices, Unity::Collections::NativeSlice_1<uint16_t> clipperRegisterIndices, int32_t clipperRegisterIndexOffset, int32_t maskStencilRef) noexcept;


                    constexpr UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo(UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo const&) = default;
                    constexpr UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo(UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo&&) = default;
                    constexpr UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo& operator=(UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo& operator=(UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_needsClosing, put=__set_needsClosing))  needsClosing;

constexpr void __set_needsClosing(bool value) ;

constexpr bool __get_needsClosing() const;

 bool __declspec(property(get=__get_popViewMatrix, put=__set_popViewMatrix))  popViewMatrix;

constexpr void __set_popViewMatrix(bool value) ;

constexpr bool __get_popViewMatrix() const;

 bool __declspec(property(get=__get_popScissorClip, put=__set_popScissorClip))  popScissorClip;

constexpr void __set_popScissorClip(bool value) ;

constexpr bool __get_popScissorClip() const;

 bool __declspec(property(get=__get_blitAndPopRenderTexture, put=__set_blitAndPopRenderTexture))  blitAndPopRenderTexture;

constexpr void __set_blitAndPopRenderTexture(bool value) ;

constexpr bool __get_blitAndPopRenderTexture() const;

 bool __declspec(property(get=__get_PopDefaultMaterial, put=__set_PopDefaultMaterial))  PopDefaultMaterial;

constexpr void __set_PopDefaultMaterial(bool value) ;

constexpr bool __get_PopDefaultMaterial() const;

 UnityEngine::UIElements::UIR::RenderChainCommand __declspec(property(get=__get_clipUnregisterDrawCommand, put=__set_clipUnregisterDrawCommand))  clipUnregisterDrawCommand;

constexpr void __set_clipUnregisterDrawCommand(UnityEngine::UIElements::UIR::RenderChainCommand value) ;

constexpr UnityEngine::UIElements::UIR::RenderChainCommand __get_clipUnregisterDrawCommand() const;

 Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex> __declspec(property(get=__get_clipperRegisterVertices, put=__set_clipperRegisterVertices))  clipperRegisterVertices;

constexpr void __set_clipperRegisterVertices(Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex> value) ;

constexpr Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex> __get_clipperRegisterVertices() const;

 Unity::Collections::NativeSlice_1<uint16_t> __declspec(property(get=__get_clipperRegisterIndices, put=__set_clipperRegisterIndices))  clipperRegisterIndices;

constexpr void __set_clipperRegisterIndices(Unity::Collections::NativeSlice_1<uint16_t> value) ;

constexpr Unity::Collections::NativeSlice_1<uint16_t> __get_clipperRegisterIndices() const;

 int32_t __declspec(property(get=__get_clipperRegisterIndexOffset, put=__set_clipperRegisterIndexOffset))  clipperRegisterIndexOffset;

constexpr void __set_clipperRegisterIndexOffset(int32_t value) ;

constexpr int32_t __get_clipperRegisterIndexOffset() const;

 int32_t __declspec(property(get=__get_maskStencilRef, put=__set_maskStencilRef))  maskStencilRef;

constexpr void __set_maskStencilRef(int32_t value) ;

constexpr int32_t __get_maskStencilRef() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR::Implementation
// Type: ::TempDataAlloc`1
// Type: UnityEngine.UIElements.UIR.Implementation::UIRStylePainter
namespace UnityEngine::UIElements::UIR::Implementation {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7550))
// CS Name: UnityEngine.UIElements.UIR.Implementation.UIRStylePainter
class CORDL_TYPE UIRStylePainter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename T>
using TempDataAlloc_1 = UnityEngine::UIElements::UIR::Implementation::UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<T>;

using ClosingInfo = UnityEngine::UIElements::UIR::Implementation::UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo;

using Entry = UnityEngine::UIElements::UIR::Implementation::UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry;

/// @brief Convert operator to UnityEngine::UIElements::IStylePainter
constexpr operator  UnityEngine::UIElements::IStylePainter() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x178};

virtual ~UIRStylePainter() = default;

// Ctor Parameters [CppParam { name: "", ty: "UIRStylePainter", modifiers: " const&", def_value: None }]
constexpr UIRStylePainter(UIRStylePainter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UIRStylePainter", modifiers: "&&", def_value: None }]
constexpr UIRStylePainter(UIRStylePainter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UIRStylePainter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UIRStylePainter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UIRStylePainter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UIRStylePainter& operator=(UIRStylePainter&& o) noexcept = default;
  constexpr UIRStylePainter& operator=(UIRStylePainter const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::UIR::RenderChain __declspec(property(get=__get_m_Owner, put=__set_m_Owner))  m_Owner;

constexpr void __set_m_Owner(UnityEngine::UIElements::UIR::RenderChain value) ;

constexpr UnityEngine::UIElements::UIR::RenderChain __get_m_Owner() const;

 System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::Implementation::UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry> __declspec(property(get=__get_m_Entries, put=__set_m_Entries))  m_Entries;

constexpr void __set_m_Entries(System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::Implementation::UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::Implementation::UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry> __get_m_Entries() const;

 UnityEngine::UIElements::AtlasBase __declspec(property(get=__get_m_Atlas, put=__set_m_Atlas))  m_Atlas;

constexpr void __set_m_Atlas(UnityEngine::UIElements::AtlasBase value) ;

constexpr UnityEngine::UIElements::AtlasBase __get_m_Atlas() const;

 UnityEngine::UIElements::UIR::VectorImageManager __declspec(property(get=__get_m_VectorImageManager, put=__set_m_VectorImageManager))  m_VectorImageManager;

constexpr void __set_m_VectorImageManager(UnityEngine::UIElements::UIR::VectorImageManager value) ;

constexpr UnityEngine::UIElements::UIR::VectorImageManager __get_m_VectorImageManager() const;

 UnityEngine::UIElements::UIR::Implementation::UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry __declspec(property(get=__get_m_CurrentEntry, put=__set_m_CurrentEntry))  m_CurrentEntry;

constexpr void __set_m_CurrentEntry(UnityEngine::UIElements::UIR::Implementation::UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry value) ;

constexpr UnityEngine::UIElements::UIR::Implementation::UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry __get_m_CurrentEntry() const;

 UnityEngine::UIElements::UIR::Implementation::UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo __declspec(property(get=__get_m_ClosingInfo, put=__set_m_ClosingInfo))  m_ClosingInfo;

constexpr void __set_m_ClosingInfo(UnityEngine::UIElements::UIR::Implementation::UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo value) ;

constexpr UnityEngine::UIElements::UIR::Implementation::UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo __get_m_ClosingInfo() const;

 int32_t __declspec(property(get=__get_m_MaskDepth, put=__set_m_MaskDepth))  m_MaskDepth;

constexpr void __set_m_MaskDepth(int32_t value) ;

constexpr int32_t __get_m_MaskDepth() const;

 int32_t __declspec(property(get=__get_m_StencilRef, put=__set_m_StencilRef))  m_StencilRef;

constexpr void __set_m_StencilRef(int32_t value) ;

constexpr int32_t __get_m_StencilRef() const;

 UnityEngine::UIElements::UIR::BMPAlloc __declspec(property(get=__get_m_ClipRectID, put=__set_m_ClipRectID))  m_ClipRectID;

constexpr void __set_m_ClipRectID(UnityEngine::UIElements::UIR::BMPAlloc value) ;

constexpr UnityEngine::UIElements::UIR::BMPAlloc __get_m_ClipRectID() const;

 int32_t __declspec(property(get=__get_m_SVGBackgroundEntryIndex, put=__set_m_SVGBackgroundEntryIndex))  m_SVGBackgroundEntryIndex;

constexpr void __set_m_SVGBackgroundEntryIndex(int32_t value) ;

constexpr int32_t __get_m_SVGBackgroundEntryIndex() const;

 UnityEngine::UIElements::UIR::Implementation::UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<UnityEngine::UIElements::Vertex> __declspec(property(get=__get_m_VertsPool, put=__set_m_VertsPool))  m_VertsPool;

constexpr void __set_m_VertsPool(UnityEngine::UIElements::UIR::Implementation::UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<UnityEngine::UIElements::Vertex> value) ;

constexpr UnityEngine::UIElements::UIR::Implementation::UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<UnityEngine::UIElements::Vertex> __get_m_VertsPool() const;

 UnityEngine::UIElements::UIR::Implementation::UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t> __declspec(property(get=__get_m_IndicesPool, put=__set_m_IndicesPool))  m_IndicesPool;

constexpr void __set_m_IndicesPool(UnityEngine::UIElements::UIR::Implementation::UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t> value) ;

constexpr UnityEngine::UIElements::UIR::Implementation::UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t> __get_m_IndicesPool() const;

 System::Collections::Generic::List_1<UnityEngine::UIElements::MeshWriteData> __declspec(property(get=__get_m_MeshWriteDataPool, put=__set_m_MeshWriteDataPool))  m_MeshWriteDataPool;

constexpr void __set_m_MeshWriteDataPool(System::Collections::Generic::List_1<UnityEngine::UIElements::MeshWriteData> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::MeshWriteData> __get_m_MeshWriteDataPool() const;

 int32_t __declspec(property(get=__get_m_NextMeshWriteDataPoolItem, put=__set_m_NextMeshWriteDataPoolItem))  m_NextMeshWriteDataPoolItem;

constexpr void __set_m_NextMeshWriteDataPoolItem(int32_t value) ;

constexpr int32_t __get_m_NextMeshWriteDataPoolItem() const;

 GlobalNamespace::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator __declspec(property(get=__get_m_AllocRawVertsIndicesDelegate, put=__set_m_AllocRawVertsIndicesDelegate))  m_AllocRawVertsIndicesDelegate;

constexpr void __set_m_AllocRawVertsIndicesDelegate(GlobalNamespace::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator value) ;

constexpr GlobalNamespace::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator __get_m_AllocRawVertsIndicesDelegate() const;

 GlobalNamespace::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator __declspec(property(get=__get_m_AllocThroughDrawMeshDelegate, put=__set_m_AllocThroughDrawMeshDelegate))  m_AllocThroughDrawMeshDelegate;

constexpr void __set_m_AllocThroughDrawMeshDelegate(GlobalNamespace::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator value) ;

constexpr GlobalNamespace::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator __get_m_AllocThroughDrawMeshDelegate() const;

 GlobalNamespace::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator __declspec(property(get=__get_m_AllocThroughDrawGradientsDelegate, put=__set_m_AllocThroughDrawGradientsDelegate))  m_AllocThroughDrawGradientsDelegate;

constexpr void __set_m_AllocThroughDrawGradientsDelegate(GlobalNamespace::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator value) ;

constexpr GlobalNamespace::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator __get_m_AllocThroughDrawGradientsDelegate() const;

 UnityEngine::UIElements::MeshGenerationContext __declspec(property(get=__get__meshGenerationContext_k__BackingField, put=__set__meshGenerationContext_k__BackingField))  _meshGenerationContext_k__BackingField;

constexpr void __set__meshGenerationContext_k__BackingField(UnityEngine::UIElements::MeshGenerationContext value) ;

constexpr UnityEngine::UIElements::MeshGenerationContext __get__meshGenerationContext_k__BackingField() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get__currentElement_k__BackingField, put=__set__currentElement_k__BackingField))  _currentElement_k__BackingField;

constexpr void __set__currentElement_k__BackingField(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get__currentElement_k__BackingField() const;

 int32_t __declspec(property(get=__get__totalVertices_k__BackingField, put=__set__totalVertices_k__BackingField))  _totalVertices_k__BackingField;

constexpr void __set__totalVertices_k__BackingField(int32_t value) ;

constexpr int32_t __get__totalVertices_k__BackingField() const;

 int32_t __declspec(property(get=__get__totalIndices_k__BackingField, put=__set__totalIndices_k__BackingField))  _totalIndices_k__BackingField;

constexpr void __set__totalIndices_k__BackingField(int32_t value) ;

constexpr int32_t __get__totalIndices_k__BackingField() const;

 bool __declspec(property(get=__get__disposed_k__BackingField, put=__set__disposed_k__BackingField))  _disposed_k__BackingField;

constexpr void __set__disposed_k__BackingField(bool value) ;

constexpr bool __get__disposed_k__BackingField() const;


// Properties

 UnityEngine::UIElements::MeshGenerationContext __declspec(property(get=get_meshGenerationContext))  meshGenerationContext;

 UnityEngine::UIElements::VisualElement __declspec(property(get=get_currentElement, put=set_currentElement))  currentElement;

 System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::Implementation::UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry> __declspec(property(get=get_entries))  entries;

 UnityEngine::UIElements::UIR::Implementation::UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo __declspec(property(get=get_closingInfo))  closingInfo;

 int32_t __declspec(property(get=get_totalVertices, put=set_totalVertices))  totalVertices;

 int32_t __declspec(property(get=get_totalIndices, put=set_totalIndices))  totalIndices;

 bool __declspec(property(get=get_disposed, put=set_disposed))  disposed;

 UnityEngine::UIElements::VisualElement __declspec(property(get=get_visualElement))  visualElement;


// Methods

/// @brief Method GetPooledMeshWriteData addr 0x2c605e8 size 0x120 virtual false final false
 UnityEngine::UIElements::MeshWriteData GetPooledMeshWriteData() ;

/// @brief Method AllocRawVertsIndices addr 0x2c60708 size 0xbc virtual false final false
 UnityEngine::UIElements::MeshWriteData AllocRawVertsIndices(uint32_t vertexCount, uint32_t indexCount, ByRef<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData> allocatorData) ;

/// @brief Method AllocThroughDrawMesh addr 0x2c607c4 size 0x14 virtual false final false
 UnityEngine::UIElements::MeshWriteData AllocThroughDrawMesh(uint32_t vertexCount, uint32_t indexCount, ByRef<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData> allocatorData) ;

/// @brief Method AllocThroughDrawGradients addr 0x2c60ca8 size 0x10 virtual false final false
 UnityEngine::UIElements::MeshWriteData AllocThroughDrawGradients(uint32_t vertexCount, uint32_t indexCount, ByRef<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData> allocatorData) ;

// Ctor Parameters [CppParam { name: "renderChain", ty: "UnityEngine::UIElements::UIR::RenderChain", modifiers: "", def_value: None }]
explicit UIRStylePainter(UnityEngine::UIElements::UIR::RenderChain renderChain) ;

/// @brief Method .ctor addr 0x2c60fbc size 0x368 virtual false final false
 void _ctor(UnityEngine::UIElements::UIR::RenderChain renderChain) ;

/// @brief Method get_meshGenerationContext addr 0x2c61324 size 0x8 virtual false final false
 UnityEngine::UIElements::MeshGenerationContext get_meshGenerationContext() ;

/// @brief Method get_currentElement addr 0x2c6132c size 0x8 virtual false final false
 UnityEngine::UIElements::VisualElement get_currentElement() ;

/// @brief Method set_currentElement addr 0x2c61334 size 0x8 virtual false final false
 void set_currentElement(UnityEngine::UIElements::VisualElement value) ;

/// @brief Method get_entries addr 0x2c6133c size 0x8 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::Implementation::UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry> get_entries() ;

/// @brief Method get_closingInfo addr 0x2c61344 size 0x1c virtual false final false
 UnityEngine::UIElements::UIR::Implementation::UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo get_closingInfo() ;

/// @brief Method get_totalVertices addr 0x2c61360 size 0x8 virtual false final false
 int32_t get_totalVertices() ;

/// @brief Method set_totalVertices addr 0x2c61368 size 0x8 virtual false final false
 void set_totalVertices(int32_t value) ;

/// @brief Method get_totalIndices addr 0x2c61370 size 0x8 virtual false final false
 int32_t get_totalIndices() ;

/// @brief Method set_totalIndices addr 0x2c61378 size 0x8 virtual false final false
 void set_totalIndices(int32_t value) ;

/// @brief Method get_disposed addr 0x2c61380 size 0x8 virtual false final false
 bool get_disposed() ;

/// @brief Method set_disposed addr 0x2c61388 size 0xc virtual false final false
 void set_disposed(bool value) ;

/// @brief Method Dispose addr 0x2c61394 size 0x64 virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x2c613f8 size 0x84 virtual false final false
 void Dispose(bool disposing) ;

/// @brief Method Begin addr 0x2c6147c size 0x510 virtual false final false
 void Begin(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method LandClipUnregisterMeshDrawCommand addr 0x2c6198c size 0x74 virtual false final false
 void LandClipUnregisterMeshDrawCommand(UnityEngine::UIElements::UIR::RenderChainCommand cmd) ;

/// @brief Method LandClipRegisterMesh addr 0x2c61a00 size 0x9c virtual false final false
 void LandClipRegisterMesh(Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex> vertices, Unity::Collections::NativeSlice_1<uint16_t> indices, int32_t indexOffset) ;

/// @brief Method AddGradientsEntry addr 0x2c60cb8 size 0x304 virtual false final false
 UnityEngine::UIElements::MeshWriteData AddGradientsEntry(int32_t vertexCount, int32_t indexCount, UnityEngine::UIElements::TextureId texture, UnityEngine::Material material, UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContext__MeshFlags flags) ;

/// @brief Method DrawMesh addr 0x2c607d8 size 0x4d0 virtual true final true
 UnityEngine::UIElements::MeshWriteData DrawMesh(int32_t vertexCount, int32_t indexCount, UnityEngine::Texture texture, UnityEngine::Material material, UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContext__MeshFlags flags) ;

/// @brief Method DrawText addr 0x2c61a9c size 0x138 virtual true final true
 void DrawText(UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams textParams, UnityEngine::UIElements::ITextHandle handle, float_t pixelsPerPoint) ;

/// @brief Method DrawTextNative addr 0x2c61bd4 size 0x438 virtual false final false
 void DrawTextNative(UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams textParams, UnityEngine::UIElements::ITextHandle handle, float_t pixelsPerPoint) ;

/// @brief Method DrawTextCore addr 0x2c6200c size 0x628 virtual false final false
 void DrawTextCore(UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams textParams, UnityEngine::UIElements::ITextHandle handle, float_t pixelsPerPoint) ;

/// @brief Method DrawRectangle addr 0x2c62634 size 0x29c virtual true final true
 void DrawRectangle(UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams rectParams) ;

/// @brief Method DrawBorder addr 0x2c6338c size 0xe0 virtual true final true
 void DrawBorder(UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams borderParams) ;

/// @brief Method DrawImmediate addr 0x2c6346c size 0x17c virtual true final true
 void DrawImmediate(System::Action callback, bool cullingEnabled) ;

/// @brief Method get_visualElement addr 0x2c635e8 size 0x8 virtual true final true
 UnityEngine::UIElements::VisualElement get_visualElement() ;

/// @brief Method DrawVisualElementBackground addr 0x2c635f0 size 0xe08 virtual false final false
 void DrawVisualElementBackground() ;

/// @brief Method DrawVisualElementBorder addr 0x2c643f8 size 0x974 virtual false final false
 void DrawVisualElementBorder() ;

/// @brief Method ApplyVisualElementClipping addr 0x2c64d6c size 0x24c virtual false final false
 void ApplyVisualElementClipping() ;

/// @brief Method AdjustSpriteWinding addr 0x2c65d48 size 0x320 virtual false final false
 ::ArrayW<uint16_t> AdjustSpriteWinding(::ArrayW<UnityEngine::Vector2> vertices, ::ArrayW<uint16_t> indices) ;

/// @brief Method DrawSprite addr 0x2c62d34 size 0x658 virtual false final false
 void DrawSprite(UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams rectParams) ;

/// @brief Method DrawVectorImage addr 0x2c628d0 size 0x464 virtual false final false
 void DrawVectorImage(UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams rectParams) ;

/// @brief Method Reset addr 0x2c66068 size 0xe4 virtual false final false
 void Reset() ;

/// @brief Method ValidateMeshWriteData addr 0x2c6614c size 0x4f4 virtual false final false
 void ValidateMeshWriteData() ;

/// @brief Method GenerateStencilClipEntryForRoundedRectBackground addr 0x2c6532c size 0xa1c virtual false final false
 void GenerateStencilClipEntryForRoundedRectBackground() ;

/// @brief Method GenerateStencilClipEntryForSVGBackground addr 0x2c64fb8 size 0x374 virtual false final false
 void GenerateStencilClipEntryForSVGBackground() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR::Implementation
// Type: ::TempDataAlloc`1
namespace UnityEngine::UIElements::UIR::Implementation {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7549)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7549), inst: 728 })
// CS Name: UnityEngine.UIElements.UIR.Implementation.UIRStylePainter::TempDataAlloc`1
struct CORDL_TYPE UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "maxPoolElemCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "pool", ty: "Unity::Collections::NativeArray_1<uint16_t>", modifiers: "", def_value: None }, CppParam { name: "excess", ty: "System::Collections::Generic::List_1<Unity::Collections::NativeArray_1<uint16_t>>", modifiers: "", def_value: None }, CppParam { name: "takenFromPool", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1(int32_t maxPoolElemCount, Unity::Collections::NativeArray_1<uint16_t> pool, System::Collections::Generic::List_1<Unity::Collections::NativeArray_1<uint16_t>> excess, uint32_t takenFromPool) noexcept;


                    constexpr UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1(UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1 const&) = default;
                    constexpr UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1(UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1&&) = default;
                    constexpr UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1& operator=(UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1& operator=(UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_maxPoolElemCount, put=__set_maxPoolElemCount))  maxPoolElemCount;

constexpr void __set_maxPoolElemCount(int32_t value) ;

constexpr int32_t __get_maxPoolElemCount() const;

 Unity::Collections::NativeArray_1<uint16_t> __declspec(property(get=__get_pool, put=__set_pool))  pool;

constexpr void __set_pool(Unity::Collections::NativeArray_1<uint16_t> value) ;

constexpr Unity::Collections::NativeArray_1<uint16_t> __get_pool() const;

 System::Collections::Generic::List_1<Unity::Collections::NativeArray_1<uint16_t>> __declspec(property(get=__get_excess, put=__set_excess))  excess;

constexpr void __set_excess(System::Collections::Generic::List_1<Unity::Collections::NativeArray_1<uint16_t>> value) ;

constexpr System::Collections::Generic::List_1<Unity::Collections::NativeArray_1<uint16_t>> __get_excess() const;

 uint32_t __declspec(property(get=__get_takenFromPool, put=__set_takenFromPool))  takenFromPool;

constexpr void __set_takenFromPool(uint32_t value) ;

constexpr uint32_t __get_takenFromPool() const;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t maxPoolElems) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Alloc addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::NativeSlice_1<uint16_t> Alloc(uint32_t count) ;

/// @brief Method SessionDone addr 0x0 size 0xffffffffffffffff virtual false final false
 void SessionDone() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR::Implementation
// Type: ::TempDataAlloc`1
namespace UnityEngine::UIElements::UIR::Implementation {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(7549))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7549), inst: 732 })
// CS Name: UnityEngine.UIElements.UIR.Implementation.UIRStylePainter::TempDataAlloc`1
struct CORDL_TYPE UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<UnityEngine::UIElements::Vertex> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "maxPoolElemCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "pool", ty: "Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex>", modifiers: "", def_value: None }, CppParam { name: "excess", ty: "System::Collections::Generic::List_1<Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex>>", modifiers: "", def_value: None }, CppParam { name: "takenFromPool", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1(int32_t maxPoolElemCount, Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex> pool, System::Collections::Generic::List_1<Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex>> excess, uint32_t takenFromPool) noexcept;


                    constexpr UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1(UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1 const&) = default;
                    constexpr UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1(UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1&&) = default;
                    constexpr UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1& operator=(UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1& operator=(UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_maxPoolElemCount, put=__set_maxPoolElemCount))  maxPoolElemCount;

constexpr void __set_maxPoolElemCount(int32_t value) ;

constexpr int32_t __get_maxPoolElemCount() const;

 Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex> __declspec(property(get=__get_pool, put=__set_pool))  pool;

constexpr void __set_pool(Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex> value) ;

constexpr Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex> __get_pool() const;

 System::Collections::Generic::List_1<Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex>> __declspec(property(get=__get_excess, put=__set_excess))  excess;

constexpr void __set_excess(System::Collections::Generic::List_1<Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex>> value) ;

constexpr System::Collections::Generic::List_1<Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex>> __get_excess() const;

 uint32_t __declspec(property(get=__get_takenFromPool, put=__set_takenFromPool))  takenFromPool;

constexpr void __set_takenFromPool(uint32_t value) ;

constexpr uint32_t __get_takenFromPool() const;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t maxPoolElems) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Alloc addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex> Alloc(uint32_t count) ;

/// @brief Method SessionDone addr 0x0 size 0xffffffffffffffff virtual false final false
 void SessionDone() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR::Implementation
NEED_NO_BOX(UnityEngine::UIElements::UIR::Implementation::UIRStylePainter);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, "UnityEngine.UIElements.UIR.Implementation", "UIRStylePainter");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::UIElements::UIR::Implementation::UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1, "UnityEngine.UIElements.UIR.Implementation", "UIRStylePainter/TempDataAlloc`1");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::Implementation::UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo, "UnityEngine.UIElements.UIR.Implementation", "UIRStylePainter/ClosingInfo");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::Implementation::UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry, "UnityEngine.UIElements.UIR.Implementation", "UIRStylePainter/Entry");
