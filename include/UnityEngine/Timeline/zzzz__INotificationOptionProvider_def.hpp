#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine::Timeline {
struct NotificationFlags;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class INotificationOptionProvider;
}
// Type: UnityEngine.Timeline::INotificationOptionProvider
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14098))
// CS Name: UnityEngine.Timeline.INotificationOptionProvider
class CORDL_TYPE INotificationOptionProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~INotificationOptionProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INotificationOptionProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 UnityEngine::Timeline::NotificationFlags __declspec(property(get=get_flags))  flags;


// Methods

/// @brief Method get_flags addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Timeline::NotificationFlags get_flags() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::INotificationOptionProvider);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::INotificationOptionProvider, "UnityEngine.Timeline", "INotificationOptionProvider");
