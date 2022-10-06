// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: EncryptionUtility
#include "GlobalNamespace/EncryptionUtility.hpp"
// Including type: EncryptionUtility/IEncryptionState
#include "GlobalNamespace/EncryptionUtility_IEncryptionState.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Concurrent
namespace System::Collections::Concurrent {
  // Forward declaring type: ConcurrentQueue`1<T>
  template<typename T>
  class ConcurrentQueue_1;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Macs
namespace Org::BouncyCastle::Crypto::Macs {
  // Forward declaring type: HMac
  class HMac;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EncryptionUtility::EncryptionState);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EncryptionUtility::EncryptionState*, "", "EncryptionUtility/EncryptionState");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: EncryptionUtility/EncryptionState
  // [TokenAttribute] Offset: FFFFFFFF
  class EncryptionUtility::EncryptionState : public ::Il2CppObject/*, public ::GlobalNamespace::EncryptionUtility::IEncryptionState*/ {
    public:
    public:
    // private System.Boolean _isValid
    // Size: 0x1
    // Offset: 0x10
    bool isValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isValid and: lastSentSequenceNum
    char __padding0[0x3] = {};
    // private System.Int32 _lastSentSequenceNum
    // Size: 0x4
    // Offset: 0x14
    int lastSentSequenceNum;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _hasReceivedSequenceNum
    // Size: 0x1
    // Offset: 0x18
    bool hasReceivedSequenceNum;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasReceivedSequenceNum and: lastReceivedSequenceNum
    char __padding2[0x3] = {};
    // private System.UInt32 _lastReceivedSequenceNum
    // Size: 0x4
    // Offset: 0x1C
    uint lastReceivedSequenceNum;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private readonly System.Boolean[] _receivedSequenceNumBuffer
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<bool> receivedSequenceNumBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<bool>) == 0x8);
    // public readonly System.Byte[] sendKey
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> sendKey;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public readonly System.Byte[] receiveKey
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint8_t> receiveKey;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private readonly System.Byte[] _sendMacKey
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<uint8_t> sendMacKey;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private readonly System.Byte[] _receiveMacKey
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<uint8_t> receiveMacKey;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private readonly System.Collections.Concurrent.ConcurrentQueue`1<Org.BouncyCastle.Crypto.Macs.HMac> _sendMacQueue
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac*>* sendMacQueue;
    // Field size check
    static_assert(sizeof(::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac*>*) == 0x8);
    // private readonly System.Collections.Concurrent.ConcurrentQueue`1<Org.BouncyCastle.Crypto.Macs.HMac> _receiveMacQueue
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac*>* receiveMacQueue;
    // Field size check
    static_assert(sizeof(::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::EncryptionUtility::IEncryptionState
    operator ::GlobalNamespace::EncryptionUtility::IEncryptionState() noexcept {
      return *reinterpret_cast<::GlobalNamespace::EncryptionUtility::IEncryptionState*>(this);
    }
    // Creating interface conversion operator: i_IEncryptionState
    inline ::GlobalNamespace::EncryptionUtility::IEncryptionState* i_IEncryptionState() noexcept {
      return reinterpret_cast<::GlobalNamespace::EncryptionUtility::IEncryptionState*>(this);
    }
    // static field const value: static private System.Int32 kReceivedSequencNumBufferLength
    static constexpr const int kReceivedSequencNumBufferLength = 64;
    // Get static field: static private System.Int32 kReceivedSequencNumBufferLength
    static int _get_kReceivedSequencNumBufferLength();
    // Set static field: static private System.Int32 kReceivedSequencNumBufferLength
    static void _set_kReceivedSequencNumBufferLength(int value);
    // Get instance field reference: private System.Boolean _isValid
    [[deprecated("Use field access instead!")]] bool& dyn__isValid();
    // Get instance field reference: private System.Int32 _lastSentSequenceNum
    [[deprecated("Use field access instead!")]] int& dyn__lastSentSequenceNum();
    // Get instance field reference: private System.Boolean _hasReceivedSequenceNum
    [[deprecated("Use field access instead!")]] bool& dyn__hasReceivedSequenceNum();
    // Get instance field reference: private System.UInt32 _lastReceivedSequenceNum
    [[deprecated("Use field access instead!")]] uint& dyn__lastReceivedSequenceNum();
    // Get instance field reference: private readonly System.Boolean[] _receivedSequenceNumBuffer
    [[deprecated("Use field access instead!")]] ::ArrayW<bool>& dyn__receivedSequenceNumBuffer();
    // Get instance field reference: public readonly System.Byte[] sendKey
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_sendKey();
    // Get instance field reference: public readonly System.Byte[] receiveKey
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_receiveKey();
    // Get instance field reference: private readonly System.Byte[] _sendMacKey
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__sendMacKey();
    // Get instance field reference: private readonly System.Byte[] _receiveMacKey
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__receiveMacKey();
    // Get instance field reference: private readonly System.Collections.Concurrent.ConcurrentQueue`1<Org.BouncyCastle.Crypto.Macs.HMac> _sendMacQueue
    [[deprecated("Use field access instead!")]] ::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac*>*& dyn__sendMacQueue();
    // Get instance field reference: private readonly System.Collections.Concurrent.ConcurrentQueue`1<Org.BouncyCastle.Crypto.Macs.HMac> _receiveMacQueue
    [[deprecated("Use field access instead!")]] ::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac*>*& dyn__receiveMacQueue();
    // public System.Boolean get_isValid()
    // Offset: 0x16A0720
    bool get_isValid();
    // public System.Void .ctor(System.Byte[] preMasterSecret, System.Byte[] serverSeed, System.Byte[] clientSeed, System.Boolean isClient)
    // Offset: 0x169E8F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EncryptionUtility::EncryptionState* New_ctor(::ArrayW<uint8_t> preMasterSecret, ::ArrayW<uint8_t> serverSeed, ::ArrayW<uint8_t> clientSeed, bool isClient) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EncryptionUtility::EncryptionState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EncryptionUtility::EncryptionState*, creationType>(preMasterSecret, serverSeed, clientSeed, isClient)));
    }
    // public System.Void EncryptData(System.Byte[] data, ref System.Int32 offset, ref System.Int32 length, System.Int32 extraPrefixBytes)
    // Offset: 0x16A0744
    void EncryptData(::ArrayW<uint8_t> data, ByRef<int> offset, ByRef<int> length, int extraPrefixBytes);
    // public System.Boolean TryDecryptData(System.Byte[] data, ref System.Int32 offset, ref System.Int32 length)
    // Offset: 0x16A07D8
    bool TryDecryptData(::ArrayW<uint8_t> data, ByRef<int> offset, ByRef<int> length);
    // public System.Byte[] ComputeSendMac(System.Byte[] data, System.Int32 offset, System.Int32 count)
    // Offset: 0x169F1B8
    ::ArrayW<uint8_t> ComputeSendMac(::ArrayW<uint8_t> data, int offset, int count);
    // public System.Byte[] ComputeReceiveMac(System.Byte[] data, System.Int32 offset, System.Int32 count)
    // Offset: 0x169FB58
    ::ArrayW<uint8_t> ComputeReceiveMac(::ArrayW<uint8_t> data, int offset, int count);
    // public System.Boolean IsValidSequenceNum(System.UInt32 sequenceNum)
    // Offset: 0x169FA58
    bool IsValidSequenceNum(uint sequenceNum);
    // public System.Boolean PutSequenceNum(System.UInt32 sequenceNum)
    // Offset: 0x169FD64
    bool PutSequenceNum(uint sequenceNum);
    // public System.UInt32 GetNextSentSequenceNum()
    // Offset: 0x169F1AC
    uint GetNextSentSequenceNum();
    // static private System.Byte[] MakeSeed(System.Byte[] baseSeed, System.Byte[] serverSeed, System.Byte[] clientSeed)
    // Offset: 0x16A0864
    static ::ArrayW<uint8_t> MakeSeed(::ArrayW<uint8_t> baseSeed, ::ArrayW<uint8_t> serverSeed, ::ArrayW<uint8_t> clientSeed);
    // static private System.Byte[] PRF(System.Byte[] key, System.Byte[] seed, System.Int32 length)
    // Offset: 0x16A094C
    static ::ArrayW<uint8_t> PRF(::ArrayW<uint8_t> key, ::ArrayW<uint8_t> seed, int length);
    // static private System.Void PRF_Hash(System.Byte[] key, System.Byte[] seed, ref System.Int32 length)
    // Offset: 0x16A0A3C
    static void PRF_Hash(::ArrayW<uint8_t> key, ::ArrayW<uint8_t> seed, ByRef<int> length);
    // public System.Void Dispose()
    // Offset: 0x16A0BF4
    void Dispose();
  }; // EncryptionUtility/EncryptionState
  #pragma pack(pop)
  static check_size<sizeof(EncryptionUtility::EncryptionState), 80 + sizeof(::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac*>*)> __GlobalNamespace_EncryptionUtility_EncryptionStateSizeCheck;
  static_assert(sizeof(EncryptionUtility::EncryptionState) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::EncryptionState::get_isValid
// Il2CppName: get_isValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::EncryptionUtility::EncryptionState::*)()>(&GlobalNamespace::EncryptionUtility::EncryptionState::get_isValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EncryptionUtility::EncryptionState*), "get_isValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::EncryptionState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::EncryptionState::EncryptData
// Il2CppName: EncryptData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EncryptionUtility::EncryptionState::*)(::ArrayW<uint8_t>, ByRef<int>, ByRef<int>, int)>(&GlobalNamespace::EncryptionUtility::EncryptionState::EncryptData)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* extraPrefixBytes = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EncryptionUtility::EncryptionState*), "EncryptData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset, length, extraPrefixBytes});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::EncryptionState::TryDecryptData
// Il2CppName: TryDecryptData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::EncryptionUtility::EncryptionState::*)(::ArrayW<uint8_t>, ByRef<int>, ByRef<int>)>(&GlobalNamespace::EncryptionUtility::EncryptionState::TryDecryptData)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EncryptionUtility::EncryptionState*), "TryDecryptData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset, length});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::EncryptionState::ComputeSendMac
// Il2CppName: ComputeSendMac
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (GlobalNamespace::EncryptionUtility::EncryptionState::*)(::ArrayW<uint8_t>, int, int)>(&GlobalNamespace::EncryptionUtility::EncryptionState::ComputeSendMac)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EncryptionUtility::EncryptionState*), "ComputeSendMac", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset, count});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::EncryptionState::ComputeReceiveMac
// Il2CppName: ComputeReceiveMac
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (GlobalNamespace::EncryptionUtility::EncryptionState::*)(::ArrayW<uint8_t>, int, int)>(&GlobalNamespace::EncryptionUtility::EncryptionState::ComputeReceiveMac)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EncryptionUtility::EncryptionState*), "ComputeReceiveMac", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset, count});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::EncryptionState::IsValidSequenceNum
// Il2CppName: IsValidSequenceNum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::EncryptionUtility::EncryptionState::*)(uint)>(&GlobalNamespace::EncryptionUtility::EncryptionState::IsValidSequenceNum)> {
  static const MethodInfo* get() {
    static auto* sequenceNum = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EncryptionUtility::EncryptionState*), "IsValidSequenceNum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sequenceNum});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::EncryptionState::PutSequenceNum
// Il2CppName: PutSequenceNum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::EncryptionUtility::EncryptionState::*)(uint)>(&GlobalNamespace::EncryptionUtility::EncryptionState::PutSequenceNum)> {
  static const MethodInfo* get() {
    static auto* sequenceNum = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EncryptionUtility::EncryptionState*), "PutSequenceNum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sequenceNum});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::EncryptionState::GetNextSentSequenceNum
// Il2CppName: GetNextSentSequenceNum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (GlobalNamespace::EncryptionUtility::EncryptionState::*)()>(&GlobalNamespace::EncryptionUtility::EncryptionState::GetNextSentSequenceNum)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EncryptionUtility::EncryptionState*), "GetNextSentSequenceNum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::EncryptionState::MakeSeed
// Il2CppName: MakeSeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&GlobalNamespace::EncryptionUtility::EncryptionState::MakeSeed)> {
  static const MethodInfo* get() {
    static auto* baseSeed = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* serverSeed = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* clientSeed = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EncryptionUtility::EncryptionState*), "MakeSeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{baseSeed, serverSeed, clientSeed});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::EncryptionState::PRF
// Il2CppName: PRF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int)>(&GlobalNamespace::EncryptionUtility::EncryptionState::PRF)> {
  static const MethodInfo* get() {
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* seed = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EncryptionUtility::EncryptionState*), "PRF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, seed, length});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::EncryptionState::PRF_Hash
// Il2CppName: PRF_Hash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ByRef<int>)>(&GlobalNamespace::EncryptionUtility::EncryptionState::PRF_Hash)> {
  static const MethodInfo* get() {
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* seed = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EncryptionUtility::EncryptionState*), "PRF_Hash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, seed, length});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::EncryptionState::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EncryptionUtility::EncryptionState::*)()>(&GlobalNamespace::EncryptionUtility::EncryptionState::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EncryptionUtility::EncryptionState*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
