#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace UnityEngine::UIElements {
struct PseudoStates;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct MatchResultInfo;
}
// Type: UnityEngine.UIElements.StyleSheets::MatchResultInfo
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7568))
// CS Name: UnityEngine.UIElements.StyleSheets.MatchResultInfo
struct CORDL_TYPE MatchResultInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "success", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "triggerPseudoMask", ty: "UnityEngine::UIElements::PseudoStates", modifiers: "", def_value: None }, CppParam { name: "dependencyPseudoMask", ty: "UnityEngine::UIElements::PseudoStates", modifiers: "", def_value: None }]
constexpr MatchResultInfo(bool success, UnityEngine::UIElements::PseudoStates triggerPseudoMask, UnityEngine::UIElements::PseudoStates dependencyPseudoMask) noexcept;


                    constexpr MatchResultInfo(MatchResultInfo const&) = default;
                    constexpr MatchResultInfo(MatchResultInfo&&) = default;
                    constexpr MatchResultInfo& operator=(MatchResultInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MatchResultInfo& operator=(MatchResultInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MatchResultInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_success, put=__set_success))  success;

constexpr void __set_success(bool value) ;

constexpr bool __get_success() const;

 UnityEngine::UIElements::PseudoStates __declspec(property(get=__get_triggerPseudoMask, put=__set_triggerPseudoMask))  triggerPseudoMask;

constexpr void __set_triggerPseudoMask(UnityEngine::UIElements::PseudoStates value) ;

constexpr UnityEngine::UIElements::PseudoStates __get_triggerPseudoMask() const;

 UnityEngine::UIElements::PseudoStates __declspec(property(get=__get_dependencyPseudoMask, put=__set_dependencyPseudoMask))  dependencyPseudoMask;

constexpr void __set_dependencyPseudoMask(UnityEngine::UIElements::PseudoStates value) ;

constexpr UnityEngine::UIElements::PseudoStates __get_dependencyPseudoMask() const;


// Methods

/// @brief Method .ctor addr 0x2c70d1c size 0x10 virtual false final false
 void _ctor(bool success, UnityEngine::UIElements::PseudoStates triggerPseudoMask, UnityEngine::UIElements::PseudoStates dependencyPseudoMask) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleSheets::MatchResultInfo, "UnityEngine.UIElements.StyleSheets", "MatchResultInfo");
