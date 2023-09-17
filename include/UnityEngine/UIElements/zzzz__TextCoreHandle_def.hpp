#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::TextCore::Text {
class TextInfo;
}
namespace UnityEngine::UIElements {
struct ____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams;
}
namespace UnityEngine::TextCore::Text {
struct TextOverflowMode;
}
namespace UnityEngine::UIElements {
class ITextHandle;
}
namespace UnityEngine::TextCore::Text {
class TextGenerationSettings;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
struct CursorPositionStylePainterParameters;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct TextCoreHandle;
}
// Type: UnityEngine.UIElements::TextCoreHandle
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7244))
// CS Name: UnityEngine.UIElements.TextCoreHandle
struct CORDL_TYPE TextCoreHandle : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::UIElements::ITextHandle
constexpr operator  ::UnityEngine::UIElements::ITextHandle() const;

// Ctor Parameters [CppParam { name: "_MeasuredSizes_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "_RoundedSizes_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_PreferredSize", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_PreviousGenerationSettingsHash", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_CurrentGenerationSettings", ty: "::UnityEngine::TextCore::Text::TextGenerationSettings", modifiers: "", def_value: None }, CppParam { name: "m_TextInfoMesh", ty: "::UnityEngine::TextCore::Text::TextInfo", modifiers: "", def_value: None }, CppParam { name: "isDirty", ty: "bool", modifiers: "", def_value: None }]
constexpr TextCoreHandle(::UnityEngine::Vector2 _MeasuredSizes_k__BackingField, ::UnityEngine::Vector2 _RoundedSizes_k__BackingField, ::UnityEngine::Vector2 m_PreferredSize, int32_t m_PreviousGenerationSettingsHash, ::UnityEngine::TextCore::Text::TextGenerationSettings m_CurrentGenerationSettings, ::UnityEngine::TextCore::Text::TextInfo m_TextInfoMesh, bool isDirty) noexcept;


                    constexpr TextCoreHandle(TextCoreHandle const&) = default;
                    constexpr TextCoreHandle(TextCoreHandle&&) = default;
                    constexpr TextCoreHandle& operator=(TextCoreHandle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TextCoreHandle& operator=(TextCoreHandle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TextCoreHandle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Vector2 __declspec(property(get=__get__MeasuredSizes_k__BackingField, put=__set__MeasuredSizes_k__BackingField))  _MeasuredSizes_k__BackingField;

constexpr void __set__MeasuredSizes_k__BackingField(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get__MeasuredSizes_k__BackingField() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get__RoundedSizes_k__BackingField, put=__set__RoundedSizes_k__BackingField))  _RoundedSizes_k__BackingField;

constexpr void __set__RoundedSizes_k__BackingField(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get__RoundedSizes_k__BackingField() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_m_PreferredSize, put=__set_m_PreferredSize))  m_PreferredSize;

constexpr void __set_m_PreferredSize(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_m_PreferredSize() const;

 int32_t __declspec(property(get=__get_m_PreviousGenerationSettingsHash, put=__set_m_PreviousGenerationSettingsHash))  m_PreviousGenerationSettingsHash;

constexpr void __set_m_PreviousGenerationSettingsHash(int32_t value) ;

constexpr int32_t __get_m_PreviousGenerationSettingsHash() const;

 ::UnityEngine::TextCore::Text::TextGenerationSettings __declspec(property(get=__get_m_CurrentGenerationSettings, put=__set_m_CurrentGenerationSettings))  m_CurrentGenerationSettings;

constexpr void __set_m_CurrentGenerationSettings(::UnityEngine::TextCore::Text::TextGenerationSettings value) ;

constexpr ::UnityEngine::TextCore::Text::TextGenerationSettings __get_m_CurrentGenerationSettings() const;

static ::UnityEngine::TextCore::Text::TextGenerationSettings __declspec(property(get=__get_s_LayoutSettings, put=__set_s_LayoutSettings))  s_LayoutSettings;

static void __set_s_LayoutSettings(::UnityEngine::TextCore::Text::TextGenerationSettings value) ;

static ::UnityEngine::TextCore::Text::TextGenerationSettings __get_s_LayoutSettings() ;

 ::UnityEngine::TextCore::Text::TextInfo __declspec(property(get=__get_m_TextInfoMesh, put=__set_m_TextInfoMesh))  m_TextInfoMesh;

constexpr void __set_m_TextInfoMesh(::UnityEngine::TextCore::Text::TextInfo value) ;

constexpr ::UnityEngine::TextCore::Text::TextInfo __get_m_TextInfoMesh() const;

static ::UnityEngine::TextCore::Text::TextInfo __declspec(property(get=__get_s_TextInfoLayout, put=__set_s_TextInfoLayout))  s_TextInfoLayout;

static void __set_s_TextInfoLayout(::UnityEngine::TextCore::Text::TextInfo value) ;

static ::UnityEngine::TextCore::Text::TextInfo __get_s_TextInfoLayout() ;

 bool __declspec(property(get=__get_isDirty, put=__set_isDirty))  isDirty;

constexpr void __set_isDirty(bool value) ;

constexpr bool __get_isDirty() const;


// Properties

 ::UnityEngine::Vector2 __declspec(property(get=get_MeasuredSizes, put=set_MeasuredSizes))  MeasuredSizes;

 ::UnityEngine::Vector2 __declspec(property(get=get_RoundedSizes, put=set_RoundedSizes))  RoundedSizes;

 ::UnityEngine::TextCore::Text::TextInfo __declspec(property(get=get_textInfoMesh))  textInfoMesh;

static ::UnityEngine::TextCore::Text::TextInfo __declspec(property(get=get_textInfoLayout))  textInfoLayout;


// Methods

/// @brief Method get_MeasuredSizes addr 0x2cce470 size 0x8 virtual true final true
 ::UnityEngine::Vector2 get_MeasuredSizes() ;

/// @brief Method set_MeasuredSizes addr 0x2cce478 size 0x8 virtual true final true
 void set_MeasuredSizes(::UnityEngine::Vector2 value) ;

/// @brief Method get_RoundedSizes addr 0x2cce480 size 0x8 virtual true final true
 ::UnityEngine::Vector2 get_RoundedSizes() ;

/// @brief Method set_RoundedSizes addr 0x2cce488 size 0x8 virtual true final true
 void set_RoundedSizes(::UnityEngine::Vector2 value) ;

/// @brief Method New addr 0x2cce490 size 0xc0 virtual false final false
static ::UnityEngine::UIElements::ITextHandle New() ;

/// @brief Method get_textInfoMesh addr 0x2cce550 size 0x6c virtual false final false
 ::UnityEngine::TextCore::Text::TextInfo get_textInfoMesh() ;

/// @brief Method get_textInfoLayout addr 0x2cce5bc size 0xc0 virtual false final false
static ::UnityEngine::TextCore::Text::TextInfo get_textInfoLayout() ;

/// @brief Method IsLegacy addr 0x2cce67c size 0x8 virtual true final true
 bool IsLegacy() ;

/// @brief Method IsDirty addr 0x2cce684 size 0x44 virtual false final false
 bool IsDirty(::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams parms) ;

/// @brief Method GetCursorPosition addr 0x2cce6c8 size 0x28 virtual true final true
 ::UnityEngine::Vector2 GetCursorPosition(::UnityEngine::UIElements::CursorPositionStylePainterParameters parms, float_t scaling) ;

/// @brief Method ComputeTextWidth addr 0x2cce6f0 size 0x34 virtual true final true
 float_t ComputeTextWidth(::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams parms, float_t scaling) ;

/// @brief Method ComputeTextHeight addr 0x2cce854 size 0x34 virtual true final true
 float_t ComputeTextHeight(::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams parms, float_t scaling) ;

/// @brief Method GetLineHeight addr 0x2cce888 size 0x68 virtual true final true
 float_t GetLineHeight(int32_t characterIndex, ::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams textParams, float_t textScaling, float_t pixelPerPoint) ;

/// @brief Method Update addr 0x2cce8f0 size 0x208 virtual true final true
 ::UnityEngine::TextCore::Text::TextInfo Update(::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams parms, float_t pixelsPerPoint) ;

/// @brief Method UpdatePreferredValues addr 0x2cce724 size 0x130 virtual false final false
 void UpdatePreferredValues(::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams parms) ;

/// @brief Method GetTextOverflowMode addr 0x2cceda4 size 0x3c virtual false final false
static ::UnityEngine::TextCore::Text::TextOverflowMode GetTextOverflowMode(::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams textParams) ;

/// @brief Method UpdateGenerationSettingsCommon addr 0x2cceaf8 size 0x2ac virtual false final false
static void UpdateGenerationSettingsCommon(::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams painterParams, ::UnityEngine::TextCore::Text::TextGenerationSettings settings) ;

/// @brief Method IsElided addr 0x2ccefc0 size 0x64 virtual true final true
 bool IsElided() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextCoreHandle, "UnityEngine.UIElements", "TextCoreHandle");
