#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Timeline/zzzz__Marker_def.hpp"
namespace UnityEngine::Timeline {
class INotificationOptionProvider;
}
namespace UnityEngine::Timeline {
struct NotificationFlags;
}
namespace UnityEngine::Playables {
class INotification;
}
namespace UnityEngine::Timeline {
class SignalAsset;
}
namespace UnityEngine {
struct PropertyName;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class SignalEmitter;
}
// Type: UnityEngine.Timeline::SignalEmitter
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14099))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14104))
// CS Name: UnityEngine.Timeline.SignalEmitter
class CORDL_TYPE SignalEmitter : public UnityEngine::Timeline::Marker {
public:
// Declarations
/// @brief Convert operator to UnityEngine::Playables::INotification
constexpr operator  UnityEngine::Playables::INotification() const noexcept;

/// @brief Convert operator to UnityEngine::Timeline::INotificationOptionProvider
constexpr operator  UnityEngine::Timeline::INotificationOptionProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~SignalEmitter() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalEmitter", modifiers: " const&", def_value: None }]
constexpr SignalEmitter(SignalEmitter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalEmitter", modifiers: "&&", def_value: None }]
constexpr SignalEmitter(SignalEmitter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignalEmitter(void* ptr) noexcept : UnityEngine::Timeline::Marker(ptr) {
}


  constexpr SignalEmitter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignalEmitter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignalEmitter& operator=(SignalEmitter&& o) noexcept = default;
  constexpr SignalEmitter& operator=(SignalEmitter const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_Retroactive, put=__set_m_Retroactive))  m_Retroactive;

constexpr void __set_m_Retroactive(bool value) ;

constexpr bool __get_m_Retroactive() const;

 bool __declspec(property(get=__get_m_EmitOnce, put=__set_m_EmitOnce))  m_EmitOnce;

constexpr void __set_m_EmitOnce(bool value) ;

constexpr bool __get_m_EmitOnce() const;

 UnityEngine::Timeline::SignalAsset __declspec(property(get=__get_m_Asset, put=__set_m_Asset))  m_Asset;

constexpr void __set_m_Asset(UnityEngine::Timeline::SignalAsset value) ;

constexpr UnityEngine::Timeline::SignalAsset __get_m_Asset() const;


// Properties

 bool __declspec(property(get=get_retroactive, put=set_retroactive))  retroactive;

 bool __declspec(property(get=get_emitOnce, put=set_emitOnce))  emitOnce;

 UnityEngine::Timeline::SignalAsset __declspec(property(get=get_asset, put=set_asset))  asset;

 UnityEngine::PropertyName __declspec(property(get=UnityEngine_Playables_INotification_get_id))  UnityEngine_Playables_INotification_id;

 UnityEngine::Timeline::NotificationFlags __declspec(property(get=UnityEngine_Timeline_INotificationOptionProvider_get_flags))  UnityEngine_Timeline_INotificationOptionProvider_flags;


// Methods

/// @brief Method get_retroactive addr 0x2ad0614 size 0x8 virtual false final false
 bool get_retroactive() ;

/// @brief Method set_retroactive addr 0x2ad061c size 0xc virtual false final false
 void set_retroactive(bool value) ;

/// @brief Method get_emitOnce addr 0x2ad0628 size 0x8 virtual false final false
 bool get_emitOnce() ;

/// @brief Method set_emitOnce addr 0x2ad0630 size 0xc virtual false final false
 void set_emitOnce(bool value) ;

/// @brief Method get_asset addr 0x2ad063c size 0x8 virtual false final false
 UnityEngine::Timeline::SignalAsset get_asset() ;

/// @brief Method set_asset addr 0x2ad0644 size 0x8 virtual false final false
 void set_asset(UnityEngine::Timeline::SignalAsset value) ;

/// @brief Method UnityEngine.Playables.INotification.get_id addr 0x2ad064c size 0xc0 virtual true final true
 UnityEngine::PropertyName UnityEngine_Playables_INotification_get_id() ;

/// @brief Method UnityEngine.Timeline.INotificationOptionProvider.get_flags addr 0x2ad070c size 0x1c virtual true final true
 UnityEngine::Timeline::NotificationFlags UnityEngine_Timeline_INotificationOptionProvider_get_flags() ;

static UnityEngine::Timeline::SignalEmitter New_ctor() ;

/// @brief Method .ctor addr 0x2ad0728 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::SignalEmitter);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::SignalEmitter, "UnityEngine.Timeline", "SignalEmitter");
