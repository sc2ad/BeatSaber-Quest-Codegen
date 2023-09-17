#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TimelineHelpURLAttribute;
}
// Type: UnityEngine.Timeline::TimelineHelpURLAttribute
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14074))
// CS Name: UnityEngine.Timeline.TimelineHelpURLAttribute
class CORDL_TYPE TimelineHelpURLAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TimelineHelpURLAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimelineHelpURLAttribute", modifiers: " const&", def_value: None }]
constexpr TimelineHelpURLAttribute(TimelineHelpURLAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimelineHelpURLAttribute", modifiers: "&&", def_value: None }]
constexpr TimelineHelpURLAttribute(TimelineHelpURLAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimelineHelpURLAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr TimelineHelpURLAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimelineHelpURLAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimelineHelpURLAttribute& operator=(TimelineHelpURLAttribute&& o) noexcept = default;
  constexpr TimelineHelpURLAttribute& operator=(TimelineHelpURLAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "type", ty: "::System::Type", modifiers: "", def_value: None }]
explicit TimelineHelpURLAttribute(::System::Type type) ;

/// @brief Method .ctor addr 0x2ac90ec size 0x8 virtual false final false
 void _ctor(::System::Type type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Timeline::TimelineHelpURLAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelineHelpURLAttribute, "UnityEngine.Timeline", "TimelineHelpURLAttribute");
