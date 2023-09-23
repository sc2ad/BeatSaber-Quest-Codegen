#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class ReadOnlyArrayExtensions;
}
// Type: UnityEngine.InputSystem.Utilities::ReadOnlyArrayExtensions
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6785))
// CS Name: UnityEngine.InputSystem.Utilities.ReadOnlyArrayExtensions
class CORDL_TYPE ReadOnlyArrayExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ReadOnlyArrayExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReadOnlyArrayExtensions", modifiers: " const&", def_value: None }]
constexpr ReadOnlyArrayExtensions(ReadOnlyArrayExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReadOnlyArrayExtensions", modifiers: "&&", def_value: None }]
constexpr ReadOnlyArrayExtensions(ReadOnlyArrayExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReadOnlyArrayExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ReadOnlyArrayExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReadOnlyArrayExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReadOnlyArrayExtensions& operator=(ReadOnlyArrayExtensions&& o) noexcept = default;
  constexpr ReadOnlyArrayExtensions& operator=(ReadOnlyArrayExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static bool Contains(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue> array, TValue value) ;

/// @brief Method ContainsReference addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static bool ContainsReference(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue> array, TValue value) ;

/// @brief Method IndexOfReference addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static int32_t IndexOfReference(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue> array, TValue value) ;

/// @brief Method HaveEqualReferences addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static bool HaveEqualReferences(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue> array1, System::Collections::Generic::IReadOnlyList_1<TValue> array2, int32_t count) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
NEED_NO_BOX(UnityEngine::InputSystem::Utilities::ReadOnlyArrayExtensions);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Utilities::ReadOnlyArrayExtensions, "UnityEngine.InputSystem.Utilities", "ReadOnlyArrayExtensions");
