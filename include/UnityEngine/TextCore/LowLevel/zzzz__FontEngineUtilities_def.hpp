#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct FontEngineUtilities;
}
// Type: UnityEngine.TextCore.LowLevel::FontEngineUtilities
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15514))
// CS Name: UnityEngine.TextCore.LowLevel.FontEngineUtilities
struct CORDL_TYPE FontEngineUtilities : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr FontEngineUtilities(FontEngineUtilities const&) = default;
                    constexpr FontEngineUtilities(FontEngineUtilities&&) = default;
                    constexpr FontEngineUtilities& operator=(FontEngineUtilities const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FontEngineUtilities& operator=(FontEngineUtilities&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FontEngineUtilities(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Methods

/// @brief Method MaxValue addr 0x2bac15c size 0x20 virtual false final false
static int32_t MaxValue(int32_t a, int32_t b, int32_t c) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::LowLevel::FontEngineUtilities, "UnityEngine.TextCore.LowLevel", "FontEngineUtilities");
