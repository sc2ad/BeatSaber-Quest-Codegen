#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class BPMChangeBeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class IBpmController;
}
// Forward declare root types
namespace GlobalNamespace {
class BpmController;
}
namespace GlobalNamespace {
class GlobalNamespace__BpmController__InitData;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4947))
// CS Name: BpmController::InitData
class CORDL_TYPE GlobalNamespace__BpmController__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__BpmController__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BpmController__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BpmController__InitData(GlobalNamespace__BpmController__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BpmController__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BpmController__InitData(GlobalNamespace__BpmController__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BpmController__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BpmController__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BpmController__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BpmController__InitData& operator=(GlobalNamespace__BpmController__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__BpmController__InitData& operator=(GlobalNamespace__BpmController__InitData const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_startBpm, put=__set_startBpm))  startBpm;

constexpr void __set_startBpm(float_t value) ;

constexpr float_t __get_startBpm() const;


// Methods

// Ctor Parameters [CppParam { name: "startBpm", ty: "float_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__BpmController__InitData(float_t startBpm) ;

/// @brief Method .ctor addr 0x224d610 size 0x28 virtual false final false
 void _ctor(float_t startBpm) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BpmController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4948))
// CS Name: BpmController
class CORDL_TYPE BpmController : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using InitData = GlobalNamespace::GlobalNamespace__BpmController__InitData;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief Convert operator to GlobalNamespace::IBpmController
constexpr operator  GlobalNamespace::IBpmController() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BpmController() = default;

// Ctor Parameters [CppParam { name: "", ty: "BpmController", modifiers: " const&", def_value: None }]
constexpr BpmController(BpmController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BpmController", modifiers: "&&", def_value: None }]
constexpr BpmController(BpmController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BpmController(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BpmController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BpmController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BpmController& operator=(BpmController&& o) noexcept = default;
  constexpr BpmController& operator=(BpmController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(GlobalNamespace::BeatmapCallbacksController value) ;

constexpr GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__beatmapDataCallback, put=__set__beatmapDataCallback))  _beatmapDataCallback;

constexpr void __set__beatmapDataCallback(GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr GlobalNamespace::BeatmapDataCallbackWrapper __get__beatmapDataCallback() const;

 float_t __declspec(property(get=__get__currentBpm, put=__set__currentBpm))  _currentBpm;

constexpr void __set__currentBpm(float_t value) ;

constexpr float_t __get__currentBpm() const;


// Properties

 float_t __declspec(property(get=get_currentBpm))  currentBpm;


// Methods

/// @brief Method get_currentBpm addr 0x224d500 size 0x8 virtual true final true
 float_t get_currentBpm() ;

// Ctor Parameters [CppParam { name: "initData", ty: "GlobalNamespace::GlobalNamespace__BpmController__InitData", modifiers: "", def_value: None }, CppParam { name: "beatmapCallbacksController", ty: "GlobalNamespace::BeatmapCallbacksController", modifiers: "", def_value: None }]
explicit BpmController(GlobalNamespace::GlobalNamespace__BpmController__InitData initData, GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController) ;

/// @brief Method .ctor addr 0x224d508 size 0xd0 virtual false final false
 void _ctor(GlobalNamespace::GlobalNamespace__BpmController__InitData initData, GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController) ;

/// @brief Method Dispose addr 0x224d5d8 size 0x1c virtual true final true
 void Dispose() ;

/// @brief Method HandleBpmChangeBeatmapEvent addr 0x224d5f4 size 0x1c virtual false final false
 void HandleBpmChangeBeatmapEvent(GlobalNamespace::BPMChangeBeatmapEventData bpmChangeBeatmapEventData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BpmController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BpmController, "", "BpmController");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BpmController__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BpmController__InitData, "", "BpmController/InitData");
