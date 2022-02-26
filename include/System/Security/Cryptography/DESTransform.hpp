// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.Cryptography.SymmetricTransform
#include "Mono/Security/Cryptography/SymmetricTransform.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: SymmetricAlgorithm
  class SymmetricAlgorithm;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: DESTransform
  class DESTransform;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::DESTransform);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::DESTransform*, "System.Security.Cryptography", "DESTransform");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.DESTransform
  // [TokenAttribute] Offset: FFFFFFFF
  class DESTransform : public ::Mono::Security::Cryptography::SymmetricTransform {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Byte[] keySchedule
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<uint8_t> keySchedule;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] byteBuff
    // Size: 0x8
    // Offset: 0x60
    ::ArrayW<uint8_t> byteBuff;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.UInt32[] dwordBuff
    // Size: 0x8
    // Offset: 0x68
    ::ArrayW<uint> dwordBuff;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    public:
    // Get static field: static readonly System.Int32 KEY_BIT_SIZE
    static int _get_KEY_BIT_SIZE();
    // Set static field: static readonly System.Int32 KEY_BIT_SIZE
    static void _set_KEY_BIT_SIZE(int value);
    // Get static field: static readonly System.Int32 KEY_BYTE_SIZE
    static int _get_KEY_BYTE_SIZE();
    // Set static field: static readonly System.Int32 KEY_BYTE_SIZE
    static void _set_KEY_BYTE_SIZE(int value);
    // Get static field: static readonly System.Int32 BLOCK_BIT_SIZE
    static int _get_BLOCK_BIT_SIZE();
    // Set static field: static readonly System.Int32 BLOCK_BIT_SIZE
    static void _set_BLOCK_BIT_SIZE(int value);
    // Get static field: static readonly System.Int32 BLOCK_BYTE_SIZE
    static int _get_BLOCK_BYTE_SIZE();
    // Set static field: static readonly System.Int32 BLOCK_BYTE_SIZE
    static void _set_BLOCK_BYTE_SIZE(int value);
    // Get static field: static private readonly System.UInt32[] spBoxes
    static ::ArrayW<uint> _get_spBoxes();
    // Set static field: static private readonly System.UInt32[] spBoxes
    static void _set_spBoxes(::ArrayW<uint> value);
    // Get static field: static private readonly System.Byte[] PC1
    static ::ArrayW<uint8_t> _get_PC1();
    // Set static field: static private readonly System.Byte[] PC1
    static void _set_PC1(::ArrayW<uint8_t> value);
    // Get static field: static private readonly System.Byte[] leftRotTotal
    static ::ArrayW<uint8_t> _get_leftRotTotal();
    // Set static field: static private readonly System.Byte[] leftRotTotal
    static void _set_leftRotTotal(::ArrayW<uint8_t> value);
    // Get static field: static private readonly System.Byte[] PC2
    static ::ArrayW<uint8_t> _get_PC2();
    // Set static field: static private readonly System.Byte[] PC2
    static void _set_PC2(::ArrayW<uint8_t> value);
    // Get static field: static readonly System.UInt32[] ipTab
    static ::ArrayW<uint> _get_ipTab();
    // Set static field: static readonly System.UInt32[] ipTab
    static void _set_ipTab(::ArrayW<uint> value);
    // Get static field: static readonly System.UInt32[] fpTab
    static ::ArrayW<uint> _get_fpTab();
    // Set static field: static readonly System.UInt32[] fpTab
    static void _set_fpTab(::ArrayW<uint> value);
    // Get instance field reference: private System.Byte[] keySchedule
    ::ArrayW<uint8_t>& dyn_keySchedule();
    // Get instance field reference: private System.Byte[] byteBuff
    ::ArrayW<uint8_t>& dyn_byteBuff();
    // Get instance field reference: private System.UInt32[] dwordBuff
    ::ArrayW<uint>& dyn_dwordBuff();
    // System.Void .ctor(System.Security.Cryptography.SymmetricAlgorithm symmAlgo, System.Boolean encryption, System.Byte[] key, System.Byte[] iv)
    // Offset: 0x1AC2E34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DESTransform* New_ctor(::System::Security::Cryptography::SymmetricAlgorithm* symmAlgo, bool encryption, ::ArrayW<uint8_t> key, ::ArrayW<uint8_t> iv) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::DESTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DESTransform*, creationType>(symmAlgo, encryption, key, iv)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1AC4274
    static void _cctor();
    // private System.UInt32 CipherFunct(System.UInt32 r, System.Int32 n)
    // Offset: 0x1AC37EC
    uint CipherFunct(uint r, int n);
    // static System.Void Permutation(System.Byte[] input, System.Byte[] output, System.UInt32[] permTab, System.Boolean preSwap)
    // Offset: 0x1AC3A34
    static void Permutation(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output, ::ArrayW<uint> permTab, bool preSwap);
    // static private System.Void BSwap(System.Byte[] byteBuff)
    // Offset: 0x1AC3D84
    static void BSwap(::ArrayW<uint8_t> byteBuff);
    // System.Void SetKey(System.Byte[] key)
    // Offset: 0x1AC33EC
    void SetKey(::ArrayW<uint8_t> key);
    // public System.Void ProcessBlock(System.Byte[] input, System.Byte[] output)
    // Offset: 0x1AC3E08
    void ProcessBlock(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output);
    // static System.Byte[] GetStrongKey()
    // Offset: 0x1AC32F8
    static ::ArrayW<uint8_t> GetStrongKey();
    // protected override System.Void ECB(System.Byte[] input, System.Byte[] output)
    // Offset: 0x1AC41C0
    // Implemented from: Mono.Security.Cryptography.SymmetricTransform
    // Base method: System.Void SymmetricTransform::ECB(System.Byte[] input, System.Byte[] output)
    void ECB(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output);
  }; // System.Security.Cryptography.DESTransform
  #pragma pack(pop)
  static check_size<sizeof(DESTransform), 104 + sizeof(::ArrayW<uint>)> __System_Security_Cryptography_DESTransformSizeCheck;
  static_assert(sizeof(DESTransform) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::DESTransform::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::DESTransform::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Security::Cryptography::DESTransform::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DESTransform*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DESTransform::CipherFunct
// Il2CppName: CipherFunct
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (System::Security::Cryptography::DESTransform::*)(uint, int)>(&System::Security::Cryptography::DESTransform::CipherFunct)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DESTransform*), "CipherFunct", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r, n});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DESTransform::Permutation
// Il2CppName: Permutation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint>, bool)>(&System::Security::Cryptography::DESTransform::Permutation)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* permTab = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* preSwap = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DESTransform*), "Permutation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, output, permTab, preSwap});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DESTransform::BSwap
// Il2CppName: BSwap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::DESTransform::BSwap)> {
  static const MethodInfo* get() {
    static auto* byteBuff = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DESTransform*), "BSwap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{byteBuff});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DESTransform::SetKey
// Il2CppName: SetKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::DESTransform::*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::DESTransform::SetKey)> {
  static const MethodInfo* get() {
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DESTransform*), "SetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DESTransform::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::DESTransform::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&System::Security::Cryptography::DESTransform::ProcessBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DESTransform*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, output});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DESTransform::GetStrongKey
// Il2CppName: GetStrongKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)()>(&System::Security::Cryptography::DESTransform::GetStrongKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DESTransform*), "GetStrongKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DESTransform::ECB
// Il2CppName: ECB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::DESTransform::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&System::Security::Cryptography::DESTransform::ECB)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DESTransform*), "ECB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, output});
  }
};
