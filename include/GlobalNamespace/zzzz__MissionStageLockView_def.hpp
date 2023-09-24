#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionStageLockView;
}
// Type: ::MissionStageLockView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5641))
// CS Name: MissionStageLockView
class CORDL_TYPE MissionStageLockView : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MissionStageLockView() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionStageLockView", modifiers: " const&", def_value: None }]
constexpr MissionStageLockView(MissionStageLockView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionStageLockView", modifiers: "&&", def_value: None }]
constexpr MissionStageLockView(MissionStageLockView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionStageLockView(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MissionStageLockView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionStageLockView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionStageLockView& operator=(MissionStageLockView&& o) noexcept = default;
  constexpr MissionStageLockView& operator=(MissionStageLockView const& o) noexcept = default;
                


// Fields

 TMPro::TMP_Text __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(TMPro::TMP_Text value) ;

constexpr TMPro::TMP_Text __get__text() const;

 UnityEngine::RectTransform __declspec(property(get=__get__rectTransform, put=__set__rectTransform))  _rectTransform;

constexpr void __set__rectTransform(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get__rectTransform() const;

 float_t __declspec(property(get=__get__dstPosY, put=__set__dstPosY))  _dstPosY;

constexpr void __set__dstPosY(float_t value) ;

constexpr float_t __get__dstPosY() const;

 float_t __declspec(property(get=__get__animationDuration, put=__set__animationDuration))  _animationDuration;

constexpr void __set__animationDuration(float_t value) ;

constexpr float_t __get__animationDuration() const;

 float_t __declspec(property(get=__get__startAnimationTime, put=__set__startAnimationTime))  _startAnimationTime;

constexpr void __set__startAnimationTime(float_t value) ;

constexpr float_t __get__startAnimationTime() const;


// Methods

/// @brief Method UpdateLocalPositionY addr 0x214aaf8 size 0x64 virtual false final false
 void UpdateLocalPositionY(float_t dstPosY, bool animated, float_t animationDuration) ;

/// @brief Method Update addr 0x214ab5c size 0xd0 virtual false final false
 void Update() ;

/// @brief Method UpdateStageLockText addr 0x214ac2c size 0x24 virtual false final false
 void UpdateStageLockText(::StringW text) ;

static GlobalNamespace::MissionStageLockView New_ctor() ;

/// @brief Method .ctor addr 0x214ac50 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MissionStageLockView);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionStageLockView, "", "MissionStageLockView");
