// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: AesCryptoServiceProvider
  class AesCryptoServiceProvider;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EncryptionUtility
  class EncryptionUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EncryptionUtility);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EncryptionUtility*, "", "EncryptionUtility");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: EncryptionUtility
  // [TokenAttribute] Offset: FFFFFFFF
  class EncryptionUtility : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::EncryptionUtility::IEncryptionState
    class IEncryptionState;
    // Nested type: ::GlobalNamespace::EncryptionUtility::EncryptionState
    class EncryptionState;
    // Nested type: ::GlobalNamespace::EncryptionUtility::$$c__DisplayClass18_0
    class $$c__DisplayClass18_0;
    // static field const value: static private System.Int32 kMacHashSize
    static constexpr const int kMacHashSize = 10;
    // Get static field: static private System.Int32 kMacHashSize
    static int _get_kMacHashSize();
    // Set static field: static private System.Int32 kMacHashSize
    static void _set_kMacHashSize(int value);
    // static field const value: static private System.Int32 kSequenceNumberSize
    static constexpr const int kSequenceNumberSize = 4;
    // Get static field: static private System.Int32 kSequenceNumberSize
    static int _get_kSequenceNumberSize();
    // Set static field: static private System.Int32 kSequenceNumberSize
    static void _set_kSequenceNumberSize(int value);
    // static field const value: static private System.Int32 kMaxPadding
    static constexpr const int kMaxPadding = 32;
    // Get static field: static private System.Int32 kMaxPadding
    static int _get_kMaxPadding();
    // Set static field: static private System.Int32 kMaxPadding
    static void _set_kMaxPadding(int value);
    // static field const value: static private System.Int32 kMacKeySize
    static constexpr const int kMacKeySize = 64;
    // Get static field: static private System.Int32 kMacKeySize
    static int _get_kMacKeySize();
    // Set static field: static private System.Int32 kMacKeySize
    static void _set_kMacKeySize(int value);
    // static field const value: static private System.Int32 kKeySize
    static constexpr const int kKeySize = 32;
    // Get static field: static private System.Int32 kKeySize
    static int _get_kKeySize();
    // Set static field: static private System.Int32 kKeySize
    static void _set_kKeySize(int value);
    // static field const value: static private System.Int32 kBlockSize
    static constexpr const int kBlockSize = 16;
    // Get static field: static private System.Int32 kBlockSize
    static int _get_kBlockSize();
    // Set static field: static private System.Int32 kBlockSize
    static void _set_kBlockSize(int value);
    // static field const value: static private System.Int32 kIvSize
    static constexpr const int kIvSize = 16;
    // Get static field: static private System.Int32 kIvSize
    static int _get_kIvSize();
    // Set static field: static private System.Int32 kIvSize
    static void _set_kIvSize(int value);
    // static field const value: static public System.Int32 kMasterKeySize
    static constexpr const int kMasterKeySize = 48;
    // Get static field: static public System.Int32 kMasterKeySize
    static int _get_kMasterKeySize();
    // Set static field: static public System.Int32 kMasterKeySize
    static void _set_kMasterKeySize(int value);
    // static field const value: static public System.Int32 kRandomBlockSize
    static constexpr const int kRandomBlockSize = 32;
    // Get static field: static public System.Int32 kRandomBlockSize
    static int _get_kRandomBlockSize();
    // Set static field: static public System.Int32 kRandomBlockSize
    static void _set_kRandomBlockSize(int value);
    // static field const value: static public System.Int32 kExtraSize
    static constexpr const int kExtraSize = 62;
    // Get static field: static public System.Int32 kExtraSize
    static int _get_kExtraSize();
    // Set static field: static public System.Int32 kExtraSize
    static void _set_kExtraSize(int value);
    // Get static field: static private System.Byte[] _masterSecretSeed
    static ::ArrayW<uint8_t> _get__masterSecretSeed();
    // Set static field: static private System.Byte[] _masterSecretSeed
    static void _set__masterSecretSeed(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] _keyExpansionSeed
    static ::ArrayW<uint8_t> _get__keyExpansionSeed();
    // Set static field: static private System.Byte[] _keyExpansionSeed
    static void _set__keyExpansionSeed(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] _tempIV
    static ::ArrayW<uint8_t> _get__tempIV();
    // Set static field: static private System.Byte[] _tempIV
    static void _set__tempIV(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] _tempHash
    static ::ArrayW<uint8_t> _get__tempHash();
    // Set static field: static private System.Byte[] _tempHash
    static void _set__tempHash(::ArrayW<uint8_t> value);
    // Get static field: static private System.Security.Cryptography.AesCryptoServiceProvider _aes
    static ::System::Security::Cryptography::AesCryptoServiceProvider* _get__aes();
    // Set static field: static private System.Security.Cryptography.AesCryptoServiceProvider _aes
    static void _set__aes(::System::Security::Cryptography::AesCryptoServiceProvider* value);
    // static private System.Void .cctor()
    // Offset: 0x16C9A40
    static void _cctor();
    // static public EncryptionUtility/IEncryptionState CreateEncryptionState(System.Byte[] preMasterSecret, System.Byte[] serverSeed, System.Byte[] clientSeed, System.Boolean isClient)
    // Offset: 0x16C7D1C
    static ::GlobalNamespace::EncryptionUtility::IEncryptionState* CreateEncryptionState(::ArrayW<uint8_t> preMasterSecret, ::ArrayW<uint8_t> serverSeed, ::ArrayW<uint8_t> clientSeed, bool isClient);
    // static public System.Threading.Tasks.Task`1<EncryptionUtility/IEncryptionState> CreateEncryptionStateAsync(System.Byte[] preMasterSecret, System.Byte[] serverSeed, System.Byte[] clientSeed, System.Boolean isClient)
    // Offset: 0x16C4694
    static ::System::Threading::Tasks::Task_1<::GlobalNamespace::EncryptionUtility::IEncryptionState*>* CreateEncryptionStateAsync(::ArrayW<uint8_t> preMasterSecret, ::ArrayW<uint8_t> serverSeed, ::ArrayW<uint8_t> clientSeed, bool isClient);
    // static public System.Boolean IsValidLength(System.Int32 length)
    // Offset: 0x16C7FE4
    static bool IsValidLength(int length);
    // static private System.Void EncryptData(EncryptionUtility/EncryptionState state, System.Byte[] data, ref System.Int32 offset, ref System.Int32 length, System.Int32 extraPrefixedData)
    // Offset: 0x16C8004
    static void EncryptData(::GlobalNamespace::EncryptionUtility::EncryptionState* state, ::ArrayW<uint8_t> data, ByRef<int> offset, ByRef<int> length, int extraPrefixedData);
    // static private System.Boolean TryDecryptData(EncryptionUtility/EncryptionState state, System.Byte[] data, ref System.Int32 offset, ref System.Int32 length)
    // Offset: 0x16C8878
    static bool TryDecryptData(::GlobalNamespace::EncryptionUtility::EncryptionState* state, ::ArrayW<uint8_t> data, ByRef<int> offset, ByRef<int> length);
    // static private System.Void FastCopyBlock(System.Byte[] inArr, System.Int32 inOff, System.Byte[] outArr, System.Int32 outOff)
    // Offset: 0x16C9410
    static void FastCopyBlock(::ArrayW<uint8_t> inArr, int inOff, ::ArrayW<uint8_t> outArr, int outOff);
    // static private System.Void FastCopyMac(System.Byte[] inArr, System.Int32 inOff, System.Byte[] outArr, System.Int32 outOff)
    // Offset: 0x16C9730
    static void FastCopyMac(::ArrayW<uint8_t> inArr, int inOff, ::ArrayW<uint8_t> outArr, int outOff);
    // static public System.Void Log(System.String message)
    // Offset: 0x16C9930
    static void Log(::StringW message);
    // static public System.Void LogV(System.String message)
    // Offset: 0x16C99B8
    static void LogV(::StringW message);
  }; // EncryptionUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::EncryptionUtility::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EncryptionUtility*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::CreateEncryptionState
// Il2CppName: CreateEncryptionState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EncryptionUtility::IEncryptionState* (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, bool)>(&GlobalNamespace::EncryptionUtility::CreateEncryptionState)> {
  static const MethodInfo* get() {
    static auto* preMasterSecret = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* serverSeed = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* clientSeed = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* isClient = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EncryptionUtility*), "CreateEncryptionState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{preMasterSecret, serverSeed, clientSeed, isClient});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::CreateEncryptionStateAsync
// Il2CppName: CreateEncryptionStateAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::EncryptionUtility::IEncryptionState*>* (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, bool)>(&GlobalNamespace::EncryptionUtility::CreateEncryptionStateAsync)> {
  static const MethodInfo* get() {
    static auto* preMasterSecret = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* serverSeed = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* clientSeed = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* isClient = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EncryptionUtility*), "CreateEncryptionStateAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{preMasterSecret, serverSeed, clientSeed, isClient});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::IsValidLength
// Il2CppName: IsValidLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&GlobalNamespace::EncryptionUtility::IsValidLength)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EncryptionUtility*), "IsValidLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::EncryptData
// Il2CppName: EncryptData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::EncryptionUtility::EncryptionState*, ::ArrayW<uint8_t>, ByRef<int>, ByRef<int>, int)>(&GlobalNamespace::EncryptionUtility::EncryptData)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("", "EncryptionUtility/EncryptionState")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* extraPrefixedData = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EncryptionUtility*), "EncryptData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state, data, offset, length, extraPrefixedData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::TryDecryptData
// Il2CppName: TryDecryptData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::EncryptionUtility::EncryptionState*, ::ArrayW<uint8_t>, ByRef<int>, ByRef<int>)>(&GlobalNamespace::EncryptionUtility::TryDecryptData)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("", "EncryptionUtility/EncryptionState")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EncryptionUtility*), "TryDecryptData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state, data, offset, length});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::FastCopyBlock
// Il2CppName: FastCopyBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>, int)>(&GlobalNamespace::EncryptionUtility::FastCopyBlock)> {
  static const MethodInfo* get() {
    static auto* inArr = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outArr = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EncryptionUtility*), "FastCopyBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inArr, inOff, outArr, outOff});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::FastCopyMac
// Il2CppName: FastCopyMac
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>, int)>(&GlobalNamespace::EncryptionUtility::FastCopyMac)> {
  static const MethodInfo* get() {
    static auto* inArr = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outArr = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EncryptionUtility*), "FastCopyMac", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inArr, inOff, outArr, outOff});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&GlobalNamespace::EncryptionUtility::Log)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EncryptionUtility*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::LogV
// Il2CppName: LogV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&GlobalNamespace::EncryptionUtility::LogV)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EncryptionUtility*), "LogV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
