#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine::Playables {
class INotification;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
class INotificationReceiver;
}
namespace UnityEngine::Timeline {
class SignalAsset;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class SignalReceiver;
}
namespace UnityEngine::Timeline {
class ____UnityEngine__Timeline__SignalReceiver__EventKeyValue;
}
// Type: ::EventKeyValue
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14105))
// CS Name: UnityEngine.Timeline.SignalReceiver::EventKeyValue
class CORDL_TYPE ____UnityEngine__Timeline__SignalReceiver__EventKeyValue : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____UnityEngine__Timeline__SignalReceiver__EventKeyValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Timeline__SignalReceiver__EventKeyValue", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__Timeline__SignalReceiver__EventKeyValue(____UnityEngine__Timeline__SignalReceiver__EventKeyValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Timeline__SignalReceiver__EventKeyValue", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__Timeline__SignalReceiver__EventKeyValue(____UnityEngine__Timeline__SignalReceiver__EventKeyValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__Timeline__SignalReceiver__EventKeyValue(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__Timeline__SignalReceiver__EventKeyValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__Timeline__SignalReceiver__EventKeyValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__Timeline__SignalReceiver__EventKeyValue& operator=(____UnityEngine__Timeline__SignalReceiver__EventKeyValue&& o) noexcept = default;
  constexpr ____UnityEngine__Timeline__SignalReceiver__EventKeyValue& operator=(____UnityEngine__Timeline__SignalReceiver__EventKeyValue const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::UnityEngine::Timeline::SignalAsset> __declspec(property(get=__get_m_Signals, put=__set_m_Signals))  m_Signals;

constexpr void __set_m_Signals(::System::Collections::Generic::List_1<::UnityEngine::Timeline::SignalAsset> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::SignalAsset> __get_m_Signals() const;

 ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent> __declspec(property(get=__get_m_Events, put=__set_m_Events))  m_Events;

constexpr void __set_m_Events(::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent> __get_m_Events() const;


// Properties

 ::System::Collections::Generic::List_1<::UnityEngine::Timeline::SignalAsset> __declspec(property(get=get_signals))  signals;

 ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent> __declspec(property(get=get_events))  events;


// Methods

/// @brief Method TryGetValue addr 0x2ad0848 size 0xb0 virtual false final false
 bool TryGetValue(::UnityEngine::Timeline::SignalAsset key, ByRef<::UnityEngine::Events::UnityEvent> value) ;

/// @brief Method Append addr 0x2ad0a38 size 0x128 virtual false final false
 void Append(::UnityEngine::Timeline::SignalAsset key, ::UnityEngine::Events::UnityEvent value) ;

/// @brief Method Remove addr 0x2ad10e4 size 0x94 virtual false final false
 void Remove(int32_t idx) ;

/// @brief Method Remove addr 0x2ad0c8c size 0xc0 virtual false final false
 void Remove(::UnityEngine::Timeline::SignalAsset key) ;

/// @brief Method get_signals addr 0x2ad14e4 size 0x8 virtual false final false
 ::System::Collections::Generic::List_1<::UnityEngine::Timeline::SignalAsset> get_signals() ;

/// @brief Method get_events addr 0x2ad14ec size 0x8 virtual false final false
 ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent> get_events() ;

// Ctor Parameters []
explicit ____UnityEngine__Timeline__SignalReceiver__EventKeyValue() ;

/// @brief Method .ctor addr 0x2ad1424 size 0xc0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: UnityEngine.Timeline::SignalReceiver
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14106))
// CS Name: UnityEngine.Timeline.SignalReceiver
class CORDL_TYPE SignalReceiver : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using EventKeyValue = ::UnityEngine::Timeline::____UnityEngine__Timeline__SignalReceiver__EventKeyValue;

/// @brief Convert operator to ::UnityEngine::Playables::INotificationReceiver
constexpr operator  ::UnityEngine::Playables::INotificationReceiver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SignalReceiver() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalReceiver", modifiers: " const&", def_value: None }]
constexpr SignalReceiver(SignalReceiver const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalReceiver", modifiers: "&&", def_value: None }]
constexpr SignalReceiver(SignalReceiver&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignalReceiver(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SignalReceiver& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignalReceiver& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignalReceiver& operator=(SignalReceiver&& o) noexcept = default;
  constexpr SignalReceiver& operator=(SignalReceiver const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Timeline::____UnityEngine__Timeline__SignalReceiver__EventKeyValue __declspec(property(get=__get_m_Events, put=__set_m_Events))  m_Events;

constexpr void __set_m_Events(::UnityEngine::Timeline::____UnityEngine__Timeline__SignalReceiver__EventKeyValue value) ;

constexpr ::UnityEngine::Timeline::____UnityEngine__Timeline__SignalReceiver__EventKeyValue __get_m_Events() const;


// Methods

/// @brief Method OnNotify addr 0x2ad0730 size 0x118 virtual true final true
 void OnNotify(::UnityEngine::Playables::Playable origin, ::UnityEngine::Playables::INotification notification, ::bs_hook::Il2CppWrapperType context) ;

/// @brief Method AddReaction addr 0x2ad08f8 size 0x140 virtual false final false
 void AddReaction(::UnityEngine::Timeline::SignalAsset asset, ::UnityEngine::Events::UnityEvent reaction) ;

/// @brief Method AddEmptyReaction addr 0x2ad0b60 size 0x6c virtual false final false
 int32_t AddEmptyReaction(::UnityEngine::Events::UnityEvent reaction) ;

/// @brief Method Remove addr 0x2ad0bcc size 0xc0 virtual false final false
 void Remove(::UnityEngine::Timeline::SignalAsset asset) ;

/// @brief Method GetRegisteredSignals addr 0x2ad0d4c size 0x1c virtual false final false
 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::SignalAsset> GetRegisteredSignals() ;

/// @brief Method GetReaction addr 0x2ad0d68 size 0x30 virtual false final false
 ::UnityEngine::Events::UnityEvent GetReaction(::UnityEngine::Timeline::SignalAsset key) ;

/// @brief Method Count addr 0x2ad0d98 size 0x50 virtual false final false
 int32_t Count() ;

/// @brief Method ChangeSignalAtIndex addr 0x2ad0de8 size 0x258 virtual false final false
 void ChangeSignalAtIndex(int32_t idx, ::UnityEngine::Timeline::SignalAsset newKey) ;

/// @brief Method RemoveAtIndex addr 0x2ad1040 size 0xa4 virtual false final false
 void RemoveAtIndex(int32_t idx) ;

/// @brief Method ChangeReactionAtIndex addr 0x2ad1178 size 0xcc virtual false final false
 void ChangeReactionAtIndex(int32_t idx, ::UnityEngine::Events::UnityEvent reaction) ;

/// @brief Method GetReactionAtIndex addr 0x2ad1244 size 0xbc virtual false final false
 ::UnityEngine::Events::UnityEvent GetReactionAtIndex(int32_t idx) ;

/// @brief Method GetSignalAssetAtIndex addr 0x2ad1300 size 0xbc virtual false final false
 ::UnityEngine::Timeline::SignalAsset GetSignalAssetAtIndex(int32_t idx) ;

/// @brief Method OnEnable addr 0x2ad13bc size 0x4 virtual false final false
 void OnEnable() ;

// Ctor Parameters []
explicit SignalReceiver() ;

/// @brief Method .ctor addr 0x2ad13c0 size 0x64 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Timeline::SignalReceiver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::SignalReceiver, "UnityEngine.Timeline", "SignalReceiver");
NEED_NO_BOX(::UnityEngine::Timeline::____UnityEngine__Timeline__SignalReceiver__EventKeyValue);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::____UnityEngine__Timeline__SignalReceiver__EventKeyValue, "UnityEngine.Timeline", "SignalReceiver/EventKeyValue");
