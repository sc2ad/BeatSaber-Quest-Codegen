#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
struct MultiplayerPlayerLayout;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
// Type: ::MultiplayerLayoutProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5314))
// CS Name: MultiplayerLayoutProvider
class CORDL_TYPE MultiplayerLayoutProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MultiplayerLayoutProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLayoutProvider", modifiers: " const&", def_value: None }]
constexpr MultiplayerLayoutProvider(MultiplayerLayoutProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLayoutProvider", modifiers: "&&", def_value: None }]
constexpr MultiplayerLayoutProvider(MultiplayerLayoutProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLayoutProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MultiplayerLayoutProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLayoutProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLayoutProvider& operator=(MultiplayerLayoutProvider&& o) noexcept = default;
  constexpr MultiplayerLayoutProvider& operator=(MultiplayerLayoutProvider const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::MultiplayerPlayerLayout __declspec(property(get=__get__layout_k__BackingField, put=__set__layout_k__BackingField))  _layout_k__BackingField;

constexpr void __set__layout_k__BackingField(::GlobalNamespace::MultiplayerPlayerLayout value) ;

constexpr ::GlobalNamespace::MultiplayerPlayerLayout __get__layout_k__BackingField() const;

 int32_t __declspec(property(get=__get__activePlayerSpotsCount_k__BackingField, put=__set__activePlayerSpotsCount_k__BackingField))  _activePlayerSpotsCount_k__BackingField;

constexpr void __set__activePlayerSpotsCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__activePlayerSpotsCount_k__BackingField() const;

 ::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout,int32_t> __declspec(property(get=__get_playersLayoutWasCalculatedEvent, put=__set_playersLayoutWasCalculatedEvent))  playersLayoutWasCalculatedEvent;

constexpr void __set_playersLayoutWasCalculatedEvent(::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout,int32_t> value) ;

constexpr ::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout,int32_t> __get_playersLayoutWasCalculatedEvent() const;


// Properties

 ::GlobalNamespace::MultiplayerPlayerLayout __declspec(property(get=get_layout, put=set_layout))  layout;

 int32_t __declspec(property(get=get_activePlayerSpotsCount, put=set_activePlayerSpotsCount))  activePlayerSpotsCount;


// Methods

/// @brief Method get_layout addr 0x20fa868 size 0x8 virtual false final false
 ::GlobalNamespace::MultiplayerPlayerLayout get_layout() ;

/// @brief Method set_layout addr 0x20fa870 size 0x8 virtual false final false
 void set_layout(::GlobalNamespace::MultiplayerPlayerLayout value) ;

/// @brief Method get_activePlayerSpotsCount addr 0x20fa878 size 0x8 virtual false final false
 int32_t get_activePlayerSpotsCount() ;

/// @brief Method set_activePlayerSpotsCount addr 0x20fa880 size 0x8 virtual false final false
 void set_activePlayerSpotsCount(int32_t value) ;

/// @brief Method add_playersLayoutWasCalculatedEvent addr 0x20f0ab0 size 0xb0 virtual false final false
 void add_playersLayoutWasCalculatedEvent(::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout,int32_t> value) ;

/// @brief Method remove_playersLayoutWasCalculatedEvent addr 0x20f0bf4 size 0xb0 virtual false final false
 void remove_playersLayoutWasCalculatedEvent(::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout,int32_t> value) ;

/// @brief Method CalculateLayout addr 0x20fa888 size 0x5c virtual false final false
 ::GlobalNamespace::MultiplayerPlayerLayout CalculateLayout(int32_t activePlayersCount) ;

// Ctor Parameters []
explicit MultiplayerLayoutProvider() ;

/// @brief Method .ctor addr 0x20fa8e4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLayoutProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLayoutProvider, "", "MultiplayerLayoutProvider");
