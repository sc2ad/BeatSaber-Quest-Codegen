#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace UnityEngine {
class RectTransform;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Slider;
}
namespace UnityEngine::UI {
class Image;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class SongProgressUIController;
}
// Type: ::SongProgressUIController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5148))
// CS Name: SongProgressUIController
class CORDL_TYPE SongProgressUIController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~SongProgressUIController() = default;

// Ctor Parameters [CppParam { name: "", ty: "SongProgressUIController", modifiers: " const&", def_value: None }]
constexpr SongProgressUIController(SongProgressUIController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SongProgressUIController", modifiers: "&&", def_value: None }]
constexpr SongProgressUIController(SongProgressUIController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SongProgressUIController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SongProgressUIController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SongProgressUIController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SongProgressUIController& operator=(SongProgressUIController&& o) noexcept = default;
  constexpr SongProgressUIController& operator=(SongProgressUIController const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Slider __declspec(property(get=__get__slider, put=__set__slider))  _slider;

constexpr void __set__slider(UnityEngine::UI::Slider value) ;

constexpr UnityEngine::UI::Slider __get__slider() const;

 UnityEngine::UI::Image __declspec(property(get=__get__progressImage, put=__set__progressImage))  _progressImage;

constexpr void __set__progressImage(UnityEngine::UI::Image value) ;

constexpr UnityEngine::UI::Image __get__progressImage() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__durationMinutesText, put=__set__durationMinutesText))  _durationMinutesText;

constexpr void __set__durationMinutesText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__durationMinutesText() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__durationSecondsText, put=__set__durationSecondsText))  _durationSecondsText;

constexpr void __set__durationSecondsText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__durationSecondsText() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__progressMinutesText, put=__set__progressMinutesText))  _progressMinutesText;

constexpr void __set__progressMinutesText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__progressMinutesText() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__progressSecondsText, put=__set__progressSecondsText))  _progressSecondsText;

constexpr void __set__progressSecondsText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__progressSecondsText() const;

 GlobalNamespace::IAudioTimeSource __declspec(property(get=__get__audioTimeSource, put=__set__audioTimeSource))  _audioTimeSource;

constexpr void __set__audioTimeSource(GlobalNamespace::IAudioTimeSource value) ;

constexpr GlobalNamespace::IAudioTimeSource __get__audioTimeSource() const;

 int32_t __declspec(property(get=__get__prevMinutes, put=__set__prevMinutes))  _prevMinutes;

constexpr void __set__prevMinutes(int32_t value) ;

constexpr int32_t __get__prevMinutes() const;

 int32_t __declspec(property(get=__get__prevSeconds, put=__set__prevSeconds))  _prevSeconds;

constexpr void __set__prevSeconds(int32_t value) ;

constexpr int32_t __get__prevSeconds() const;

 System::Text::StringBuilder __declspec(property(get=__get__stringBuilder, put=__set__stringBuilder))  _stringBuilder;

constexpr void __set__stringBuilder(System::Text::StringBuilder value) ;

constexpr System::Text::StringBuilder __get__stringBuilder() const;

 UnityEngine::RectTransform __declspec(property(get=__get__progressImageRectTransform, put=__set__progressImageRectTransform))  _progressImageRectTransform;

constexpr void __set__progressImageRectTransform(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get__progressImageRectTransform() const;


// Methods

/// @brief Method Start addr 0x20cd938 size 0x1a4 virtual false final false
 void Start() ;

/// @brief Method Update addr 0x20cdadc size 0x2e8 virtual false final false
 void Update() ;

// Ctor Parameters []
explicit SongProgressUIController() ;

/// @brief Method .ctor addr 0x20cddc4 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SongProgressUIController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongProgressUIController, "", "SongProgressUIController");
