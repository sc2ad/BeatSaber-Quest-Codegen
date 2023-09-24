#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::UIElements {
template<typename T>
class IStyleValue_1;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleFloat;
}
// Type: UnityEngine.UIElements::StyleFloat
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7396))
// CS Name: UnityEngine.UIElements.StyleFloat
struct CORDL_TYPE StyleFloat : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UIElements::IStyleValue_1<float_t>
constexpr operator  UnityEngine::UIElements::IStyleValue_1<float_t>() const;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::UIElements::StyleFloat>
constexpr operator  System::IEquatable_1<UnityEngine::UIElements::StyleFloat>() const;

// Ctor Parameters [CppParam { name: "m_Value", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty: "UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }]
constexpr StyleFloat(float_t m_Value, UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept;


                    constexpr StyleFloat(StyleFloat const&) = default;
                    constexpr StyleFloat(StyleFloat&&) = default;
                    constexpr StyleFloat& operator=(StyleFloat const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StyleFloat& operator=(StyleFloat&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StyleFloat(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(float_t value) ;

constexpr float_t __get_m_Value() const;

 UnityEngine::UIElements::StyleKeyword __declspec(property(get=__get_m_Keyword, put=__set_m_Keyword))  m_Keyword;

constexpr void __set_m_Keyword(UnityEngine::UIElements::StyleKeyword value) ;

constexpr UnityEngine::UIElements::StyleKeyword __get_m_Keyword() const;


// Properties

 float_t __declspec(property(get=get_value))  value;

 UnityEngine::UIElements::StyleKeyword __declspec(property(get=get_keyword))  keyword;


// Methods

/// @brief Method get_value addr 0x2cf94a4 size 0x18 virtual true final true
 float_t get_value() ;

/// @brief Method get_keyword addr 0x2cf94bc size 0x8 virtual true final true
 UnityEngine::UIElements::StyleKeyword get_keyword() ;

/// @brief Method .ctor addr 0x2cf94c4 size 0xc virtual false final false
 void _ctor(float_t v) ;

/// @brief Method .ctor addr 0x2cf94dc size 0x8 virtual false final false
 void _ctor(UnityEngine::UIElements::StyleKeyword keyword) ;

/// @brief Method .ctor addr 0x2cf94d0 size 0xc virtual false final false
 void _ctor(float_t v, UnityEngine::UIElements::StyleKeyword keyword) ;

/// @brief Method op_Equality addr 0x2cf94e4 size 0x28 virtual false final false
static bool op_Equality(UnityEngine::UIElements::StyleFloat lhs, UnityEngine::UIElements::StyleFloat rhs) ;

/// @brief Method op_Implicit addr 0x2cf950c size 0x8 virtual false final false
static UnityEngine::UIElements::StyleFloat op_Implicit_UnityEngine__UIElements__StyleFloat(UnityEngine::UIElements::StyleKeyword keyword) ;

/// @brief Method op_Implicit addr 0x2cf9514 size 0x8 virtual false final false
static UnityEngine::UIElements::StyleFloat op_Implicit_UnityEngine__UIElements__StyleFloat(float_t v) ;

/// @brief Method Equals addr 0x2cf951c size 0x28 virtual true final true
 bool Equals(UnityEngine::UIElements::StyleFloat other) ;

/// @brief Method Equals addr 0x2cf9544 size 0x8c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2cf95d0 size 0x28 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2cf95f8 size 0x78 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleFloat, "UnityEngine.UIElements", "StyleFloat");
