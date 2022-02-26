// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: NetSyncVoipAttenuationValueList
  class NetSyncVoipAttenuationValueList;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MessageWithNetSyncVoipAttenuationValueList
  class MessageWithNetSyncVoipAttenuationValueList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList*, "Oculus.Platform", "MessageWithNetSyncVoipAttenuationValueList");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithNetSyncVoipAttenuationValueList
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithNetSyncVoipAttenuationValueList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetSyncVoipAttenuationValueList*> {
    public:
    // protected Oculus.Platform.Models.NetSyncVoipAttenuationValueList GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x1969A94
    ::Oculus::Platform::Models::NetSyncVoipAttenuationValueList* GetDataFromMessage(::System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x19699F0
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithNetSyncVoipAttenuationValueList* New_ctor(::System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithNetSyncVoipAttenuationValueList*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.NetSyncVoipAttenuationValueList GetNetSyncVoipAttenuationValueList()
    // Offset: 0x1969A50
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.NetSyncVoipAttenuationValueList Message::GetNetSyncVoipAttenuationValueList()
    ::Oculus::Platform::Models::NetSyncVoipAttenuationValueList* GetNetSyncVoipAttenuationValueList();
  }; // Oculus.Platform.MessageWithNetSyncVoipAttenuationValueList
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::NetSyncVoipAttenuationValueList* (Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::*)(::System::IntPtr)>(&Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::GetNetSyncVoipAttenuationValueList
// Il2CppName: GetNetSyncVoipAttenuationValueList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::NetSyncVoipAttenuationValueList* (Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::*)()>(&Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::GetNetSyncVoipAttenuationValueList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList*), "GetNetSyncVoipAttenuationValueList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
