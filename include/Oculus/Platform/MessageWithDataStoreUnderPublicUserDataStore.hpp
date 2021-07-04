// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithDataStoreUnderPublicUserDataStore
  class MessageWithDataStoreUnderPublicUserDataStore : public Oculus::Platform::Message_1<System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>*> {
    public:
    // Creating value type constructor for type: MessageWithDataStoreUnderPublicUserDataStore
    MessageWithDataStoreUnderPublicUserDataStore() noexcept {}
    // protected System.Collections.Generic.Dictionary`2<System.String,System.String> GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x14CEB44
    System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x14CA798
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithDataStoreUnderPublicUserDataStore* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithDataStoreUnderPublicUserDataStore*, creationType>(c_message)));
    }
    // public override System.Collections.Generic.Dictionary`2<System.String,System.String> GetDataStore()
    // Offset: 0x14CEB00
    // Implemented from: Oculus.Platform.Message
    // Base method: System.Collections.Generic.Dictionary`2<System.String,System.String> Message::GetDataStore()
    System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* GetDataStore();
  }; // Oculus.Platform.MessageWithDataStoreUnderPublicUserDataStore
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore*, "Oculus.Platform", "MessageWithDataStoreUnderPublicUserDataStore");
// Writing MetadataGetter for method: Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore::GetDataFromMessage
// Il2CppName: GetDataFromMessage
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore::GetDataStore
// Il2CppName: GetDataStore
// Cannot perform method pointer template specialization from operators!