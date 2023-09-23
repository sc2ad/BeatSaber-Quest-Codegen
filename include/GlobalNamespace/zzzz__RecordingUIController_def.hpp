#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__RecordingUIController__InitData;
}
namespace GlobalNamespace {
class RecordingUIController;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5140))
// CS Name: RecordingUIController::InitData
class CORDL_TYPE GlobalNamespace__RecordingUIController__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__RecordingUIController__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RecordingUIController__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RecordingUIController__InitData(GlobalNamespace__RecordingUIController__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RecordingUIController__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RecordingUIController__InitData(GlobalNamespace__RecordingUIController__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RecordingUIController__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RecordingUIController__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RecordingUIController__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RecordingUIController__InitData& operator=(GlobalNamespace__RecordingUIController__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__RecordingUIController__InitData& operator=(GlobalNamespace__RecordingUIController__InitData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_recordingEnabled, put=__set_recordingEnabled))  recordingEnabled;

constexpr void __set_recordingEnabled(bool value) ;

constexpr bool __get_recordingEnabled() const;


// Methods

// Ctor Parameters [CppParam { name: "recordingEnabled", ty: "bool", modifiers: "", def_value: None }]
explicit GlobalNamespace__RecordingUIController__InitData(bool recordingEnabled) ;

/// @brief Method .ctor addr 0x2276e04 size 0x28 virtual false final false
 void _ctor(bool recordingEnabled) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RecordingUIController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5141))
// CS Name: RecordingUIController
class CORDL_TYPE RecordingUIController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using InitData = GlobalNamespace::GlobalNamespace__RecordingUIController__InitData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~RecordingUIController() = default;

// Ctor Parameters [CppParam { name: "", ty: "RecordingUIController", modifiers: " const&", def_value: None }]
constexpr RecordingUIController(RecordingUIController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RecordingUIController", modifiers: "&&", def_value: None }]
constexpr RecordingUIController(RecordingUIController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RecordingUIController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr RecordingUIController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RecordingUIController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RecordingUIController& operator=(RecordingUIController&& o) noexcept = default;
  constexpr RecordingUIController& operator=(RecordingUIController const& o) noexcept = default;
                


// Fields

 UnityEngine::GameObject __declspec(property(get=__get__circle, put=__set__circle))  _circle;

constexpr void __set__circle(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__circle() const;

 float_t __declspec(property(get=__get__updateTimeSpan, put=__set__updateTimeSpan))  _updateTimeSpan;

constexpr void __set__updateTimeSpan(float_t value) ;

constexpr float_t __get__updateTimeSpan() const;

 GlobalNamespace::GlobalNamespace__RecordingUIController__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(GlobalNamespace::GlobalNamespace__RecordingUIController__InitData value) ;

constexpr GlobalNamespace::GlobalNamespace__RecordingUIController__InitData __get__initData() const;

 float_t __declspec(property(get=__get__lastUpdateTime, put=__set__lastUpdateTime))  _lastUpdateTime;

constexpr void __set__lastUpdateTime(float_t value) ;

constexpr float_t __get__lastUpdateTime() const;


// Methods

/// @brief Method Init addr 0x2276d08 size 0x80 virtual false final false
 void Init() ;

/// @brief Method Update addr 0x2276d88 size 0x6c virtual false final false
 void Update() ;

// Ctor Parameters []
explicit RecordingUIController() ;

/// @brief Method .ctor addr 0x2276df4 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__RecordingUIController__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__RecordingUIController__InitData, "", "RecordingUIController/InitData");
NEED_NO_BOX(GlobalNamespace::RecordingUIController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RecordingUIController, "", "RecordingUIController");
