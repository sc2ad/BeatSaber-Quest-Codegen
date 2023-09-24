#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace GlobalNamespace {
class ISaberMovementData;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
template<typename T>
class LazyCopyHashSet_1;
}
namespace GlobalNamespace {
class ISaberSwingRatingCounterDidFinishReceiver;
}
namespace GlobalNamespace {
struct BladeMovementDataElement;
}
namespace GlobalNamespace {
class ISaberMovementDataProcessor;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Plane;
}
namespace GlobalNamespace {
class ISaberSwingRatingCounter;
}
namespace GlobalNamespace {
class ISaberSwingRatingCounterDidChangeReceiver;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberSwingRatingCounter;
}
// Type: ::SaberSwingRatingCounter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4224))
// CS Name: SaberSwingRatingCounter
class CORDL_TYPE SaberSwingRatingCounter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::ISaberSwingRatingCounter
constexpr operator  GlobalNamespace::ISaberSwingRatingCounter() const noexcept;

/// @brief Convert operator to GlobalNamespace::ISaberMovementDataProcessor
constexpr operator  GlobalNamespace::ISaberMovementDataProcessor() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~SaberSwingRatingCounter() = default;

// Ctor Parameters [CppParam { name: "", ty: "SaberSwingRatingCounter", modifiers: " const&", def_value: None }]
constexpr SaberSwingRatingCounter(SaberSwingRatingCounter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SaberSwingRatingCounter", modifiers: "&&", def_value: None }]
constexpr SaberSwingRatingCounter(SaberSwingRatingCounter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SaberSwingRatingCounter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SaberSwingRatingCounter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SaberSwingRatingCounter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SaberSwingRatingCounter& operator=(SaberSwingRatingCounter&& o) noexcept = default;
  constexpr SaberSwingRatingCounter& operator=(SaberSwingRatingCounter const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ISaberMovementData __declspec(property(get=__get__saberMovementData, put=__set__saberMovementData))  _saberMovementData;

constexpr void __set__saberMovementData(GlobalNamespace::ISaberMovementData value) ;

constexpr GlobalNamespace::ISaberMovementData __get__saberMovementData() const;

 UnityEngine::Vector3 __declspec(property(get=__get__cutPlaneNormal, put=__set__cutPlaneNormal))  _cutPlaneNormal;

constexpr void __set__cutPlaneNormal(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__cutPlaneNormal() const;

 float_t __declspec(property(get=__get__cutTime, put=__set__cutTime))  _cutTime;

constexpr void __set__cutTime(float_t value) ;

constexpr float_t __get__cutTime() const;

 float_t __declspec(property(get=__get__afterCutRating, put=__set__afterCutRating))  _afterCutRating;

constexpr void __set__afterCutRating(float_t value) ;

constexpr float_t __get__afterCutRating() const;

 float_t __declspec(property(get=__get__beforeCutRating, put=__set__beforeCutRating))  _beforeCutRating;

constexpr void __set__beforeCutRating(float_t value) ;

constexpr float_t __get__beforeCutRating() const;

 UnityEngine::Plane __declspec(property(get=__get__notePlane, put=__set__notePlane))  _notePlane;

constexpr void __set__notePlane(UnityEngine::Plane value) ;

constexpr UnityEngine::Plane __get__notePlane() const;

 bool __declspec(property(get=__get__notePlaneWasCut, put=__set__notePlaneWasCut))  _notePlaneWasCut;

constexpr void __set__notePlaneWasCut(bool value) ;

constexpr bool __get__notePlaneWasCut() const;

 UnityEngine::Vector3 __declspec(property(get=__get__noteForward, put=__set__noteForward))  _noteForward;

constexpr void __set__noteForward(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__noteForward() const;

 bool __declspec(property(get=__get__rateBeforeCut, put=__set__rateBeforeCut))  _rateBeforeCut;

constexpr void __set__rateBeforeCut(bool value) ;

constexpr bool __get__rateBeforeCut() const;

 bool __declspec(property(get=__get__rateAfterCut, put=__set__rateAfterCut))  _rateAfterCut;

constexpr void __set__rateAfterCut(bool value) ;

constexpr bool __get__rateAfterCut() const;

 GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver> __declspec(property(get=__get__didChangeReceivers, put=__set__didChangeReceivers))  _didChangeReceivers;

constexpr void __set__didChangeReceivers(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver> value) ;

constexpr GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver> __get__didChangeReceivers() const;

 GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver> __declspec(property(get=__get__didFinishReceivers, put=__set__didFinishReceivers))  _didFinishReceivers;

constexpr void __set__didFinishReceivers(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver> value) ;

constexpr GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver> __get__didFinishReceivers() const;

 UnityEngine::Vector3 __declspec(property(get=__get__notePlaneCenter, put=__set__notePlaneCenter))  _notePlaneCenter;

constexpr void __set__notePlaneCenter(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__notePlaneCenter() const;

 UnityEngine::Vector3 __declspec(property(get=__get__beforeCutTopPos, put=__set__beforeCutTopPos))  _beforeCutTopPos;

constexpr void __set__beforeCutTopPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__beforeCutTopPos() const;

 UnityEngine::Vector3 __declspec(property(get=__get__beforeCutBottomPos, put=__set__beforeCutBottomPos))  _beforeCutBottomPos;

constexpr void __set__beforeCutBottomPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__beforeCutBottomPos() const;

 UnityEngine::Vector3 __declspec(property(get=__get__afterCutTopPos, put=__set__afterCutTopPos))  _afterCutTopPos;

constexpr void __set__afterCutTopPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__afterCutTopPos() const;

 UnityEngine::Vector3 __declspec(property(get=__get__afterCutBottomPos, put=__set__afterCutBottomPos))  _afterCutBottomPos;

constexpr void __set__afterCutBottomPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__afterCutBottomPos() const;

 UnityEngine::Vector3 __declspec(property(get=__get__newPlaneNormal, put=__set__newPlaneNormal))  _newPlaneNormal;

constexpr void __set__newPlaneNormal(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__newPlaneNormal() const;

 UnityEngine::Vector3 __declspec(property(get=__get__cutTopPos, put=__set__cutTopPos))  _cutTopPos;

constexpr void __set__cutTopPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__cutTopPos() const;

 UnityEngine::Vector3 __declspec(property(get=__get__cutBottomPos, put=__set__cutBottomPos))  _cutBottomPos;

constexpr void __set__cutBottomPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__cutBottomPos() const;

 bool __declspec(property(get=__get__finished, put=__set__finished))  _finished;

constexpr void __set__finished(bool value) ;

constexpr bool __get__finished() const;


// Properties

 float_t __declspec(property(get=get_beforeCutRating))  beforeCutRating;

 float_t __declspec(property(get=get_afterCutRating))  afterCutRating;


// Methods

/// @brief Method get_beforeCutRating addr 0x21c0f2c size 0x8 virtual true final true
 float_t get_beforeCutRating() ;

/// @brief Method get_afterCutRating addr 0x21c0f34 size 0x8 virtual true final true
 float_t get_afterCutRating() ;

/// @brief Method RegisterDidChangeReceiver addr 0x21c0f3c size 0x58 virtual true final true
 void RegisterDidChangeReceiver(GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver receiver) ;

/// @brief Method RegisterDidFinishReceiver addr 0x21c0f94 size 0x58 virtual true final true
 void RegisterDidFinishReceiver(GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver receiver) ;

/// @brief Method UnregisterDidChangeReceiver addr 0x21c0fec size 0x58 virtual true final true
 void UnregisterDidChangeReceiver(GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver receiver) ;

/// @brief Method UnregisterDidFinishReceiver addr 0x21c1044 size 0x58 virtual true final true
 void UnregisterDidFinishReceiver(GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver receiver) ;

/// @brief Method Init addr 0x21c109c size 0x364 virtual false final false
 void Init(GlobalNamespace::ISaberMovementData saberMovementData, UnityEngine::Vector3 notePosition, UnityEngine::Quaternion noteRotation, bool rateBeforeCut, bool rateAfterCut) ;

/// @brief Method ProcessNewData addr 0x21c1400 size 0x780 virtual true final true
 void ProcessNewData(GlobalNamespace::BladeMovementDataElement newData, GlobalNamespace::BladeMovementDataElement prevData, bool prevDataAreValid) ;

/// @brief Method Finish addr 0x21c1b80 size 0x1ac virtual false final false
 void Finish() ;

/// @brief Method DrawGizmos addr 0x21c1d2c size 0x384 virtual false final false
 void DrawGizmos() ;

static GlobalNamespace::SaberSwingRatingCounter New_ctor() ;

/// @brief Method .ctor addr 0x21c20b0 size 0xc0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SaberSwingRatingCounter);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberSwingRatingCounter, "", "SaberSwingRatingCounter");
