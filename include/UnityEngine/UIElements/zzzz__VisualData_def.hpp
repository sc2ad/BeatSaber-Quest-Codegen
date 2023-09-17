#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UIElements {
template<typename T>
class IStyleDataGroup_1;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::UIElements {
struct Background;
}
namespace UnityEngine::UIElements {
struct OverflowInternal;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct VisualData;
}
// Type: UnityEngine.UIElements::VisualData
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7461))
// CS Name: UnityEngine.UIElements.VisualData
struct CORDL_TYPE VisualData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::VisualData>
constexpr operator  ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::VisualData>() const;

/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::UIElements::VisualData>
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::VisualData>() const;

// Ctor Parameters [CppParam { name: "backgroundColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "backgroundImage", ty: "::UnityEngine::UIElements::Background", modifiers: "", def_value: None }, CppParam { name: "borderBottomColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "borderBottomLeftRadius", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "borderBottomRightRadius", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "borderLeftColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "borderRightColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "borderTopColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "borderTopLeftRadius", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "borderTopRightRadius", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "opacity", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "overflow", ty: "::UnityEngine::UIElements::OverflowInternal", modifiers: "", def_value: None }]
constexpr VisualData(::UnityEngine::Color backgroundColor, ::UnityEngine::UIElements::Background backgroundImage, ::UnityEngine::Color borderBottomColor, ::UnityEngine::UIElements::Length borderBottomLeftRadius, ::UnityEngine::UIElements::Length borderBottomRightRadius, ::UnityEngine::Color borderLeftColor, ::UnityEngine::Color borderRightColor, ::UnityEngine::Color borderTopColor, ::UnityEngine::UIElements::Length borderTopLeftRadius, ::UnityEngine::UIElements::Length borderTopRightRadius, float_t opacity, ::UnityEngine::UIElements::OverflowInternal overflow) noexcept;


                    constexpr VisualData(VisualData const&) = default;
                    constexpr VisualData(VisualData&&) = default;
                    constexpr VisualData& operator=(VisualData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VisualData& operator=(VisualData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x98};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VisualData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Color __declspec(property(get=__get_backgroundColor, put=__set_backgroundColor))  backgroundColor;

constexpr void __set_backgroundColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_backgroundColor() const;

 ::UnityEngine::UIElements::Background __declspec(property(get=__get_backgroundImage, put=__set_backgroundImage))  backgroundImage;

constexpr void __set_backgroundImage(::UnityEngine::UIElements::Background value) ;

constexpr ::UnityEngine::UIElements::Background __get_backgroundImage() const;

 ::UnityEngine::Color __declspec(property(get=__get_borderBottomColor, put=__set_borderBottomColor))  borderBottomColor;

constexpr void __set_borderBottomColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_borderBottomColor() const;

 ::UnityEngine::UIElements::Length __declspec(property(get=__get_borderBottomLeftRadius, put=__set_borderBottomLeftRadius))  borderBottomLeftRadius;

constexpr void __set_borderBottomLeftRadius(::UnityEngine::UIElements::Length value) ;

constexpr ::UnityEngine::UIElements::Length __get_borderBottomLeftRadius() const;

 ::UnityEngine::UIElements::Length __declspec(property(get=__get_borderBottomRightRadius, put=__set_borderBottomRightRadius))  borderBottomRightRadius;

constexpr void __set_borderBottomRightRadius(::UnityEngine::UIElements::Length value) ;

constexpr ::UnityEngine::UIElements::Length __get_borderBottomRightRadius() const;

 ::UnityEngine::Color __declspec(property(get=__get_borderLeftColor, put=__set_borderLeftColor))  borderLeftColor;

constexpr void __set_borderLeftColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_borderLeftColor() const;

 ::UnityEngine::Color __declspec(property(get=__get_borderRightColor, put=__set_borderRightColor))  borderRightColor;

constexpr void __set_borderRightColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_borderRightColor() const;

 ::UnityEngine::Color __declspec(property(get=__get_borderTopColor, put=__set_borderTopColor))  borderTopColor;

constexpr void __set_borderTopColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_borderTopColor() const;

 ::UnityEngine::UIElements::Length __declspec(property(get=__get_borderTopLeftRadius, put=__set_borderTopLeftRadius))  borderTopLeftRadius;

constexpr void __set_borderTopLeftRadius(::UnityEngine::UIElements::Length value) ;

constexpr ::UnityEngine::UIElements::Length __get_borderTopLeftRadius() const;

 ::UnityEngine::UIElements::Length __declspec(property(get=__get_borderTopRightRadius, put=__set_borderTopRightRadius))  borderTopRightRadius;

constexpr void __set_borderTopRightRadius(::UnityEngine::UIElements::Length value) ;

constexpr ::UnityEngine::UIElements::Length __get_borderTopRightRadius() const;

 float_t __declspec(property(get=__get_opacity, put=__set_opacity))  opacity;

constexpr void __set_opacity(float_t value) ;

constexpr float_t __get_opacity() const;

 ::UnityEngine::UIElements::OverflowInternal __declspec(property(get=__get_overflow, put=__set_overflow))  overflow;

constexpr void __set_overflow(::UnityEngine::UIElements::OverflowInternal value) ;

constexpr ::UnityEngine::UIElements::OverflowInternal __get_overflow() const;


// Methods

/// @brief Method Copy addr 0x2d0e8e0 size 0x1c virtual true final true
 ::UnityEngine::UIElements::VisualData Copy() ;

/// @brief Method CopyFrom addr 0x2d0e8fc size 0x14 virtual true final true
 void CopyFrom(ByRef<::UnityEngine::UIElements::VisualData> other) ;

/// @brief Method op_Equality addr 0x2d0e910 size 0x1ec virtual false final false
static bool op_Equality(::UnityEngine::UIElements::VisualData lhs, ::UnityEngine::UIElements::VisualData rhs) ;

/// @brief Method Equals addr 0x2d0eafc size 0x4c virtual true final true
 bool Equals(::UnityEngine::UIElements::VisualData other) ;

/// @brief Method Equals addr 0x2d0eb48 size 0xa8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2d0ebf0 size 0x280 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualData, "UnityEngine.UIElements", "VisualData");
