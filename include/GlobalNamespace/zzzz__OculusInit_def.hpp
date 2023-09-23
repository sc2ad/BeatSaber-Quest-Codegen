#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Oculus::Platform {
class Oculus__Platform__Message__Callback;
}
namespace Oculus::Platform {
class Message;
}
namespace Oculus::Platform {
template<typename T>
class Message_1;
}
namespace GlobalNamespace {
class DlcPromoPanelModel;
}
namespace GlobalNamespace {
class OculusDeeplinkManager;
}
namespace Oculus::Platform::Models {
class PlatformInitialize;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__OculusInit____c;
}
namespace GlobalNamespace {
class OculusInit;
}
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4022))
// CS Name: OculusInit::<>c
class CORDL_TYPE GlobalNamespace__OculusInit____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__OculusInit____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusInit____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OculusInit____c(GlobalNamespace__OculusInit____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusInit____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OculusInit____c(GlobalNamespace__OculusInit____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusInit____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OculusInit____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OculusInit____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OculusInit____c& operator=(GlobalNamespace__OculusInit____c&& o) noexcept = default;
  constexpr GlobalNamespace__OculusInit____c& operator=(GlobalNamespace__OculusInit____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__OculusInit____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__OculusInit____c value) ;

static GlobalNamespace::GlobalNamespace__OculusInit____c __get___9() ;

static Oculus::Platform::Oculus__Platform__Message__Callback __declspec(property(get=__get___9__6_0, put=__set___9__6_0))  __9__6_0;

static void __set___9__6_0(Oculus::Platform::Oculus__Platform__Message__Callback value) ;

static Oculus::Platform::Oculus__Platform__Message__Callback __get___9__6_0() ;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__OculusInit____c() ;

/// @brief Method .ctor addr 0x20b7450 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <InitCallback>b__6_0 addr 0x20b7458 size 0xe4 virtual false final false
 void _InitCallback_b__6_0(Oculus::Platform::Message message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OculusInit
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4023))
// CS Name: OculusInit
class CORDL_TYPE OculusInit : public UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = GlobalNamespace::GlobalNamespace__OculusInit____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~OculusInit() = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusInit", modifiers: " const&", def_value: None }]
constexpr OculusInit(OculusInit const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusInit", modifiers: "&&", def_value: None }]
constexpr OculusInit(OculusInit&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OculusInit(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OculusInit& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OculusInit& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OculusInit& operator=(OculusInit&& o) noexcept = default;
  constexpr OculusInit& operator=(OculusInit const& o) noexcept = default;
                


// Fields

 GlobalNamespace::OculusDeeplinkManager __declspec(property(get=__get__oculusDeeplinkManager, put=__set__oculusDeeplinkManager))  _oculusDeeplinkManager;

constexpr void __set__oculusDeeplinkManager(GlobalNamespace::OculusDeeplinkManager value) ;

constexpr GlobalNamespace::OculusDeeplinkManager __get__oculusDeeplinkManager() const;

 GlobalNamespace::DlcPromoPanelModel __declspec(property(get=__get__dlcPromoPanelModel, put=__set__dlcPromoPanelModel))  _dlcPromoPanelModel;

constexpr void __set__dlcPromoPanelModel(GlobalNamespace::DlcPromoPanelModel value) ;

constexpr GlobalNamespace::DlcPromoPanelModel __get__dlcPromoPanelModel() const;

static bool __declspec(property(get=__get___enabled, put=__set___enabled))  __enabled;

static void __set___enabled(bool value) ;

static bool __get___enabled() ;


// Methods

/// @brief Method NoDomainReloadInit addr 0x20b6f2c size 0x5c virtual false final false
static void NoDomainReloadInit() ;

/// @brief Method Init addr 0x20b6f88 size 0xb4 virtual false final false
 void Init() ;

/// @brief Method TryToInitialize addr 0x20b703c size 0x1a0 virtual false final false
 void TryToInitialize() ;

/// @brief Method InitCallback addr 0x20b71dc size 0x1bc virtual false final false
 void InitCallback(Oculus::Platform::Message_1<Oculus::Platform::Models::PlatformInitialize> msg) ;

// Ctor Parameters []
explicit OculusInit() ;

/// @brief Method .ctor addr 0x20b7398 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OculusInit____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusInit____c, "", "OculusInit/<>c");
NEED_NO_BOX(GlobalNamespace::OculusInit);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusInit, "", "OculusInit");
