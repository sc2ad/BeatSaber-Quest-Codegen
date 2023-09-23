#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Video {
class VideoClip;
}
// Type: UnityEngine.Video::VideoClip
namespace UnityEngine::Video {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15908))
// CS Name: UnityEngine.Video.VideoClip
class CORDL_TYPE VideoClip : public UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~VideoClip() = default;

// Ctor Parameters [CppParam { name: "", ty: "VideoClip", modifiers: " const&", def_value: None }]
constexpr VideoClip(VideoClip const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VideoClip", modifiers: "&&", def_value: None }]
constexpr VideoClip(VideoClip&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VideoClip(void* ptr) noexcept : UnityEngine::Object(ptr) {
}


  constexpr VideoClip& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VideoClip& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VideoClip& operator=(VideoClip&& o) noexcept = default;
  constexpr VideoClip& operator=(VideoClip const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_originalPath))  originalPath;

 uint64_t __declspec(property(get=get_frameCount))  frameCount;

 double_t __declspec(property(get=get_frameRate))  frameRate;

 double_t __declspec(property(get=get_length))  length;

 uint32_t __declspec(property(get=get_width))  width;

 uint32_t __declspec(property(get=get_height))  height;

 uint32_t __declspec(property(get=get_pixelAspectRatioNumerator))  pixelAspectRatioNumerator;

 uint32_t __declspec(property(get=get_pixelAspectRatioDenominator))  pixelAspectRatioDenominator;

 bool __declspec(property(get=get_sRGB))  sRGB;

 uint16_t __declspec(property(get=get_audioTrackCount))  audioTrackCount;


// Methods

// Ctor Parameters []
explicit VideoClip() ;

/// @brief Method .ctor addr 0x2d37b9c size 0x58 virtual false final false
 void _ctor() ;

/// @brief Method get_originalPath addr 0x2d37bf4 size 0x3c virtual false final false
 ::StringW get_originalPath() ;

/// @brief Method get_frameCount addr 0x2d37c30 size 0x3c virtual false final false
 uint64_t get_frameCount() ;

/// @brief Method get_frameRate addr 0x2d37c6c size 0x3c virtual false final false
 double_t get_frameRate() ;

/// @brief Method get_length addr 0x2d37ca8 size 0x3c virtual false final false
 double_t get_length() ;

/// @brief Method get_width addr 0x2d37ce4 size 0x3c virtual false final false
 uint32_t get_width() ;

/// @brief Method get_height addr 0x2d37d20 size 0x3c virtual false final false
 uint32_t get_height() ;

/// @brief Method get_pixelAspectRatioNumerator addr 0x2d37d5c size 0x3c virtual false final false
 uint32_t get_pixelAspectRatioNumerator() ;

/// @brief Method get_pixelAspectRatioDenominator addr 0x2d37d98 size 0x3c virtual false final false
 uint32_t get_pixelAspectRatioDenominator() ;

/// @brief Method get_sRGB addr 0x2d37dd4 size 0x3c virtual false final false
 bool get_sRGB() ;

/// @brief Method get_audioTrackCount addr 0x2d37e10 size 0x3c virtual false final false
 uint16_t get_audioTrackCount() ;

/// @brief Method GetAudioChannelCount addr 0x2d37e4c size 0x44 virtual false final false
 uint16_t GetAudioChannelCount(uint16_t audioTrackIdx) ;

/// @brief Method GetAudioSampleRate addr 0x2d37e90 size 0x44 virtual false final false
 uint32_t GetAudioSampleRate(uint16_t audioTrackIdx) ;

/// @brief Method GetAudioLanguage addr 0x2d37ed4 size 0x44 virtual false final false
 ::StringW GetAudioLanguage(uint16_t audioTrackIdx) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Video
NEED_NO_BOX(UnityEngine::Video::VideoClip);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Video::VideoClip, "UnityEngine.Video", "VideoClip");
