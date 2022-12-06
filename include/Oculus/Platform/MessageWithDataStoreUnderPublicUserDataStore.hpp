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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MessageWithDataStoreUnderPublicUserDataStore
  class MessageWithDataStoreUnderPublicUserDataStore;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore*, "Oculus.Platform", "MessageWithDataStoreUnderPublicUserDataStore");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithDataStoreUnderPublicUserDataStore
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithDataStoreUnderPublicUserDataStore : public ::Oculus::Platform::Message_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> {
    public:
    // protected System.Collections.Generic.Dictionary`2<System.String,System.String> GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x1A0D958
    ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* GetDataFromMessage(::System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x1A09484
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithDataStoreUnderPublicUserDataStore* New_ctor(::System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithDataStoreUnderPublicUserDataStore*, creationType>(c_message)));
    }
    // public override System.Collections.Generic.Dictionary`2<System.String,System.String> GetDataStore()
    // Offset: 0x1A0D914
    // Implemented from: Oculus.Platform.Message
    // Base method: System.Collections.Generic.Dictionary`2<System.String,System.String> Message::GetDataStore()
    ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* GetDataStore();
  }; // Oculus.Platform.MessageWithDataStoreUnderPublicUserDataStore
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore::*)(::System::IntPtr)>(&Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore::GetDataStore
// Il2CppName: GetDataStore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore::*)()>(&Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore::GetDataStore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore*), "GetDataStore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
