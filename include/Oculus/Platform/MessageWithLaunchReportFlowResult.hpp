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
  // Forward declaring type: LaunchReportFlowResult
  class LaunchReportFlowResult;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MessageWithLaunchReportFlowResult
  class MessageWithLaunchReportFlowResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::MessageWithLaunchReportFlowResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLaunchReportFlowResult*, "Oculus.Platform", "MessageWithLaunchReportFlowResult");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithLaunchReportFlowResult
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithLaunchReportFlowResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchReportFlowResult*> {
    public:
    // protected Oculus.Platform.Models.LaunchReportFlowResult GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x19F79A8
    ::Oculus::Platform::Models::LaunchReportFlowResult* GetDataFromMessage(::System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x19F7904
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithLaunchReportFlowResult* New_ctor(::System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::MessageWithLaunchReportFlowResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithLaunchReportFlowResult*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.LaunchReportFlowResult GetLaunchReportFlowResult()
    // Offset: 0x19F7964
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.LaunchReportFlowResult Message::GetLaunchReportFlowResult()
    ::Oculus::Platform::Models::LaunchReportFlowResult* GetLaunchReportFlowResult();
  }; // Oculus.Platform.MessageWithLaunchReportFlowResult
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLaunchReportFlowResult::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LaunchReportFlowResult* (Oculus::Platform::MessageWithLaunchReportFlowResult::*)(::System::IntPtr)>(&Oculus::Platform::MessageWithLaunchReportFlowResult::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithLaunchReportFlowResult*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLaunchReportFlowResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLaunchReportFlowResult::GetLaunchReportFlowResult
// Il2CppName: GetLaunchReportFlowResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LaunchReportFlowResult* (Oculus::Platform::MessageWithLaunchReportFlowResult::*)()>(&Oculus::Platform::MessageWithLaunchReportFlowResult::GetLaunchReportFlowResult)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithLaunchReportFlowResult*), "GetLaunchReportFlowResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
