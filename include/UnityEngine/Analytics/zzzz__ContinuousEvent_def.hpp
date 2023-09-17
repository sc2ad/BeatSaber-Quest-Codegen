#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace UnityEngine::Analytics {
class ContinuousEvent;
}
namespace {
// Type: UnityEngine.Analytics::ContinuousEvent
namespace UnityEngine::Analytics {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15942))
// CS Name: UnityEngine.Analytics.ContinuousEvent
class CORDL_TYPE ContinuousEvent : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ContinuousEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuousEvent", modifiers: " const&", def_value: None }]
constexpr ContinuousEvent(ContinuousEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuousEvent", modifiers: "&&", def_value: None }]
constexpr ContinuousEvent(ContinuousEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContinuousEvent(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ContinuousEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContinuousEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContinuousEvent& operator=(ContinuousEvent&& o) noexcept = default;
  constexpr ContinuousEvent& operator=(ContinuousEvent const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Analytics
NEED_NO_BOX(::UnityEngine::Analytics::ContinuousEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::ContinuousEvent, "UnityEngine.Analytics", "ContinuousEvent");
} // end anonymous namespace
