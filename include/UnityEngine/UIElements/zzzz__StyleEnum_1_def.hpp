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
namespace System {
struct Int32Enum;
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
template<typename T>
struct StyleEnum_1;
}
namespace UnityEngine::UIElements {
template<>
struct StyleEnum_1<System::Int32Enum>;
}
// Type: UnityEngine.UIElements::StyleEnum`1
// Type: UnityEngine.UIElements::StyleEnum`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7393)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7393), inst: 4825 })
// CS Name: UnityEngine.UIElements.StyleEnum`1
struct CORDL_TYPE StyleEnum_1<System::Int32Enum> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UIElements::IStyleValue_1<System::Int32Enum>
constexpr operator  UnityEngine::UIElements::IStyleValue_1<System::Int32Enum>() const;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::UIElements::StyleEnum_1<System::Int32Enum>>
constexpr operator  System::IEquatable_1<UnityEngine::UIElements::StyleEnum_1<System::Int32Enum>>() const;

// Ctor Parameters [CppParam { name: "m_Value", ty: "System::Int32Enum", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty: "UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }]
constexpr StyleEnum_1(System::Int32Enum m_Value, UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept;


                    constexpr StyleEnum_1(StyleEnum_1 const&) = default;
                    constexpr StyleEnum_1(StyleEnum_1&&) = default;
                    constexpr StyleEnum_1& operator=(StyleEnum_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StyleEnum_1& operator=(StyleEnum_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StyleEnum_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Int32Enum __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(System::Int32Enum value) ;

constexpr System::Int32Enum __get_m_Value() const;

 UnityEngine::UIElements::StyleKeyword __declspec(property(get=__get_m_Keyword, put=__set_m_Keyword))  m_Keyword;

constexpr void __set_m_Keyword(UnityEngine::UIElements::StyleKeyword value) ;

constexpr UnityEngine::UIElements::StyleKeyword __get_m_Keyword() const;


// Properties

 System::Int32Enum __declspec(property(get=get_value))  value;

 UnityEngine::UIElements::StyleKeyword __declspec(property(get=get_keyword))  keyword;


// Methods

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Int32Enum get_value() ;

/// @brief Method get_keyword addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::UIElements::StyleKeyword get_keyword() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Int32Enum v) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::UIElements::StyleKeyword keyword) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Int32Enum v, UnityEngine::UIElements::StyleKeyword keyword) ;

/// @brief Method op_Equality addr 0x0 size 0xffffffffffffffff virtual false final false
static bool op_Equality(UnityEngine::UIElements::StyleEnum_1<System::Int32Enum> lhs, UnityEngine::UIElements::StyleEnum_1<System::Int32Enum> rhs) ;

/// @brief Method op_Inequality addr 0x0 size 0xffffffffffffffff virtual false final false
static bool op_Inequality(UnityEngine::UIElements::StyleEnum_1<System::Int32Enum> lhs, UnityEngine::UIElements::StyleEnum_1<System::Int32Enum> rhs) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::StyleEnum_1<System::Int32Enum> op_Implicit_UnityEngine__UIElements__StyleEnum_1_System__Int32Enum_(UnityEngine::UIElements::StyleKeyword keyword) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::StyleEnum_1<System::Int32Enum> op_Implicit_UnityEngine__UIElements__StyleEnum_1_System__Int32Enum_(System::Int32Enum v) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(UnityEngine::UIElements::StyleEnum_1<System::Int32Enum> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::UIElements::StyleEnum_1, "UnityEngine.UIElements", "StyleEnum`1");
