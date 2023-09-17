#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
namespace GlobalNamespace {
class HapticsAudioClipPlayer;
}
namespace GlobalNamespace {
class ICoroutineStarter;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace Zenject {
class IInitializable;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace GlobalNamespace {
class IHapticFeedbackPlayer;
}
namespace GlobalNamespace {
class ____GlobalNamespace__HapticsAudioClipPlayer__Pool;
}
// Forward declare root types
namespace GlobalNamespace {
class PS5AdvancedHapticsPlayerController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0;
}
namespace GlobalNamespace {
class ____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0;
}
// Type: ::<>c__DisplayClass6_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13927))
// CS Name: PS5AdvancedHapticsPlayerController::<>c__DisplayClass6_0
class CORDL_TYPE ____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0(____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0(____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0& operator=(____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0& operator=(____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::PS5AdvancedHapticsPlayerController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::PS5AdvancedHapticsPlayerController value) ;

constexpr ::GlobalNamespace::PS5AdvancedHapticsPlayerController __get___4__this() const;

 ::UnityEngine::XR::XRNode __declspec(property(get=__get_node, put=__set_node))  node;

constexpr void __set_node(::UnityEngine::XR::XRNode value) ;

constexpr ::UnityEngine::XR::XRNode __get_node() const;

 ::Libraries::HM::HMLib::VR::HapticPresetSO __declspec(property(get=__get_hapticPreset, put=__set_hapticPreset))  hapticPreset;

constexpr void __set_hapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO value) ;

constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO __get_hapticPreset() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0() ;

/// @brief Method .ctor addr 0x1f88be0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <PlayContinuousHapticPreset>b__0 addr 0x1f88cc4 size 0xac virtual false final false
 void _PlayContinuousHapticPreset_b__0(::GlobalNamespace::HapticsAudioClipPlayer player) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass7_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13928))
// CS Name: PS5AdvancedHapticsPlayerController::<>c__DisplayClass7_0
class CORDL_TYPE ____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0(____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0(____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0& operator=(____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0& operator=(____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::PS5AdvancedHapticsPlayerController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::PS5AdvancedHapticsPlayerController value) ;

constexpr ::GlobalNamespace::PS5AdvancedHapticsPlayerController __get___4__this() const;

 ::UnityEngine::XR::XRNode __declspec(property(get=__get_node, put=__set_node))  node;

constexpr void __set_node(::UnityEngine::XR::XRNode value) ;

constexpr ::UnityEngine::XR::XRNode __get_node() const;

 ::Libraries::HM::HMLib::VR::HapticPresetSO __declspec(property(get=__get_hapticPreset, put=__set_hapticPreset))  hapticPreset;

constexpr void __set_hapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO value) ;

constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO __get_hapticPreset() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0() ;

/// @brief Method .ctor addr 0x1f88be8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <PlayOneShotHapticPreset>b__0 addr 0x1f88d70 size 0xac virtual false final false
 void _PlayOneShotHapticPreset_b__0(::GlobalNamespace::HapticsAudioClipPlayer player) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PS5AdvancedHapticsPlayerController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13929))
// CS Name: PS5AdvancedHapticsPlayerController
class CORDL_TYPE PS5AdvancedHapticsPlayerController : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass7_0 = ::GlobalNamespace::____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0;

using __c__DisplayClass6_0 = ::GlobalNamespace::____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0;

/// @brief Convert operator to ::GlobalNamespace::IHapticFeedbackPlayer
constexpr operator  ::GlobalNamespace::IHapticFeedbackPlayer() const noexcept;

/// @brief Convert operator to ::Zenject::IInitializable
constexpr operator  ::Zenject::IInitializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PS5AdvancedHapticsPlayerController() = default;

// Ctor Parameters [CppParam { name: "", ty: "PS5AdvancedHapticsPlayerController", modifiers: " const&", def_value: None }]
constexpr PS5AdvancedHapticsPlayerController(PS5AdvancedHapticsPlayerController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PS5AdvancedHapticsPlayerController", modifiers: "&&", def_value: None }]
constexpr PS5AdvancedHapticsPlayerController(PS5AdvancedHapticsPlayerController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PS5AdvancedHapticsPlayerController(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PS5AdvancedHapticsPlayerController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PS5AdvancedHapticsPlayerController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PS5AdvancedHapticsPlayerController& operator=(PS5AdvancedHapticsPlayerController&& o) noexcept = default;
  constexpr PS5AdvancedHapticsPlayerController& operator=(PS5AdvancedHapticsPlayerController const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__HapticsAudioClipPlayer__Pool __declspec(property(get=__get__hapticsPlayerPool, put=__set__hapticsPlayerPool))  _hapticsPlayerPool;

constexpr void __set__hapticsPlayerPool(::GlobalNamespace::____GlobalNamespace__HapticsAudioClipPlayer__Pool value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__HapticsAudioClipPlayer__Pool __get__hapticsPlayerPool() const;

 ::GlobalNamespace::ICoroutineStarter __declspec(property(get=__get__coroutineStarter, put=__set__coroutineStarter))  _coroutineStarter;

constexpr void __set__coroutineStarter(::GlobalNamespace::ICoroutineStarter value) ;

constexpr ::GlobalNamespace::ICoroutineStarter __get__coroutineStarter() const;

 ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::XR::XRNode,::Libraries::HM::HMLib::VR::HapticPresetSO>,::GlobalNamespace::HapticsAudioClipPlayer> __declspec(property(get=__get__activePlayers, put=__set__activePlayers))  _activePlayers;

constexpr void __set__activePlayers(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::XR::XRNode,::Libraries::HM::HMLib::VR::HapticPresetSO>,::GlobalNamespace::HapticsAudioClipPlayer> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::XR::XRNode,::Libraries::HM::HMLib::VR::HapticPresetSO>,::GlobalNamespace::HapticsAudioClipPlayer> __get__activePlayers() const;


// Methods

/// @brief Method Initialize addr 0x1f887a4 size 0x4 virtual true final true
 void Initialize() ;

/// @brief Method PlayHapticFeedback addr 0x1f887a8 size 0x24 virtual true final true
 void PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::Libraries::HM::HMLib::VR::HapticPresetSO hapticPreset) ;

/// @brief Method CanPlayHapticPreset addr 0x1f88b78 size 0x68 virtual true final true
 bool CanPlayHapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO hapticPreset) ;

/// @brief Method PlayContinuousHapticPreset addr 0x1f889a0 size 0x1d8 virtual false final false
 void PlayContinuousHapticPreset(::UnityEngine::XR::XRNode node, ::Libraries::HM::HMLib::VR::HapticPresetSO hapticPreset) ;

/// @brief Method PlayOneShotHapticPreset addr 0x1f887cc size 0x1d4 virtual false final false
 void PlayOneShotHapticPreset(::UnityEngine::XR::XRNode node, ::Libraries::HM::HMLib::VR::HapticPresetSO hapticPreset) ;

/// @brief Method OnHapticPlayFinishedCallback addr 0x1f88bf0 size 0x58 virtual false final false
 void OnHapticPlayFinishedCallback(::GlobalNamespace::HapticsAudioClipPlayer player) ;

// Ctor Parameters []
explicit PS5AdvancedHapticsPlayerController() ;

/// @brief Method .ctor addr 0x1f88c48 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::PS5AdvancedHapticsPlayerController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5AdvancedHapticsPlayerController, "", "PS5AdvancedHapticsPlayerController");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0, "", "PS5AdvancedHapticsPlayerController/<>c__DisplayClass6_0");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0, "", "PS5AdvancedHapticsPlayerController/<>c__DisplayClass7_0");
