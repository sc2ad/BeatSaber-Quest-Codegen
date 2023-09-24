#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
struct SaberType;
}
namespace GlobalNamespace {
class Saber;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class GlobalNamespace__SaberManager__InitData;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__SaberManager__InitData;
}
namespace GlobalNamespace {
class SaberManager;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5385))
// CS Name: SaberManager::InitData
class CORDL_TYPE GlobalNamespace__SaberManager__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__SaberManager__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SaberManager__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__SaberManager__InitData(GlobalNamespace__SaberManager__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SaberManager__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__SaberManager__InitData(GlobalNamespace__SaberManager__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SaberManager__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__SaberManager__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__SaberManager__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__SaberManager__InitData& operator=(GlobalNamespace__SaberManager__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__SaberManager__InitData& operator=(GlobalNamespace__SaberManager__InitData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_oneSaberMode, put=__set_oneSaberMode))  oneSaberMode;

constexpr void __set_oneSaberMode(bool value) ;

constexpr bool __get_oneSaberMode() const;

 GlobalNamespace::SaberType __declspec(property(get=__get_oneSaberType, put=__set_oneSaberType))  oneSaberType;

constexpr void __set_oneSaberType(GlobalNamespace::SaberType value) ;

constexpr GlobalNamespace::SaberType __get_oneSaberType() const;


// Methods

static GlobalNamespace::GlobalNamespace__SaberManager__InitData New_ctor(bool oneSaberMode, GlobalNamespace::SaberType oneSaberType) ;

/// @brief Method .ctor addr 0x210c338 size 0x30 virtual false final false
 void _ctor(bool oneSaberMode, GlobalNamespace::SaberType oneSaberType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SaberManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5386))
// CS Name: SaberManager
class CORDL_TYPE SaberManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
using InitData = GlobalNamespace::GlobalNamespace__SaberManager__InitData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~SaberManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "SaberManager", modifiers: " const&", def_value: None }]
constexpr SaberManager(SaberManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SaberManager", modifiers: "&&", def_value: None }]
constexpr SaberManager(SaberManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SaberManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SaberManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SaberManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SaberManager& operator=(SaberManager&& o) noexcept = default;
  constexpr SaberManager& operator=(SaberManager const& o) noexcept = default;
                


// Fields

 GlobalNamespace::Saber __declspec(property(get=__get__leftSaber, put=__set__leftSaber))  _leftSaber;

constexpr void __set__leftSaber(GlobalNamespace::Saber value) ;

constexpr GlobalNamespace::Saber __get__leftSaber() const;

 GlobalNamespace::Saber __declspec(property(get=__get__rightSaber, put=__set__rightSaber))  _rightSaber;

constexpr void __set__rightSaber(GlobalNamespace::Saber value) ;

constexpr GlobalNamespace::Saber __get__rightSaber() const;

 GlobalNamespace::GlobalNamespace__SaberManager__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(GlobalNamespace::GlobalNamespace__SaberManager__InitData value) ;

constexpr GlobalNamespace::GlobalNamespace__SaberManager__InitData __get__initData() const;

 bool __declspec(property(get=__get__started, put=__set__started))  _started;

constexpr void __set__started(bool value) ;

constexpr bool __get__started() const;

 System::Action_2<GlobalNamespace::Saber,GlobalNamespace::Saber> __declspec(property(get=__get_didUpdateSaberPositionsEvent, put=__set_didUpdateSaberPositionsEvent))  didUpdateSaberPositionsEvent;

constexpr void __set_didUpdateSaberPositionsEvent(System::Action_2<GlobalNamespace::Saber,GlobalNamespace::Saber> value) ;

constexpr System::Action_2<GlobalNamespace::Saber,GlobalNamespace::Saber> __get_didUpdateSaberPositionsEvent() const;


// Properties

 GlobalNamespace::Saber __declspec(property(get=get_leftSaber))  leftSaber;

 GlobalNamespace::Saber __declspec(property(get=get_rightSaber))  rightSaber;

 bool __declspec(property(put=set_disableSabers))  disableSabers;


// Methods

/// @brief Method get_leftSaber addr 0x210c0d8 size 0x8 virtual false final false
 GlobalNamespace::Saber get_leftSaber() ;

/// @brief Method get_rightSaber addr 0x210c0e0 size 0x8 virtual false final false
 GlobalNamespace::Saber get_rightSaber() ;

/// @brief Method add_didUpdateSaberPositionsEvent addr 0x210aa70 size 0xb0 virtual false final false
 void add_didUpdateSaberPositionsEvent(System::Action_2<GlobalNamespace::Saber,GlobalNamespace::Saber> value) ;

/// @brief Method remove_didUpdateSaberPositionsEvent addr 0x210aba8 size 0xb0 virtual false final false
 void remove_didUpdateSaberPositionsEvent(System::Action_2<GlobalNamespace::Saber,GlobalNamespace::Saber> value) ;

/// @brief Method set_disableSabers addr 0x210c0e8 size 0x10 virtual false final false
 void set_disableSabers(bool value) ;

/// @brief Method Start addr 0x210c0f8 size 0x1c virtual false final false
 void Start() ;

/// @brief Method OnDisable addr 0x210c238 size 0x4 virtual false final false
 void OnDisable() ;

/// @brief Method OnEnable addr 0x210c23c size 0x10 virtual false final false
 void OnEnable() ;

/// @brief Method Update addr 0x210c24c size 0x94 virtual false final false
 void Update() ;

/// @brief Method SaberForType addr 0x210c2e0 size 0x50 virtual false final false
 GlobalNamespace::Saber SaberForType(GlobalNamespace::SaberType saberType) ;

/// @brief Method RefreshSabers addr 0x210c114 size 0x124 virtual false final false
 void RefreshSabers() ;

static GlobalNamespace::SaberManager New_ctor() ;

/// @brief Method .ctor addr 0x210c330 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__SaberManager__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SaberManager__InitData, "", "SaberManager/InitData");
NEED_NO_BOX(GlobalNamespace::SaberManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberManager, "", "SaberManager");
