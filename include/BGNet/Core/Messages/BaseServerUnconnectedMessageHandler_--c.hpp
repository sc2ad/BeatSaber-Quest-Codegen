// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.BaseServerUnconnectedMessageHandler
#include "BGNet/Core/Messages/BaseServerUnconnectedMessageHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate2
  class X509Certificate2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$$c);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$$c*, "BGNet.Core.Messages", "BaseServerUnconnectedMessageHandler/<>c");
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BGNet.Core.Messages.BaseServerUnconnectedMessageHandler/BGNet.Core.Messages.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BaseServerUnconnectedMessageHandler::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly BGNet.Core.Messages.BaseServerUnconnectedMessageHandler/BGNet.Core.Messages.<>c <>9
    static ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$$c* _get_$$9();
    // Set static field: static public readonly BGNet.Core.Messages.BaseServerUnconnectedMessageHandler/BGNet.Core.Messages.<>c <>9
    static void _set_$$9(::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$$c* value);
    // Get static field: static public System.Func`2<System.Security.Cryptography.X509Certificates.X509Certificate2,System.Byte[]> <>9__12_0
    static ::System::Func_2<::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::ArrayW<uint8_t>>* _get_$$9__12_0();
    // Set static field: static public System.Func`2<System.Security.Cryptography.X509Certificates.X509Certificate2,System.Byte[]> <>9__12_0
    static void _set_$$9__12_0(::System::Func_2<::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::ArrayW<uint8_t>>* value);
    // static private System.Void .cctor()
    // Offset: 0x14FBB24
    static void _cctor();
    // System.Byte[] <.ctor>b__12_0(System.Security.Cryptography.X509Certificates.X509Certificate2 cert)
    // Offset: 0x14FBB90
    ::ArrayW<uint8_t> $_ctor$b__12_0(::System::Security::Cryptography::X509Certificates::X509Certificate2* cert);
    // public System.Void .ctor()
    // Offset: 0x14FBB88
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseServerUnconnectedMessageHandler::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseServerUnconnectedMessageHandler::$$c*, creationType>()));
    }
  }; // BGNet.Core.Messages.BaseServerUnconnectedMessageHandler/BGNet.Core.Messages.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$$c::$_ctor$b__12_0
// Il2CppName: <.ctor>b__12_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$$c::*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*)>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$$c::$_ctor$b__12_0)> {
  static const MethodInfo* get() {
    static auto* cert = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$$c*), "<.ctor>b__12_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cert});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
