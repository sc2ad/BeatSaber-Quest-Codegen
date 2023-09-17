#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
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
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleInt;
}
// Type: UnityEngine.UIElements::StyleInt
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7422))
// CS Name: UnityEngine.UIElements.StyleInt
struct CORDL_TYPE StyleInt : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::UIElements::IStyleValue_1<int32_t>
constexpr operator  ::UnityEngine::UIElements::IStyleValue_1<int32_t>() const;

/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::UIElements::StyleInt>
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::StyleInt>() const;

// Ctor Parameters [CppParam { name: "m_Value", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty: "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }]
constexpr StyleInt(int32_t m_Value, ::UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept;


                    constexpr StyleInt(StyleInt const&) = default;
                    constexpr StyleInt(StyleInt&&) = default;
                    constexpr StyleInt& operator=(StyleInt const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StyleInt& operator=(StyleInt&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StyleInt(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(int32_t value) ;

constexpr int32_t __get_m_Value() const;

 ::UnityEngine::UIElements::StyleKeyword __declspec(property(get=__get_m_Keyword, put=__set_m_Keyword))  m_Keyword;

constexpr void __set_m_Keyword(::UnityEngine::UIElements::StyleKeyword value) ;

constexpr ::UnityEngine::UIElements::StyleKeyword __get_m_Keyword() const;


// Properties

 int32_t __declspec(property(get=get_value))  value;

 ::UnityEngine::UIElements::StyleKeyword __declspec(property(get=get_keyword))  keyword;


// Methods

/// @brief Method get_value addr 0x2cfd1b4 size 0x18 virtual true final true
 int32_t get_value() ;

/// @brief Method get_keyword addr 0x2cfd1cc size 0x8 virtual true final true
 ::UnityEngine::UIElements::StyleKeyword get_keyword() ;

/// @brief Method .ctor addr 0x2cff06c size 0x8 virtual false final false
 void _ctor(::UnityEngine::UIElements::StyleKeyword keyword) ;

/// @brief Method .ctor addr 0x2cfa924 size 0x8 virtual false final false
 void _ctor(int32_t v, ::UnityEngine::UIElements::StyleKeyword keyword) ;

/// @brief Method op_Equality addr 0x2cff074 size 0x20 virtual false final false
static bool op_Equality(::UnityEngine::UIElements::StyleInt lhs, ::UnityEngine::UIElements::StyleInt rhs) ;

/// @brief Method op_Implicit addr 0x2cfa92c size 0x8 virtual false final false
static ::UnityEngine::UIElements::StyleInt op_Implicit___UnityEngine__UIElements__StyleInt(::UnityEngine::UIElements::StyleKeyword keyword) ;

/// @brief Method Equals addr 0x2cff094 size 0x20 virtual true final true
 bool Equals(::UnityEngine::UIElements::StyleInt other) ;

/// @brief Method Equals addr 0x2cff0b4 size 0x84 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2cff138 size 0x14 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2cff14c size 0x78 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleInt, "UnityEngine.UIElements", "StyleInt");
