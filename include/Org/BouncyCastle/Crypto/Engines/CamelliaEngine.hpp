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
  // Forward declaring type: CamelliaEngine
  class CamelliaEngine;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::CamelliaEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::CamelliaEngine*, "Org.BouncyCastle.Crypto.Engines", "CamelliaEngine");
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.CamelliaEngine
  // [TokenAttribute] Offset: FFFFFFFF
  class CamelliaEngine : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::IBlockCipher*/ {
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
    // private System.Boolean initialised
    // Size: 0x1
    // Offset: 0x10
    bool initialised;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _keyIs128
    // Size: 0x1
    // Offset: 0x11
    bool keyIs128;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: keyIs128 and: subkey
    char __padding1[0x6] = {};
    // private System.UInt32[] subkey
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint> subkey;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    // private System.UInt32[] kw
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint> kw;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    // private System.UInt32[] ke
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint> ke;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    // private System.UInt32[] state
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint> state;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::IBlockCipher
    operator ::Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Get static field: static private readonly System.UInt32[] SIGMA
    static ::ArrayW<uint> _get_SIGMA();
    // Set static field: static private readonly System.UInt32[] SIGMA
    static void _set_SIGMA(::ArrayW<uint> value);
    // Get static field: static private readonly System.UInt32[] SBOX1_1110
    static ::ArrayW<uint> _get_SBOX1_1110();
    // Set static field: static private readonly System.UInt32[] SBOX1_1110
    static void _set_SBOX1_1110(::ArrayW<uint> value);
    // Get static field: static private readonly System.UInt32[] SBOX4_4404
    static ::ArrayW<uint> _get_SBOX4_4404();
    // Set static field: static private readonly System.UInt32[] SBOX4_4404
    static void _set_SBOX4_4404(::ArrayW<uint> value);
    // Get static field: static private readonly System.UInt32[] SBOX2_0222
    static ::ArrayW<uint> _get_SBOX2_0222();
    // Set static field: static private readonly System.UInt32[] SBOX2_0222
    static void _set_SBOX2_0222(::ArrayW<uint> value);
    // Get static field: static private readonly System.UInt32[] SBOX3_3033
    static ::ArrayW<uint> _get_SBOX3_3033();
    // Set static field: static private readonly System.UInt32[] SBOX3_3033
    static void _set_SBOX3_3033(::ArrayW<uint> value);
    // Get instance field reference: private System.Boolean initialised
    bool& dyn_initialised();
    // Get instance field reference: private System.Boolean _keyIs128
    bool& dyn__keyIs128();
    // Get instance field reference: private System.UInt32[] subkey
    ::ArrayW<uint>& dyn_subkey();
    // Get instance field reference: private System.UInt32[] kw
    ::ArrayW<uint>& dyn_kw();
    // Get instance field reference: private System.UInt32[] ke
    ::ArrayW<uint>& dyn_ke();
    // Get instance field reference: private System.UInt32[] state
    ::ArrayW<uint>& dyn_state();
    // public System.String get_AlgorithmName()
    // Offset: 0x2314FA8
    ::StringW get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x2314FF0
    bool get_IsPartialBlockOkay();
    // static private System.Void .cctor()
    // Offset: 0x2315128
    static void _cctor();
    // static private System.UInt32 rightRotate(System.UInt32 x, System.Int32 s)
    // Offset: 0x23128AC
    static uint rightRotate(uint x, int s);
    // static private System.UInt32 leftRotate(System.UInt32 x, System.Int32 s)
    // Offset: 0x23128C0
    static uint leftRotate(uint x, int s);
    // static private System.Void roldq(System.Int32 rot, System.UInt32[] ki, System.Int32 ioff, System.UInt32[] ko, System.Int32 ooff)
    // Offset: 0x23128D4
    static void roldq(int rot, ::ArrayW<uint> ki, int ioff, ::ArrayW<uint> ko, int ooff);
    // static private System.Void decroldq(System.Int32 rot, System.UInt32[] ki, System.Int32 ioff, System.UInt32[] ko, System.Int32 ooff)
    // Offset: 0x2312AA4
    static void decroldq(int rot, ::ArrayW<uint> ki, int ioff, ::ArrayW<uint> ko, int ooff);
    // static private System.Void roldqo32(System.Int32 rot, System.UInt32[] ki, System.Int32 ioff, System.UInt32[] ko, System.Int32 ooff)
    // Offset: 0x2312C74
    static void roldqo32(int rot, ::ArrayW<uint> ki, int ioff, ::ArrayW<uint> ko, int ooff);
    // static private System.Void decroldqo32(System.Int32 rot, System.UInt32[] ki, System.Int32 ioff, System.UInt32[] ko, System.Int32 ooff)
    // Offset: 0x2312E48
    static void decroldqo32(int rot, ::ArrayW<uint> ki, int ioff, ::ArrayW<uint> ko, int ooff);
    // static private System.UInt32 bytes2uint(System.Byte[] src, System.Int32 offset)
    // Offset: 0x231301C
    static uint bytes2uint(::ArrayW<uint8_t> src, int offset);
    // static private System.Void uint2bytes(System.UInt32 word, System.Byte[] dst, System.Int32 offset)
    // Offset: 0x231308C
    static void uint2bytes(uint word, ::ArrayW<uint8_t> dst, int offset);
    // static private System.Void camelliaF2(System.UInt32[] s, System.UInt32[] skey, System.Int32 keyoff)
    // Offset: 0x23130E0
    static void camelliaF2(::ArrayW<uint> s, ::ArrayW<uint> skey, int keyoff);
    // static private System.Void camelliaFLs(System.UInt32[] s, System.UInt32[] fkey, System.Int32 keyoff)
    // Offset: 0x231341C
    static void camelliaFLs(::ArrayW<uint> s, ::ArrayW<uint> fkey, int keyoff);
    // private System.Void setKey(System.Boolean forEncryption, System.Byte[] key)
    // Offset: 0x2313570
    void setKey(bool forEncryption, ::ArrayW<uint8_t> key);
    // private System.Int32 processBlock128(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x2314770
    int processBlock128(::ArrayW<uint8_t> input, int inOff, ::ArrayW<uint8_t> output, int outOff);
    // private System.Int32 processBlock192or256(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x2314AB0
    int processBlock192or256(::ArrayW<uint8_t> input, int inOff, ::ArrayW<uint8_t> output, int outOff);
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x2314EC0
    void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetBlockSize()
    // Offset: 0x2314FF8
    int GetBlockSize();
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x2315000
    int ProcessBlock(::ArrayW<uint8_t> input, int inOff, ::ArrayW<uint8_t> output, int outOff);
    // public System.Void Reset()
    // Offset: 0x2315124
    void Reset();
    // public System.Void .ctor()
    // Offset: 0x2314E2C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CamelliaEngine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Engines::CamelliaEngine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CamelliaEngine*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Engines.CamelliaEngine
  #pragma pack(pop)
  static check_size<sizeof(CamelliaEngine), 48 + sizeof(::ArrayW<uint>)> __Org_BouncyCastle_Crypto_Engines_CamelliaEngineSizeCheck;
  static_assert(sizeof(CamelliaEngine) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Crypto::Engines::CamelliaEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::get_IsPartialBlockOkay
// Il2CppName: get_IsPartialBlockOkay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Engines::CamelliaEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::get_IsPartialBlockOkay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "get_IsPartialBlockOkay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::rightRotate
// Il2CppName: rightRotate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, int)>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::rightRotate)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "rightRotate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, s});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::leftRotate
// Il2CppName: leftRotate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, int)>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::leftRotate)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "leftRotate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, s});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::roldq
// Il2CppName: roldq
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::ArrayW<uint>, int, ::ArrayW<uint>, int)>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::roldq)> {
  static const MethodInfo* get() {
    static auto* rot = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ki = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* ioff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ko = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* ooff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "roldq", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rot, ki, ioff, ko, ooff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::decroldq
// Il2CppName: decroldq
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::ArrayW<uint>, int, ::ArrayW<uint>, int)>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::decroldq)> {
  static const MethodInfo* get() {
    static auto* rot = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ki = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* ioff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ko = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* ooff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "decroldq", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rot, ki, ioff, ko, ooff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::roldqo32
// Il2CppName: roldqo32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::ArrayW<uint>, int, ::ArrayW<uint>, int)>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::roldqo32)> {
  static const MethodInfo* get() {
    static auto* rot = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ki = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* ioff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ko = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* ooff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "roldqo32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rot, ki, ioff, ko, ooff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::decroldqo32
// Il2CppName: decroldqo32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::ArrayW<uint>, int, ::ArrayW<uint>, int)>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::decroldqo32)> {
  static const MethodInfo* get() {
    static auto* rot = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ki = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* ioff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ko = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* ooff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "decroldqo32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rot, ki, ioff, ko, ooff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::bytes2uint
// Il2CppName: bytes2uint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::bytes2uint)> {
  static const MethodInfo* get() {
    static auto* src = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "bytes2uint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, offset});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::uint2bytes
// Il2CppName: uint2bytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::uint2bytes)> {
  static const MethodInfo* get() {
    static auto* word = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* dst = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "uint2bytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{word, dst, offset});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::camelliaF2
// Il2CppName: camelliaF2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>, ::ArrayW<uint>, int)>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::camelliaF2)> {
  static const MethodInfo* get() {
    static auto* s = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* skey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* keyoff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "camelliaF2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, skey, keyoff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::camelliaFLs
// Il2CppName: camelliaFLs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>, ::ArrayW<uint>, int)>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::camelliaFLs)> {
  static const MethodInfo* get() {
    static auto* s = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* fkey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* keyoff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "camelliaFLs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, fkey, keyoff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::setKey
// Il2CppName: setKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::CamelliaEngine::*)(bool, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::setKey)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "setKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, key});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::processBlock128
// Il2CppName: processBlock128
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::CamelliaEngine::*)(::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::processBlock128)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "processBlock128", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::processBlock192or256
// Il2CppName: processBlock192or256
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::CamelliaEngine::*)(::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::processBlock192or256)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "processBlock192or256", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::CamelliaEngine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::CamelliaEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::GetBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::CamelliaEngine::*)(::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::ProcessBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::CamelliaEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::CamelliaEngine::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::CamelliaEngine*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::CamelliaEngine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
