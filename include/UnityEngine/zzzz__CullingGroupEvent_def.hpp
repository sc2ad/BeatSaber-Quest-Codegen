#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct CullingGroupEvent;
}
// Type: UnityEngine::CullingGroupEvent
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10088))
// CS Name: UnityEngine.CullingGroupEvent
struct CORDL_TYPE CullingGroupEvent : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_PrevState", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_ThisState", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr CullingGroupEvent(int32_t m_Index, uint8_t m_PrevState, uint8_t m_ThisState) noexcept;


                    constexpr CullingGroupEvent(CullingGroupEvent const&) = default;
                    constexpr CullingGroupEvent(CullingGroupEvent&&) = default;
                    constexpr CullingGroupEvent& operator=(CullingGroupEvent const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CullingGroupEvent& operator=(CullingGroupEvent&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CullingGroupEvent(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;

 uint8_t __declspec(property(get=__get_m_PrevState, put=__set_m_PrevState))  m_PrevState;

constexpr void __set_m_PrevState(uint8_t value) ;

constexpr uint8_t __get_m_PrevState() const;

 uint8_t __declspec(property(get=__get_m_ThisState, put=__set_m_ThisState))  m_ThisState;

constexpr void __set_m_ThisState(uint8_t value) ;

constexpr uint8_t __get_m_ThisState() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CullingGroupEvent, "UnityEngine", "CullingGroupEvent");
