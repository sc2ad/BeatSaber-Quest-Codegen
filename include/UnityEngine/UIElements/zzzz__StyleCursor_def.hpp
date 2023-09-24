#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
namespace UnityEngine::UIElements {
struct Cursor;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleCursor;
}
// Type: UnityEngine.UIElements::StyleCursor
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7391))
// CS Name: UnityEngine.UIElements.StyleCursor
struct CORDL_TYPE StyleCursor : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UIElements::IStyleValue_1<UnityEngine::UIElements::Cursor>
constexpr operator  UnityEngine::UIElements::IStyleValue_1<UnityEngine::UIElements::Cursor>() const;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::UIElements::StyleCursor>
constexpr operator  System::IEquatable_1<UnityEngine::UIElements::StyleCursor>() const;

// Ctor Parameters [CppParam { name: "m_Value", ty: "UnityEngine::UIElements::Cursor", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty: "UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }]
constexpr StyleCursor(UnityEngine::UIElements::Cursor m_Value, UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept;


                    constexpr StyleCursor(StyleCursor const&) = default;
                    constexpr StyleCursor(StyleCursor&&) = default;
                    constexpr StyleCursor& operator=(StyleCursor const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StyleCursor& operator=(StyleCursor&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StyleCursor(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UIElements::Cursor __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(UnityEngine::UIElements::Cursor value) ;

constexpr UnityEngine::UIElements::Cursor __get_m_Value() const;

 UnityEngine::UIElements::StyleKeyword __declspec(property(get=__get_m_Keyword, put=__set_m_Keyword))  m_Keyword;

constexpr void __set_m_Keyword(UnityEngine::UIElements::StyleKeyword value) ;

constexpr UnityEngine::UIElements::StyleKeyword __get_m_Keyword() const;


// Properties

 UnityEngine::UIElements::Cursor __declspec(property(get=get_value))  value;

 UnityEngine::UIElements::StyleKeyword __declspec(property(get=get_keyword))  keyword;


// Methods

/// @brief Method get_value addr 0x2cf8214 size 0x44 virtual true final true
 UnityEngine::UIElements::Cursor get_value() ;

/// @brief Method get_keyword addr 0x2cf8258 size 0x8 virtual true final true
 UnityEngine::UIElements::StyleKeyword get_keyword() ;

/// @brief Method .ctor addr 0x2cf8260 size 0x10 virtual false final false
 void _ctor(UnityEngine::UIElements::StyleKeyword keyword) ;

/// @brief Method .ctor addr 0x2cf8270 size 0x18 virtual false final false
 void _ctor(UnityEngine::UIElements::Cursor v, UnityEngine::UIElements::StyleKeyword keyword) ;

/// @brief Method op_Equality addr 0x2cf8288 size 0x60 virtual false final false
static bool op_Equality(UnityEngine::UIElements::StyleCursor lhs, UnityEngine::UIElements::StyleCursor rhs) ;

/// @brief Method op_Implicit addr 0x2cf82e8 size 0x10 virtual false final false
static UnityEngine::UIElements::StyleCursor op_Implicit_UnityEngine__UIElements__StyleCursor(UnityEngine::UIElements::StyleKeyword keyword) ;

/// @brief Method Equals addr 0x2cf82f8 size 0x80 virtual true final true
 bool Equals(UnityEngine::UIElements::StyleCursor other) ;

/// @brief Method Equals addr 0x2cf8378 size 0x88 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2cf8400 size 0x28 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2cf8428 size 0x80 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleCursor, "UnityEngine.UIElements", "StyleCursor");
