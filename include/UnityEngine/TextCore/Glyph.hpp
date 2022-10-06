// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TextCore.GlyphMetrics
#include "UnityEngine/TextCore/GlyphMetrics.hpp"
// Including type: UnityEngine.TextCore.GlyphRect
#include "UnityEngine/TextCore/GlyphRect.hpp"
// Including type: UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct
#include "UnityEngine/TextCore/LowLevel/GlyphMarshallingStruct.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.TextCore
namespace UnityEngine::TextCore {
  // Forward declaring type: Glyph
  class Glyph;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TextCore::Glyph);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Glyph*, "UnityEngine.TextCore", "Glyph");
// Type namespace: UnityEngine.TextCore
namespace UnityEngine::TextCore {
  // Size: 0x40
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.TextCore.Glyph
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 10A4394
  class Glyph : public ::Il2CppObject {
    public:
    public:
    // [NativeNameAttribute] Offset: 0x10A4D5C
    // private System.UInt32 m_Index
    // Size: 0x4
    // Offset: 0x10
    uint m_Index;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // [NativeNameAttribute] Offset: 0x10A4DA8
    // private UnityEngine.TextCore.GlyphMetrics m_Metrics
    // Size: 0x14
    // Offset: 0x14
    ::UnityEngine::TextCore::GlyphMetrics m_Metrics;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextCore::GlyphMetrics) == 0x14);
    // [NativeNameAttribute] Offset: 0x10A4DF4
    // private UnityEngine.TextCore.GlyphRect m_GlyphRect
    // Size: 0x10
    // Offset: 0x28
    ::UnityEngine::TextCore::GlyphRect m_GlyphRect;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextCore::GlyphRect) == 0x10);
    // [NativeNameAttribute] Offset: 0x10A4E40
    // private System.Single m_Scale
    // Size: 0x4
    // Offset: 0x38
    float m_Scale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0x10A4E8C
    // private System.Int32 m_AtlasIndex
    // Size: 0x4
    // Offset: 0x3C
    int m_AtlasIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.UInt32 m_Index
    [[deprecated("Use field access instead!")]] uint& dyn_m_Index();
    // Get instance field reference: private UnityEngine.TextCore.GlyphMetrics m_Metrics
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::GlyphMetrics& dyn_m_Metrics();
    // Get instance field reference: private UnityEngine.TextCore.GlyphRect m_GlyphRect
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::GlyphRect& dyn_m_GlyphRect();
    // Get instance field reference: private System.Single m_Scale
    [[deprecated("Use field access instead!")]] float& dyn_m_Scale();
    // Get instance field reference: private System.Int32 m_AtlasIndex
    [[deprecated("Use field access instead!")]] int& dyn_m_AtlasIndex();
    // public System.UInt32 get_index()
    // Offset: 0x2B26344
    uint get_index();
    // public System.Void set_index(System.UInt32 value)
    // Offset: 0x2B2634C
    void set_index(uint value);
    // public UnityEngine.TextCore.GlyphMetrics get_metrics()
    // Offset: 0x2B26354
    ::UnityEngine::TextCore::GlyphMetrics get_metrics();
    // public System.Void set_metrics(UnityEngine.TextCore.GlyphMetrics value)
    // Offset: 0x2B26368
    void set_metrics(::UnityEngine::TextCore::GlyphMetrics value);
    // public UnityEngine.TextCore.GlyphRect get_glyphRect()
    // Offset: 0x2B2637C
    ::UnityEngine::TextCore::GlyphRect get_glyphRect();
    // public System.Void set_glyphRect(UnityEngine.TextCore.GlyphRect value)
    // Offset: 0x2B26388
    void set_glyphRect(::UnityEngine::TextCore::GlyphRect value);
    // public System.Single get_scale()
    // Offset: 0x2B26390
    float get_scale();
    // public System.Void set_scale(System.Single value)
    // Offset: 0x2B26398
    void set_scale(float value);
    // public System.Int32 get_atlasIndex()
    // Offset: 0x2B263A0
    int get_atlasIndex();
    // public System.Void set_atlasIndex(System.Int32 value)
    // Offset: 0x2B263A8
    void set_atlasIndex(int value);
    // public System.Void .ctor()
    // Offset: 0x2B263B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Glyph* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TextCore::Glyph::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Glyph*, creationType>()));
    }
    // System.Void .ctor(UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct glyphStruct)
    // Offset: 0x2B263E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Glyph* New_ctor(::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct glyphStruct) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TextCore::Glyph::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Glyph*, creationType>(glyphStruct)));
    }
    // public System.Void .ctor(System.UInt32 index, UnityEngine.TextCore.GlyphMetrics metrics, UnityEngine.TextCore.GlyphRect glyphRect, System.Single scale, System.Int32 atlasIndex)
    // Offset: 0x2B26454
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Glyph* New_ctor(uint index, ::UnityEngine::TextCore::GlyphMetrics metrics, ::UnityEngine::TextCore::GlyphRect glyphRect, float scale, int atlasIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TextCore::Glyph::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Glyph*, creationType>(index, metrics, glyphRect, scale, atlasIndex)));
    }
  }; // UnityEngine.TextCore.Glyph
  #pragma pack(pop)
  static check_size<sizeof(Glyph), 60 + sizeof(int)> __UnityEngine_TextCore_GlyphSizeCheck;
  static_assert(sizeof(Glyph) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TextCore::Glyph::get_index
// Il2CppName: get_index
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (UnityEngine::TextCore::Glyph::*)()>(&UnityEngine::TextCore::Glyph::get_index)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::Glyph*), "get_index", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::Glyph::set_index
// Il2CppName: set_index
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Glyph::*)(uint)>(&UnityEngine::TextCore::Glyph::set_index)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::Glyph*), "set_index", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::Glyph::get_metrics
// Il2CppName: get_metrics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::GlyphMetrics (UnityEngine::TextCore::Glyph::*)()>(&UnityEngine::TextCore::Glyph::get_metrics)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::Glyph*), "get_metrics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::Glyph::set_metrics
// Il2CppName: set_metrics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Glyph::*)(::UnityEngine::TextCore::GlyphMetrics)>(&UnityEngine::TextCore::Glyph::set_metrics)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.TextCore", "GlyphMetrics")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::Glyph*), "set_metrics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::Glyph::get_glyphRect
// Il2CppName: get_glyphRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::GlyphRect (UnityEngine::TextCore::Glyph::*)()>(&UnityEngine::TextCore::Glyph::get_glyphRect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::Glyph*), "get_glyphRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::Glyph::set_glyphRect
// Il2CppName: set_glyphRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Glyph::*)(::UnityEngine::TextCore::GlyphRect)>(&UnityEngine::TextCore::Glyph::set_glyphRect)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.TextCore", "GlyphRect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::Glyph*), "set_glyphRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::Glyph::get_scale
// Il2CppName: get_scale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::TextCore::Glyph::*)()>(&UnityEngine::TextCore::Glyph::get_scale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::Glyph*), "get_scale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::Glyph::set_scale
// Il2CppName: set_scale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Glyph::*)(float)>(&UnityEngine::TextCore::Glyph::set_scale)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::Glyph*), "set_scale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::Glyph::get_atlasIndex
// Il2CppName: get_atlasIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::TextCore::Glyph::*)()>(&UnityEngine::TextCore::Glyph::get_atlasIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::Glyph*), "get_atlasIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::Glyph::set_atlasIndex
// Il2CppName: set_atlasIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Glyph::*)(int)>(&UnityEngine::TextCore::Glyph::set_atlasIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::Glyph*), "set_atlasIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::Glyph::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TextCore::Glyph::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TextCore::Glyph::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
