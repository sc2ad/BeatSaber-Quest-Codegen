#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::Playables {
struct Playable;
}
namespace System {
class Action;
}
namespace UnityEngine::Playables {
class INotification;
}
namespace UnityEngine::Playables {
class INotificationReceiver;
}
// Forward declare root types
namespace GlobalNamespace {
class TimelinePauseReceiver;
}
// Type: ::TimelinePauseReceiver
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13894))
// CS Name: TimelinePauseReceiver
class CORDL_TYPE TimelinePauseReceiver : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to UnityEngine::Playables::INotificationReceiver
constexpr operator  UnityEngine::Playables::INotificationReceiver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TimelinePauseReceiver() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimelinePauseReceiver", modifiers: " const&", def_value: None }]
constexpr TimelinePauseReceiver(TimelinePauseReceiver const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimelinePauseReceiver", modifiers: "&&", def_value: None }]
constexpr TimelinePauseReceiver(TimelinePauseReceiver&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimelinePauseReceiver(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr TimelinePauseReceiver& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimelinePauseReceiver& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimelinePauseReceiver& operator=(TimelinePauseReceiver&& o) noexcept = default;
  constexpr TimelinePauseReceiver& operator=(TimelinePauseReceiver const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_timelinePauseEvent, put=__set_timelinePauseEvent))  timelinePauseEvent;

constexpr void __set_timelinePauseEvent(System::Action value) ;

constexpr System::Action __get_timelinePauseEvent() const;


// Methods

/// @brief Method add_timelinePauseEvent addr 0x1f83a4c size 0x9c virtual false final false
 void add_timelinePauseEvent(System::Action value) ;

/// @brief Method remove_timelinePauseEvent addr 0x1f83ae8 size 0x9c virtual false final false
 void remove_timelinePauseEvent(System::Action value) ;

/// @brief Method OnNotify addr 0x1f83b84 size 0x94 virtual true final true
 void OnNotify(UnityEngine::Playables::Playable origin, UnityEngine::Playables::INotification notification, ::bs_hook::Il2CppWrapperType context) ;

static GlobalNamespace::TimelinePauseReceiver New_ctor() ;

/// @brief Method .ctor addr 0x1f83c18 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::TimelinePauseReceiver);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TimelinePauseReceiver, "", "TimelinePauseReceiver");
