#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
struct StyleValueType;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleValueHandle;
}
// Type: UnityEngine.UIElements::StyleValueHandle
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7376))
// CS Name: UnityEngine.UIElements.StyleValueHandle
struct CORDL_TYPE StyleValueHandle : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_ValueType", ty: "UnityEngine::UIElements::StyleValueType", modifiers: "", def_value: None }, CppParam { name: "valueIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StyleValueHandle(UnityEngine::UIElements::StyleValueType m_ValueType, int32_t valueIndex) noexcept;


                    constexpr StyleValueHandle(StyleValueHandle const&) = default;
                    constexpr StyleValueHandle(StyleValueHandle&&) = default;
                    constexpr StyleValueHandle& operator=(StyleValueHandle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StyleValueHandle& operator=(StyleValueHandle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StyleValueHandle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UIElements::StyleValueType __declspec(property(get=__get_m_ValueType, put=__set_m_ValueType))  m_ValueType;

constexpr void __set_m_ValueType(UnityEngine::UIElements::StyleValueType value) ;

constexpr UnityEngine::UIElements::StyleValueType __get_m_ValueType() const;

 int32_t __declspec(property(get=__get_valueIndex, put=__set_valueIndex))  valueIndex;

constexpr void __set_valueIndex(int32_t value) ;

constexpr int32_t __get_valueIndex() const;


// Properties

 UnityEngine::UIElements::StyleValueType __declspec(property(get=get_valueType, put=set_valueType))  valueType;


// Methods

/// @brief Method get_valueType addr 0x2cf34a8 size 0x8 virtual false final false
 UnityEngine::UIElements::StyleValueType get_valueType() ;

/// @brief Method set_valueType addr 0x2cf4068 size 0x8 virtual false final false
 void set_valueType(UnityEngine::UIElements::StyleValueType value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleValueHandle, "UnityEngine.UIElements", "StyleValueHandle");
