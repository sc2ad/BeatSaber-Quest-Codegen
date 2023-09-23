#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
template<typename T>
class IStyleValue_1;
}
namespace UnityEngine::UIElements {
struct Translate;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleTranslate;
}
// Type: UnityEngine.UIElements::StyleTranslate
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7390))
// CS Name: UnityEngine.UIElements.StyleTranslate
struct CORDL_TYPE StyleTranslate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UIElements::IStyleValue_1<UnityEngine::UIElements::Translate>
constexpr operator  UnityEngine::UIElements::IStyleValue_1<UnityEngine::UIElements::Translate>() const;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::UIElements::StyleTranslate>
constexpr operator  System::IEquatable_1<UnityEngine::UIElements::StyleTranslate>() const;

// Ctor Parameters [CppParam { name: "m_Value", ty: "UnityEngine::UIElements::Translate", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty: "UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }]
constexpr StyleTranslate(UnityEngine::UIElements::Translate m_Value, UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept;


                    constexpr StyleTranslate(StyleTranslate const&) = default;
                    constexpr StyleTranslate(StyleTranslate&&) = default;
                    constexpr StyleTranslate& operator=(StyleTranslate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StyleTranslate& operator=(StyleTranslate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1c};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StyleTranslate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UIElements::Translate __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(UnityEngine::UIElements::Translate value) ;

constexpr UnityEngine::UIElements::Translate __get_m_Value() const;

 UnityEngine::UIElements::StyleKeyword __declspec(property(get=__get_m_Keyword, put=__set_m_Keyword))  m_Keyword;

constexpr void __set_m_Keyword(UnityEngine::UIElements::StyleKeyword value) ;

constexpr UnityEngine::UIElements::StyleKeyword __get_m_Keyword() const;


// Properties

 UnityEngine::UIElements::Translate __declspec(property(get=get_value))  value;

 UnityEngine::UIElements::StyleKeyword __declspec(property(get=get_keyword))  keyword;


// Methods

/// @brief Method get_value addr 0x2cf7e3c size 0x44 virtual true final true
 UnityEngine::UIElements::Translate get_value() ;

/// @brief Method get_keyword addr 0x2cf7e80 size 0x8 virtual true final true
 UnityEngine::UIElements::StyleKeyword get_keyword() ;

/// @brief Method .ctor addr 0x2cf7e88 size 0x28 virtual false final false
 void _ctor(UnityEngine::UIElements::Translate v) ;

/// @brief Method .ctor addr 0x2cf7ec8 size 0x10 virtual false final false
 void _ctor(UnityEngine::UIElements::StyleKeyword keyword) ;

/// @brief Method .ctor addr 0x2cf7eb0 size 0x18 virtual false final false
 void _ctor(UnityEngine::UIElements::Translate v, UnityEngine::UIElements::StyleKeyword keyword) ;

/// @brief Method op_Equality addr 0x2cf7ed8 size 0x94 virtual false final false
static bool op_Equality(UnityEngine::UIElements::StyleTranslate lhs, UnityEngine::UIElements::StyleTranslate rhs) ;

/// @brief Method op_Implicit addr 0x2cf7fe8 size 0x10 virtual false final false
static UnityEngine::UIElements::StyleTranslate op_Implicit_UnityEngine__UIElements__StyleTranslate(UnityEngine::UIElements::StyleKeyword keyword) ;

/// @brief Method op_Implicit addr 0x2cf7ff8 size 0x18 virtual false final false
static UnityEngine::UIElements::StyleTranslate op_Implicit_UnityEngine__UIElements__StyleTranslate(UnityEngine::UIElements::Translate v) ;

/// @brief Method Equals addr 0x2cf8010 size 0x44 virtual true final true
 bool Equals(UnityEngine::UIElements::StyleTranslate other) ;

/// @brief Method Equals addr 0x2cf8054 size 0xa0 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2cf80f4 size 0x24 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2cf818c size 0x88 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleTranslate, "UnityEngine.UIElements", "StyleTranslate");
