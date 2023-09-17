#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace {
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::Timeline {
class IMarker;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
template<typename T>
struct ScriptPlayable_1;
}
namespace UnityEngine::Timeline {
class TimeNotificationBehaviour;
}
namespace UnityEngine::Playables {
struct DirectorWrapMode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class NotificationUtilities;
}
// Type: UnityEngine.Timeline::NotificationUtilities
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14146))
// CS Name: UnityEngine.Timeline.NotificationUtilities
class CORDL_TYPE NotificationUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NotificationUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "NotificationUtilities", modifiers: " const&", def_value: None }]
constexpr NotificationUtilities(NotificationUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NotificationUtilities", modifiers: "&&", def_value: None }]
constexpr NotificationUtilities(NotificationUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NotificationUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NotificationUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NotificationUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NotificationUtilities& operator=(NotificationUtilities&& o) noexcept = default;
  constexpr NotificationUtilities& operator=(NotificationUtilities const& o) noexcept = default;
                


// Methods

/// @brief Method CreateNotificationsPlayable addr 0x2ad8434 size 0x6e0 virtual false final false
static ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour> CreateNotificationsPlayable(::UnityEngine::Playables::PlayableGraph graph, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker> markers, double_t duration, ::UnityEngine::Playables::DirectorWrapMode extrapolationMode) ;

/// @brief Method TrackTypeSupportsNotifications addr 0x2ad8b14 size 0x18c virtual false final false
static bool TrackTypeSupportsNotifications(::System::Type type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Timeline::NotificationUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::NotificationUtilities, "UnityEngine.Timeline", "NotificationUtilities");
