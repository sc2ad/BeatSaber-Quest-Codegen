// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Texture2D
#include "UnityEngine/Texture2D.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ImageConversion
  class ImageConversion;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ImageConversion);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ImageConversion*, "UnityEngine", "ImageConversion");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ImageConversion
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 11DAB98
  class ImageConversion : public ::Il2CppObject {
    public:
    // static public System.Byte[] EncodeToTGA(UnityEngine.Texture2D tex)
    // Offset: 0x2A63C64
    static ::ArrayW<uint8_t> EncodeToTGA(::UnityEngine::Texture2D* tex);
    // static public System.Byte[] EncodeToPNG(UnityEngine.Texture2D tex)
    // Offset: 0x2A63CA4
    static ::ArrayW<uint8_t> EncodeToPNG(::UnityEngine::Texture2D* tex);
    // static public System.Byte[] EncodeToJPG(UnityEngine.Texture2D tex, System.Int32 quality)
    // Offset: 0x2A63CE4
    static ::ArrayW<uint8_t> EncodeToJPG(::UnityEngine::Texture2D* tex, int quality);
    // static public System.Byte[] EncodeToJPG(UnityEngine.Texture2D tex)
    // Offset: 0x2A63D34
    static ::ArrayW<uint8_t> EncodeToJPG(::UnityEngine::Texture2D* tex);
    // static public System.Byte[] EncodeToEXR(UnityEngine.Texture2D tex, UnityEngine.Texture2D/UnityEngine.EXRFlags flags)
    // Offset: 0x2A63D78
    static ::ArrayW<uint8_t> EncodeToEXR(::UnityEngine::Texture2D* tex, ::UnityEngine::Texture2D::EXRFlags flags);
    // static public System.Byte[] EncodeToEXR(UnityEngine.Texture2D tex)
    // Offset: 0x2A63DC8
    static ::ArrayW<uint8_t> EncodeToEXR(::UnityEngine::Texture2D* tex);
    // static public System.Boolean LoadImage(UnityEngine.Texture2D tex, System.Byte[] data, System.Boolean markNonReadable)
    // Offset: 0x2A63E0C
    static bool LoadImage(::UnityEngine::Texture2D* tex, ::ArrayW<uint8_t> data, bool markNonReadable);
    // static public System.Boolean LoadImage(UnityEngine.Texture2D tex, System.Byte[] data)
    // Offset: 0x2A63E64
    static bool LoadImage(::UnityEngine::Texture2D* tex, ::ArrayW<uint8_t> data);
  }; // UnityEngine.ImageConversion
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ImageConversion::EncodeToTGA
// Il2CppName: EncodeToTGA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::UnityEngine::Texture2D*)>(&UnityEngine::ImageConversion::EncodeToTGA)> {
  static const MethodInfo* get() {
    static auto* tex = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ImageConversion*), "EncodeToTGA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tex});
  }
};
// Writing MetadataGetter for method: UnityEngine::ImageConversion::EncodeToPNG
// Il2CppName: EncodeToPNG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::UnityEngine::Texture2D*)>(&UnityEngine::ImageConversion::EncodeToPNG)> {
  static const MethodInfo* get() {
    static auto* tex = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ImageConversion*), "EncodeToPNG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tex});
  }
};
// Writing MetadataGetter for method: UnityEngine::ImageConversion::EncodeToJPG
// Il2CppName: EncodeToJPG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::UnityEngine::Texture2D*, int)>(&UnityEngine::ImageConversion::EncodeToJPG)> {
  static const MethodInfo* get() {
    static auto* tex = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    static auto* quality = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ImageConversion*), "EncodeToJPG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tex, quality});
  }
};
// Writing MetadataGetter for method: UnityEngine::ImageConversion::EncodeToJPG
// Il2CppName: EncodeToJPG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::UnityEngine::Texture2D*)>(&UnityEngine::ImageConversion::EncodeToJPG)> {
  static const MethodInfo* get() {
    static auto* tex = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ImageConversion*), "EncodeToJPG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tex});
  }
};
// Writing MetadataGetter for method: UnityEngine::ImageConversion::EncodeToEXR
// Il2CppName: EncodeToEXR
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::UnityEngine::Texture2D*, ::UnityEngine::Texture2D::EXRFlags)>(&UnityEngine::ImageConversion::EncodeToEXR)> {
  static const MethodInfo* get() {
    static auto* tex = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D/EXRFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ImageConversion*), "EncodeToEXR", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tex, flags});
  }
};
// Writing MetadataGetter for method: UnityEngine::ImageConversion::EncodeToEXR
// Il2CppName: EncodeToEXR
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::UnityEngine::Texture2D*)>(&UnityEngine::ImageConversion::EncodeToEXR)> {
  static const MethodInfo* get() {
    static auto* tex = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ImageConversion*), "EncodeToEXR", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tex});
  }
};
// Writing MetadataGetter for method: UnityEngine::ImageConversion::LoadImage
// Il2CppName: LoadImage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Texture2D*, ::ArrayW<uint8_t>, bool)>(&UnityEngine::ImageConversion::LoadImage)> {
  static const MethodInfo* get() {
    static auto* tex = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* markNonReadable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ImageConversion*), "LoadImage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tex, data, markNonReadable});
  }
};
// Writing MetadataGetter for method: UnityEngine::ImageConversion::LoadImage
// Il2CppName: LoadImage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Texture2D*, ::ArrayW<uint8_t>)>(&UnityEngine::ImageConversion::LoadImage)> {
  static const MethodInfo* get() {
    static auto* tex = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ImageConversion*), "LoadImage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tex, data});
  }
};
