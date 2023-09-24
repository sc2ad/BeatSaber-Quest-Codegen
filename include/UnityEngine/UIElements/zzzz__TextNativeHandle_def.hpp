#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
class ITextHandle;
}
namespace UnityEngine::UIElements {
struct TextVertex;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__MeshGenerationContextUtils__TextParams;
}
namespace UnityEngine::UIElements {
struct CursorPositionStylePainterParameters;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::TextCore::Text {
class TextInfo;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct TextNativeHandle;
}
// Type: UnityEngine.UIElements::TextNativeHandle
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7245))
// CS Name: UnityEngine.UIElements.TextNativeHandle
struct CORDL_TYPE TextNativeHandle : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UIElements::ITextHandle
constexpr operator  UnityEngine::UIElements::ITextHandle() const;

// Ctor Parameters [CppParam { name: "_MeasuredSizes_k__BackingField", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "_RoundedSizes_k__BackingField", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "textVertices", ty: "Unity::Collections::NativeArray_1<UnityEngine::UIElements::TextVertex>", modifiers: "", def_value: None }, CppParam { name: "m_PreviousTextParamsHash", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextNativeHandle(UnityEngine::Vector2 _MeasuredSizes_k__BackingField, UnityEngine::Vector2 _RoundedSizes_k__BackingField, Unity::Collections::NativeArray_1<UnityEngine::UIElements::TextVertex> textVertices, int32_t m_PreviousTextParamsHash) noexcept;


                    constexpr TextNativeHandle(TextNativeHandle const&) = default;
                    constexpr TextNativeHandle(TextNativeHandle&&) = default;
                    constexpr TextNativeHandle& operator=(TextNativeHandle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TextNativeHandle& operator=(TextNativeHandle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TextNativeHandle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Vector2 __declspec(property(get=__get__MeasuredSizes_k__BackingField, put=__set__MeasuredSizes_k__BackingField))  _MeasuredSizes_k__BackingField;

constexpr void __set__MeasuredSizes_k__BackingField(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__MeasuredSizes_k__BackingField() const;

 UnityEngine::Vector2 __declspec(property(get=__get__RoundedSizes_k__BackingField, put=__set__RoundedSizes_k__BackingField))  _RoundedSizes_k__BackingField;

constexpr void __set__RoundedSizes_k__BackingField(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__RoundedSizes_k__BackingField() const;

 Unity::Collections::NativeArray_1<UnityEngine::UIElements::TextVertex> __declspec(property(get=__get_textVertices, put=__set_textVertices))  textVertices;

constexpr void __set_textVertices(Unity::Collections::NativeArray_1<UnityEngine::UIElements::TextVertex> value) ;

constexpr Unity::Collections::NativeArray_1<UnityEngine::UIElements::TextVertex> __get_textVertices() const;

 int32_t __declspec(property(get=__get_m_PreviousTextParamsHash, put=__set_m_PreviousTextParamsHash))  m_PreviousTextParamsHash;

constexpr void __set_m_PreviousTextParamsHash(int32_t value) ;

constexpr int32_t __get_m_PreviousTextParamsHash() const;


// Properties

 UnityEngine::Vector2 __declspec(property(get=get_MeasuredSizes, put=set_MeasuredSizes))  MeasuredSizes;

 UnityEngine::Vector2 __declspec(property(get=get_RoundedSizes, put=set_RoundedSizes))  RoundedSizes;


// Methods

/// @brief Method get_MeasuredSizes addr 0x2ccf09c size 0x8 virtual true final true
 UnityEngine::Vector2 get_MeasuredSizes() ;

/// @brief Method set_MeasuredSizes addr 0x2ccf0a4 size 0x8 virtual true final true
 void set_MeasuredSizes(UnityEngine::Vector2 value) ;

/// @brief Method get_RoundedSizes addr 0x2ccf0ac size 0x8 virtual true final true
 UnityEngine::Vector2 get_RoundedSizes() ;

/// @brief Method set_RoundedSizes addr 0x2ccf0b4 size 0x8 virtual true final true
 void set_RoundedSizes(UnityEngine::Vector2 value) ;

/// @brief Method New addr 0x2ccf0bc size 0x5c virtual false final false
static UnityEngine::UIElements::ITextHandle New() ;

/// @brief Method IsLegacy addr 0x2ccf118 size 0x8 virtual true final true
 bool IsLegacy() ;

/// @brief Method GetLineHeight addr 0x2ccf120 size 0x70 virtual true final true
 float_t GetLineHeight(int32_t characterIndex, UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams textParams, float_t textScaling, float_t pixelPerPoint) ;

/// @brief Method Update addr 0x2ccf1f4 size 0x70 virtual true final true
 UnityEngine::TextCore::Text::TextInfo Update(UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams parms, float_t pixelsPerPoint) ;

/// @brief Method GetVertices addr 0x2ccf264 size 0x210 virtual false final false
 Unity::Collections::NativeArray_1<UnityEngine::UIElements::TextVertex> GetVertices(UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams parms, float_t scaling) ;

/// @brief Method GetCursorPosition addr 0x2ccf474 size 0x58 virtual true final true
 UnityEngine::Vector2 GetCursorPosition(UnityEngine::UIElements::CursorPositionStylePainterParameters parms, float_t scaling) ;

/// @brief Method ComputeTextWidth addr 0x2ccf4cc size 0x80 virtual true final true
 float_t ComputeTextWidth(UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams parms, float_t scaling) ;

/// @brief Method ComputeTextHeight addr 0x2ccf190 size 0x64 virtual true final true
 float_t ComputeTextHeight(UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams parms, float_t scaling) ;

/// @brief Method IsElided addr 0x2ccf54c size 0x8 virtual true final true
 bool IsElided() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::TextNativeHandle, "UnityEngine.UIElements", "TextNativeHandle");
