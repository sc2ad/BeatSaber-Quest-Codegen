#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::UIElements {
struct TextShadow;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
namespace UnityEngine::UIElements {
template<typename T>
class IStyleValue_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleTextShadow;
}
// Type: UnityEngine.UIElements::StyleTextShadow
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7418))
// CS Name: UnityEngine.UIElements.StyleTextShadow
struct CORDL_TYPE StyleTextShadow : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::TextShadow>
constexpr operator  ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::TextShadow>() const;

/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::UIElements::StyleTextShadow>
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::StyleTextShadow>() const;

// Ctor Parameters [CppParam { name: "m_Keyword", ty: "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }, CppParam { name: "m_Value", ty: "::UnityEngine::UIElements::TextShadow", modifiers: "", def_value: None }]
constexpr StyleTextShadow(::UnityEngine::UIElements::StyleKeyword m_Keyword, ::UnityEngine::UIElements::TextShadow m_Value) noexcept;


                    constexpr StyleTextShadow(StyleTextShadow const&) = default;
                    constexpr StyleTextShadow(StyleTextShadow&&) = default;
                    constexpr StyleTextShadow& operator=(StyleTextShadow const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StyleTextShadow& operator=(StyleTextShadow&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StyleTextShadow(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::UIElements::StyleKeyword __declspec(property(get=__get_m_Keyword, put=__set_m_Keyword))  m_Keyword;

constexpr void __set_m_Keyword(::UnityEngine::UIElements::StyleKeyword value) ;

constexpr ::UnityEngine::UIElements::StyleKeyword __get_m_Keyword() const;

 ::UnityEngine::UIElements::TextShadow __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(::UnityEngine::UIElements::TextShadow value) ;

constexpr ::UnityEngine::UIElements::TextShadow __get_m_Value() const;


// Properties

 ::UnityEngine::UIElements::TextShadow __declspec(property(get=get_value))  value;

 ::UnityEngine::UIElements::StyleKeyword __declspec(property(get=get_keyword))  keyword;


// Methods

/// @brief Method get_value addr 0x2cfbae8 size 0x4c virtual true final true
 ::UnityEngine::UIElements::TextShadow get_value() ;

/// @brief Method get_keyword addr 0x2cfbae0 size 0x8 virtual true final true
 ::UnityEngine::UIElements::StyleKeyword get_keyword() ;

/// @brief Method .ctor addr 0x2cfea04 size 0x18 virtual false final false
 void _ctor(::UnityEngine::UIElements::StyleKeyword keyword) ;

/// @brief Method .ctor addr 0x2cfea1c size 0x20 virtual false final false
 void _ctor(::UnityEngine::UIElements::TextShadow v, ::UnityEngine::UIElements::StyleKeyword keyword) ;

/// @brief Method op_Equality addr 0x2cfea3c size 0x68 virtual false final false
static bool op_Equality(::UnityEngine::UIElements::StyleTextShadow lhs, ::UnityEngine::UIElements::StyleTextShadow rhs) ;

/// @brief Method op_Implicit addr 0x2cfbca8 size 0x18 virtual false final false
static ::UnityEngine::UIElements::StyleTextShadow op_Implicit___UnityEngine__UIElements__StyleTextShadow(::UnityEngine::UIElements::StyleKeyword keyword) ;

/// @brief Method Equals addr 0x2cfeaa4 size 0x34 virtual true final true
 bool Equals(::UnityEngine::UIElements::StyleTextShadow other) ;

/// @brief Method Equals addr 0x2cfead8 size 0x90 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2cfeb68 size 0x48 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2cfebb0 size 0x80 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleTextShadow, "UnityEngine.UIElements", "StyleTextShadow");
