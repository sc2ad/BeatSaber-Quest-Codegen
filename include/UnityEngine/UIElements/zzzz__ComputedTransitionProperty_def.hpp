#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct ComputedTransitionProperty;
}
// Type: UnityEngine.UIElements::ComputedTransitionProperty
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7386))
// CS Name: UnityEngine.UIElements.ComputedTransitionProperty
struct CORDL_TYPE ComputedTransitionProperty : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "id", ty: "UnityEngine::UIElements::StyleSheets::StylePropertyId", modifiers: "", def_value: None }, CppParam { name: "durationMs", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "delayMs", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "easingCurve", ty: "System::Func_2<float_t,float_t>", modifiers: "", def_value: None }]
constexpr ComputedTransitionProperty(UnityEngine::UIElements::StyleSheets::StylePropertyId id, int32_t durationMs, int32_t delayMs, System::Func_2<float_t,float_t> easingCurve) noexcept;


                    constexpr ComputedTransitionProperty(ComputedTransitionProperty const&) = default;
                    constexpr ComputedTransitionProperty(ComputedTransitionProperty&&) = default;
                    constexpr ComputedTransitionProperty& operator=(ComputedTransitionProperty const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ComputedTransitionProperty& operator=(ComputedTransitionProperty&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ComputedTransitionProperty(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UIElements::StyleSheets::StylePropertyId __declspec(property(get=__get_id, put=__set_id))  id;

constexpr void __set_id(UnityEngine::UIElements::StyleSheets::StylePropertyId value) ;

constexpr UnityEngine::UIElements::StyleSheets::StylePropertyId __get_id() const;

 int32_t __declspec(property(get=__get_durationMs, put=__set_durationMs))  durationMs;

constexpr void __set_durationMs(int32_t value) ;

constexpr int32_t __get_durationMs() const;

 int32_t __declspec(property(get=__get_delayMs, put=__set_delayMs))  delayMs;

constexpr void __set_delayMs(int32_t value) ;

constexpr int32_t __get_delayMs() const;

 System::Func_2<float_t,float_t> __declspec(property(get=__get_easingCurve, put=__set_easingCurve))  easingCurve;

constexpr void __set_easingCurve(System::Func_2<float_t,float_t> value) ;

constexpr System::Func_2<float_t,float_t> __get_easingCurve() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::ComputedTransitionProperty, "UnityEngine.UIElements", "ComputedTransitionProperty");
