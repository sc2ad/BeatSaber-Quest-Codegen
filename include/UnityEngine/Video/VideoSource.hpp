// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.Video
namespace UnityEngine::Video {
  // Forward declaring type: VideoSource
  struct VideoSource;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoSource, "UnityEngine.Video", "VideoSource");
// Type namespace: UnityEngine.Video
namespace UnityEngine::Video {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Video.VideoSource
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: 121B7DC
  struct VideoSource/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: VideoSource
    constexpr VideoSource(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Video.VideoSource VideoClip
    static constexpr const int VideoClip = 0;
    // Get static field: static public UnityEngine.Video.VideoSource VideoClip
    static ::UnityEngine::Video::VideoSource _get_VideoClip();
    // Set static field: static public UnityEngine.Video.VideoSource VideoClip
    static void _set_VideoClip(::UnityEngine::Video::VideoSource value);
    // static field const value: static public UnityEngine.Video.VideoSource Url
    static constexpr const int Url = 1;
    // Get static field: static public UnityEngine.Video.VideoSource Url
    static ::UnityEngine::Video::VideoSource _get_Url();
    // Set static field: static public UnityEngine.Video.VideoSource Url
    static void _set_Url(::UnityEngine::Video::VideoSource value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.Video.VideoSource
  #pragma pack(pop)
  static check_size<sizeof(VideoSource), 0 + sizeof(int)> __UnityEngine_Video_VideoSourceSizeCheck;
  static_assert(sizeof(VideoSource) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
