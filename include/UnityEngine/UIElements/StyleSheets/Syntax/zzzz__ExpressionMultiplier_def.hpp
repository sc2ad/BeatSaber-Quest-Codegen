#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct ExpressionMultiplierType;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct ExpressionMultiplier;
}
// Type: UnityEngine.UIElements.StyleSheets.Syntax::ExpressionMultiplier
namespace UnityEngine::UIElements::StyleSheets::Syntax {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7597))
// CS Name: UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplier
struct CORDL_TYPE ExpressionMultiplier : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Type", ty: "UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType", modifiers: "", def_value: None }, CppParam { name: "min", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "max", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ExpressionMultiplier(UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType m_Type, int32_t min, int32_t max) noexcept;


                    constexpr ExpressionMultiplier(ExpressionMultiplier const&) = default;
                    constexpr ExpressionMultiplier(ExpressionMultiplier&&) = default;
                    constexpr ExpressionMultiplier& operator=(ExpressionMultiplier const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ExpressionMultiplier& operator=(ExpressionMultiplier&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ExpressionMultiplier(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field Infinity offset 0
static constexpr int32_t  Infinity{100};

 UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType __declspec(property(get=__get_m_Type, put=__set_m_Type))  m_Type;

constexpr void __set_m_Type(UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType value) ;

constexpr UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType __get_m_Type() const;

 int32_t __declspec(property(get=__get_min, put=__set_min))  min;

constexpr void __set_min(int32_t value) ;

constexpr int32_t __get_min() const;

 int32_t __declspec(property(get=__get_max, put=__set_max))  max;

constexpr void __set_max(int32_t value) ;

constexpr int32_t __get_max() const;


// Properties

 UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType __declspec(property(get=get_type, put=set_type))  type;


// Methods

/// @brief Method get_type addr 0x2c77b48 size 0x8 virtual false final false
 UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType get_type() ;

/// @brief Method set_type addr 0x2c7eac4 size 0x4 virtual false final false
 void set_type(UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType value) ;

/// @brief Method .ctor addr 0x2c7ed34 size 0x10 virtual false final false
 void _ctor(UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType type) ;

/// @brief Method SetType addr 0x2c7ed44 size 0x1054 virtual false final false
 void SetType(UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets::Syntax
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier, "UnityEngine.UIElements.StyleSheets.Syntax", "ExpressionMultiplier");
