// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IMac
#include "Org/BouncyCastle/Crypto/IMac.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Macs
namespace Org::BouncyCastle::Crypto::Macs {
  // Forward declaring type: Gost28147Mac
  class Gost28147Mac;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Macs::Gost28147Mac);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Macs::Gost28147Mac*, "Org.BouncyCastle.Crypto.Macs", "Gost28147Mac");
// Type namespace: Org.BouncyCastle.Crypto.Macs
namespace Org::BouncyCastle::Crypto::Macs {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Macs.Gost28147Mac
  // [TokenAttribute] Offset: FFFFFFFF
  class Gost28147Mac : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::IMac*/ {
    public:
    public:
    // private System.Int32 bufOff
    // Size: 0x4
    // Offset: 0x10
    int bufOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: bufOff and: buf
    char __padding0[0x4] = {};
    // private System.Byte[] buf
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> buf;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] mac
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> mac;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Boolean firstStep
    // Size: 0x1
    // Offset: 0x28
    bool firstStep;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: firstStep and: workingKey
    char __padding3[0x7] = {};
    // private System.Int32[] workingKey
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<int> workingKey;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private System.Byte[] macIV
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<uint8_t> macIV;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] S
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<uint8_t> S;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::IMac
    operator ::Org::BouncyCastle::Crypto::IMac() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::IMac*>(this);
    }
    // Creating interface conversion operator: i_IMac
    inline ::Org::BouncyCastle::Crypto::IMac* i_IMac() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Crypto::IMac*>(this);
    }
    // Get instance field reference: private System.Int32 bufOff
    [[deprecated("Use field access instead!")]] int& dyn_bufOff();
    // Get instance field reference: private System.Byte[] buf
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_buf();
    // Get instance field reference: private System.Byte[] mac
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_mac();
    // Get instance field reference: private System.Boolean firstStep
    [[deprecated("Use field access instead!")]] bool& dyn_firstStep();
    // Get instance field reference: private System.Int32[] workingKey
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_workingKey();
    // Get instance field reference: private System.Byte[] macIV
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_macIV();
    // Get instance field reference: private System.Byte[] S
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_S();
    // public System.Void .ctor()
    // Offset: 0x1E9DE80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Gost28147Mac* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Macs::Gost28147Mac::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Gost28147Mac*, creationType>()));
    }
    // static private System.Int32[] GenerateWorkingKey(System.Byte[] userKey)
    // Offset: 0x1E9DF34
    static ::ArrayW<int> GenerateWorkingKey(::ArrayW<uint8_t> userKey);
    // public System.Void Init(Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1E9E0B8
    void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetMacSize()
    // Offset: 0x1E9E368
    int GetMacSize();
    // private System.Int32 gost28147_mainStep(System.Int32 n1, System.Int32 key)
    // Offset: 0x1E9E370
    int gost28147_mainStep(int n1, int key);
    // private System.Void gost28147MacFunc(System.Int32[] workingKey, System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1E9E464
    void gost28147MacFunc(::ArrayW<int> workingKey, ::ArrayW<uint8_t> input, int inOff, ::ArrayW<uint8_t> output, int outOff);
    // static private System.Int32 bytesToint(System.Byte[] input, System.Int32 inOff)
    // Offset: 0x1E9E038
    static int bytesToint(::ArrayW<uint8_t> input, int inOff);
    // static private System.Void intTobytes(System.Int32 num, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1E9E554
    static void intTobytes(int num, ::ArrayW<uint8_t> output, int outOff);
    // static private System.Byte[] CM5func(System.Byte[] buf, System.Int32 bufOff, System.Byte[] mac)
    // Offset: 0x1E9E5E0
    static ::ArrayW<uint8_t> CM5func(::ArrayW<uint8_t> buf, int bufOff, ::ArrayW<uint8_t> mac);
    // public System.Void Update(System.Byte input)
    // Offset: 0x1E9E6D4
    void Update(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 len)
    // Offset: 0x1E9E7FC
    void BlockUpdate(::ArrayW<uint8_t> input, int inOff, int len);
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1E9EA0C
    int DoFinal(::ArrayW<uint8_t> output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1E9E324
    void Reset();
  }; // Org.BouncyCastle.Crypto.Macs.Gost28147Mac
  #pragma pack(pop)
  static check_size<sizeof(Gost28147Mac), 64 + sizeof(::ArrayW<uint8_t>)> __Org_BouncyCastle_Crypto_Macs_Gost28147MacSizeCheck;
  static_assert(sizeof(Gost28147Mac) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::Gost28147Mac::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::Gost28147Mac::GenerateWorkingKey
// Il2CppName: GenerateWorkingKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Macs::Gost28147Mac::GenerateWorkingKey)> {
  static const MethodInfo* get() {
    static auto* userKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::Gost28147Mac*), "GenerateWorkingKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userKey});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::Gost28147Mac::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::Gost28147Mac::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Macs::Gost28147Mac::Init)> {
  static const MethodInfo* get() {
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::Gost28147Mac*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::Gost28147Mac::GetMacSize
// Il2CppName: GetMacSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Macs::Gost28147Mac::*)()>(&Org::BouncyCastle::Crypto::Macs::Gost28147Mac::GetMacSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::Gost28147Mac*), "GetMacSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::Gost28147Mac::gost28147_mainStep
// Il2CppName: gost28147_mainStep
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Macs::Gost28147Mac::*)(int, int)>(&Org::BouncyCastle::Crypto::Macs::Gost28147Mac::gost28147_mainStep)> {
  static const MethodInfo* get() {
    static auto* n1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::Gost28147Mac*), "gost28147_mainStep", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n1, key});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::Gost28147Mac::gost28147MacFunc
// Il2CppName: gost28147MacFunc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::Gost28147Mac::*)(::ArrayW<int>, ::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Macs::Gost28147Mac::gost28147MacFunc)> {
  static const MethodInfo* get() {
    static auto* workingKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::Gost28147Mac*), "gost28147MacFunc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{workingKey, input, inOff, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::Gost28147Mac::bytesToint
// Il2CppName: bytesToint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Macs::Gost28147Mac::bytesToint)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::Gost28147Mac*), "bytesToint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::Gost28147Mac::intTobytes
// Il2CppName: intTobytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Macs::Gost28147Mac::intTobytes)> {
  static const MethodInfo* get() {
    static auto* num = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::Gost28147Mac*), "intTobytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{num, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::Gost28147Mac::CM5func
// Il2CppName: CM5func
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Macs::Gost28147Mac::CM5func)> {
  static const MethodInfo* get() {
    static auto* buf = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* bufOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* mac = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::Gost28147Mac*), "CM5func", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buf, bufOff, mac});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::Gost28147Mac::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::Gost28147Mac::*)(uint8_t)>(&Org::BouncyCastle::Crypto::Macs::Gost28147Mac::Update)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::Gost28147Mac*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::Gost28147Mac::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::Gost28147Mac::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Macs::Gost28147Mac::BlockUpdate)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::Gost28147Mac*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::Gost28147Mac::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Macs::Gost28147Mac::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Macs::Gost28147Mac::DoFinal)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::Gost28147Mac*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::Gost28147Mac::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::Gost28147Mac::*)()>(&Org::BouncyCastle::Crypto::Macs::Gost28147Mac::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::Gost28147Mac*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
