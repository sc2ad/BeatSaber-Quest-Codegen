#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
class Transform;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class BeatmapObjectSpawnCenter;
}
namespace GlobalNamespace {
class MultiplayerCenterResizeController;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType;
}
namespace GlobalNamespace {
class MultiplayerEnvironmentResizeController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData;
}
// Type: ::ResizeType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5303))
// CS Name: MultiplayerEnvironmentResizeController::ResizeType
struct CORDL_TYPE ____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType(____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType const&) = default;
                    constexpr ____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType(____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType&&) = default;
                    constexpr ____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType& operator=(____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType& operator=(____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType_Unwrapped : int32_t {
__None = 0,
__Position = 1,
__Length = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::GlobalNamespace::____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType const None;

/// @brief Field Position offset 0
static ::GlobalNamespace::____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType const Position;

/// @brief Field Length offset 0
static ::GlobalNamespace::____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType const Length;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ResizeData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5304))
// CS Name: MultiplayerEnvironmentResizeController::ResizeData
class CORDL_TYPE ____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData(____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData(____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData& operator=(____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData&& o) noexcept = default;
  constexpr ____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData& operator=(____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType __declspec(property(get=__get__resizeType, put=__set__resizeType))  _resizeType;

constexpr void __set__resizeType(::GlobalNamespace::____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType __get__resizeType() const;

 float_t __declspec(property(get=__get__offset, put=__set__offset))  _offset;

constexpr void __set__offset(float_t value) ;

constexpr float_t __get__offset() const;

 ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight> __declspec(property(get=__get__lights, put=__set__lights))  _lights;

constexpr void __set__lights(::ArrayW<::GlobalNamespace::TubeBloomPrePassLight> value) ;

constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight> __get__lights() const;

 ::ArrayW<::UnityEngine::Transform> __declspec(property(get=__get__otherTransforms, put=__set__otherTransforms))  _otherTransforms;

constexpr void __set__otherTransforms(::ArrayW<::UnityEngine::Transform> value) ;

constexpr ::ArrayW<::UnityEngine::Transform> __get__otherTransforms() const;


// Properties

 ::GlobalNamespace::____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType __declspec(property(get=get_resizeType))  resizeType;

 float_t __declspec(property(get=get_offset))  offset;

 ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight> __declspec(property(get=get_lights))  lights;

 ::ArrayW<::UnityEngine::Transform> __declspec(property(get=get_otherTransforms))  otherTransforms;


// Methods

/// @brief Method get_resizeType addr 0x20f7778 size 0x8 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType get_resizeType() ;

/// @brief Method get_offset addr 0x20f7780 size 0x8 virtual false final false
 float_t get_offset() ;

/// @brief Method get_lights addr 0x20f7788 size 0x8 virtual false final false
 ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight> get_lights() ;

/// @brief Method get_otherTransforms addr 0x20f7790 size 0x8 virtual false final false
 ::ArrayW<::UnityEngine::Transform> get_otherTransforms() ;

// Ctor Parameters []
explicit ____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData() ;

/// @brief Method .ctor addr 0x20f7798 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerEnvironmentResizeController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5305))
// CS Name: MultiplayerEnvironmentResizeController
class CORDL_TYPE MultiplayerEnvironmentResizeController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ResizeData = ::GlobalNamespace::____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData;

using ResizeType = ::GlobalNamespace::____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~MultiplayerEnvironmentResizeController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerEnvironmentResizeController", modifiers: " const&", def_value: None }]
constexpr MultiplayerEnvironmentResizeController(MultiplayerEnvironmentResizeController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerEnvironmentResizeController", modifiers: "&&", def_value: None }]
constexpr MultiplayerEnvironmentResizeController(MultiplayerEnvironmentResizeController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerEnvironmentResizeController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerEnvironmentResizeController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerEnvironmentResizeController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerEnvironmentResizeController& operator=(MultiplayerEnvironmentResizeController&& o) noexcept = default;
  constexpr MultiplayerEnvironmentResizeController& operator=(MultiplayerEnvironmentResizeController const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Transform __declspec(property(get=__get__platformEnd, put=__set__platformEnd))  _platformEnd;

constexpr void __set__platformEnd(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__platformEnd() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData> __declspec(property(get=__get__resizeData, put=__set__resizeData))  _resizeData;

constexpr void __set__resizeData(::ArrayW<::GlobalNamespace::____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData> __get__resizeData() const;

 ::GlobalNamespace::MultiplayerCenterResizeController __declspec(property(get=__get__centerResizeController, put=__set__centerResizeController))  _centerResizeController;

constexpr void __set__centerResizeController(::GlobalNamespace::MultiplayerCenterResizeController value) ;

constexpr ::GlobalNamespace::MultiplayerCenterResizeController __get__centerResizeController() const;

 ::GlobalNamespace::BeatmapObjectSpawnCenter __declspec(property(get=__get__beatmapObjectSpawnCenter, put=__set__beatmapObjectSpawnCenter))  _beatmapObjectSpawnCenter;

constexpr void __set__beatmapObjectSpawnCenter(::GlobalNamespace::BeatmapObjectSpawnCenter value) ;

constexpr ::GlobalNamespace::BeatmapObjectSpawnCenter __get__beatmapObjectSpawnCenter() const;

 ::System::Action __declspec(property(get=__get_resizingDidFinishEvent, put=__set_resizingDidFinishEvent))  resizingDidFinishEvent;

constexpr void __set_resizingDidFinishEvent(::System::Action value) ;

constexpr ::System::Action __get_resizingDidFinishEvent() const;

 bool __declspec(property(get=__get__isResizingFinished, put=__set__isResizingFinished))  _isResizingFinished;

constexpr void __set__isResizingFinished(bool value) ;

constexpr bool __get__isResizingFinished() const;

 bool __declspec(property(get=__get__edgeDistanceFromCenterFound, put=__set__edgeDistanceFromCenterFound))  _edgeDistanceFromCenterFound;

constexpr void __set__edgeDistanceFromCenterFound(bool value) ;

constexpr bool __get__edgeDistanceFromCenterFound() const;

 bool __declspec(property(get=__get__spawnCenterDistanceFound, put=__set__spawnCenterDistanceFound))  _spawnCenterDistanceFound;

constexpr void __set__spawnCenterDistanceFound(bool value) ;

constexpr bool __get__spawnCenterDistanceFound() const;


// Properties

 bool __declspec(property(get=get_isResizingFinished))  isResizingFinished;


// Methods

/// @brief Method get_isResizingFinished addr 0x20f7174 size 0x8 virtual false final false
 bool get_isResizingFinished() ;

/// @brief Method add_resizingDidFinishEvent addr 0x20f717c size 0x9c virtual false final false
 void add_resizingDidFinishEvent(::System::Action value) ;

/// @brief Method remove_resizingDidFinishEvent addr 0x20f7218 size 0x9c virtual false final false
 void remove_resizingDidFinishEvent(::System::Action value) ;

/// @brief Method Start addr 0x20f72b4 size 0x13c virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20f7420 size 0x150 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleEdgeDistanceFromCenterWasCalculated addr 0x20f73f0 size 0x18 virtual false final false
 void HandleEdgeDistanceFromCenterWasCalculated(float_t edgeDistanceFromCenter) ;

/// @brief Method HandleSpawnCenterDistanceWasFound addr 0x20f7408 size 0x18 virtual false final false
 void HandleSpawnCenterDistanceWasFound(float_t distance) ;

/// @brief Method TryResize addr 0x20f7570 size 0x18 virtual false final false
 void TryResize() ;

/// @brief Method Resize addr 0x20f7588 size 0x1e8 virtual false final false
 void Resize() ;

// Ctor Parameters []
explicit MultiplayerEnvironmentResizeController() ;

/// @brief Method .ctor addr 0x20f7770 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType, "", "MultiplayerEnvironmentResizeController/ResizeType");
NEED_NO_BOX(::GlobalNamespace::MultiplayerEnvironmentResizeController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerEnvironmentResizeController, "", "MultiplayerEnvironmentResizeController");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData, "", "MultiplayerEnvironmentResizeController/ResizeData");
