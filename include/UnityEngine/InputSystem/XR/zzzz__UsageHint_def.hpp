#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
struct UsageHint;
}
// Type: UnityEngine.InputSystem.XR::UsageHint
namespace UnityEngine::InputSystem::XR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6417))
// CS Name: UnityEngine.InputSystem.XR.UsageHint
struct CORDL_TYPE UsageHint : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "content", ty: "::StringW", modifiers: "", def_value: None }]
constexpr UsageHint(::StringW content) noexcept;


                    constexpr UsageHint(UsageHint const&) = default;
                    constexpr UsageHint(UsageHint&&) = default;
                    constexpr UsageHint& operator=(UsageHint const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UsageHint& operator=(UsageHint&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UsageHint(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_content, put=__set_content))  content;

constexpr void __set_content(::StringW value) ;

constexpr ::StringW __get_content() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::XR
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::XR::UsageHint, "UnityEngine.InputSystem.XR", "UsageHint");
