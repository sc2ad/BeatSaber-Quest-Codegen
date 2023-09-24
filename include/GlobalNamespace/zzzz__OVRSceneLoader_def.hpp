#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AssetBundle;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRSceneLoader__SceneInfo;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRSceneLoader___onCheckSceneCoroutine_d__25;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRSceneLoader___DelayCanvasPosUpdate_d__24;
}
namespace UnityEngine {
class Canvas;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__OVRSceneLoader___DelayCanvasPosUpdate_d__24;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRSceneLoader___onCheckSceneCoroutine_d__25;
}
namespace GlobalNamespace {
class OVRSceneLoader;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRSceneLoader__SceneInfo;
}
// Type: ::SceneInfo
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8815))
// CS Name: OVRSceneLoader::SceneInfo
struct CORDL_TYPE GlobalNamespace__OVRSceneLoader__SceneInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "scenes", ty: "System::Collections::Generic::List_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "version", ty: "int64_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRSceneLoader__SceneInfo(System::Collections::Generic::List_1<::StringW> scenes, int64_t version) noexcept;


                    constexpr GlobalNamespace__OVRSceneLoader__SceneInfo(GlobalNamespace__OVRSceneLoader__SceneInfo const&) = default;
                    constexpr GlobalNamespace__OVRSceneLoader__SceneInfo(GlobalNamespace__OVRSceneLoader__SceneInfo&&) = default;
                    constexpr GlobalNamespace__OVRSceneLoader__SceneInfo& operator=(GlobalNamespace__OVRSceneLoader__SceneInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRSceneLoader__SceneInfo& operator=(GlobalNamespace__OVRSceneLoader__SceneInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRSceneLoader__SceneInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_scenes, put=__set_scenes))  scenes;

constexpr void __set_scenes(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_scenes() const;

 int64_t __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(int64_t value) ;

constexpr int64_t __get_version() const;


// Methods

/// @brief Method .ctor addr 0x2604a14 size 0x8 virtual false final false
 void _ctor(System::Collections::Generic::List_1<::StringW> sceneList, int64_t currentSceneEpochVersion) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<DelayCanvasPosUpdate>d__24
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8816))
// CS Name: OVRSceneLoader::<DelayCanvasPosUpdate>d__24
class CORDL_TYPE GlobalNamespace__OVRSceneLoader___DelayCanvasPosUpdate_d__24 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__OVRSceneLoader___DelayCanvasPosUpdate_d__24() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRSceneLoader___DelayCanvasPosUpdate_d__24", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRSceneLoader___DelayCanvasPosUpdate_d__24(GlobalNamespace__OVRSceneLoader___DelayCanvasPosUpdate_d__24 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRSceneLoader___DelayCanvasPosUpdate_d__24", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRSceneLoader___DelayCanvasPosUpdate_d__24(GlobalNamespace__OVRSceneLoader___DelayCanvasPosUpdate_d__24&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRSceneLoader___DelayCanvasPosUpdate_d__24(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRSceneLoader___DelayCanvasPosUpdate_d__24& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRSceneLoader___DelayCanvasPosUpdate_d__24& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRSceneLoader___DelayCanvasPosUpdate_d__24& operator=(GlobalNamespace__OVRSceneLoader___DelayCanvasPosUpdate_d__24&& o) noexcept = default;
  constexpr GlobalNamespace__OVRSceneLoader___DelayCanvasPosUpdate_d__24& operator=(GlobalNamespace__OVRSceneLoader___DelayCanvasPosUpdate_d__24 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::OVRSceneLoader __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::OVRSceneLoader value) ;

constexpr GlobalNamespace::OVRSceneLoader __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__OVRSceneLoader___DelayCanvasPosUpdate_d__24 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2604808 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2604a1c size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2604a20 size 0xa4 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2604ac4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2604acc size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2604b0c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<onCheckSceneCoroutine>d__25
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8817))
// CS Name: OVRSceneLoader::<onCheckSceneCoroutine>d__25
class CORDL_TYPE GlobalNamespace__OVRSceneLoader___onCheckSceneCoroutine_d__25 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__OVRSceneLoader___onCheckSceneCoroutine_d__25() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRSceneLoader___onCheckSceneCoroutine_d__25", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRSceneLoader___onCheckSceneCoroutine_d__25(GlobalNamespace__OVRSceneLoader___onCheckSceneCoroutine_d__25 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRSceneLoader___onCheckSceneCoroutine_d__25", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRSceneLoader___onCheckSceneCoroutine_d__25(GlobalNamespace__OVRSceneLoader___onCheckSceneCoroutine_d__25&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRSceneLoader___onCheckSceneCoroutine_d__25(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRSceneLoader___onCheckSceneCoroutine_d__25& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRSceneLoader___onCheckSceneCoroutine_d__25& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRSceneLoader___onCheckSceneCoroutine_d__25& operator=(GlobalNamespace__OVRSceneLoader___onCheckSceneCoroutine_d__25&& o) noexcept = default;
  constexpr GlobalNamespace__OVRSceneLoader___onCheckSceneCoroutine_d__25& operator=(GlobalNamespace__OVRSceneLoader___onCheckSceneCoroutine_d__25 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::OVRSceneLoader __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::OVRSceneLoader value) ;

constexpr GlobalNamespace::OVRSceneLoader __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__OVRSceneLoader___onCheckSceneCoroutine_d__25 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2604830 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2604b14 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2604b18 size 0x34c virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2604e64 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2604e6c size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2604eac size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRSceneLoader
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8818))
// CS Name: OVRSceneLoader
class CORDL_TYPE OVRSceneLoader : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _onCheckSceneCoroutine_d__25 = GlobalNamespace::GlobalNamespace__OVRSceneLoader___onCheckSceneCoroutine_d__25;

using _DelayCanvasPosUpdate_d__24 = GlobalNamespace::GlobalNamespace__OVRSceneLoader___DelayCanvasPosUpdate_d__24;

using SceneInfo = GlobalNamespace::GlobalNamespace__OVRSceneLoader__SceneInfo;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~OVRSceneLoader() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneLoader", modifiers: " const&", def_value: None }]
constexpr OVRSceneLoader(OVRSceneLoader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneLoader", modifiers: "&&", def_value: None }]
constexpr OVRSceneLoader(OVRSceneLoader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRSceneLoader(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRSceneLoader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRSceneLoader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRSceneLoader& operator=(OVRSceneLoader&& o) noexcept = default;
  constexpr OVRSceneLoader& operator=(OVRSceneLoader const& o) noexcept = default;
                


// Fields

/// @brief Field externalStoragePath offset 0
static constexpr ::ConstString  externalStoragePath{u"/sdcard/Android/data"};

/// @brief Field sceneLoadDataName offset 0
static constexpr ::ConstString  sceneLoadDataName{u"SceneLoadData.txt"};

/// @brief Field resourceBundleName offset 0
static constexpr ::ConstString  resourceBundleName{u"asset_resources"};

 float_t __declspec(property(get=__get_sceneCheckIntervalSeconds, put=__set_sceneCheckIntervalSeconds))  sceneCheckIntervalSeconds;

constexpr void __set_sceneCheckIntervalSeconds(float_t value) ;

constexpr float_t __get_sceneCheckIntervalSeconds() const;

 float_t __declspec(property(get=__get_logCloseTime, put=__set_logCloseTime))  logCloseTime;

constexpr void __set_logCloseTime(float_t value) ;

constexpr float_t __get_logCloseTime() const;

 UnityEngine::Canvas __declspec(property(get=__get_mainCanvas, put=__set_mainCanvas))  mainCanvas;

constexpr void __set_mainCanvas(UnityEngine::Canvas value) ;

constexpr UnityEngine::Canvas __get_mainCanvas() const;

 UnityEngine::UI::Text __declspec(property(get=__get_logTextBox, put=__set_logTextBox))  logTextBox;

constexpr void __set_logTextBox(UnityEngine::UI::Text value) ;

constexpr UnityEngine::UI::Text __get_logTextBox() const;

 UnityEngine::AsyncOperation __declspec(property(get=__get_loadSceneOperation, put=__set_loadSceneOperation))  loadSceneOperation;

constexpr void __set_loadSceneOperation(UnityEngine::AsyncOperation value) ;

constexpr UnityEngine::AsyncOperation __get_loadSceneOperation() const;

 ::StringW __declspec(property(get=__get_formattedLogText, put=__set_formattedLogText))  formattedLogText;

constexpr void __set_formattedLogText(::StringW value) ;

constexpr ::StringW __get_formattedLogText() const;

 float_t __declspec(property(get=__get_closeLogTimer, put=__set_closeLogTimer))  closeLogTimer;

constexpr void __set_closeLogTimer(float_t value) ;

constexpr float_t __get_closeLogTimer() const;

 bool __declspec(property(get=__get_closeLogDialogue, put=__set_closeLogDialogue))  closeLogDialogue;

constexpr void __set_closeLogDialogue(bool value) ;

constexpr bool __get_closeLogDialogue() const;

 bool __declspec(property(get=__get_canvasPosUpdated, put=__set_canvasPosUpdated))  canvasPosUpdated;

constexpr void __set_canvasPosUpdated(bool value) ;

constexpr bool __get_canvasPosUpdated() const;

 ::StringW __declspec(property(get=__get_scenePath, put=__set_scenePath))  scenePath;

constexpr void __set_scenePath(::StringW value) ;

constexpr ::StringW __get_scenePath() const;

 ::StringW __declspec(property(get=__get_sceneLoadDataPath, put=__set_sceneLoadDataPath))  sceneLoadDataPath;

constexpr void __set_sceneLoadDataPath(::StringW value) ;

constexpr ::StringW __get_sceneLoadDataPath() const;

 System::Collections::Generic::List_1<UnityEngine::AssetBundle> __declspec(property(get=__get_loadedAssetBundles, put=__set_loadedAssetBundles))  loadedAssetBundles;

constexpr void __set_loadedAssetBundles(System::Collections::Generic::List_1<UnityEngine::AssetBundle> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::AssetBundle> __get_loadedAssetBundles() const;

 GlobalNamespace::GlobalNamespace__OVRSceneLoader__SceneInfo __declspec(property(get=__get_currentSceneInfo, put=__set_currentSceneInfo))  currentSceneInfo;

constexpr void __set_currentSceneInfo(GlobalNamespace::GlobalNamespace__OVRSceneLoader__SceneInfo value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRSceneLoader__SceneInfo __get_currentSceneInfo() const;


// Methods

/// @brief Method Awake addr 0x26034f8 size 0x6c virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x2603564 size 0x14c virtual false final false
 void Start() ;

/// @brief Method LoadScene addr 0x26039a4 size 0x8ac virtual false final false
 void LoadScene(GlobalNamespace::GlobalNamespace__OVRSceneLoader__SceneInfo sceneInfo) ;

/// @brief Method LoadSceneOperation_completed addr 0x2604250 size 0xdc virtual false final false
 void LoadSceneOperation_completed(UnityEngine::AsyncOperation obj) ;

/// @brief Method Update addr 0x2604394 size 0x274 virtual false final false
 void Update() ;

/// @brief Method UpdateCanvasPosition addr 0x2604608 size 0x200 virtual false final false
 void UpdateCanvasPosition() ;

/// @brief Method GetSceneInfo addr 0x2603718 size 0x28c virtual false final false
 GlobalNamespace::GlobalNamespace__OVRSceneLoader__SceneInfo GetSceneInfo() ;

/// @brief Method DelayCanvasPosUpdate addr 0x26036b0 size 0x68 virtual false final false
 System::Collections::IEnumerator DelayCanvasPosUpdate() ;

/// @brief Method onCheckSceneCoroutine addr 0x260432c size 0x68 virtual false final false
 System::Collections::IEnumerator onCheckSceneCoroutine() ;

/// @brief Method DestroyAllGameObjects addr 0x2604858 size 0x110 virtual false final false
 void DestroyAllGameObjects() ;

static GlobalNamespace::OVRSceneLoader New_ctor() ;

/// @brief Method .ctor addr 0x2604968 size 0xac virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRSceneLoader___DelayCanvasPosUpdate_d__24);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRSceneLoader___DelayCanvasPosUpdate_d__24, "", "OVRSceneLoader/<DelayCanvasPosUpdate>d__24");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRSceneLoader___onCheckSceneCoroutine_d__25);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRSceneLoader___onCheckSceneCoroutine_d__25, "", "OVRSceneLoader/<onCheckSceneCoroutine>d__25");
NEED_NO_BOX(GlobalNamespace::OVRSceneLoader);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSceneLoader, "", "OVRSceneLoader");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRSceneLoader__SceneInfo, "", "OVRSceneLoader/SceneInfo");
