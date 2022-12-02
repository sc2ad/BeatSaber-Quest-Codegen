// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IBlockCipher
#include "Org/BouncyCastle/Crypto/IBlockCipher.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Forward declaring type: SeedEngine
  class SeedEngine;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::SeedEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::SeedEngine*, "Org.BouncyCastle.Crypto.Engines", "SeedEngine");
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.SeedEngine
  // [TokenAttribute] Offset: FFFFFFFF
  class SeedEngine : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    public:
    // private System.Int32[] wKey
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<int> wKey;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private System.Boolean forEncryption
    // Size: 0x1
    // Offset: 0x18
    bool forEncryption;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::IBlockCipher
    operator ::Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Creating interface conversion operator: i_IBlockCipher
    inline ::Org::BouncyCastle::Crypto::IBlockCipher* i_IBlockCipher() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Get static field: static private readonly System.UInt32[] SS0
    static ::ArrayW<uint> _get_SS0();
    // Set static field: static private readonly System.UInt32[] SS0
    static void _set_SS0(::ArrayW<uint> value);
    // Get static field: static private readonly System.UInt32[] SS1
    static ::ArrayW<uint> _get_SS1();
    // Set static field: static private readonly System.UInt32[] SS1
    static void _set_SS1(::ArrayW<uint> value);
    // Get static field: static private readonly System.UInt32[] SS2
    static ::ArrayW<uint> _get_SS2();
    // Set static field: static private readonly System.UInt32[] SS2
    static void _set_SS2(::ArrayW<uint> value);
    // Get static field: static private readonly System.UInt32[] SS3
    static ::ArrayW<uint> _get_SS3();
    // Set static field: static private readonly System.UInt32[] SS3
    static void _set_SS3(::ArrayW<uint> value);
    // Get static field: static private readonly System.UInt32[] KC
    static ::ArrayW<uint> _get_KC();
    // Set static field: static private readonly System.UInt32[] KC
    static void _set_KC(::ArrayW<uint> value);
    // Get instance field reference: private System.Int32[] wKey
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_wKey();
    // Get instance field reference: private System.Boolean forEncryption
    [[deprecated("Use field access instead!")]] bool& dyn_forEncryption();
    // public System.String get_AlgorithmName()
    // Offset: 0x248E260
    ::StringW get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x248E2A8
    bool get_IsPartialBlockOkay();
    // static private System.Void .cctor()
    // Offset: 0x248E798
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x248E8DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SeedEngine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Engines::SeedEngine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SeedEngine*, creationType>()));
    }
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x248DFE4
    void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetBlockSize()
    // Offset: 0x248E2B0
    int GetBlockSize();
    // public System.Int32 ProcessBlock(System.Byte[] inBuf, System.Int32 inOff, System.Byte[] outBuf, System.Int32 outOff)
    // Offset: 0x248E2B8
    int ProcessBlock(::ArrayW<uint8_t> inBuf, int inOff, ::ArrayW<uint8_t> outBuf, int outOff);
    // public System.Void Reset()
    // Offset: 0x248E600
    void Reset();
    // private System.Int32[] createWorkingKey(System.Byte[] inKey)
    // Offset: 0x248E09C
    ::ArrayW<int> createWorkingKey(::ArrayW<uint8_t> inKey);
    // private System.Int32 extractW1(System.Int64 lVal)
    // Offset: 0x248E60C
    int extractW1(int64_t lVal);
    // private System.Int32 extractW0(System.Int64 lVal)
    // Offset: 0x248E604
    int extractW0(int64_t lVal);
    // private System.Int64 rotateLeft8(System.Int64 x)
    // Offset: 0x248E720
    int64_t rotateLeft8(int64_t x);
    // private System.Int64 rotateRight8(System.Int64 x)
    // Offset: 0x248E718
    int64_t rotateRight8(int64_t x);
    // private System.Int64 bytesToLong(System.Byte[] src, System.Int32 srcOff)
    // Offset: 0x248E4B4
    int64_t bytesToLong(::ArrayW<uint8_t> src, int srcOff);
    // private System.Void longToBytes(System.Byte[] dest, System.Int32 destOff, System.Int64 value)
    // Offset: 0x248E590
    void longToBytes(::ArrayW<uint8_t> dest, int destOff, int64_t value);
    // private System.Int32 G(System.Int32 x)
    // Offset: 0x248E614
    int G(int x);
    // private System.Int64 F(System.Int32 ki0, System.Int32 ki1, System.Int64 r)
    // Offset: 0x248E520
    int64_t F(int ki0, int ki1, int64_t r);
    // private System.Int32 phaseCalc1(System.Int32 r0, System.Int32 ki0, System.Int32 r1, System.Int32 ki1)
    // Offset: 0x248E76C
    int phaseCalc1(int r0, int ki0, int r1, int ki1);
    // private System.Int32 phaseCalc2(System.Int32 r0, System.Int32 ki0, System.Int32 r1, System.Int32 ki1)
    // Offset: 0x248E728
    int phaseCalc2(int r0, int ki0, int r1, int ki1);
  }; // Org.BouncyCastle.Crypto.Engines.SeedEngine
  #pragma pack(pop)
  static check_size<sizeof(SeedEngine), 24 + sizeof(bool)> __Org_BouncyCastle_Crypto_Engines_SeedEngineSizeCheck;
  static_assert(sizeof(SeedEngine) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SeedEngine::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Crypto::Engines::SeedEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::SeedEngine::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SeedEngine*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SeedEngine::get_IsPartialBlockOkay
// Il2CppName: get_IsPartialBlockOkay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Engines::SeedEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::SeedEngine::get_IsPartialBlockOkay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SeedEngine*), "get_IsPartialBlockOkay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SeedEngine::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Engines::SeedEngine::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SeedEngine*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SeedEngine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SeedEngine::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::SeedEngine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Engines::SeedEngine::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SeedEngine*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SeedEngine::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::SeedEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::SeedEngine::GetBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SeedEngine*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SeedEngine::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::SeedEngine::*)(::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::SeedEngine::ProcessBlock)> {
  static const MethodInfo* get() {
    static auto* inBuf = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outBuf = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SeedEngine*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inBuf, inOff, outBuf, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SeedEngine::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::SeedEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::SeedEngine::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SeedEngine*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SeedEngine::createWorkingKey
// Il2CppName: createWorkingKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (Org::BouncyCastle::Crypto::Engines::SeedEngine::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Engines::SeedEngine::createWorkingKey)> {
  static const MethodInfo* get() {
    static auto* inKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SeedEngine*), "createWorkingKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inKey});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SeedEngine::extractW1
// Il2CppName: extractW1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::SeedEngine::*)(int64_t)>(&Org::BouncyCastle::Crypto::Engines::SeedEngine::extractW1)> {
  static const MethodInfo* get() {
    static auto* lVal = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SeedEngine*), "extractW1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lVal});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SeedEngine::extractW0
// Il2CppName: extractW0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::SeedEngine::*)(int64_t)>(&Org::BouncyCastle::Crypto::Engines::SeedEngine::extractW0)> {
  static const MethodInfo* get() {
    static auto* lVal = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SeedEngine*), "extractW0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lVal});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SeedEngine::rotateLeft8
// Il2CppName: rotateLeft8
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Org::BouncyCastle::Crypto::Engines::SeedEngine::*)(int64_t)>(&Org::BouncyCastle::Crypto::Engines::SeedEngine::rotateLeft8)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SeedEngine*), "rotateLeft8", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SeedEngine::rotateRight8
// Il2CppName: rotateRight8
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Org::BouncyCastle::Crypto::Engines::SeedEngine::*)(int64_t)>(&Org::BouncyCastle::Crypto::Engines::SeedEngine::rotateRight8)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SeedEngine*), "rotateRight8", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SeedEngine::bytesToLong
// Il2CppName: bytesToLong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Org::BouncyCastle::Crypto::Engines::SeedEngine::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::SeedEngine::bytesToLong)> {
  static const MethodInfo* get() {
    static auto* src = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* srcOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SeedEngine*), "bytesToLong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, srcOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SeedEngine::longToBytes
// Il2CppName: longToBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::SeedEngine::*)(::ArrayW<uint8_t>, int, int64_t)>(&Org::BouncyCastle::Crypto::Engines::SeedEngine::longToBytes)> {
  static const MethodInfo* get() {
    static auto* dest = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* destOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SeedEngine*), "longToBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dest, destOff, value});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SeedEngine::G
// Il2CppName: G
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::SeedEngine::*)(int)>(&Org::BouncyCastle::Crypto::Engines::SeedEngine::G)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SeedEngine*), "G", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SeedEngine::F
// Il2CppName: F
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Org::BouncyCastle::Crypto::Engines::SeedEngine::*)(int, int, int64_t)>(&Org::BouncyCastle::Crypto::Engines::SeedEngine::F)> {
  static const MethodInfo* get() {
    static auto* ki0 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ki1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* r = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SeedEngine*), "F", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ki0, ki1, r});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SeedEngine::phaseCalc1
// Il2CppName: phaseCalc1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::SeedEngine::*)(int, int, int, int)>(&Org::BouncyCastle::Crypto::Engines::SeedEngine::phaseCalc1)> {
  static const MethodInfo* get() {
    static auto* r0 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ki0 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* r1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ki1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SeedEngine*), "phaseCalc1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r0, ki0, r1, ki1});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SeedEngine::phaseCalc2
// Il2CppName: phaseCalc2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::SeedEngine::*)(int, int, int, int)>(&Org::BouncyCastle::Crypto::Engines::SeedEngine::phaseCalc2)> {
  static const MethodInfo* get() {
    static auto* r0 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ki0 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* r1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ki1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SeedEngine*), "phaseCalc2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r0, ki0, r1, ki1});
  }
};
