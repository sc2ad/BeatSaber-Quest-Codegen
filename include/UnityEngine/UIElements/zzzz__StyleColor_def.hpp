#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
namespace UnityEngine::UIElements {
template<typename T>
class IStyleValue_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleColor;
}
// Type: UnityEngine.UIElements::StyleColor
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7389))
// CS Name: UnityEngine.UIElements.StyleColor
struct CORDL_TYPE StyleColor : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::Color>
constexpr operator  ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::Color>() const;

/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::UIElements::StyleColor>
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::StyleColor>() const;

// Ctor Parameters [CppParam { name: "m_Value", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty: "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }]
constexpr StyleColor(::UnityEngine::Color m_Value, ::UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept;


                    constexpr StyleColor(StyleColor const&) = default;
                    constexpr StyleColor(StyleColor&&) = default;
                    constexpr StyleColor& operator=(StyleColor const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StyleColor& operator=(StyleColor&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x14};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StyleColor(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Color __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_m_Value() const;

 ::UnityEngine::UIElements::StyleKeyword __declspec(property(get=__get_m_Keyword, put=__set_m_Keyword))  m_Keyword;

constexpr void __set_m_Keyword(::UnityEngine::UIElements::StyleKeyword value) ;

constexpr ::UnityEngine::UIElements::StyleKeyword __get_m_Keyword() const;


// Properties

 ::UnityEngine::Color __declspec(property(get=get_value))  value;

 ::UnityEngine::UIElements::StyleKeyword __declspec(property(get=get_keyword))  keyword;


// Methods

/// @brief Method get_value addr 0x2cf7b64 size 0x28 virtual true final true
 ::UnityEngine::Color get_value() ;

/// @brief Method get_keyword addr 0x2cf7b8c size 0x8 virtual true final true
 ::UnityEngine::UIElements::StyleKeyword get_keyword() ;

/// @brief Method .ctor addr 0x2cf7b94 size 0x10 virtual false final false
 void _ctor(::UnityEngine::Color v) ;

/// @brief Method .ctor addr 0x2cf7ba4 size 0x10 virtual false final false
 void _ctor(::UnityEngine::Color v, ::UnityEngine::UIElements::StyleKeyword keyword) ;

/// @brief Method op_Equality addr 0x2cf7bb4 size 0x64 virtual false final false
static bool op_Equality(::UnityEngine::UIElements::StyleColor lhs, ::UnityEngine::UIElements::StyleColor rhs) ;

/// @brief Method op_Implicit addr 0x2cf7c18 size 0x10 virtual false final false
static ::UnityEngine::UIElements::StyleColor op_Implicit___UnityEngine__UIElements__StyleColor(::UnityEngine::Color v) ;

/// @brief Method Equals addr 0x2cf7c28 size 0x64 virtual true final true
 bool Equals(::UnityEngine::UIElements::StyleColor other) ;

/// @brief Method Equals addr 0x2cf7c8c size 0x90 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2cf7d1c size 0x98 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2cf7db4 size 0x88 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleColor, "UnityEngine.UIElements", "StyleColor");
