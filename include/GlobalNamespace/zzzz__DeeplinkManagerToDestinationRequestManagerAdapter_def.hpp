#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace GlobalNamespace {
class IDestinationRequestManager;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class MenuDestination;
}
namespace GlobalNamespace {
class Deeplink;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
class IDeeplinkManager;
}
// Forward declare root types
namespace GlobalNamespace {
class DeeplinkManagerToDestinationRequestManagerAdapter;
}
// Type: ::DeeplinkManagerToDestinationRequestManagerAdapter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4177))
// CS Name: DeeplinkManagerToDestinationRequestManagerAdapter
class CORDL_TYPE DeeplinkManagerToDestinationRequestManagerAdapter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IDestinationRequestManager
constexpr operator  ::GlobalNamespace::IDestinationRequestManager() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DeeplinkManagerToDestinationRequestManagerAdapter() = default;

// Ctor Parameters [CppParam { name: "", ty: "DeeplinkManagerToDestinationRequestManagerAdapter", modifiers: " const&", def_value: None }]
constexpr DeeplinkManagerToDestinationRequestManagerAdapter(DeeplinkManagerToDestinationRequestManagerAdapter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DeeplinkManagerToDestinationRequestManagerAdapter", modifiers: "&&", def_value: None }]
constexpr DeeplinkManagerToDestinationRequestManagerAdapter(DeeplinkManagerToDestinationRequestManagerAdapter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DeeplinkManagerToDestinationRequestManagerAdapter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DeeplinkManagerToDestinationRequestManagerAdapter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DeeplinkManagerToDestinationRequestManagerAdapter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DeeplinkManagerToDestinationRequestManagerAdapter& operator=(DeeplinkManagerToDestinationRequestManagerAdapter&& o) noexcept = default;
  constexpr DeeplinkManagerToDestinationRequestManagerAdapter& operator=(DeeplinkManagerToDestinationRequestManagerAdapter const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::BeatmapLevelsModel __declspec(property(get=__get__beatmapLevelsModel, put=__set__beatmapLevelsModel))  _beatmapLevelsModel;

constexpr void __set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel value) ;

constexpr ::GlobalNamespace::BeatmapLevelsModel __get__beatmapLevelsModel() const;

 ::GlobalNamespace::BeatmapCharacteristicCollection __declspec(property(get=__get__beatmapCharacteristicCollection, put=__set__beatmapCharacteristicCollection))  _beatmapCharacteristicCollection;

constexpr void __set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection value) ;

constexpr ::GlobalNamespace::BeatmapCharacteristicCollection __get__beatmapCharacteristicCollection() const;

 ::System::Action_1<::GlobalNamespace::MenuDestination> __declspec(property(get=__get_didSendMenuDestinationRequestEvent, put=__set_didSendMenuDestinationRequestEvent))  didSendMenuDestinationRequestEvent;

constexpr void __set_didSendMenuDestinationRequestEvent(::System::Action_1<::GlobalNamespace::MenuDestination> value) ;

constexpr ::System::Action_1<::GlobalNamespace::MenuDestination> __get_didSendMenuDestinationRequestEvent() const;

 ::GlobalNamespace::MenuDestination __declspec(property(get=__get__currentMenuDestinationRequest, put=__set__currentMenuDestinationRequest))  _currentMenuDestinationRequest;

constexpr void __set__currentMenuDestinationRequest(::GlobalNamespace::MenuDestination value) ;

constexpr ::GlobalNamespace::MenuDestination __get__currentMenuDestinationRequest() const;


// Properties

 ::GlobalNamespace::MenuDestination __declspec(property(get=get_currentMenuDestinationRequest, put=set_currentMenuDestinationRequest))  currentMenuDestinationRequest;


// Methods

/// @brief Method add_didSendMenuDestinationRequestEvent addr 0x21bbbfc size 0xb0 virtual true final true
 void add_didSendMenuDestinationRequestEvent(::System::Action_1<::GlobalNamespace::MenuDestination> value) ;

/// @brief Method remove_didSendMenuDestinationRequestEvent addr 0x21bbcac size 0xb0 virtual true final true
 void remove_didSendMenuDestinationRequestEvent(::System::Action_1<::GlobalNamespace::MenuDestination> value) ;

/// @brief Method get_currentMenuDestinationRequest addr 0x21bbd5c size 0x8 virtual true final true
 ::GlobalNamespace::MenuDestination get_currentMenuDestinationRequest() ;

/// @brief Method set_currentMenuDestinationRequest addr 0x21bbd64 size 0x20 virtual true final true
 void set_currentMenuDestinationRequest(::GlobalNamespace::MenuDestination value) ;

/// @brief Method Init addr 0x21bbd84 size 0x1cc virtual false final false
 void Init(::GlobalNamespace::IDeeplinkManager deeplinkManager) ;

/// @brief Method Clear addr 0x21bc514 size 0x8 virtual true final true
 void Clear() ;

/// @brief Method HandleDeeplinkManagerDidReceiveDeeplink addr 0x21bbf50 size 0x5c4 virtual false final false
 void HandleDeeplinkManagerDidReceiveDeeplink(::GlobalNamespace::Deeplink deeplink) ;

// Ctor Parameters []
explicit DeeplinkManagerToDestinationRequestManagerAdapter() ;

/// @brief Method .ctor addr 0x21bc740 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter, "", "DeeplinkManagerToDestinationRequestManagerAdapter");
