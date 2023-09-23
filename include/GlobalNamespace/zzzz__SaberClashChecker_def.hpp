#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class Saber;
}
namespace GlobalNamespace {
class SaberManager;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberClashChecker;
}
// Type: ::SaberClashChecker
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5384))
// CS Name: SaberClashChecker
class CORDL_TYPE SaberClashChecker : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~SaberClashChecker() = default;

// Ctor Parameters [CppParam { name: "", ty: "SaberClashChecker", modifiers: " const&", def_value: None }]
constexpr SaberClashChecker(SaberClashChecker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SaberClashChecker", modifiers: "&&", def_value: None }]
constexpr SaberClashChecker(SaberClashChecker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SaberClashChecker(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SaberClashChecker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SaberClashChecker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SaberClashChecker& operator=(SaberClashChecker&& o) noexcept = default;
  constexpr SaberClashChecker& operator=(SaberClashChecker const& o) noexcept = default;
                


// Fields

/// @brief Field kMinDistanceToClash offset 0
static constexpr float_t  kMinDistanceToClash{0.08};

/// @brief Field kIgnoredTime offset 0
static constexpr float_t  kIgnoredTime{0.1};

 bool __declspec(property(get=__get__sabersAreClashing, put=__set__sabersAreClashing))  _sabersAreClashing;

constexpr void __set__sabersAreClashing(bool value) ;

constexpr bool __get__sabersAreClashing() const;

 UnityEngine::Vector3 __declspec(property(get=__get__clashingPoint, put=__set__clashingPoint))  _clashingPoint;

constexpr void __set__clashingPoint(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__clashingPoint() const;

 GlobalNamespace::Saber __declspec(property(get=__get__leftSaber, put=__set__leftSaber))  _leftSaber;

constexpr void __set__leftSaber(GlobalNamespace::Saber value) ;

constexpr GlobalNamespace::Saber __get__leftSaber() const;

 GlobalNamespace::Saber __declspec(property(get=__get__rightSaber, put=__set__rightSaber))  _rightSaber;

constexpr void __set__rightSaber(GlobalNamespace::Saber value) ;

constexpr GlobalNamespace::Saber __get__rightSaber() const;

 int32_t __declspec(property(get=__get__prevGetFrameNum, put=__set__prevGetFrameNum))  _prevGetFrameNum;

constexpr void __set__prevGetFrameNum(int32_t value) ;

constexpr int32_t __get__prevGetFrameNum() const;


// Methods

/// @brief Method Init addr 0x210be44 size 0x1c virtual false final false
 void Init(GlobalNamespace::SaberManager saberManager) ;

/// @brief Method AreSabersClashing addr 0x2107bd4 size 0x164 virtual false final false
 bool AreSabersClashing(ByRef<UnityEngine::Vector3> clashingPoint) ;

/// @brief Method SegmentToSegmentDist addr 0x210be60 size 0x268 virtual false final false
 float_t SegmentToSegmentDist(UnityEngine::Vector3 fromA, UnityEngine::Vector3 toA, UnityEngine::Vector3 fromB, UnityEngine::Vector3 toB, ByRef<UnityEngine::Vector3> inbetweenPoint) ;

// Ctor Parameters []
explicit SaberClashChecker() ;

/// @brief Method .ctor addr 0x210c0c8 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SaberClashChecker);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberClashChecker, "", "SaberClashChecker");
