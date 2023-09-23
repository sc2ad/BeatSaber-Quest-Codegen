#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct InlinedArray_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class InputArrayExtensions;
}
// Type: UnityEngine.InputSystem.Utilities::InputArrayExtensions
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6753))
// CS Name: UnityEngine.InputSystem.Utilities.InputArrayExtensions
class CORDL_TYPE InputArrayExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputArrayExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputArrayExtensions", modifiers: " const&", def_value: None }]
constexpr InputArrayExtensions(InputArrayExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputArrayExtensions", modifiers: "&&", def_value: None }]
constexpr InputArrayExtensions(InputArrayExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputArrayExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InputArrayExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputArrayExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputArrayExtensions& operator=(InputArrayExtensions&& o) noexcept = default;
  constexpr InputArrayExtensions& operator=(InputArrayExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method IndexOfReference addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static int32_t IndexOfReference(UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue> array, TValue value) ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static bool Contains(UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue> array, TValue value) ;

/// @brief Method ContainsReference addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static bool ContainsReference(UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue> array, TValue value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
NEED_NO_BOX(UnityEngine::InputSystem::Utilities::InputArrayExtensions);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Utilities::InputArrayExtensions, "UnityEngine.InputSystem.Utilities", "InputArrayExtensions");
