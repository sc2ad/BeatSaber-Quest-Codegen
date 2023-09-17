#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace {
namespace UnityEngine {
struct DrivenTransformProperties;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace UnityEngine {
struct DrivenRectTransformTracker;
}
// Type: UnityEngine::DrivenRectTransformTracker
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10219))
// CS Name: UnityEngine.DrivenRectTransformTracker
struct CORDL_TYPE DrivenRectTransformTracker : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr DrivenRectTransformTracker(DrivenRectTransformTracker const&) = default;
                    constexpr DrivenRectTransformTracker(DrivenRectTransformTracker&&) = default;
                    constexpr DrivenRectTransformTracker& operator=(DrivenRectTransformTracker const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DrivenRectTransformTracker& operator=(DrivenRectTransformTracker&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DrivenRectTransformTracker(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Methods

/// @brief Method Add addr 0x2b6c12c size 0x4 virtual false final false
 void Add(::UnityEngine::Object driver, ::UnityEngine::RectTransform rectTransform, ::UnityEngine::DrivenTransformProperties drivenProperties) ;

/// @brief Method Clear addr 0x2b6c130 size 0x4 virtual false final false
 void Clear() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::DrivenRectTransformTracker, "UnityEngine", "DrivenRectTransformTracker");
