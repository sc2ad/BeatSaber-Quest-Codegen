#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace GlobalNamespace {
class VisualMetronome;
}
// Type: ::VisualMetronome
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5493))
// CS Name: VisualMetronome
class CORDL_TYPE VisualMetronome : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~VisualMetronome() = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualMetronome", modifiers: " const&", def_value: None }]
constexpr VisualMetronome(VisualMetronome const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualMetronome", modifiers: "&&", def_value: None }]
constexpr VisualMetronome(VisualMetronome&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VisualMetronome(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr VisualMetronome& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VisualMetronome& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VisualMetronome& operator=(VisualMetronome&& o) noexcept = default;
  constexpr VisualMetronome& operator=(VisualMetronome const& o) noexcept = default;
                


// Fields

 UnityEngine::AudioSource __declspec(property(get=__get__audioSource, put=__set__audioSource))  _audioSource;

constexpr void __set__audioSource(UnityEngine::AudioSource value) ;

constexpr UnityEngine::AudioSource __get__audioSource() const;

 float_t __declspec(property(get=__get__leftPadding, put=__set__leftPadding))  _leftPadding;

constexpr void __set__leftPadding(float_t value) ;

constexpr float_t __get__leftPadding() const;

 float_t __declspec(property(get=__get__rightPadding, put=__set__rightPadding))  _rightPadding;

constexpr void __set__rightPadding(float_t value) ;

constexpr float_t __get__rightPadding() const;

 UnityEngine::RectTransform __declspec(property(get=__get__ticker, put=__set__ticker))  _ticker;

constexpr void __set__ticker(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get__ticker() const;

 UnityEngine::RectTransform __declspec(property(get=__get__movingTicker, put=__set__movingTicker))  _movingTicker;

constexpr void __set__movingTicker(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get__movingTicker() const;

 UnityEngine::UI::Image __declspec(property(get=__get__tickerImage, put=__set__tickerImage))  _tickerImage;

constexpr void __set__tickerImage(UnityEngine::UI::Image value) ;

constexpr UnityEngine::UI::Image __get__tickerImage() const;

 UnityEngine::UI::Image __declspec(property(get=__get__movingTickerImage, put=__set__movingTickerImage))  _movingTickerImage;

constexpr void __set__movingTickerImage(UnityEngine::UI::Image value) ;

constexpr UnityEngine::UI::Image __get__movingTickerImage() const;

 float_t __declspec(property(get=__get__metronomeInterval, put=__set__metronomeInterval))  _metronomeInterval;

constexpr void __set__metronomeInterval(float_t value) ;

constexpr float_t __get__metronomeInterval() const;

 UnityEngine::Vector2 __declspec(property(get=__get__normalTickerSize, put=__set__normalTickerSize))  _normalTickerSize;

constexpr void __set__normalTickerSize(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__normalTickerSize() const;

 UnityEngine::Vector2 __declspec(property(get=__get__tickTickerSize0, put=__set__tickTickerSize0))  _tickTickerSize0;

constexpr void __set__tickTickerSize0(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__tickTickerSize0() const;

 UnityEngine::Vector2 __declspec(property(get=__get__tickTickerSize1, put=__set__tickTickerSize1))  _tickTickerSize1;

constexpr void __set__tickTickerSize1(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__tickTickerSize1() const;

 float_t __declspec(property(get=__get__smooth, put=__set__smooth))  _smooth;

constexpr void __set__smooth(float_t value) ;

constexpr float_t __get__smooth() const;

 float_t __declspec(property(get=__get__prevAudioTime, put=__set__prevAudioTime))  _prevAudioTime;

constexpr void __set__prevAudioTime(float_t value) ;

constexpr float_t __get__prevAudioTime() const;

 float_t __declspec(property(get=__get__zeroOffset, put=__set__zeroOffset))  _zeroOffset;

constexpr void __set__zeroOffset(float_t value) ;

constexpr float_t __get__zeroOffset() const;

 float_t __declspec(property(get=__get__direction, put=__set__direction))  _direction;

constexpr void __set__direction(float_t value) ;

constexpr float_t __get__direction() const;

 bool __declspec(property(get=__get__dontTickThisFrame, put=__set__dontTickThisFrame))  _dontTickThisFrame;

constexpr void __set__dontTickThisFrame(bool value) ;

constexpr bool __get__dontTickThisFrame() const;


// Properties

 UnityEngine::Color __declspec(property(put=set_tickerColor))  tickerColor;

 UnityEngine::Color __declspec(property(put=set_movingTickerColor))  movingTickerColor;

 float_t __declspec(property(get=get_zeroOffset, put=set_zeroOffset))  zeroOffset;


// Methods

/// @brief Method set_tickerColor addr 0x211c72c size 0x24 virtual false final false
 void set_tickerColor(UnityEngine::Color value) ;

/// @brief Method set_movingTickerColor addr 0x211c750 size 0x24 virtual false final false
 void set_movingTickerColor(UnityEngine::Color value) ;

/// @brief Method set_zeroOffset addr 0x211c774 size 0x10 virtual false final false
 void set_zeroOffset(float_t value) ;

/// @brief Method get_zeroOffset addr 0x211c784 size 0x8 virtual false final false
 float_t get_zeroOffset() ;

/// @brief Method Awake addr 0x211c78c size 0x98 virtual false final false
 void Awake() ;

/// @brief Method OnEnable addr 0x211c824 size 0x48 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x211c86c size 0x48 virtual false final false
 void OnDisable() ;

/// @brief Method Update addr 0x211c8b4 size 0x150 virtual false final false
 void Update() ;

/// @brief Method SetMovingTickerNormalizedPosition addr 0x211ca04 size 0xc8 virtual false final false
 void SetMovingTickerNormalizedPosition(float_t t) ;

static GlobalNamespace::VisualMetronome New_ctor() ;

/// @brief Method .ctor addr 0x211cacc size 0x3c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::VisualMetronome);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VisualMetronome, "", "VisualMetronome");
