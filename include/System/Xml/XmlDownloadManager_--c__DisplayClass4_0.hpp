// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlDownloadManager
#include "System/Xml/XmlDownloadManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlDownloadManager::$$c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlDownloadManager::$$c__DisplayClass4_0*, "System.Xml", "XmlDownloadManager/<>c__DisplayClass4_0");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlDownloadManager/System.Xml.<>c__DisplayClass4_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class XmlDownloadManager::$$c__DisplayClass4_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Uri uri
    // Size: 0x8
    // Offset: 0x10
    ::System::Uri* uri;
    // Field size check
    static_assert(sizeof(::System::Uri*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Uri*
    constexpr operator ::System::Uri*() const noexcept {
      return uri;
    }
    // Get instance field reference: public System.Uri uri
    [[deprecated("Use field access instead!")]] ::System::Uri*& dyn_uri();
    // public System.Void .ctor()
    // Offset: 0x1C3FA20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlDownloadManager::$$c__DisplayClass4_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlDownloadManager::$$c__DisplayClass4_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlDownloadManager::$$c__DisplayClass4_0*, creationType>()));
    }
    // System.IO.Stream <GetStreamAsync>b__0()
    // Offset: 0x1C3FB68
    ::System::IO::Stream* $GetStreamAsync$b__0();
  }; // System.Xml.XmlDownloadManager/System.Xml.<>c__DisplayClass4_0
  #pragma pack(pop)
  static check_size<sizeof(XmlDownloadManager::$$c__DisplayClass4_0), 16 + sizeof(::System::Uri*)> __System_Xml_XmlDownloadManager_$$c__DisplayClass4_0SizeCheck;
  static_assert(sizeof(XmlDownloadManager::$$c__DisplayClass4_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlDownloadManager::$$c__DisplayClass4_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlDownloadManager::$$c__DisplayClass4_0::$GetStreamAsync$b__0
// Il2CppName: <GetStreamAsync>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (System::Xml::XmlDownloadManager::$$c__DisplayClass4_0::*)()>(&System::Xml::XmlDownloadManager::$$c__DisplayClass4_0::$GetStreamAsync$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDownloadManager::$$c__DisplayClass4_0*), "<GetStreamAsync>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
