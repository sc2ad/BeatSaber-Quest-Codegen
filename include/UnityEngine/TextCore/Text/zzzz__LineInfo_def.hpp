#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::TextCore::Text {
struct TextAlignment;
}
namespace UnityEngine::TextCore::Text {
struct Extents;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct LineInfo;
}
// Type: UnityEngine.TextCore.Text::LineInfo
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13508))
// CS Name: UnityEngine.TextCore.Text.LineInfo
struct CORDL_TYPE LineInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "controlCharacterCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "characterCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "visibleCharacterCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "spaceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "visibleSpaceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "wordCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstVisibleCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastVisibleCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "lineHeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ascender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "baseline", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "descender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxAdvance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "width", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "marginLeft", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "marginRight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "alignment", ty: "UnityEngine::TextCore::Text::TextAlignment", modifiers: "", def_value: None }, CppParam { name: "lineExtents", ty: "UnityEngine::TextCore::Text::Extents", modifiers: "", def_value: None }]
constexpr LineInfo(int32_t controlCharacterCount, int32_t characterCount, int32_t visibleCharacterCount, int32_t spaceCount, int32_t visibleSpaceCount, int32_t wordCount, int32_t firstCharacterIndex, int32_t firstVisibleCharacterIndex, int32_t lastCharacterIndex, int32_t lastVisibleCharacterIndex, float_t length, float_t lineHeight, float_t ascender, float_t baseline, float_t descender, float_t maxAdvance, float_t width, float_t marginLeft, float_t marginRight, UnityEngine::TextCore::Text::TextAlignment alignment, UnityEngine::TextCore::Text::Extents lineExtents) noexcept;


                    constexpr LineInfo(LineInfo const&) = default;
                    constexpr LineInfo(LineInfo&&) = default;
                    constexpr LineInfo& operator=(LineInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LineInfo& operator=(LineInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x60};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LineInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_controlCharacterCount, put=__set_controlCharacterCount))  controlCharacterCount;

constexpr void __set_controlCharacterCount(int32_t value) ;

constexpr int32_t __get_controlCharacterCount() const;

 int32_t __declspec(property(get=__get_characterCount, put=__set_characterCount))  characterCount;

constexpr void __set_characterCount(int32_t value) ;

constexpr int32_t __get_characterCount() const;

 int32_t __declspec(property(get=__get_visibleCharacterCount, put=__set_visibleCharacterCount))  visibleCharacterCount;

constexpr void __set_visibleCharacterCount(int32_t value) ;

constexpr int32_t __get_visibleCharacterCount() const;

 int32_t __declspec(property(get=__get_spaceCount, put=__set_spaceCount))  spaceCount;

constexpr void __set_spaceCount(int32_t value) ;

constexpr int32_t __get_spaceCount() const;

 int32_t __declspec(property(get=__get_visibleSpaceCount, put=__set_visibleSpaceCount))  visibleSpaceCount;

constexpr void __set_visibleSpaceCount(int32_t value) ;

constexpr int32_t __get_visibleSpaceCount() const;

 int32_t __declspec(property(get=__get_wordCount, put=__set_wordCount))  wordCount;

constexpr void __set_wordCount(int32_t value) ;

constexpr int32_t __get_wordCount() const;

 int32_t __declspec(property(get=__get_firstCharacterIndex, put=__set_firstCharacterIndex))  firstCharacterIndex;

constexpr void __set_firstCharacterIndex(int32_t value) ;

constexpr int32_t __get_firstCharacterIndex() const;

 int32_t __declspec(property(get=__get_firstVisibleCharacterIndex, put=__set_firstVisibleCharacterIndex))  firstVisibleCharacterIndex;

constexpr void __set_firstVisibleCharacterIndex(int32_t value) ;

constexpr int32_t __get_firstVisibleCharacterIndex() const;

 int32_t __declspec(property(get=__get_lastCharacterIndex, put=__set_lastCharacterIndex))  lastCharacterIndex;

constexpr void __set_lastCharacterIndex(int32_t value) ;

constexpr int32_t __get_lastCharacterIndex() const;

 int32_t __declspec(property(get=__get_lastVisibleCharacterIndex, put=__set_lastVisibleCharacterIndex))  lastVisibleCharacterIndex;

constexpr void __set_lastVisibleCharacterIndex(int32_t value) ;

constexpr int32_t __get_lastVisibleCharacterIndex() const;

 float_t __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(float_t value) ;

constexpr float_t __get_length() const;

 float_t __declspec(property(get=__get_lineHeight, put=__set_lineHeight))  lineHeight;

constexpr void __set_lineHeight(float_t value) ;

constexpr float_t __get_lineHeight() const;

 float_t __declspec(property(get=__get_ascender, put=__set_ascender))  ascender;

constexpr void __set_ascender(float_t value) ;

constexpr float_t __get_ascender() const;

 float_t __declspec(property(get=__get_baseline, put=__set_baseline))  baseline;

constexpr void __set_baseline(float_t value) ;

constexpr float_t __get_baseline() const;

 float_t __declspec(property(get=__get_descender, put=__set_descender))  descender;

constexpr void __set_descender(float_t value) ;

constexpr float_t __get_descender() const;

 float_t __declspec(property(get=__get_maxAdvance, put=__set_maxAdvance))  maxAdvance;

constexpr void __set_maxAdvance(float_t value) ;

constexpr float_t __get_maxAdvance() const;

 float_t __declspec(property(get=__get_width, put=__set_width))  width;

constexpr void __set_width(float_t value) ;

constexpr float_t __get_width() const;

 float_t __declspec(property(get=__get_marginLeft, put=__set_marginLeft))  marginLeft;

constexpr void __set_marginLeft(float_t value) ;

constexpr float_t __get_marginLeft() const;

 float_t __declspec(property(get=__get_marginRight, put=__set_marginRight))  marginRight;

constexpr void __set_marginRight(float_t value) ;

constexpr float_t __get_marginRight() const;

 UnityEngine::TextCore::Text::TextAlignment __declspec(property(get=__get_alignment, put=__set_alignment))  alignment;

constexpr void __set_alignment(UnityEngine::TextCore::Text::TextAlignment value) ;

constexpr UnityEngine::TextCore::Text::TextAlignment __get_alignment() const;

 UnityEngine::TextCore::Text::Extents __declspec(property(get=__get_lineExtents, put=__set_lineExtents))  lineExtents;

constexpr void __set_lineExtents(UnityEngine::TextCore::Text::Extents value) ;

constexpr UnityEngine::TextCore::Text::Extents __get_lineExtents() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::Text::LineInfo, "UnityEngine.TextCore.Text", "LineInfo");
