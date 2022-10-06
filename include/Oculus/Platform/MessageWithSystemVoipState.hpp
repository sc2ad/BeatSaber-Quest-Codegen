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
  // Forward declaring type: SystemVoipState
  class SystemVoipState;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MessageWithSystemVoipState
  class MessageWithSystemVoipState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::MessageWithSystemVoipState);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithSystemVoipState*, "Oculus.Platform", "MessageWithSystemVoipState");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithSystemVoipState
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithSystemVoipState : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::SystemVoipState*> {
    public:
    // protected Oculus.Platform.Models.SystemVoipState GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x19FD084
    ::Oculus::Platform::Models::SystemVoipState* GetDataFromMessage(::System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x19F2F44
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithSystemVoipState* New_ctor(::System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::MessageWithSystemVoipState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithSystemVoipState*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.SystemVoipState GetSystemVoipState()
    // Offset: 0x19FD040
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.SystemVoipState Message::GetSystemVoipState()
    ::Oculus::Platform::Models::SystemVoipState* GetSystemVoipState();
  }; // Oculus.Platform.MessageWithSystemVoipState
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithSystemVoipState::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::SystemVoipState* (Oculus::Platform::MessageWithSystemVoipState::*)(::System::IntPtr)>(&Oculus::Platform::MessageWithSystemVoipState::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithSystemVoipState*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithSystemVoipState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithSystemVoipState::GetSystemVoipState
// Il2CppName: GetSystemVoipState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::SystemVoipState* (Oculus::Platform::MessageWithSystemVoipState::*)()>(&Oculus::Platform::MessageWithSystemVoipState::GetSystemVoipState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithSystemVoipState*), "GetSystemVoipState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
