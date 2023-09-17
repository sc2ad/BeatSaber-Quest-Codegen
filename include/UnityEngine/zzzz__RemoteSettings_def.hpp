#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class Action;
}
// Forward declare root types
namespace UnityEngine {
class RemoteSettings;
}
namespace UnityEngine {
class UnityEngine__RemoteSettings__UpdatedEventHandler;
}
namespace {
// Type: ::UpdatedEventHandler
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15931))
// CS Name: UnityEngine.RemoteSettings::UpdatedEventHandler
class CORDL_TYPE UnityEngine__RemoteSettings__UpdatedEventHandler : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__RemoteSettings__UpdatedEventHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__RemoteSettings__UpdatedEventHandler", modifiers: " const&", def_value: None }]
constexpr UnityEngine__RemoteSettings__UpdatedEventHandler(UnityEngine__RemoteSettings__UpdatedEventHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__RemoteSettings__UpdatedEventHandler", modifiers: "&&", def_value: None }]
constexpr UnityEngine__RemoteSettings__UpdatedEventHandler(UnityEngine__RemoteSettings__UpdatedEventHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__RemoteSettings__UpdatedEventHandler(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__RemoteSettings__UpdatedEventHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__RemoteSettings__UpdatedEventHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__RemoteSettings__UpdatedEventHandler& operator=(UnityEngine__RemoteSettings__UpdatedEventHandler&& o) noexcept = default;
  constexpr UnityEngine__RemoteSettings__UpdatedEventHandler& operator=(UnityEngine__RemoteSettings__UpdatedEventHandler const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityEngine__RemoteSettings__UpdatedEventHandler(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2d423e4 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2d424a0 size 0x14 virtual true final false
 void Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::RemoteSettings
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15932))
// CS Name: UnityEngine.RemoteSettings
class CORDL_TYPE RemoteSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using UpdatedEventHandler = UnityEngine::UnityEngine__RemoteSettings__UpdatedEventHandler;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RemoteSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteSettings", modifiers: " const&", def_value: None }]
constexpr RemoteSettings(RemoteSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteSettings", modifiers: "&&", def_value: None }]
constexpr RemoteSettings(RemoteSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RemoteSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RemoteSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RemoteSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RemoteSettings& operator=(RemoteSettings&& o) noexcept = default;
  constexpr RemoteSettings& operator=(RemoteSettings const& o) noexcept = default;
                


// Fields

static UnityEngine::UnityEngine__RemoteSettings__UpdatedEventHandler __declspec(property(get=__get_Updated, put=__set_Updated))  Updated;

static void __set_Updated(UnityEngine::UnityEngine__RemoteSettings__UpdatedEventHandler value) ;

static UnityEngine::UnityEngine__RemoteSettings__UpdatedEventHandler __get_Updated() ;

static System::Action __declspec(property(get=__get_BeforeFetchFromServer, put=__set_BeforeFetchFromServer))  BeforeFetchFromServer;

static void __set_BeforeFetchFromServer(System::Action value) ;

static System::Action __get_BeforeFetchFromServer() ;

static System::Action_3<bool,bool,int32_t> __declspec(property(get=__get_Completed, put=__set_Completed))  Completed;

static void __set_Completed(System::Action_3<bool,bool,int32_t> value) ;

static System::Action_3<bool,bool,int32_t> __get_Completed() ;


// Methods

/// @brief Method RemoteSettingsUpdated addr 0x2d42294 size 0x64 virtual false final false
static void RemoteSettingsUpdated(bool wasLastUpdatedFromServer) ;

/// @brief Method RemoteSettingsBeforeFetchFromServer addr 0x2d422f8 size 0x64 virtual false final false
static void RemoteSettingsBeforeFetchFromServer() ;

/// @brief Method RemoteSettingsUpdateCompleted addr 0x2d4235c size 0x88 virtual false final false
static void RemoteSettingsUpdateCompleted(bool wasLastUpdatedFromServer, bool settingsChanged, int32_t response) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::RemoteSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RemoteSettings, "UnityEngine", "RemoteSettings");
NEED_NO_BOX(::UnityEngine::UnityEngine__RemoteSettings__UpdatedEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UnityEngine__RemoteSettings__UpdatedEventHandler, "UnityEngine", "RemoteSettings/UpdatedEventHandler");
} // end anonymous namespace
