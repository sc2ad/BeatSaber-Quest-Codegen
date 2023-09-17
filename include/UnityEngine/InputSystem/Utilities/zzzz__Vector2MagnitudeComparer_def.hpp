#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
struct Vector2MagnitudeComparer;
}
// Type: UnityEngine.InputSystem.Utilities::Vector2MagnitudeComparer
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6744))
// CS Name: UnityEngine.InputSystem.Utilities.Vector2MagnitudeComparer
struct CORDL_TYPE Vector2MagnitudeComparer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IComparer_1<::UnityEngine::Vector2>
constexpr operator  ::System::Collections::Generic::IComparer_1<::UnityEngine::Vector2>() const;


                    constexpr Vector2MagnitudeComparer(Vector2MagnitudeComparer const&) = default;
                    constexpr Vector2MagnitudeComparer(Vector2MagnitudeComparer&&) = default;
                    constexpr Vector2MagnitudeComparer& operator=(Vector2MagnitudeComparer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Vector2MagnitudeComparer& operator=(Vector2MagnitudeComparer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Vector2MagnitudeComparer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Methods

/// @brief Method Compare addr 0x297c7c8 size 0x30 virtual true final true
 int32_t Compare(::UnityEngine::Vector2 x, ::UnityEngine::Vector2 y) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::Vector2MagnitudeComparer, "UnityEngine.InputSystem.Utilities", "Vector2MagnitudeComparer");
