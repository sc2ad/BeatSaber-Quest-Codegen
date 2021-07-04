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
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LeaderboardList
  class LeaderboardList;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithLeaderboardList
  class MessageWithLeaderboardList : public Oculus::Platform::Message_1<Oculus::Platform::Models::LeaderboardList*> {
    public:
    // Creating value type constructor for type: MessageWithLeaderboardList
    MessageWithLeaderboardList() noexcept {}
    // protected Oculus.Platform.Models.LeaderboardList GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x14D03D0
    Oculus::Platform::Models::LeaderboardList* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x14CA978
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithLeaderboardList* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithLeaderboardList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithLeaderboardList*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.LeaderboardList GetLeaderboardList()
    // Offset: 0x14D038C
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.LeaderboardList Message::GetLeaderboardList()
    Oculus::Platform::Models::LeaderboardList* GetLeaderboardList();
  }; // Oculus.Platform.MessageWithLeaderboardList
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithLeaderboardList*, "Oculus.Platform", "MessageWithLeaderboardList");
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLeaderboardList::GetDataFromMessage
// Il2CppName: GetDataFromMessage
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLeaderboardList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLeaderboardList::GetLeaderboardList
// Il2CppName: GetLeaderboardList
// Cannot perform method pointer template specialization from operators!