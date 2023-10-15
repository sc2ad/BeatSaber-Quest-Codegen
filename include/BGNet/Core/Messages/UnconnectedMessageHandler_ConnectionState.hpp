// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.UnconnectedMessageHandler
#include "BGNet/Core/Messages/UnconnectedMessageHandler.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: EncryptionUtility
#include "GlobalNamespace/EncryptionUtility.hpp"
// Including type: System.UInt32
#include "System/UInt32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState*, "BGNet.Core.Messages", "UnconnectedMessageHandler/ConnectionState");
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.ConnectionState
  // [TokenAttribute] Offset: FFFFFFFF
  class UnconnectedMessageHandler::ConnectionState : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private System.String _userId
    // Size: 0x8
    // Offset: 0x10
    ::StringW userId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _userName
    // Size: 0x8
    // Offset: 0x18
    ::StringW userName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.UInt32 _protocolVersion
    // Size: 0x4
    // Offset: 0x20
    uint protocolVersion;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.Boolean _hasIdentity
    // Size: 0x1
    // Offset: 0x24
    bool hasIdentity;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasIdentity and: encryptionState
    char __padding3[0x3] = {};
    // private EncryptionUtility/IEncryptionState _encryptionState
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::EncryptionUtility::IEncryptionState* encryptionState;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EncryptionUtility::IEncryptionState*) == 0x8);
    // private System.Int32 _lastReceivedRequestIndex
    // Size: 0x4
    // Offset: 0x30
    int lastReceivedRequestIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.UInt32 _lastReceivedRequestId
    // Size: 0x4
    // Offset: 0x34
    uint lastReceivedRequestId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.Int32 _receivedRequestCount
    // Size: 0x4
    // Offset: 0x38
    int receivedRequestCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: receivedRequestCount and: receivedRequest
    char __padding7[0x4] = {};
    // private readonly System.Boolean[] _receivedRequest
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<bool> receivedRequest;
    // Field size check
    static_assert(sizeof(::ArrayW<bool>) == 0x8);
    // private System.UInt32 _currentRequestId
    // Size: 0x4
    // Offset: 0x48
    uint currentRequestId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _currentEpoch
    // Size: 0x4
    // Offset: 0x4C
    uint currentEpoch;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: i_IDisposable
    inline ::System::IDisposable* i_IDisposable() noexcept {
      return reinterpret_cast<::System::IDisposable*>(this);
    }
    // static field const value: static private System.Int32 kEpochBitOffset
    static constexpr const int kEpochBitOffset = 24;
    // Get static field: static private System.Int32 kEpochBitOffset
    static int _get_kEpochBitOffset();
    // Set static field: static private System.Int32 kEpochBitOffset
    static void _set_kEpochBitOffset(int value);
    // static field const value: static private System.UInt32 kRequestIdRange
    static constexpr const uint kRequestIdRange = 16777216u;
    // Get static field: static private System.UInt32 kRequestIdRange
    static uint _get_kRequestIdRange();
    // Set static field: static private System.UInt32 kRequestIdRange
    static void _set_kRequestIdRange(uint value);
    // static field const value: static private System.UInt32 kRangeMask
    static constexpr const uint kRangeMask = 16777215u;
    // Get static field: static private System.UInt32 kRangeMask
    static uint _get_kRangeMask();
    // Set static field: static private System.UInt32 kRangeMask
    static void _set_kRangeMask(uint value);
    // static field const value: static private System.UInt32 kEpochMask
    static constexpr const uint kEpochMask = 4278190080u;
    // Get static field: static private System.UInt32 kEpochMask
    static uint _get_kEpochMask();
    // Set static field: static private System.UInt32 kEpochMask
    static void _set_kEpochMask(uint value);
    // static field const value: static private System.Int32 kRequestBufferLength
    static constexpr const int kRequestBufferLength = 64;
    // Get static field: static private System.Int32 kRequestBufferLength
    static int _get_kRequestBufferLength();
    // Set static field: static private System.Int32 kRequestBufferLength
    static void _set_kRequestBufferLength(int value);
    // Get instance field reference: private System.String _userId
    [[deprecated("Use field access instead!")]] ::StringW& dyn__userId();
    // Get instance field reference: private System.String _userName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__userName();
    // Get instance field reference: private System.UInt32 _protocolVersion
    [[deprecated("Use field access instead!")]] uint& dyn__protocolVersion();
    // Get instance field reference: private System.Boolean _hasIdentity
    [[deprecated("Use field access instead!")]] bool& dyn__hasIdentity();
    // Get instance field reference: private EncryptionUtility/IEncryptionState _encryptionState
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EncryptionUtility::IEncryptionState*& dyn__encryptionState();
    // Get instance field reference: private System.Int32 _lastReceivedRequestIndex
    [[deprecated("Use field access instead!")]] int& dyn__lastReceivedRequestIndex();
    // Get instance field reference: private System.UInt32 _lastReceivedRequestId
    [[deprecated("Use field access instead!")]] uint& dyn__lastReceivedRequestId();
    // Get instance field reference: private System.Int32 _receivedRequestCount
    [[deprecated("Use field access instead!")]] int& dyn__receivedRequestCount();
    // Get instance field reference: private readonly System.Boolean[] _receivedRequest
    [[deprecated("Use field access instead!")]] ::ArrayW<bool>& dyn__receivedRequest();
    // Get instance field reference: private System.UInt32 _currentRequestId
    [[deprecated("Use field access instead!")]] uint& dyn__currentRequestId();
    // Get instance field reference: private System.UInt32 _currentEpoch
    [[deprecated("Use field access instead!")]] uint& dyn__currentEpoch();
    // public System.Boolean get_isEncrypted()
    // Offset: 0x1613E14
    bool get_isEncrypted();
    // public System.Void .ctor()
    // Offset: 0x1613D78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnconnectedMessageHandler::ConnectionState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnconnectedMessageHandler::ConnectionState*, creationType>()));
    }
    // public System.UInt32 GetNextRequestId()
    // Offset: 0x1613D5C
    uint GetNextRequestId();
    // public System.Void BeginSession()
    // Offset: 0x1613C90
    void BeginSession();
    // public System.Boolean IsValidSessionStartRequestId(System.UInt32 requestId)
    // Offset: 0x1613DD8
    bool IsValidSessionStartRequestId(uint requestId);
    // public System.Void BeginSession(System.UInt32 requestId)
    // Offset: 0x1613D24
    void BeginSession(uint requestId);
    // private System.Void SetEpoch(System.UInt32 epoch)
    // Offset: 0x1615564
    void SetEpoch(uint epoch);
    // public System.Boolean CanAcceptRequest(System.UInt32 requestId)
    // Offset: 0x161276C
    bool CanAcceptRequest(uint requestId);
    // public System.Void SetEncryptionState(EncryptionUtility/IEncryptionState encryptionState)
    // Offset: 0x1615588
    void SetEncryptionState(::GlobalNamespace::EncryptionUtility::IEncryptionState* encryptionState);
    // public System.Void SetIdentity(System.UInt32 protocolVersion, System.String userId, System.String userName)
    // Offset: 0x1615590
    void SetIdentity(uint protocolVersion, ::StringW userId, ::StringW userName);
    // public System.Boolean VerifyIdentity(System.UInt32 protocolVersion, System.String userId, System.String userName)
    // Offset: 0x16155A4
    bool VerifyIdentity(uint protocolVersion, ::StringW userId, ::StringW userName);
    // public System.Void Dispose()
    // Offset: 0x1615614
    void Dispose();
    // static private System.Void LogD(System.String message)
    // Offset: 0x1615624
    static void LogD(::StringW message);
  }; // BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.ConnectionState
  #pragma pack(pop)
  static check_size<sizeof(UnconnectedMessageHandler::ConnectionState), 76 + sizeof(uint)> __BGNet_Core_Messages_UnconnectedMessageHandler_ConnectionStateSizeCheck;
  static_assert(sizeof(UnconnectedMessageHandler::ConnectionState) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::get_isEncrypted
// Il2CppName: get_isEncrypted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::*)()>(&BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::get_isEncrypted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState*), "get_isEncrypted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::GetNextRequestId
// Il2CppName: GetNextRequestId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::*)()>(&BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::GetNextRequestId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState*), "GetNextRequestId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::BeginSession
// Il2CppName: BeginSession
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::*)()>(&BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::BeginSession)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState*), "BeginSession", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::IsValidSessionStartRequestId
// Il2CppName: IsValidSessionStartRequestId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::*)(uint)>(&BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::IsValidSessionStartRequestId)> {
  static const MethodInfo* get() {
    static auto* requestId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState*), "IsValidSessionStartRequestId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestId});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::BeginSession
// Il2CppName: BeginSession
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::*)(uint)>(&BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::BeginSession)> {
  static const MethodInfo* get() {
    static auto* requestId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState*), "BeginSession", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestId});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::SetEpoch
// Il2CppName: SetEpoch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::*)(uint)>(&BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::SetEpoch)> {
  static const MethodInfo* get() {
    static auto* epoch = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState*), "SetEpoch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{epoch});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::CanAcceptRequest
// Il2CppName: CanAcceptRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::*)(uint)>(&BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::CanAcceptRequest)> {
  static const MethodInfo* get() {
    static auto* requestId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState*), "CanAcceptRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestId});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::SetEncryptionState
// Il2CppName: SetEncryptionState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::*)(::GlobalNamespace::EncryptionUtility::IEncryptionState*)>(&BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::SetEncryptionState)> {
  static const MethodInfo* get() {
    static auto* encryptionState = &::il2cpp_utils::GetClassFromName("", "EncryptionUtility/IEncryptionState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState*), "SetEncryptionState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{encryptionState});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::SetIdentity
// Il2CppName: SetIdentity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::*)(uint, ::StringW, ::StringW)>(&BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::SetIdentity)> {
  static const MethodInfo* get() {
    static auto* protocolVersion = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState*), "SetIdentity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{protocolVersion, userId, userName});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::VerifyIdentity
// Il2CppName: VerifyIdentity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::*)(uint, ::StringW, ::StringW)>(&BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::VerifyIdentity)> {
  static const MethodInfo* get() {
    static auto* protocolVersion = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState*), "VerifyIdentity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{protocolVersion, userId, userName});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::*)()>(&BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::LogD
// Il2CppName: LogD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState::LogD)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::UnconnectedMessageHandler::ConnectionState*), "LogD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};