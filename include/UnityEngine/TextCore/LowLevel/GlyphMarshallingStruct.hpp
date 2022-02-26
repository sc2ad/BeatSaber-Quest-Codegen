// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.TextCore.GlyphMetrics
#include "UnityEngine/TextCore/GlyphMetrics.hpp"
// Including type: UnityEngine.TextCore.GlyphRect
#include "UnityEngine/TextCore/GlyphRect.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TextCore
namespace UnityEngine::TextCore {
  // Forward declaring type: Glyph
  class Glyph;
}
// Completed forward declares
// Type namespace: UnityEngine.TextCore.LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Forward declaring type: GlyphMarshallingStruct
  struct GlyphMarshallingStruct;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, "UnityEngine.TextCore.LowLevel", "GlyphMarshallingStruct");
// Type namespace: UnityEngine.TextCore.LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 11DE164
  struct GlyphMarshallingStruct/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 index
    // Size: 0x4
    // Offset: 0x0
    uint index;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public UnityEngine.TextCore.GlyphMetrics metrics
    // Size: 0x14
    // Offset: 0x4
    ::UnityEngine::TextCore::GlyphMetrics metrics;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextCore::GlyphMetrics) == 0x14);
    // public UnityEngine.TextCore.GlyphRect glyphRect
    // Size: 0x10
    // Offset: 0x18
    ::UnityEngine::TextCore::GlyphRect glyphRect;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextCore::GlyphRect) == 0x10);
    // public System.Single scale
    // Size: 0x4
    // Offset: 0x28
    float scale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 atlasIndex
    // Size: 0x4
    // Offset: 0x2C
    int atlasIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: GlyphMarshallingStruct
    constexpr GlyphMarshallingStruct(uint index_ = {}, ::UnityEngine::TextCore::GlyphMetrics metrics_ = {}, ::UnityEngine::TextCore::GlyphRect glyphRect_ = {}, float scale_ = {}, int atlasIndex_ = {}) noexcept : index{index_}, metrics{metrics_}, glyphRect{glyphRect_}, scale{scale_}, atlasIndex{atlasIndex_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 index
    uint& dyn_index();
    // Get instance field reference: public UnityEngine.TextCore.GlyphMetrics metrics
    ::UnityEngine::TextCore::GlyphMetrics& dyn_metrics();
    // Get instance field reference: public UnityEngine.TextCore.GlyphRect glyphRect
    ::UnityEngine::TextCore::GlyphRect& dyn_glyphRect();
    // Get instance field reference: public System.Single scale
    float& dyn_scale();
    // Get instance field reference: public System.Int32 atlasIndex
    int& dyn_atlasIndex();
    // public System.Void .ctor(UnityEngine.TextCore.Glyph glyph)
    // Offset: 0x2A36FC8
    GlyphMarshallingStruct(::UnityEngine::TextCore::Glyph* glyph);
  }; // UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct
  #pragma pack(pop)
  static check_size<sizeof(GlyphMarshallingStruct), 44 + sizeof(int)> __UnityEngine_TextCore_LowLevel_GlyphMarshallingStructSizeCheck;
  static_assert(sizeof(GlyphMarshallingStruct) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct::GlyphMarshallingStruct
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
