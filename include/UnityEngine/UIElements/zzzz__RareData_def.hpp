#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::UIElements {
struct TextOverflow;
}
namespace UnityEngine::UIElements {
struct OverflowClipBox;
}
namespace UnityEngine::UIElements {
template<typename T>
class IStyleDataGroup_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UIElements {
struct Cursor;
}
namespace UnityEngine {
struct ScaleMode;
}
namespace UnityEngine::UIElements {
struct TextOverflowPosition;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct RareData;
}
// Type: UnityEngine.UIElements::RareData
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7458))
// CS Name: UnityEngine.UIElements.RareData
struct CORDL_TYPE RareData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::RareData>
constexpr operator  ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::RareData>() const;

/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::UIElements::RareData>
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::RareData>() const;

// Ctor Parameters [CppParam { name: "cursor", ty: "::UnityEngine::UIElements::Cursor", modifiers: "", def_value: None }, CppParam { name: "textOverflow", ty: "::UnityEngine::UIElements::TextOverflow", modifiers: "", def_value: None }, CppParam { name: "unityBackgroundImageTintColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "unityBackgroundScaleMode", ty: "::UnityEngine::ScaleMode", modifiers: "", def_value: None }, CppParam { name: "unityOverflowClipBox", ty: "::UnityEngine::UIElements::OverflowClipBox", modifiers: "", def_value: None }, CppParam { name: "unitySliceBottom", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unitySliceLeft", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unitySliceRight", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unitySliceTop", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unityTextOverflowPosition", ty: "::UnityEngine::UIElements::TextOverflowPosition", modifiers: "", def_value: None }]
constexpr RareData(::UnityEngine::UIElements::Cursor cursor, ::UnityEngine::UIElements::TextOverflow textOverflow, ::UnityEngine::Color unityBackgroundImageTintColor, ::UnityEngine::ScaleMode unityBackgroundScaleMode, ::UnityEngine::UIElements::OverflowClipBox unityOverflowClipBox, int32_t unitySliceBottom, int32_t unitySliceLeft, int32_t unitySliceRight, int32_t unitySliceTop, ::UnityEngine::UIElements::TextOverflowPosition unityTextOverflowPosition) noexcept;


                    constexpr RareData(RareData const&) = default;
                    constexpr RareData(RareData&&) = default;
                    constexpr RareData& operator=(RareData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RareData& operator=(RareData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RareData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::UIElements::Cursor __declspec(property(get=__get_cursor, put=__set_cursor))  cursor;

constexpr void __set_cursor(::UnityEngine::UIElements::Cursor value) ;

constexpr ::UnityEngine::UIElements::Cursor __get_cursor() const;

 ::UnityEngine::UIElements::TextOverflow __declspec(property(get=__get_textOverflow, put=__set_textOverflow))  textOverflow;

constexpr void __set_textOverflow(::UnityEngine::UIElements::TextOverflow value) ;

constexpr ::UnityEngine::UIElements::TextOverflow __get_textOverflow() const;

 ::UnityEngine::Color __declspec(property(get=__get_unityBackgroundImageTintColor, put=__set_unityBackgroundImageTintColor))  unityBackgroundImageTintColor;

constexpr void __set_unityBackgroundImageTintColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_unityBackgroundImageTintColor() const;

 ::UnityEngine::ScaleMode __declspec(property(get=__get_unityBackgroundScaleMode, put=__set_unityBackgroundScaleMode))  unityBackgroundScaleMode;

constexpr void __set_unityBackgroundScaleMode(::UnityEngine::ScaleMode value) ;

constexpr ::UnityEngine::ScaleMode __get_unityBackgroundScaleMode() const;

 ::UnityEngine::UIElements::OverflowClipBox __declspec(property(get=__get_unityOverflowClipBox, put=__set_unityOverflowClipBox))  unityOverflowClipBox;

constexpr void __set_unityOverflowClipBox(::UnityEngine::UIElements::OverflowClipBox value) ;

constexpr ::UnityEngine::UIElements::OverflowClipBox __get_unityOverflowClipBox() const;

 int32_t __declspec(property(get=__get_unitySliceBottom, put=__set_unitySliceBottom))  unitySliceBottom;

constexpr void __set_unitySliceBottom(int32_t value) ;

constexpr int32_t __get_unitySliceBottom() const;

 int32_t __declspec(property(get=__get_unitySliceLeft, put=__set_unitySliceLeft))  unitySliceLeft;

constexpr void __set_unitySliceLeft(int32_t value) ;

constexpr int32_t __get_unitySliceLeft() const;

 int32_t __declspec(property(get=__get_unitySliceRight, put=__set_unitySliceRight))  unitySliceRight;

constexpr void __set_unitySliceRight(int32_t value) ;

constexpr int32_t __get_unitySliceRight() const;

 int32_t __declspec(property(get=__get_unitySliceTop, put=__set_unitySliceTop))  unitySliceTop;

constexpr void __set_unitySliceTop(int32_t value) ;

constexpr int32_t __get_unitySliceTop() const;

 ::UnityEngine::UIElements::TextOverflowPosition __declspec(property(get=__get_unityTextOverflowPosition, put=__set_unityTextOverflowPosition))  unityTextOverflowPosition;

constexpr void __set_unityTextOverflowPosition(::UnityEngine::UIElements::TextOverflowPosition value) ;

constexpr ::UnityEngine::UIElements::TextOverflowPosition __get_unityTextOverflowPosition() const;


// Methods

/// @brief Method Copy addr 0x2d0de8c size 0x1c virtual true final true
 ::UnityEngine::UIElements::RareData Copy() ;

/// @brief Method CopyFrom addr 0x2d0dea8 size 0x14 virtual true final true
 void CopyFrom(ByRef<::UnityEngine::UIElements::RareData> other) ;

/// @brief Method op_Equality addr 0x2d0debc size 0x120 virtual false final false
static bool op_Equality(::UnityEngine::UIElements::RareData lhs, ::UnityEngine::UIElements::RareData rhs) ;

/// @brief Method Equals addr 0x2d0dfdc size 0x44 virtual true final true
 bool Equals(::UnityEngine::UIElements::RareData other) ;

/// @brief Method Equals addr 0x2d0e020 size 0xa0 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2d0e0c0 size 0xf8 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RareData, "UnityEngine.UIElements", "RareData");
