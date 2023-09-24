#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine {
struct ThreadPriority;
}
namespace UnityEngine {
struct SystemLanguage;
}
namespace UnityEngine {
class UnityEngine__Application__LogCallback;
}
namespace UnityEngine {
struct LogType;
}
namespace System {
class Action;
}
namespace UnityEngine::Events {
class UnityAction;
}
namespace UnityEngine {
class UnityEngine__Application__LowMemoryCallback;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine {
struct RuntimePlatform;
}
namespace UnityEngine {
struct NetworkReachability;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace UnityEngine {
class Application;
}
namespace UnityEngine {
class UnityEngine__Application__LogCallback;
}
namespace UnityEngine {
class UnityEngine__Application__LowMemoryCallback;
}
// Type: ::LowMemoryCallback
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10209))
// CS Name: UnityEngine.Application::LowMemoryCallback
class CORDL_TYPE UnityEngine__Application__LowMemoryCallback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__Application__LowMemoryCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Application__LowMemoryCallback", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Application__LowMemoryCallback(UnityEngine__Application__LowMemoryCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Application__LowMemoryCallback", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Application__LowMemoryCallback(UnityEngine__Application__LowMemoryCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Application__LowMemoryCallback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__Application__LowMemoryCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Application__LowMemoryCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Application__LowMemoryCallback& operator=(UnityEngine__Application__LowMemoryCallback&& o) noexcept = default;
  constexpr UnityEngine__Application__LowMemoryCallback& operator=(UnityEngine__Application__LowMemoryCallback const& o) noexcept = default;
                


// Methods

static UnityEngine::UnityEngine__Application__LowMemoryCallback New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2b695ac size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2b69668 size 0x14 virtual true final false
 void Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: ::LogCallback
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10210))
// CS Name: UnityEngine.Application::LogCallback
class CORDL_TYPE UnityEngine__Application__LogCallback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__Application__LogCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Application__LogCallback", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Application__LogCallback(UnityEngine__Application__LogCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Application__LogCallback", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Application__LogCallback(UnityEngine__Application__LogCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Application__LogCallback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__Application__LogCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Application__LogCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Application__LogCallback& operator=(UnityEngine__Application__LogCallback&& o) noexcept = default;
  constexpr UnityEngine__Application__LogCallback& operator=(UnityEngine__Application__LogCallback const& o) noexcept = default;
                


// Methods

static UnityEngine::UnityEngine__Application__LogCallback New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2b6967c size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2b69754 size 0x14 virtual true final false
 void Invoke(::StringW condition, ::StringW stackTrace, UnityEngine::LogType type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::Application
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10211))
// CS Name: UnityEngine.Application
class CORDL_TYPE Application : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using LogCallback = UnityEngine::UnityEngine__Application__LogCallback;

using LowMemoryCallback = UnityEngine::UnityEngine__Application__LowMemoryCallback;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Application() = default;

// Ctor Parameters [CppParam { name: "", ty: "Application", modifiers: " const&", def_value: None }]
constexpr Application(Application const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Application", modifiers: "&&", def_value: None }]
constexpr Application(Application&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Application(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Application& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Application& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Application& operator=(Application&& o) noexcept = default;
  constexpr Application& operator=(Application const& o) noexcept = default;
                


// Fields

static UnityEngine::UnityEngine__Application__LowMemoryCallback __declspec(property(get=__get_lowMemory, put=__set_lowMemory))  lowMemory;

static void __set_lowMemory(UnityEngine::UnityEngine__Application__LowMemoryCallback value) ;

static UnityEngine::UnityEngine__Application__LowMemoryCallback __get_lowMemory() ;

static UnityEngine::UnityEngine__Application__LogCallback __declspec(property(get=__get_s_LogCallbackHandler, put=__set_s_LogCallbackHandler))  s_LogCallbackHandler;

static void __set_s_LogCallbackHandler(UnityEngine::UnityEngine__Application__LogCallback value) ;

static UnityEngine::UnityEngine__Application__LogCallback __get_s_LogCallbackHandler() ;

static UnityEngine::UnityEngine__Application__LogCallback __declspec(property(get=__get_s_LogCallbackHandlerThreaded, put=__set_s_LogCallbackHandlerThreaded))  s_LogCallbackHandlerThreaded;

static void __set_s_LogCallbackHandlerThreaded(UnityEngine::UnityEngine__Application__LogCallback value) ;

static UnityEngine::UnityEngine__Application__LogCallback __get_s_LogCallbackHandlerThreaded() ;

static System::Action_1<bool> __declspec(property(get=__get_focusChanged, put=__set_focusChanged))  focusChanged;

static void __set_focusChanged(System::Action_1<bool> value) ;

static System::Action_1<bool> __get_focusChanged() ;

static System::Action_1<::StringW> __declspec(property(get=__get_deepLinkActivated, put=__set_deepLinkActivated))  deepLinkActivated;

static void __set_deepLinkActivated(System::Action_1<::StringW> value) ;

static System::Action_1<::StringW> __get_deepLinkActivated() ;

static System::Func_1<bool> __declspec(property(get=__get_wantsToQuit, put=__set_wantsToQuit))  wantsToQuit;

static void __set_wantsToQuit(System::Func_1<bool> value) ;

static System::Func_1<bool> __get_wantsToQuit() ;

static System::Action __declspec(property(get=__get_quitting, put=__set_quitting))  quitting;

static void __set_quitting(System::Action value) ;

static System::Action __get_quitting() ;

static System::Action __declspec(property(get=__get_unloading, put=__set_unloading))  unloading;

static void __set_unloading(System::Action value) ;

static System::Action __get_unloading() ;


// Properties

static bool __declspec(property(get=get_isPlaying))  isPlaying;

static bool __declspec(property(get=get_isFocused))  isFocused;

static bool __declspec(property(get=get_runInBackground, put=set_runInBackground))  runInBackground;

static bool __declspec(property(get=get_isBatchMode))  isBatchMode;

static ::StringW __declspec(property(get=get_dataPath))  dataPath;

static ::StringW __declspec(property(get=get_streamingAssetsPath))  streamingAssetsPath;

static ::StringW __declspec(property(get=get_persistentDataPath))  persistentDataPath;

static ::StringW __declspec(property(get=get_temporaryCachePath))  temporaryCachePath;

static ::StringW __declspec(property(get=get_unityVersion))  unityVersion;

static ::StringW __declspec(property(get=get_version))  version;

static ::StringW __declspec(property(get=get_identifier))  identifier;

static ::StringW __declspec(property(get=get_productName))  productName;

static ::StringW __declspec(property(get=get_companyName))  companyName;

static int32_t __declspec(property(put=set_targetFrameRate))  targetFrameRate;

static UnityEngine::ThreadPriority __declspec(property(put=set_backgroundLoadingPriority))  backgroundLoadingPriority;

static UnityEngine::RuntimePlatform __declspec(property(get=get_platform))  platform;

static bool __declspec(property(get=get_isMobilePlatform))  isMobilePlatform;

static UnityEngine::SystemLanguage __declspec(property(get=get_systemLanguage))  systemLanguage;

static UnityEngine::NetworkReachability __declspec(property(get=get_internetReachability))  internetReachability;

static bool __declspec(property(get=get_isEditor))  isEditor;


// Methods

/// @brief Method Quit addr 0x2b6860c size 0x3c virtual false final false
static void Quit(int32_t exitCode) ;

/// @brief Method Quit addr 0x2b68648 size 0x30 virtual false final false
static void Quit() ;

/// @brief Method CanStreamedLevelBeLoaded addr 0x2b68678 size 0x68 virtual false final false
static bool CanStreamedLevelBeLoaded(int32_t levelIndex) ;

/// @brief Method CanStreamedLevelBeLoaded addr 0x2b68740 size 0x3c virtual false final false
static bool CanStreamedLevelBeLoaded(::StringW levelName) ;

/// @brief Method get_isPlaying addr 0x2b6877c size 0x28 virtual false final false
static bool get_isPlaying() ;

/// @brief Method get_isFocused addr 0x2b687a4 size 0x28 virtual false final false
static bool get_isFocused() ;

/// @brief Method get_runInBackground addr 0x2b687cc size 0x28 virtual false final false
static bool get_runInBackground() ;

/// @brief Method set_runInBackground addr 0x2b687f4 size 0x3c virtual false final false
static void set_runInBackground(bool value) ;

/// @brief Method get_isBatchMode addr 0x2b68830 size 0x28 virtual false final false
static bool get_isBatchMode() ;

/// @brief Method get_dataPath addr 0x2b68858 size 0x28 virtual false final false
static ::StringW get_dataPath() ;

/// @brief Method get_streamingAssetsPath addr 0x2b68880 size 0x28 virtual false final false
static ::StringW get_streamingAssetsPath() ;

/// @brief Method get_persistentDataPath addr 0x2b688a8 size 0x28 virtual false final false
static ::StringW get_persistentDataPath() ;

/// @brief Method get_temporaryCachePath addr 0x2b688d0 size 0x28 virtual false final false
static ::StringW get_temporaryCachePath() ;

/// @brief Method get_unityVersion addr 0x2b688f8 size 0x28 virtual false final false
static ::StringW get_unityVersion() ;

/// @brief Method get_version addr 0x2b68920 size 0x28 virtual false final false
static ::StringW get_version() ;

/// @brief Method get_identifier addr 0x2b68948 size 0x28 virtual false final false
static ::StringW get_identifier() ;

/// @brief Method get_productName addr 0x2b68970 size 0x28 virtual false final false
static ::StringW get_productName() ;

/// @brief Method get_companyName addr 0x2b68998 size 0x28 virtual false final false
static ::StringW get_companyName() ;

/// @brief Method OpenURL addr 0x2b689c0 size 0x3c virtual false final false
static void OpenURL(::StringW url) ;

/// @brief Method set_targetFrameRate addr 0x2b689fc size 0x3c virtual false final false
static void set_targetFrameRate(int32_t value) ;

/// @brief Method SetLogCallbackDefined addr 0x2b68a38 size 0x3c virtual false final false
static void SetLogCallbackDefined(bool defined) ;

/// @brief Method set_backgroundLoadingPriority addr 0x2b68a74 size 0x3c virtual false final false
static void set_backgroundLoadingPriority(UnityEngine::ThreadPriority value) ;

/// @brief Method get_platform addr 0x2b68ab0 size 0x28 virtual false final false
static UnityEngine::RuntimePlatform get_platform() ;

/// @brief Method get_isMobilePlatform addr 0x2b68ad8 size 0x6c virtual false final false
static bool get_isMobilePlatform() ;

/// @brief Method get_systemLanguage addr 0x2b68b44 size 0x28 virtual false final false
static UnityEngine::SystemLanguage get_systemLanguage() ;

/// @brief Method get_internetReachability addr 0x2b68b6c size 0x28 virtual false final false
static UnityEngine::NetworkReachability get_internetReachability() ;

/// @brief Method CallLowMemory addr 0x2b68b94 size 0x64 virtual false final false
static void CallLowMemory() ;

/// @brief Method add_logMessageReceived addr 0x2b68bf8 size 0xcc virtual false final false
static void add_logMessageReceived(UnityEngine::UnityEngine__Application__LogCallback value) ;

/// @brief Method remove_logMessageReceived addr 0x2b68cc4 size 0xa8 virtual false final false
static void remove_logMessageReceived(UnityEngine::UnityEngine__Application__LogCallback value) ;

/// @brief Method CallLogCallback addr 0x2b68d6c size 0xbc virtual false final false
static void CallLogCallback(::StringW logString, ::StringW stackTrace, UnityEngine::LogType type, bool invokedOnMainThread) ;

/// @brief Method add_onBeforeRender addr 0x2b68e28 size 0x58 virtual false final false
static void add_onBeforeRender(UnityEngine::Events::UnityAction value) ;

/// @brief Method remove_onBeforeRender addr 0x2b68e80 size 0x58 virtual false final false
static void remove_onBeforeRender(UnityEngine::Events::UnityAction value) ;

/// @brief Method add_focusChanged addr 0x2b68ed8 size 0xd0 virtual false final false
static void add_focusChanged(System::Action_1<bool> value) ;

/// @brief Method remove_focusChanged addr 0x2b68fa8 size 0xd0 virtual false final false
static void remove_focusChanged(System::Action_1<bool> value) ;

/// @brief Method add_quitting addr 0x2b69078 size 0xbc virtual false final false
static void add_quitting(System::Action value) ;

/// @brief Method remove_quitting addr 0x2b69134 size 0xbc virtual false final false
static void remove_quitting(System::Action value) ;

/// @brief Method Internal_ApplicationWantsToQuit addr 0x2b691f0 size 0x1c4 virtual false final false
static bool Internal_ApplicationWantsToQuit() ;

/// @brief Method Internal_ApplicationQuit addr 0x2b693b4 size 0x64 virtual false final false
static void Internal_ApplicationQuit() ;

/// @brief Method Internal_ApplicationUnload addr 0x2b69418 size 0x64 virtual false final false
static void Internal_ApplicationUnload() ;

/// @brief Method InvokeOnBeforeRender addr 0x2b6947c size 0x50 virtual false final false
static void InvokeOnBeforeRender() ;

/// @brief Method InvokeFocusChanged addr 0x2b694cc size 0x6c virtual false final false
static void InvokeFocusChanged(bool focus) ;

/// @brief Method InvokeDeepLinkActivated addr 0x2b69538 size 0x6c virtual false final false
static void InvokeDeepLinkActivated(::StringW url) ;

/// @brief Method get_isEditor addr 0x2b695a4 size 0x8 virtual false final false
static bool get_isEditor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Application);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Application, "UnityEngine", "Application");
NEED_NO_BOX(UnityEngine::UnityEngine__Application__LogCallback);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__Application__LogCallback, "UnityEngine", "Application/LogCallback");
NEED_NO_BOX(UnityEngine::UnityEngine__Application__LowMemoryCallback);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__Application__LowMemoryCallback, "UnityEngine", "Application/LowMemoryCallback");
