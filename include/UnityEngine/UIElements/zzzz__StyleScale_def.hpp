#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
struct Scale;
}
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
struct StyleScale;
}
// Type: UnityEngine.UIElements::StyleScale
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7382))
// CS Name: UnityEngine.UIElements.StyleScale
struct CORDL_TYPE StyleScale : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UIElements::IStyleValue_1<UnityEngine::UIElements::Scale>
constexpr operator  UnityEngine::UIElements::IStyleValue_1<UnityEngine::UIElements::Scale>() const;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::UIElements::StyleScale>
constexpr operator  System::IEquatable_1<UnityEngine::UIElements::StyleScale>() const;

// Ctor Parameters [CppParam { name: "m_Value", ty: "UnityEngine::UIElements::Scale", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty: "UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }]
constexpr StyleScale(UnityEngine::UIElements::Scale m_Value, UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept;


                    constexpr StyleScale(StyleScale const&) = default;
                    constexpr StyleScale(StyleScale&&) = default;
                    constexpr StyleScale& operator=(StyleScale const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StyleScale& operator=(StyleScale&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x14};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StyleScale(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UIElements::Scale __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(UnityEngine::UIElements::Scale value) ;

constexpr UnityEngine::UIElements::Scale __get_m_Value() const;

 UnityEngine::UIElements::StyleKeyword __declspec(property(get=__get_m_Keyword, put=__set_m_Keyword))  m_Keyword;

constexpr void __set_m_Keyword(UnityEngine::UIElements::StyleKeyword value) ;

constexpr UnityEngine::UIElements::StyleKeyword __get_m_Keyword() const;


// Properties

 UnityEngine::UIElements::Scale __declspec(property(get=get_value))  value;

 UnityEngine::UIElements::StyleKeyword __declspec(property(get=get_keyword))  keyword;


// Methods

/// @brief Method get_value addr 0x2cf5568 size 0x34 virtual true final true
 UnityEngine::UIElements::Scale get_value() ;

/// @brief Method get_keyword addr 0x2cf559c size 0x8 virtual true final true
 UnityEngine::UIElements::StyleKeyword get_keyword() ;

/// @brief Method .ctor addr 0x2cf55a4 size 0xc virtual false final false
 void _ctor(UnityEngine::UIElements::StyleKeyword keyword) ;

/// @brief Method .ctor addr 0x2cf55b0 size 0xc virtual false final false
 void _ctor(UnityEngine::UIElements::Scale v, UnityEngine::UIElements::StyleKeyword keyword) ;

/// @brief Method op_Equality addr 0x2cf55bc size 0x70 virtual false final false
static bool op_Equality(UnityEngine::UIElements::StyleScale lhs, UnityEngine::UIElements::StyleScale rhs) ;

/// @brief Method op_Implicit addr 0x2cf5680 size 0xc virtual false final false
static UnityEngine::UIElements::StyleScale op_Implicit_UnityEngine__UIElements__StyleScale(UnityEngine::UIElements::StyleKeyword keyword) ;

/// @brief Method Equals addr 0x2cf568c size 0x74 virtual true final true
 bool Equals(UnityEngine::UIElements::StyleScale other) ;

/// @brief Method Equals addr 0x2cf5700 size 0xd0 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2cf57d0 size 0x24 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2cf5844 size 0x88 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleScale, "UnityEngine.UIElements", "StyleScale");
