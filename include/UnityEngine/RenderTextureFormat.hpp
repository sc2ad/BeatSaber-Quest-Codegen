// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.RenderTextureFormat
  // [TokenAttribute] Offset: FFFFFFFF
  struct RenderTextureFormat/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RenderTextureFormat
    constexpr RenderTextureFormat(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.RenderTextureFormat ARGB32
    static constexpr const int ARGB32 = 0;
    // Get static field: static public UnityEngine.RenderTextureFormat ARGB32
    static UnityEngine::RenderTextureFormat _get_ARGB32();
    // Set static field: static public UnityEngine.RenderTextureFormat ARGB32
    static void _set_ARGB32(UnityEngine::RenderTextureFormat value);
    // static field const value: static public UnityEngine.RenderTextureFormat Depth
    static constexpr const int Depth = 1;
    // Get static field: static public UnityEngine.RenderTextureFormat Depth
    static UnityEngine::RenderTextureFormat _get_Depth();
    // Set static field: static public UnityEngine.RenderTextureFormat Depth
    static void _set_Depth(UnityEngine::RenderTextureFormat value);
    // static field const value: static public UnityEngine.RenderTextureFormat ARGBHalf
    static constexpr const int ARGBHalf = 2;
    // Get static field: static public UnityEngine.RenderTextureFormat ARGBHalf
    static UnityEngine::RenderTextureFormat _get_ARGBHalf();
    // Set static field: static public UnityEngine.RenderTextureFormat ARGBHalf
    static void _set_ARGBHalf(UnityEngine::RenderTextureFormat value);
    // static field const value: static public UnityEngine.RenderTextureFormat Shadowmap
    static constexpr const int Shadowmap = 3;
    // Get static field: static public UnityEngine.RenderTextureFormat Shadowmap
    static UnityEngine::RenderTextureFormat _get_Shadowmap();
    // Set static field: static public UnityEngine.RenderTextureFormat Shadowmap
    static void _set_Shadowmap(UnityEngine::RenderTextureFormat value);
    // static field const value: static public UnityEngine.RenderTextureFormat RGB565
    static constexpr const int RGB565 = 4;
    // Get static field: static public UnityEngine.RenderTextureFormat RGB565
    static UnityEngine::RenderTextureFormat _get_RGB565();
    // Set static field: static public UnityEngine.RenderTextureFormat RGB565
    static void _set_RGB565(UnityEngine::RenderTextureFormat value);
    // static field const value: static public UnityEngine.RenderTextureFormat ARGB4444
    static constexpr const int ARGB4444 = 5;
    // Get static field: static public UnityEngine.RenderTextureFormat ARGB4444
    static UnityEngine::RenderTextureFormat _get_ARGB4444();
    // Set static field: static public UnityEngine.RenderTextureFormat ARGB4444
    static void _set_ARGB4444(UnityEngine::RenderTextureFormat value);
    // static field const value: static public UnityEngine.RenderTextureFormat ARGB1555
    static constexpr const int ARGB1555 = 6;
    // Get static field: static public UnityEngine.RenderTextureFormat ARGB1555
    static UnityEngine::RenderTextureFormat _get_ARGB1555();
    // Set static field: static public UnityEngine.RenderTextureFormat ARGB1555
    static void _set_ARGB1555(UnityEngine::RenderTextureFormat value);
    // static field const value: static public UnityEngine.RenderTextureFormat Default
    static constexpr const int Default = 7;
    // Get static field: static public UnityEngine.RenderTextureFormat Default
    static UnityEngine::RenderTextureFormat _get_Default();
    // Set static field: static public UnityEngine.RenderTextureFormat Default
    static void _set_Default(UnityEngine::RenderTextureFormat value);
    // static field const value: static public UnityEngine.RenderTextureFormat ARGB2101010
    static constexpr const int ARGB2101010 = 8;
    // Get static field: static public UnityEngine.RenderTextureFormat ARGB2101010
    static UnityEngine::RenderTextureFormat _get_ARGB2101010();
    // Set static field: static public UnityEngine.RenderTextureFormat ARGB2101010
    static void _set_ARGB2101010(UnityEngine::RenderTextureFormat value);
    // static field const value: static public UnityEngine.RenderTextureFormat DefaultHDR
    static constexpr const int DefaultHDR = 9;
    // Get static field: static public UnityEngine.RenderTextureFormat DefaultHDR
    static UnityEngine::RenderTextureFormat _get_DefaultHDR();
    // Set static field: static public UnityEngine.RenderTextureFormat DefaultHDR
    static void _set_DefaultHDR(UnityEngine::RenderTextureFormat value);
    // static field const value: static public UnityEngine.RenderTextureFormat ARGB64
    static constexpr const int ARGB64 = 10;
    // Get static field: static public UnityEngine.RenderTextureFormat ARGB64
    static UnityEngine::RenderTextureFormat _get_ARGB64();
    // Set static field: static public UnityEngine.RenderTextureFormat ARGB64
    static void _set_ARGB64(UnityEngine::RenderTextureFormat value);
    // static field const value: static public UnityEngine.RenderTextureFormat ARGBFloat
    static constexpr const int ARGBFloat = 11;
    // Get static field: static public UnityEngine.RenderTextureFormat ARGBFloat
    static UnityEngine::RenderTextureFormat _get_ARGBFloat();
    // Set static field: static public UnityEngine.RenderTextureFormat ARGBFloat
    static void _set_ARGBFloat(UnityEngine::RenderTextureFormat value);
    // static field const value: static public UnityEngine.RenderTextureFormat RGFloat
    static constexpr const int RGFloat = 12;
    // Get static field: static public UnityEngine.RenderTextureFormat RGFloat
    static UnityEngine::RenderTextureFormat _get_RGFloat();
    // Set static field: static public UnityEngine.RenderTextureFormat RGFloat
    static void _set_RGFloat(UnityEngine::RenderTextureFormat value);
    // static field const value: static public UnityEngine.RenderTextureFormat RGHalf
    static constexpr const int RGHalf = 13;
    // Get static field: static public UnityEngine.RenderTextureFormat RGHalf
    static UnityEngine::RenderTextureFormat _get_RGHalf();
    // Set static field: static public UnityEngine.RenderTextureFormat RGHalf
    static void _set_RGHalf(UnityEngine::RenderTextureFormat value);
    // static field const value: static public UnityEngine.RenderTextureFormat RFloat
    static constexpr const int RFloat = 14;
    // Get static field: static public UnityEngine.RenderTextureFormat RFloat
    static UnityEngine::RenderTextureFormat _get_RFloat();
    // Set static field: static public UnityEngine.RenderTextureFormat RFloat
    static void _set_RFloat(UnityEngine::RenderTextureFormat value);
    // static field const value: static public UnityEngine.RenderTextureFormat RHalf
    static constexpr const int RHalf = 15;
    // Get static field: static public UnityEngine.RenderTextureFormat RHalf
    static UnityEngine::RenderTextureFormat _get_RHalf();
    // Set static field: static public UnityEngine.RenderTextureFormat RHalf
    static void _set_RHalf(UnityEngine::RenderTextureFormat value);
    // static field const value: static public UnityEngine.RenderTextureFormat R8
    static constexpr const int R8 = 16;
    // Get static field: static public UnityEngine.RenderTextureFormat R8
    static UnityEngine::RenderTextureFormat _get_R8();
    // Set static field: static public UnityEngine.RenderTextureFormat R8
    static void _set_R8(UnityEngine::RenderTextureFormat value);
    // static field const value: static public UnityEngine.RenderTextureFormat ARGBInt
    static constexpr const int ARGBInt = 17;
    // Get static field: static public UnityEngine.RenderTextureFormat ARGBInt
    static UnityEngine::RenderTextureFormat _get_ARGBInt();
    // Set static field: static public UnityEngine.RenderTextureFormat ARGBInt
    static void _set_ARGBInt(UnityEngine::RenderTextureFormat value);
    // static field const value: static public UnityEngine.RenderTextureFormat RGInt
    static constexpr const int RGInt = 18;
    // Get static field: static public UnityEngine.RenderTextureFormat RGInt
    static UnityEngine::RenderTextureFormat _get_RGInt();
    // Set static field: static public UnityEngine.RenderTextureFormat RGInt
    static void _set_RGInt(UnityEngine::RenderTextureFormat value);
    // static field const value: static public UnityEngine.RenderTextureFormat RInt
    static constexpr const int RInt = 19;
    // Get static field: static public UnityEngine.RenderTextureFormat RInt
    static UnityEngine::RenderTextureFormat _get_RInt();
    // Set static field: static public UnityEngine.RenderTextureFormat RInt
    static void _set_RInt(UnityEngine::RenderTextureFormat value);
    // static field const value: static public UnityEngine.RenderTextureFormat BGRA32
    static constexpr const int BGRA32 = 20;
    // Get static field: static public UnityEngine.RenderTextureFormat BGRA32
    static UnityEngine::RenderTextureFormat _get_BGRA32();
    // Set static field: static public UnityEngine.RenderTextureFormat BGRA32
    static void _set_BGRA32(UnityEngine::RenderTextureFormat value);
    // static field const value: static public UnityEngine.RenderTextureFormat RGB111110Float
    static constexpr const int RGB111110Float = 22;
    // Get static field: static public UnityEngine.RenderTextureFormat RGB111110Float
    static UnityEngine::RenderTextureFormat _get_RGB111110Float();
    // Set static field: static public UnityEngine.RenderTextureFormat RGB111110Float
    static void _set_RGB111110Float(UnityEngine::RenderTextureFormat value);
    // static field const value: static public UnityEngine.RenderTextureFormat RG32
    static constexpr const int RG32 = 23;
    // Get static field: static public UnityEngine.RenderTextureFormat RG32
    static UnityEngine::RenderTextureFormat _get_RG32();
    // Set static field: static public UnityEngine.RenderTextureFormat RG32
    static void _set_RG32(UnityEngine::RenderTextureFormat value);
    // static field const value: static public UnityEngine.RenderTextureFormat RGBAUShort
    static constexpr const int RGBAUShort = 24;
    // Get static field: static public UnityEngine.RenderTextureFormat RGBAUShort
    static UnityEngine::RenderTextureFormat _get_RGBAUShort();
    // Set static field: static public UnityEngine.RenderTextureFormat RGBAUShort
    static void _set_RGBAUShort(UnityEngine::RenderTextureFormat value);
    // static field const value: static public UnityEngine.RenderTextureFormat RG16
    static constexpr const int RG16 = 25;
    // Get static field: static public UnityEngine.RenderTextureFormat RG16
    static UnityEngine::RenderTextureFormat _get_RG16();
    // Set static field: static public UnityEngine.RenderTextureFormat RG16
    static void _set_RG16(UnityEngine::RenderTextureFormat value);
    // static field const value: static public UnityEngine.RenderTextureFormat BGRA10101010_XR
    static constexpr const int BGRA10101010_XR = 26;
    // Get static field: static public UnityEngine.RenderTextureFormat BGRA10101010_XR
    static UnityEngine::RenderTextureFormat _get_BGRA10101010_XR();
    // Set static field: static public UnityEngine.RenderTextureFormat BGRA10101010_XR
    static void _set_BGRA10101010_XR(UnityEngine::RenderTextureFormat value);
    // static field const value: static public UnityEngine.RenderTextureFormat BGR101010_XR
    static constexpr const int BGR101010_XR = 27;
    // Get static field: static public UnityEngine.RenderTextureFormat BGR101010_XR
    static UnityEngine::RenderTextureFormat _get_BGR101010_XR();
    // Set static field: static public UnityEngine.RenderTextureFormat BGR101010_XR
    static void _set_BGR101010_XR(UnityEngine::RenderTextureFormat value);
    // static field const value: static public UnityEngine.RenderTextureFormat R16
    static constexpr const int R16 = 28;
    // Get static field: static public UnityEngine.RenderTextureFormat R16
    static UnityEngine::RenderTextureFormat _get_R16();
    // Set static field: static public UnityEngine.RenderTextureFormat R16
    static void _set_R16(UnityEngine::RenderTextureFormat value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.RenderTextureFormat
  #pragma pack(pop)
  static check_size<sizeof(RenderTextureFormat), 0 + sizeof(int)> __UnityEngine_RenderTextureFormatSizeCheck;
  static_assert(sizeof(RenderTextureFormat) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RenderTextureFormat, "UnityEngine", "RenderTextureFormat");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
