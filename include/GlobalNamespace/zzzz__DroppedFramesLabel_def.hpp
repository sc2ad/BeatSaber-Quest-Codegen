#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class DroppedFramesLabel;
}
// Type: ::DroppedFramesLabel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13757))
// CS Name: DroppedFramesLabel
class CORDL_TYPE DroppedFramesLabel : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~DroppedFramesLabel() = default;

// Ctor Parameters [CppParam { name: "", ty: "DroppedFramesLabel", modifiers: " const&", def_value: None }]
constexpr DroppedFramesLabel(DroppedFramesLabel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DroppedFramesLabel", modifiers: "&&", def_value: None }]
constexpr DroppedFramesLabel(DroppedFramesLabel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DroppedFramesLabel(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr DroppedFramesLabel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DroppedFramesLabel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DroppedFramesLabel& operator=(DroppedFramesLabel&& o) noexcept = default;
  constexpr DroppedFramesLabel& operator=(DroppedFramesLabel const& o) noexcept = default;
                


// Fields

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__text() const;

 int32_t __declspec(property(get=__get__expectedFrameRate, put=__set__expectedFrameRate))  _expectedFrameRate;

constexpr void __set__expectedFrameRate(int32_t value) ;

constexpr int32_t __get__expectedFrameRate() const;

 int32_t __declspec(property(get=__get__resetInterval, put=__set__resetInterval))  _resetInterval;

constexpr void __set__resetInterval(int32_t value) ;

constexpr int32_t __get__resetInterval() const;

 int32_t __declspec(property(get=__get__totalNumberOfDroppedFrames, put=__set__totalNumberOfDroppedFrames))  _totalNumberOfDroppedFrames;

constexpr void __set__totalNumberOfDroppedFrames(int32_t value) ;

constexpr int32_t __get__totalNumberOfDroppedFrames() const;

 float_t __declspec(property(get=__get__syncedFrameTime, put=__set__syncedFrameTime))  _syncedFrameTime;

constexpr void __set__syncedFrameTime(float_t value) ;

constexpr float_t __get__syncedFrameTime() const;

 float_t __declspec(property(get=__get__intervalTime, put=__set__intervalTime))  _intervalTime;

constexpr void __set__intervalTime(float_t value) ;

constexpr float_t __get__intervalTime() const;

 float_t __declspec(property(get=__get__maxFrameTimeInInterval, put=__set__maxFrameTimeInInterval))  _maxFrameTimeInInterval;

constexpr void __set__maxFrameTimeInInterval(float_t value) ;

constexpr float_t __get__maxFrameTimeInInterval() const;

 int32_t __declspec(property(get=__get__frameCountInInterval, put=__set__frameCountInInterval))  _frameCountInInterval;

constexpr void __set__frameCountInInterval(int32_t value) ;

constexpr int32_t __get__frameCountInInterval() const;


// Methods

/// @brief Method Start addr 0x1f73f60 size 0x74 virtual false final false
 void Start() ;

/// @brief Method Update addr 0x1f73fd4 size 0x90 virtual false final false
 void Update() ;

/// @brief Method RefreshText addr 0x1f74064 size 0x168 virtual false final false
 void RefreshText() ;

// Ctor Parameters []
explicit DroppedFramesLabel() ;

/// @brief Method .ctor addr 0x1f741cc size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::DroppedFramesLabel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DroppedFramesLabel, "", "DroppedFramesLabel");
