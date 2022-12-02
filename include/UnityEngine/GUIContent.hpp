// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUIContent
  class GUIContent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::GUIContent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUIContent*, "UnityEngine", "GUIContent");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.GUIContent
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: 10A2ED8
  // [NativeHeaderAttribute] Offset: 10A2ED8
  class GUIContent : public ::Il2CppObject {
    public:
    public:
    // private System.String m_Text
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_Text;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.Texture m_Image
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Texture* m_Image;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture*) == 0x8);
    // private System.String m_Tooltip
    // Size: 0x8
    // Offset: 0x20
    ::StringW m_Tooltip;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get static field: static private readonly UnityEngine.GUIContent s_Text
    static ::UnityEngine::GUIContent* _get_s_Text();
    // Set static field: static private readonly UnityEngine.GUIContent s_Text
    static void _set_s_Text(::UnityEngine::GUIContent* value);
    // Get static field: static private readonly UnityEngine.GUIContent s_Image
    static ::UnityEngine::GUIContent* _get_s_Image();
    // Set static field: static private readonly UnityEngine.GUIContent s_Image
    static void _set_s_Image(::UnityEngine::GUIContent* value);
    // Get static field: static private readonly UnityEngine.GUIContent s_TextImage
    static ::UnityEngine::GUIContent* _get_s_TextImage();
    // Set static field: static private readonly UnityEngine.GUIContent s_TextImage
    static void _set_s_TextImage(::UnityEngine::GUIContent* value);
    // Get static field: static public UnityEngine.GUIContent none
    static ::UnityEngine::GUIContent* _get_none();
    // Set static field: static public UnityEngine.GUIContent none
    static void _set_none(::UnityEngine::GUIContent* value);
    // Get instance field reference: private System.String m_Text
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_Text();
    // Get instance field reference: private UnityEngine.Texture m_Image
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture*& dyn_m_Image();
    // Get instance field reference: private System.String m_Tooltip
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_Tooltip();
    // public System.String get_text()
    // Offset: 0x20A7AF4
    ::StringW get_text();
    // public System.Void set_text(System.String value)
    // Offset: 0x20A7AFC
    void set_text(::StringW value);
    // public System.Void set_image(UnityEngine.Texture value)
    // Offset: 0x20ADBB4
    void set_image(::UnityEngine::Texture* value);
    // public System.String get_tooltip()
    // Offset: 0x20A9D00
    ::StringW get_tooltip();
    // public System.Void set_tooltip(System.String value)
    // Offset: 0x20ADBBC
    void set_tooltip(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x20ADBC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GUIContent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::GUIContent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GUIContent*, creationType>()));
    }
    // public System.Void .ctor(System.String text)
    // Offset: 0x20ADC30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GUIContent* New_ctor(::StringW text) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::GUIContent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GUIContent*, creationType>(text)));
    }
    // public System.Void .ctor(System.String text, UnityEngine.Texture image, System.String tooltip)
    // Offset: 0x20ADC9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GUIContent* New_ctor(::StringW text, ::UnityEngine::Texture* image, ::StringW tooltip) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::GUIContent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GUIContent*, creationType>(text, image, tooltip)));
    }
    // public System.Void .ctor(UnityEngine.GUIContent src)
    // Offset: 0x20ADD30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GUIContent* New_ctor(::UnityEngine::GUIContent* src) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::GUIContent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GUIContent*, creationType>(src)));
    }
    // static private System.Void .cctor()
    // Offset: 0x20ADFF4
    static void _cctor();
    // static UnityEngine.GUIContent Temp(System.String t)
    // Offset: 0x20ADDCC
    static ::UnityEngine::GUIContent* Temp(::StringW t);
    // static UnityEngine.GUIContent Temp(UnityEngine.Texture i)
    // Offset: 0x20ADE70
    static ::UnityEngine::GUIContent* Temp(::UnityEngine::Texture* i);
    // static System.Void ClearStaticCache()
    // Offset: 0x20ADF14
    static void ClearStaticCache();
  }; // UnityEngine.GUIContent
  #pragma pack(pop)
  static check_size<sizeof(GUIContent), 32 + sizeof(::StringW)> __UnityEngine_GUIContentSizeCheck;
  static_assert(sizeof(GUIContent) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::GUIContent::get_text
// Il2CppName: get_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::GUIContent::*)()>(&UnityEngine::GUIContent::get_text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIContent*), "get_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIContent::set_text
// Il2CppName: set_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUIContent::*)(::StringW)>(&UnityEngine::GUIContent::set_text)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIContent*), "set_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIContent::set_image
// Il2CppName: set_image
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUIContent::*)(::UnityEngine::Texture*)>(&UnityEngine::GUIContent::set_image)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIContent*), "set_image", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIContent::get_tooltip
// Il2CppName: get_tooltip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::GUIContent::*)()>(&UnityEngine::GUIContent::get_tooltip)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIContent*), "get_tooltip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIContent::set_tooltip
// Il2CppName: set_tooltip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUIContent::*)(::StringW)>(&UnityEngine::GUIContent::set_tooltip)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIContent*), "set_tooltip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIContent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::GUIContent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::GUIContent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::GUIContent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::GUIContent::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GUIContent::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIContent*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIContent::Temp
// Il2CppName: Temp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUIContent* (*)(::StringW)>(&UnityEngine::GUIContent::Temp)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIContent*), "Temp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIContent::Temp
// Il2CppName: Temp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUIContent* (*)(::UnityEngine::Texture*)>(&UnityEngine::GUIContent::Temp)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIContent*), "Temp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIContent::ClearStaticCache
// Il2CppName: ClearStaticCache
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GUIContent::ClearStaticCache)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIContent*), "ClearStaticCache", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
