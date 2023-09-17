#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::Timeline {
struct NotificationFlags;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct DirectorWrapMode;
}
namespace UnityEngine::Playables {
class INotification;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
struct PlayableOutput;
}
namespace UnityEngine::Playables {
template<typename T>
struct ScriptPlayable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Comparison_1;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TimeNotificationBehaviour;
}
namespace UnityEngine::Timeline {
class ____UnityEngine__Timeline__TimeNotificationBehaviour____c;
}
namespace UnityEngine::Timeline {
struct ____UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry;
}
// Type: ::NotificationEntry
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14121))
// CS Name: UnityEngine.Timeline.TimeNotificationBehaviour::NotificationEntry
struct CORDL_TYPE ____UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "time", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "payload", ty: "::UnityEngine::Playables::INotification", modifiers: "", def_value: None }, CppParam { name: "notificationFired", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "::UnityEngine::Timeline::NotificationFlags", modifiers: "", def_value: None }]
constexpr ____UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry(double_t time, ::UnityEngine::Playables::INotification payload, bool notificationFired, ::UnityEngine::Timeline::NotificationFlags flags) noexcept;


                    constexpr ____UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry(____UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry const&) = default;
                    constexpr ____UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry(____UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry&&) = default;
                    constexpr ____UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry& operator=(____UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry& operator=(____UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 double_t __declspec(property(get=__get_time, put=__set_time))  time;

constexpr void __set_time(double_t value) ;

constexpr double_t __get_time() const;

 ::UnityEngine::Playables::INotification __declspec(property(get=__get_payload, put=__set_payload))  payload;

constexpr void __set_payload(::UnityEngine::Playables::INotification value) ;

constexpr ::UnityEngine::Playables::INotification __get_payload() const;

 bool __declspec(property(get=__get_notificationFired, put=__set_notificationFired))  notificationFired;

constexpr void __set_notificationFired(bool value) ;

constexpr bool __get_notificationFired() const;

 ::UnityEngine::Timeline::NotificationFlags __declspec(property(get=__get_flags, put=__set_flags))  flags;

constexpr void __set_flags(::UnityEngine::Timeline::NotificationFlags value) ;

constexpr ::UnityEngine::Timeline::NotificationFlags __get_flags() const;


// Properties

 bool __declspec(property(get=get_triggerInEditor))  triggerInEditor;

 bool __declspec(property(get=get_prewarm))  prewarm;

 bool __declspec(property(get=get_triggerOnce))  triggerOnce;


// Methods

/// @brief Method get_triggerInEditor addr 0x2ad5ad4 size 0xc virtual false final false
 bool get_triggerInEditor() ;

/// @brief Method get_prewarm addr 0x2ad5ac8 size 0xc virtual false final false
 bool get_prewarm() ;

/// @brief Method get_triggerOnce addr 0x2ad5204 size 0xc virtual false final false
 bool get_triggerOnce() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: ::<>c
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14122))
// CS Name: UnityEngine.Timeline.TimeNotificationBehaviour::<>c
class CORDL_TYPE ____UnityEngine__Timeline__TimeNotificationBehaviour____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__Timeline__TimeNotificationBehaviour____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Timeline__TimeNotificationBehaviour____c", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__Timeline__TimeNotificationBehaviour____c(____UnityEngine__Timeline__TimeNotificationBehaviour____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Timeline__TimeNotificationBehaviour____c", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__Timeline__TimeNotificationBehaviour____c(____UnityEngine__Timeline__TimeNotificationBehaviour____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__Timeline__TimeNotificationBehaviour____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__Timeline__TimeNotificationBehaviour____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__Timeline__TimeNotificationBehaviour____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__Timeline__TimeNotificationBehaviour____c& operator=(____UnityEngine__Timeline__TimeNotificationBehaviour____c&& o) noexcept = default;
  constexpr ____UnityEngine__Timeline__TimeNotificationBehaviour____c& operator=(____UnityEngine__Timeline__TimeNotificationBehaviour____c const& o) noexcept = default;
                


// Fields

static ::UnityEngine::Timeline::____UnityEngine__Timeline__TimeNotificationBehaviour____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::UnityEngine::Timeline::____UnityEngine__Timeline__TimeNotificationBehaviour____c value) ;

static ::UnityEngine::Timeline::____UnityEngine__Timeline__TimeNotificationBehaviour____c __get___9() ;

static ::System::Comparison_1<::UnityEngine::Timeline::____UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry> __declspec(property(get=__get___9__12_0, put=__set___9__12_0))  __9__12_0;

static void __set___9__12_0(::System::Comparison_1<::UnityEngine::Timeline::____UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry> value) ;

static ::System::Comparison_1<::UnityEngine::Timeline::____UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry> __get___9__12_0() ;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__Timeline__TimeNotificationBehaviour____c() ;

/// @brief Method .ctor addr 0x2ad5bc0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SortNotifications>b__12_0 addr 0x2ad5bc8 size 0x10 virtual false final false
 int32_t _SortNotifications_b__12_0(::UnityEngine::Timeline::____UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry x, ::UnityEngine::Timeline::____UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry y) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: UnityEngine.Timeline::TimeNotificationBehaviour
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10361))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14123))
// CS Name: UnityEngine.Timeline.TimeNotificationBehaviour
class CORDL_TYPE TimeNotificationBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
using __c = ::UnityEngine::Timeline::____UnityEngine__Timeline__TimeNotificationBehaviour____c;

using NotificationEntry = ::UnityEngine::Timeline::____UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~TimeNotificationBehaviour() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeNotificationBehaviour", modifiers: " const&", def_value: None }]
constexpr TimeNotificationBehaviour(TimeNotificationBehaviour const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeNotificationBehaviour", modifiers: "&&", def_value: None }]
constexpr TimeNotificationBehaviour(TimeNotificationBehaviour&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimeNotificationBehaviour(void* ptr) noexcept : ::UnityEngine::Playables::PlayableBehaviour(ptr) {
}


  constexpr TimeNotificationBehaviour& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimeNotificationBehaviour& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimeNotificationBehaviour& operator=(TimeNotificationBehaviour&& o) noexcept = default;
  constexpr TimeNotificationBehaviour& operator=(TimeNotificationBehaviour const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::UnityEngine::Timeline::____UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry> __declspec(property(get=__get_m_Notifications, put=__set_m_Notifications))  m_Notifications;

constexpr void __set_m_Notifications(::System::Collections::Generic::List_1<::UnityEngine::Timeline::____UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::____UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry> __get_m_Notifications() const;

 double_t __declspec(property(get=__get_m_PreviousTime, put=__set_m_PreviousTime))  m_PreviousTime;

constexpr void __set_m_PreviousTime(double_t value) ;

constexpr double_t __get_m_PreviousTime() const;

 bool __declspec(property(get=__get_m_NeedSortNotifications, put=__set_m_NeedSortNotifications))  m_NeedSortNotifications;

constexpr void __set_m_NeedSortNotifications(bool value) ;

constexpr bool __get_m_NeedSortNotifications() const;

 ::UnityEngine::Playables::Playable __declspec(property(get=__get_m_TimeSource, put=__set_m_TimeSource))  m_TimeSource;

constexpr void __set_m_TimeSource(::UnityEngine::Playables::Playable value) ;

constexpr ::UnityEngine::Playables::Playable __get_m_TimeSource() const;


// Properties

 ::UnityEngine::Playables::Playable __declspec(property(put=set_timeSource))  timeSource;


// Methods

/// @brief Method set_timeSource addr 0x2ad4d14 size 0x8 virtual false final false
 void set_timeSource(::UnityEngine::Playables::Playable value) ;

/// @brief Method Create addr 0x2ad4d1c size 0x11c virtual false final false
static ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour> Create(::UnityEngine::Playables::PlayableGraph graph, double_t duration, ::UnityEngine::Playables::DirectorWrapMode loopMode) ;

/// @brief Method AddNotification addr 0x2ad4e38 size 0xf8 virtual false final false
 void AddNotification(double_t time, ::UnityEngine::Playables::INotification payload, ::UnityEngine::Timeline::NotificationFlags flags) ;

/// @brief Method OnGraphStart addr 0x2ad4f30 size 0x1c4 virtual true final false
 void OnGraphStart(::UnityEngine::Playables::Playable playable) ;

/// @brief Method OnBehaviourPause addr 0x2ad5210 size 0x1ac virtual true final false
 void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info) ;

/// @brief Method PrepareFrame addr 0x2ad5444 size 0x35c virtual true final false
 void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info) ;

/// @brief Method SortNotifications addr 0x2ad50f4 size 0x110 virtual false final false
 void SortNotifications() ;

/// @brief Method CanRestoreNotification addr 0x2ad5a64 size 0x5c virtual false final false
static bool CanRestoreNotification(::UnityEngine::Timeline::____UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry e, ::UnityEngine::Playables::FrameData info, double_t currentTime, double_t previousTime) ;

/// @brief Method TriggerNotificationsInRange addr 0x2ad58a4 size 0x1c0 virtual false final false
 void TriggerNotificationsInRange(double_t start, double_t end, ::UnityEngine::Playables::FrameData info, ::UnityEngine::Playables::Playable playable, bool checkState) ;

/// @brief Method SyncDurationWithExternalSource addr 0x2ad57a0 size 0x104 virtual false final false
 void SyncDurationWithExternalSource(::UnityEngine::Playables::Playable playable) ;

/// @brief Method Trigger_internal addr 0x2ad53bc size 0x88 virtual false final false
static void Trigger_internal(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::PlayableOutput output, ByRef<::UnityEngine::Timeline::____UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry> e) ;

/// @brief Method Restore_internal addr 0x2ad5ac0 size 0x8 virtual false final false
static void Restore_internal(ByRef<::UnityEngine::Timeline::____UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry> e) ;

// Ctor Parameters []
explicit TimeNotificationBehaviour() ;

/// @brief Method .ctor addr 0x2ad5ae0 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Timeline::TimeNotificationBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimeNotificationBehaviour, "UnityEngine.Timeline", "TimeNotificationBehaviour");
NEED_NO_BOX(::UnityEngine::Timeline::____UnityEngine__Timeline__TimeNotificationBehaviour____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::____UnityEngine__Timeline__TimeNotificationBehaviour____c, "UnityEngine.Timeline", "TimeNotificationBehaviour/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::____UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry, "UnityEngine.Timeline", "TimeNotificationBehaviour/NotificationEntry");
