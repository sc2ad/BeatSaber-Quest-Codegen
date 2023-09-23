#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine::UIElements::UIR {
struct UnityEngine__UIElements__UIR__Allocator2D__Alloc2D;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine::UIElements::UIR {
class Allocator2D;
}
namespace UnityEngine::UIElements::UIR {
class TextureBlitter;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine {
struct FilterMode;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DynamicAtlasPage;
}
// Type: UnityEngine.UIElements::DynamicAtlasPage
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7441))
// CS Name: UnityEngine.UIElements.DynamicAtlasPage
class CORDL_TYPE DynamicAtlasPage : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~DynamicAtlasPage() = default;

// Ctor Parameters [CppParam { name: "", ty: "DynamicAtlasPage", modifiers: " const&", def_value: None }]
constexpr DynamicAtlasPage(DynamicAtlasPage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DynamicAtlasPage", modifiers: "&&", def_value: None }]
constexpr DynamicAtlasPage(DynamicAtlasPage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DynamicAtlasPage(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DynamicAtlasPage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DynamicAtlasPage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DynamicAtlasPage& operator=(DynamicAtlasPage&& o) noexcept = default;
  constexpr DynamicAtlasPage& operator=(DynamicAtlasPage const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::TextureId __declspec(property(get=__get__textureId_k__BackingField, put=__set__textureId_k__BackingField))  _textureId_k__BackingField;

constexpr void __set__textureId_k__BackingField(UnityEngine::UIElements::TextureId value) ;

constexpr UnityEngine::UIElements::TextureId __get__textureId_k__BackingField() const;

 UnityEngine::RenderTexture __declspec(property(get=__get__atlas_k__BackingField, put=__set__atlas_k__BackingField))  _atlas_k__BackingField;

constexpr void __set__atlas_k__BackingField(UnityEngine::RenderTexture value) ;

constexpr UnityEngine::RenderTexture __get__atlas_k__BackingField() const;

 UnityEngine::RenderTextureFormat __declspec(property(get=__get__format_k__BackingField, put=__set__format_k__BackingField))  _format_k__BackingField;

constexpr void __set__format_k__BackingField(UnityEngine::RenderTextureFormat value) ;

constexpr UnityEngine::RenderTextureFormat __get__format_k__BackingField() const;

 UnityEngine::FilterMode __declspec(property(get=__get__filterMode_k__BackingField, put=__set__filterMode_k__BackingField))  _filterMode_k__BackingField;

constexpr void __set__filterMode_k__BackingField(UnityEngine::FilterMode value) ;

constexpr UnityEngine::FilterMode __get__filterMode_k__BackingField() const;

 UnityEngine::Vector2Int __declspec(property(get=__get__minSize_k__BackingField, put=__set__minSize_k__BackingField))  _minSize_k__BackingField;

constexpr void __set__minSize_k__BackingField(UnityEngine::Vector2Int value) ;

constexpr UnityEngine::Vector2Int __get__minSize_k__BackingField() const;

 UnityEngine::Vector2Int __declspec(property(get=__get__maxSize_k__BackingField, put=__set__maxSize_k__BackingField))  _maxSize_k__BackingField;

constexpr void __set__maxSize_k__BackingField(UnityEngine::Vector2Int value) ;

constexpr UnityEngine::Vector2Int __get__maxSize_k__BackingField() const;

 int32_t __declspec(property(get=__get_m_1Padding, put=__set_m_1Padding))  m_1Padding;

constexpr void __set_m_1Padding(int32_t value) ;

constexpr int32_t __get_m_1Padding() const;

 int32_t __declspec(property(get=__get_m_2Padding, put=__set_m_2Padding))  m_2Padding;

constexpr void __set_m_2Padding(int32_t value) ;

constexpr int32_t __get_m_2Padding() const;

 UnityEngine::UIElements::UIR::Allocator2D __declspec(property(get=__get_m_Allocator, put=__set_m_Allocator))  m_Allocator;

constexpr void __set_m_Allocator(UnityEngine::UIElements::UIR::Allocator2D value) ;

constexpr UnityEngine::UIElements::UIR::Allocator2D __get_m_Allocator() const;

 UnityEngine::UIElements::UIR::TextureBlitter __declspec(property(get=__get_m_Blitter, put=__set_m_Blitter))  m_Blitter;

constexpr void __set_m_Blitter(UnityEngine::UIElements::UIR::TextureBlitter value) ;

constexpr UnityEngine::UIElements::UIR::TextureBlitter __get_m_Blitter() const;

 UnityEngine::Vector2Int __declspec(property(get=__get_m_CurrentSize, put=__set_m_CurrentSize))  m_CurrentSize;

constexpr void __set_m_CurrentSize(UnityEngine::Vector2Int value) ;

constexpr UnityEngine::Vector2Int __get_m_CurrentSize() const;

static int32_t __declspec(property(get=__get_s_TextureCounter, put=__set_s_TextureCounter))  s_TextureCounter;

static void __set_s_TextureCounter(int32_t value) ;

static int32_t __get_s_TextureCounter() ;

 bool __declspec(property(get=__get__disposed_k__BackingField, put=__set__disposed_k__BackingField))  _disposed_k__BackingField;

constexpr void __set__disposed_k__BackingField(bool value) ;

constexpr bool __get__disposed_k__BackingField() const;


// Properties

 UnityEngine::UIElements::TextureId __declspec(property(get=get_textureId, put=set_textureId))  textureId;

 UnityEngine::RenderTexture __declspec(property(get=get_atlas, put=set_atlas))  atlas;

 UnityEngine::RenderTextureFormat __declspec(property(get=get_format))  format;

 UnityEngine::FilterMode __declspec(property(get=get_filterMode))  filterMode;

 bool __declspec(property(get=get_disposed, put=set_disposed))  disposed;


// Methods

/// @brief Method get_textureId addr 0x2d06c00 size 0x8 virtual false final false
 UnityEngine::UIElements::TextureId get_textureId() ;

/// @brief Method set_textureId addr 0x2d06c08 size 0x8 virtual false final false
 void set_textureId(UnityEngine::UIElements::TextureId value) ;

/// @brief Method get_atlas addr 0x2d06c10 size 0x8 virtual false final false
 UnityEngine::RenderTexture get_atlas() ;

/// @brief Method set_atlas addr 0x2d06c18 size 0x8 virtual false final false
 void set_atlas(UnityEngine::RenderTexture value) ;

/// @brief Method get_format addr 0x2d06c20 size 0x8 virtual false final false
 UnityEngine::RenderTextureFormat get_format() ;

/// @brief Method get_filterMode addr 0x2d06c28 size 0x8 virtual false final false
 UnityEngine::FilterMode get_filterMode() ;

// Ctor Parameters [CppParam { name: "format", ty: "UnityEngine::RenderTextureFormat", modifiers: "", def_value: None }, CppParam { name: "filterMode", ty: "UnityEngine::FilterMode", modifiers: "", def_value: None }, CppParam { name: "minSize", ty: "UnityEngine::Vector2Int", modifiers: "", def_value: None }, CppParam { name: "maxSize", ty: "UnityEngine::Vector2Int", modifiers: "", def_value: None }]
explicit DynamicAtlasPage(UnityEngine::RenderTextureFormat format, UnityEngine::FilterMode filterMode, UnityEngine::Vector2Int minSize, UnityEngine::Vector2Int maxSize) ;

/// @brief Method .ctor addr 0x2d06c30 size 0x154 virtual false final false
 void _ctor(UnityEngine::RenderTextureFormat format, UnityEngine::FilterMode filterMode, UnityEngine::Vector2Int minSize, UnityEngine::Vector2Int maxSize) ;

/// @brief Method get_disposed addr 0x2d06e38 size 0x8 virtual false final false
 bool get_disposed() ;

/// @brief Method set_disposed addr 0x2d06e40 size 0xc virtual false final false
 void set_disposed(bool value) ;

/// @brief Method Dispose addr 0x2d06e4c size 0x6c virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x2d06eb8 size 0x1d4 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method TryAdd addr 0x2d070f8 size 0x1e4 virtual false final false
 bool TryAdd(UnityEngine::Texture2D image, ByRef<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Alloc2D> alloc, ByRef<UnityEngine::RectInt> rect) ;

/// @brief Method Update addr 0x2d072dc size 0x19c virtual false final false
 void Update(UnityEngine::Texture2D image, UnityEngine::RectInt rect) ;

/// @brief Method Remove addr 0x2d0761c size 0xfc virtual false final false
 void Remove(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Alloc2D alloc) ;

/// @brief Method Commit addr 0x2d07718 size 0x40 virtual false final false
 void Commit() ;

/// @brief Method UpdateAtlasTexture addr 0x2d07758 size 0x380 virtual false final false
 void UpdateAtlasTexture() ;

/// @brief Method CreateAtlasTexture addr 0x2d07bc4 size 0x138 virtual false final false
 UnityEngine::RenderTexture CreateAtlasTexture() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::DynamicAtlasPage);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::DynamicAtlasPage, "UnityEngine.UIElements", "DynamicAtlasPage");
