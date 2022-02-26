// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlWriter
  class XmlWriter;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: BinHexEncoder
  class BinHexEncoder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::BinHexEncoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::BinHexEncoder*, "System.Xml", "BinHexEncoder");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.BinHexEncoder
  // [TokenAttribute] Offset: FFFFFFFF
  class BinHexEncoder : public ::Il2CppObject {
    public:
    // static System.Void Encode(System.Byte[] buffer, System.Int32 index, System.Int32 count, System.Xml.XmlWriter writer)
    // Offset: 0x1B9A320
    static void Encode(::ArrayW<uint8_t> buffer, int index, int count, ::System::Xml::XmlWriter* writer);
    // static System.String Encode(System.Byte[] inArray, System.Int32 offsetIn, System.Int32 count)
    // Offset: 0x1B9A5F0
    static ::StringW Encode(::ArrayW<uint8_t> inArray, int offsetIn, int count);
    // static private System.Int32 Encode(System.Byte[] inArray, System.Int32 offsetIn, System.Int32 count, System.Char[] outArray)
    // Offset: 0x1B9A4AC
    static int Encode(::ArrayW<uint8_t> inArray, int offsetIn, int count, ::ArrayW<::Il2CppChar> outArray);
  }; // System.Xml.BinHexEncoder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::BinHexEncoder::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int, int, ::System::Xml::XmlWriter*)>(&System::Xml::BinHexEncoder::Encode)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* writer = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinHexEncoder*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count, writer});
  }
};
// Writing MetadataGetter for method: System::Xml::BinHexEncoder::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int, int)>(&System::Xml::BinHexEncoder::Encode)> {
  static const MethodInfo* get() {
    static auto* inArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offsetIn = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinHexEncoder*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inArray, offsetIn, count});
  }
};
// Writing MetadataGetter for method: System::Xml::BinHexEncoder::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<uint8_t>, int, int, ::ArrayW<::Il2CppChar>)>(&System::Xml::BinHexEncoder::Encode)> {
  static const MethodInfo* get() {
    static auto* inArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offsetIn = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinHexEncoder*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inArray, offsetIn, count, outArray});
  }
};
