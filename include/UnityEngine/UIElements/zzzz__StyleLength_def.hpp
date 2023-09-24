#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
template<typename T>
class IStyleValue_1;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::UIElements {
struct Length;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleLength;
}
// Type: UnityEngine.UIElements::StyleLength
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7397))
// CS Name: UnityEngine.UIElements.StyleLength
struct CORDL_TYPE StyleLength : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UIElements::IStyleValue_1<UnityEngine::UIElements::Length>
constexpr operator  UnityEngine::UIElements::IStyleValue_1<UnityEngine::UIElements::Length>() const;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::UIElements::StyleLength>
constexpr operator  System::IEquatable_1<UnityEngine::UIElements::StyleLength>() const;

// Ctor Parameters [CppParam { name: "m_Value", ty: "UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty: "UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }]
constexpr StyleLength(UnityEngine::UIElements::Length m_Value, UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept;


                    constexpr StyleLength(StyleLength const&) = default;
                    constexpr StyleLength(StyleLength&&) = default;
                    constexpr StyleLength& operator=(StyleLength const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StyleLength& operator=(StyleLength&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StyleLength(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UIElements::Length __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(UnityEngine::UIElements::Length value) ;

constexpr UnityEngine::UIElements::Length __get_m_Value() const;

 UnityEngine::UIElements::StyleKeyword __declspec(property(get=__get_m_Keyword, put=__set_m_Keyword))  m_Keyword;

constexpr void __set_m_Keyword(UnityEngine::UIElements::StyleKeyword value) ;

constexpr UnityEngine::UIElements::StyleKeyword __get_m_Keyword() const;


// Properties

 UnityEngine::UIElements::Length __declspec(property(get=get_value))  value;

 UnityEngine::UIElements::StyleKeyword __declspec(property(get=get_keyword))  keyword;


// Methods

/// @brief Method get_value addr 0x2cf9670 size 0x18 virtual true final true
 UnityEngine::UIElements::Length get_value() ;

/// @brief Method get_keyword addr 0x2cf9688 size 0x8 virtual true final true
 UnityEngine::UIElements::StyleKeyword get_keyword() ;

/// @brief Method .ctor addr 0x2cf9690 size 0x2c virtual false final false
 void _ctor(float_t v) ;

/// @brief Method .ctor addr 0x2cf9704 size 0xc virtual false final false
 void _ctor(UnityEngine::UIElements::StyleKeyword keyword) ;

/// @brief Method .ctor addr 0x2cf96e4 size 0x20 virtual false final false
 void _ctor(UnityEngine::UIElements::Length v, UnityEngine::UIElements::StyleKeyword keyword) ;

/// @brief Method op_Equality addr 0x2cf9730 size 0x38 virtual false final false
static bool op_Equality(UnityEngine::UIElements::StyleLength lhs, UnityEngine::UIElements::StyleLength rhs) ;

/// @brief Method op_Implicit addr 0x2cf9790 size 0xc virtual false final false
static UnityEngine::UIElements::StyleLength op_Implicit_UnityEngine__UIElements__StyleLength(UnityEngine::UIElements::StyleKeyword keyword) ;

/// @brief Method op_Implicit addr 0x2cf979c size 0x28 virtual false final false
static UnityEngine::UIElements::StyleLength op_Implicit_UnityEngine__UIElements__StyleLength(float_t v) ;

/// @brief Method Equals addr 0x2cf97c4 size 0x40 virtual true final true
 bool Equals(UnityEngine::UIElements::StyleLength other) ;

/// @brief Method Equals addr 0x2cf9804 size 0xa4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2cf98a8 size 0x30 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2cf9900 size 0x88 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleLength, "UnityEngine.UIElements", "StyleLength");
