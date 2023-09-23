#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements::UIR {
struct BMPAlloc;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct RectInt;
}
namespace Unity::Collections {
template<typename T>
struct NativeSlice_1;
}
namespace UnityEngine::UIElements::UIR {
struct Transform3x4;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine::UIElements::UIR {
struct TextCoreSettings;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine::UIElements::UIR {
struct BitmapAllocator32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine::UIElements::UIR {
class BaseShaderInfoStorage;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct UIRVEShaderInfoAllocator;
}
// Type: UnityEngine.UIElements.UIR::UIRVEShaderInfoAllocator
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7477))
// CS Name: UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator
struct CORDL_TYPE UIRVEShaderInfoAllocator : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Storage", ty: "UnityEngine::UIElements::UIR::BaseShaderInfoStorage", modifiers: "", def_value: None }, CppParam { name: "m_TransformAllocator", ty: "UnityEngine::UIElements::UIR::BitmapAllocator32", modifiers: "", def_value: None }, CppParam { name: "m_ClipRectAllocator", ty: "UnityEngine::UIElements::UIR::BitmapAllocator32", modifiers: "", def_value: None }, CppParam { name: "m_OpacityAllocator", ty: "UnityEngine::UIElements::UIR::BitmapAllocator32", modifiers: "", def_value: None }, CppParam { name: "m_ColorAllocator", ty: "UnityEngine::UIElements::UIR::BitmapAllocator32", modifiers: "", def_value: None }, CppParam { name: "m_TextSettingsAllocator", ty: "UnityEngine::UIElements::UIR::BitmapAllocator32", modifiers: "", def_value: None }, CppParam { name: "m_StorageReallyCreated", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_VertexTexturingEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_Transforms", ty: "Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::Transform3x4>", modifiers: "", def_value: None }, CppParam { name: "m_ClipRects", ty: "Unity::Collections::NativeArray_1<UnityEngine::Vector4>", modifiers: "", def_value: None }]
constexpr UIRVEShaderInfoAllocator(UnityEngine::UIElements::UIR::BaseShaderInfoStorage m_Storage, UnityEngine::UIElements::UIR::BitmapAllocator32 m_TransformAllocator, UnityEngine::UIElements::UIR::BitmapAllocator32 m_ClipRectAllocator, UnityEngine::UIElements::UIR::BitmapAllocator32 m_OpacityAllocator, UnityEngine::UIElements::UIR::BitmapAllocator32 m_ColorAllocator, UnityEngine::UIElements::UIR::BitmapAllocator32 m_TextSettingsAllocator, bool m_StorageReallyCreated, bool m_VertexTexturingEnabled, Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::Transform3x4> m_Transforms, Unity::Collections::NativeArray_1<UnityEngine::Vector4> m_ClipRects) noexcept;


                    constexpr UIRVEShaderInfoAllocator(UIRVEShaderInfoAllocator const&) = default;
                    constexpr UIRVEShaderInfoAllocator(UIRVEShaderInfoAllocator&&) = default;
                    constexpr UIRVEShaderInfoAllocator& operator=(UIRVEShaderInfoAllocator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UIRVEShaderInfoAllocator& operator=(UIRVEShaderInfoAllocator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xd0};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UIRVEShaderInfoAllocator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UIElements::UIR::BaseShaderInfoStorage __declspec(property(get=__get_m_Storage, put=__set_m_Storage))  m_Storage;

constexpr void __set_m_Storage(UnityEngine::UIElements::UIR::BaseShaderInfoStorage value) ;

constexpr UnityEngine::UIElements::UIR::BaseShaderInfoStorage __get_m_Storage() const;

 UnityEngine::UIElements::UIR::BitmapAllocator32 __declspec(property(get=__get_m_TransformAllocator, put=__set_m_TransformAllocator))  m_TransformAllocator;

constexpr void __set_m_TransformAllocator(UnityEngine::UIElements::UIR::BitmapAllocator32 value) ;

constexpr UnityEngine::UIElements::UIR::BitmapAllocator32 __get_m_TransformAllocator() const;

 UnityEngine::UIElements::UIR::BitmapAllocator32 __declspec(property(get=__get_m_ClipRectAllocator, put=__set_m_ClipRectAllocator))  m_ClipRectAllocator;

constexpr void __set_m_ClipRectAllocator(UnityEngine::UIElements::UIR::BitmapAllocator32 value) ;

constexpr UnityEngine::UIElements::UIR::BitmapAllocator32 __get_m_ClipRectAllocator() const;

 UnityEngine::UIElements::UIR::BitmapAllocator32 __declspec(property(get=__get_m_OpacityAllocator, put=__set_m_OpacityAllocator))  m_OpacityAllocator;

constexpr void __set_m_OpacityAllocator(UnityEngine::UIElements::UIR::BitmapAllocator32 value) ;

constexpr UnityEngine::UIElements::UIR::BitmapAllocator32 __get_m_OpacityAllocator() const;

 UnityEngine::UIElements::UIR::BitmapAllocator32 __declspec(property(get=__get_m_ColorAllocator, put=__set_m_ColorAllocator))  m_ColorAllocator;

constexpr void __set_m_ColorAllocator(UnityEngine::UIElements::UIR::BitmapAllocator32 value) ;

constexpr UnityEngine::UIElements::UIR::BitmapAllocator32 __get_m_ColorAllocator() const;

 UnityEngine::UIElements::UIR::BitmapAllocator32 __declspec(property(get=__get_m_TextSettingsAllocator, put=__set_m_TextSettingsAllocator))  m_TextSettingsAllocator;

constexpr void __set_m_TextSettingsAllocator(UnityEngine::UIElements::UIR::BitmapAllocator32 value) ;

constexpr UnityEngine::UIElements::UIR::BitmapAllocator32 __get_m_TextSettingsAllocator() const;

 bool __declspec(property(get=__get_m_StorageReallyCreated, put=__set_m_StorageReallyCreated))  m_StorageReallyCreated;

constexpr void __set_m_StorageReallyCreated(bool value) ;

constexpr bool __get_m_StorageReallyCreated() const;

 bool __declspec(property(get=__get_m_VertexTexturingEnabled, put=__set_m_VertexTexturingEnabled))  m_VertexTexturingEnabled;

constexpr void __set_m_VertexTexturingEnabled(bool value) ;

constexpr bool __get_m_VertexTexturingEnabled() const;

 Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::Transform3x4> __declspec(property(get=__get_m_Transforms, put=__set_m_Transforms))  m_Transforms;

constexpr void __set_m_Transforms(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::Transform3x4> value) ;

constexpr Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::Transform3x4> __get_m_Transforms() const;

 Unity::Collections::NativeArray_1<UnityEngine::Vector4> __declspec(property(get=__get_m_ClipRects, put=__set_m_ClipRects))  m_ClipRects;

constexpr void __set_m_ClipRects(Unity::Collections::NativeArray_1<UnityEngine::Vector4> value) ;

constexpr Unity::Collections::NativeArray_1<UnityEngine::Vector4> __get_m_ClipRects() const;

static UnityEngine::Vector2Int __declspec(property(get=__get_identityTransformTexel, put=__set_identityTransformTexel))  identityTransformTexel;

static void __set_identityTransformTexel(UnityEngine::Vector2Int value) ;

static UnityEngine::Vector2Int __get_identityTransformTexel() ;

static UnityEngine::Vector2Int __declspec(property(get=__get_infiniteClipRectTexel, put=__set_infiniteClipRectTexel))  infiniteClipRectTexel;

static void __set_infiniteClipRectTexel(UnityEngine::Vector2Int value) ;

static UnityEngine::Vector2Int __get_infiniteClipRectTexel() ;

static UnityEngine::Vector2Int __declspec(property(get=__get_fullOpacityTexel, put=__set_fullOpacityTexel))  fullOpacityTexel;

static void __set_fullOpacityTexel(UnityEngine::Vector2Int value) ;

static UnityEngine::Vector2Int __get_fullOpacityTexel() ;

static UnityEngine::Vector2Int __declspec(property(get=__get_clearColorTexel, put=__set_clearColorTexel))  clearColorTexel;

static void __set_clearColorTexel(UnityEngine::Vector2Int value) ;

static UnityEngine::Vector2Int __get_clearColorTexel() ;

static UnityEngine::Vector2Int __declspec(property(get=__get_defaultTextCoreSettingsTexel, put=__set_defaultTextCoreSettingsTexel))  defaultTextCoreSettingsTexel;

static void __set_defaultTextCoreSettingsTexel(UnityEngine::Vector2Int value) ;

static UnityEngine::Vector2Int __get_defaultTextCoreSettingsTexel() ;

static UnityEngine::Matrix4x4 __declspec(property(get=__get_identityTransformValue, put=__set_identityTransformValue))  identityTransformValue;

static void __set_identityTransformValue(UnityEngine::Matrix4x4 value) ;

static UnityEngine::Matrix4x4 __get_identityTransformValue() ;

static UnityEngine::Vector4 __declspec(property(get=__get_identityTransformRow0Value, put=__set_identityTransformRow0Value))  identityTransformRow0Value;

static void __set_identityTransformRow0Value(UnityEngine::Vector4 value) ;

static UnityEngine::Vector4 __get_identityTransformRow0Value() ;

static UnityEngine::Vector4 __declspec(property(get=__get_identityTransformRow1Value, put=__set_identityTransformRow1Value))  identityTransformRow1Value;

static void __set_identityTransformRow1Value(UnityEngine::Vector4 value) ;

static UnityEngine::Vector4 __get_identityTransformRow1Value() ;

static UnityEngine::Vector4 __declspec(property(get=__get_identityTransformRow2Value, put=__set_identityTransformRow2Value))  identityTransformRow2Value;

static void __set_identityTransformRow2Value(UnityEngine::Vector4 value) ;

static UnityEngine::Vector4 __get_identityTransformRow2Value() ;

static UnityEngine::Vector4 __declspec(property(get=__get_infiniteClipRectValue, put=__set_infiniteClipRectValue))  infiniteClipRectValue;

static void __set_infiniteClipRectValue(UnityEngine::Vector4 value) ;

static UnityEngine::Vector4 __get_infiniteClipRectValue() ;

static UnityEngine::Vector4 __declspec(property(get=__get_fullOpacityValue, put=__set_fullOpacityValue))  fullOpacityValue;

static void __set_fullOpacityValue(UnityEngine::Vector4 value) ;

static UnityEngine::Vector4 __get_fullOpacityValue() ;

static UnityEngine::Vector4 __declspec(property(get=__get_clearColorValue, put=__set_clearColorValue))  clearColorValue;

static void __set_clearColorValue(UnityEngine::Vector4 value) ;

static UnityEngine::Vector4 __get_clearColorValue() ;

static UnityEngine::UIElements::UIR::TextCoreSettings __declspec(property(get=__get_defaultTextCoreSettingsValue, put=__set_defaultTextCoreSettingsValue))  defaultTextCoreSettingsValue;

static void __set_defaultTextCoreSettingsValue(UnityEngine::UIElements::UIR::TextCoreSettings value) ;

static UnityEngine::UIElements::UIR::TextCoreSettings __get_defaultTextCoreSettingsValue() ;

static UnityEngine::UIElements::UIR::BMPAlloc __declspec(property(get=__get_identityTransform, put=__set_identityTransform))  identityTransform;

static void __set_identityTransform(UnityEngine::UIElements::UIR::BMPAlloc value) ;

static UnityEngine::UIElements::UIR::BMPAlloc __get_identityTransform() ;

static UnityEngine::UIElements::UIR::BMPAlloc __declspec(property(get=__get_infiniteClipRect, put=__set_infiniteClipRect))  infiniteClipRect;

static void __set_infiniteClipRect(UnityEngine::UIElements::UIR::BMPAlloc value) ;

static UnityEngine::UIElements::UIR::BMPAlloc __get_infiniteClipRect() ;

static UnityEngine::UIElements::UIR::BMPAlloc __declspec(property(get=__get_fullOpacity, put=__set_fullOpacity))  fullOpacity;

static void __set_fullOpacity(UnityEngine::UIElements::UIR::BMPAlloc value) ;

static UnityEngine::UIElements::UIR::BMPAlloc __get_fullOpacity() ;

static UnityEngine::UIElements::UIR::BMPAlloc __declspec(property(get=__get_clearColor, put=__set_clearColor))  clearColor;

static void __set_clearColor(UnityEngine::UIElements::UIR::BMPAlloc value) ;

static UnityEngine::UIElements::UIR::BMPAlloc __get_clearColor() ;

static UnityEngine::UIElements::UIR::BMPAlloc __declspec(property(get=__get_defaultTextCoreSettings, put=__set_defaultTextCoreSettings))  defaultTextCoreSettings;

static void __set_defaultTextCoreSettings(UnityEngine::UIElements::UIR::BMPAlloc value) ;

static UnityEngine::UIElements::UIR::BMPAlloc __get_defaultTextCoreSettings() ;


// Properties

static int32_t __declspec(property(get=get_pageWidth))  pageWidth;

static int32_t __declspec(property(get=get_pageHeight))  pageHeight;

 Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4> __declspec(property(get=get_transformConstants))  transformConstants;

 Unity::Collections::NativeSlice_1<UnityEngine::Vector4> __declspec(property(get=get_clipRectConstants))  clipRectConstants;

 UnityEngine::Texture __declspec(property(get=get_atlas))  atlas;


// Methods

/// @brief Method get_pageWidth addr 0x2d12734 size 0x8 virtual false final false
static int32_t get_pageWidth() ;

/// @brief Method get_pageHeight addr 0x2d1273c size 0x8 virtual false final false
static int32_t get_pageHeight() ;

/// @brief Method AllocToTexelCoord addr 0x2d12744 size 0x50 virtual false final false
static UnityEngine::Vector2Int AllocToTexelCoord(ByRef<UnityEngine::UIElements::UIR::BitmapAllocator32> allocator, UnityEngine::UIElements::UIR::BMPAlloc alloc) ;

/// @brief Method AllocToConstantBufferIndex addr 0x2d12794 size 0x68 virtual false final false
static int32_t AllocToConstantBufferIndex(UnityEngine::UIElements::UIR::BMPAlloc alloc) ;

/// @brief Method AtlasRectMatchesPage addr 0x2d127fc size 0xf8 virtual false final false
static bool AtlasRectMatchesPage(ByRef<UnityEngine::UIElements::UIR::BitmapAllocator32> allocator, UnityEngine::UIElements::UIR::BMPAlloc defAlloc, UnityEngine::RectInt atlasRect) ;

/// @brief Method get_transformConstants addr 0x2d128f4 size 0x48 virtual false final false
 Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4> get_transformConstants() ;

/// @brief Method get_clipRectConstants addr 0x2d1293c size 0x48 virtual false final false
 Unity::Collections::NativeSlice_1<UnityEngine::Vector4> get_clipRectConstants() ;

/// @brief Method get_atlas addr 0x2d12984 size 0x90 virtual false final false
 UnityEngine::Texture get_atlas() ;

/// @brief Method Construct addr 0x2d12a14 size 0x288 virtual false final false
 void Construct() ;

/// @brief Method ReallyCreateStorage addr 0x2d12c9c size 0x42c virtual false final false
 void ReallyCreateStorage() ;

/// @brief Method Dispose addr 0x2d1386c size 0xd0 virtual false final false
 void Dispose() ;

/// @brief Method IssuePendingStorageChanges addr 0x2d139a8 size 0x18 virtual false final false
 void IssuePendingStorageChanges() ;

/// @brief Method AllocTransform addr 0x2d139c0 size 0xe8 virtual false final false
 UnityEngine::UIElements::UIR::BMPAlloc AllocTransform() ;

/// @brief Method AllocClipRect addr 0x2d13aa8 size 0xe8 virtual false final false
 UnityEngine::UIElements::UIR::BMPAlloc AllocClipRect() ;

/// @brief Method AllocOpacity addr 0x2d13b90 size 0x28 virtual false final false
 UnityEngine::UIElements::UIR::BMPAlloc AllocOpacity() ;

/// @brief Method AllocColor addr 0x2d13bb8 size 0x28 virtual false final false
 UnityEngine::UIElements::UIR::BMPAlloc AllocColor() ;

/// @brief Method AllocTextCoreSettings addr 0x2d13be0 size 0x28 virtual false final false
 UnityEngine::UIElements::UIR::BMPAlloc AllocTextCoreSettings(UnityEngine::UIElements::UIR::TextCoreSettings settings) ;

/// @brief Method SetTransformValue addr 0x2d131f0 size 0x214 virtual false final false
 void SetTransformValue(UnityEngine::UIElements::UIR::BMPAlloc alloc, UnityEngine::Matrix4x4 xform) ;

/// @brief Method SetClipRectValue addr 0x2d13404 size 0x138 virtual false final false
 void SetClipRectValue(UnityEngine::UIElements::UIR::BMPAlloc alloc, UnityEngine::Vector4 clipRect) ;

/// @brief Method SetOpacityValue addr 0x2d1353c size 0xdc virtual false final false
 void SetOpacityValue(UnityEngine::UIElements::UIR::BMPAlloc alloc, float_t opacity) ;

/// @brief Method SetColorValue addr 0x2d13618 size 0xf0 virtual false final false
 void SetColorValue(UnityEngine::UIElements::UIR::BMPAlloc alloc, UnityEngine::Color color) ;

/// @brief Method SetTextCoreSettingValue addr 0x2d13708 size 0x164 virtual false final false
 void SetTextCoreSettingValue(UnityEngine::UIElements::UIR::BMPAlloc alloc, UnityEngine::UIElements::UIR::TextCoreSettings settings) ;

/// @brief Method FreeTransform addr 0x2d13c08 size 0x74 virtual false final false
 void FreeTransform(UnityEngine::UIElements::UIR::BMPAlloc alloc) ;

/// @brief Method FreeClipRect addr 0x2d13c7c size 0x74 virtual false final false
 void FreeClipRect(UnityEngine::UIElements::UIR::BMPAlloc alloc) ;

/// @brief Method FreeOpacity addr 0x2d13cf0 size 0x74 virtual false final false
 void FreeOpacity(UnityEngine::UIElements::UIR::BMPAlloc alloc) ;

/// @brief Method FreeColor addr 0x2d13d64 size 0x74 virtual false final false
 void FreeColor(UnityEngine::UIElements::UIR::BMPAlloc alloc) ;

/// @brief Method FreeTextCoreSettings addr 0x2d13dd8 size 0x74 virtual false final false
 void FreeTextCoreSettings(UnityEngine::UIElements::UIR::BMPAlloc alloc) ;

/// @brief Method TransformAllocToVertexData addr 0x2d13e4c size 0x120 virtual false final false
 UnityEngine::Color32 TransformAllocToVertexData(UnityEngine::UIElements::UIR::BMPAlloc alloc) ;

/// @brief Method ClipRectAllocToVertexData addr 0x2d13f6c size 0x120 virtual false final false
 UnityEngine::Color32 ClipRectAllocToVertexData(UnityEngine::UIElements::UIR::BMPAlloc alloc) ;

/// @brief Method OpacityAllocToVertexData addr 0x2d1408c size 0xfc virtual false final false
 UnityEngine::Color32 OpacityAllocToVertexData(UnityEngine::UIElements::UIR::BMPAlloc alloc) ;

/// @brief Method ColorAllocToVertexData addr 0x2d14188 size 0xfc virtual false final false
 UnityEngine::Color32 ColorAllocToVertexData(UnityEngine::UIElements::UIR::BMPAlloc alloc) ;

/// @brief Method TextCoreSettingsToVertexData addr 0x2d14284 size 0xfc virtual false final false
 UnityEngine::Color32 TextCoreSettingsToVertexData(UnityEngine::UIElements::UIR::BMPAlloc alloc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator, "UnityEngine.UIElements.UIR", "UIRVEShaderInfoAllocator");
