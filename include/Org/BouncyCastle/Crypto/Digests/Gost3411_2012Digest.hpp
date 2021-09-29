// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IDigest
#include "Org/BouncyCastle/Crypto/IDigest.hpp"
// Including type: Org.BouncyCastle.Utilities.IMemoable
#include "Org/BouncyCastle/Utilities/IMemoable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest
  // [TokenAttribute] Offset: FFFFFFFF
  class Gost3411_2012Digest : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IDigest, public Org::BouncyCastle::Utilities::IMemoable*/ {
    public:
    // private readonly System.Byte[] IV
    // Size: 0x8
    // Offset: 0x10
    ::ArrayWrapper<uint8_t> IV;
    // Field size check
    static_assert(sizeof(::ArrayWrapper<uint8_t>) == 0x8);
    // private readonly System.Byte[] N
    // Size: 0x8
    // Offset: 0x18
    ::ArrayWrapper<uint8_t> N;
    // Field size check
    static_assert(sizeof(::ArrayWrapper<uint8_t>) == 0x8);
    // private readonly System.Byte[] Sigma
    // Size: 0x8
    // Offset: 0x20
    ::ArrayWrapper<uint8_t> Sigma;
    // Field size check
    static_assert(sizeof(::ArrayWrapper<uint8_t>) == 0x8);
    // private readonly System.Byte[] Ki
    // Size: 0x8
    // Offset: 0x28
    ::ArrayWrapper<uint8_t> Ki;
    // Field size check
    static_assert(sizeof(::ArrayWrapper<uint8_t>) == 0x8);
    // private readonly System.Byte[] m
    // Size: 0x8
    // Offset: 0x30
    ::ArrayWrapper<uint8_t> m;
    // Field size check
    static_assert(sizeof(::ArrayWrapper<uint8_t>) == 0x8);
    // private readonly System.Byte[] h
    // Size: 0x8
    // Offset: 0x38
    ::ArrayWrapper<uint8_t> h;
    // Field size check
    static_assert(sizeof(::ArrayWrapper<uint8_t>) == 0x8);
    // private readonly System.Byte[] tmp
    // Size: 0x8
    // Offset: 0x40
    ::ArrayWrapper<uint8_t> tmp;
    // Field size check
    static_assert(sizeof(::ArrayWrapper<uint8_t>) == 0x8);
    // private readonly System.Byte[] block
    // Size: 0x8
    // Offset: 0x48
    ::ArrayWrapper<uint8_t> block;
    // Field size check
    static_assert(sizeof(::ArrayWrapper<uint8_t>) == 0x8);
    // private System.Int32 bOff
    // Size: 0x4
    // Offset: 0x50
    int bOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Gost3411_2012Digest
    Gost3411_2012Digest(::ArrayWrapper<uint8_t> IV_ = {}, ::ArrayWrapper<uint8_t> N_ = {}, ::ArrayWrapper<uint8_t> Sigma_ = {}, ::ArrayWrapper<uint8_t> Ki_ = {}, ::ArrayWrapper<uint8_t> m_ = {}, ::ArrayWrapper<uint8_t> h_ = {}, ::ArrayWrapper<uint8_t> tmp_ = {}, ::ArrayWrapper<uint8_t> block_ = {}, int bOff_ = {}) noexcept : IV{IV_}, N{N_}, Sigma{Sigma_}, Ki{Ki_}, m{m_}, h{h_}, tmp{tmp_}, block{block_}, bOff{bOff_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IDigest
    operator Org::BouncyCastle::Crypto::IDigest() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IDigest*>(this);
    }
    // Creating interface conversion operator: operator Org::BouncyCastle::Utilities::IMemoable
    operator Org::BouncyCastle::Utilities::IMemoable() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Utilities::IMemoable*>(this);
    }
    // Get static field: static private readonly System.Byte[][] C
    static ::ArrayWrapper<::ArrayWrapper<uint8_t>> _get_C();
    // Set static field: static private readonly System.Byte[][] C
    static void _set_C(::ArrayWrapper<::ArrayWrapper<uint8_t>> value);
    // Get static field: static private readonly System.Byte[] Zero
    static ::ArrayWrapper<uint8_t> _get_Zero();
    // Set static field: static private readonly System.Byte[] Zero
    static void _set_Zero(::ArrayWrapper<uint8_t> value);
    // Get static field: static private readonly System.UInt64[][] T
    static ::ArrayWrapper<::ArrayWrapper<uint64_t>> _get_T();
    // Set static field: static private readonly System.UInt64[][] T
    static void _set_T(::ArrayWrapper<::ArrayWrapper<uint64_t>> value);
    // Get instance field reference: private readonly System.Byte[] IV
    ::ArrayWrapper<uint8_t>& dyn_IV();
    // Get instance field reference: private readonly System.Byte[] N
    ::ArrayWrapper<uint8_t>& dyn_N();
    // Get instance field reference: private readonly System.Byte[] Sigma
    ::ArrayWrapper<uint8_t>& dyn_Sigma();
    // Get instance field reference: private readonly System.Byte[] Ki
    ::ArrayWrapper<uint8_t>& dyn_Ki();
    // Get instance field reference: private readonly System.Byte[] m
    ::ArrayWrapper<uint8_t>& dyn_m();
    // Get instance field reference: private readonly System.Byte[] h
    ::ArrayWrapper<uint8_t>& dyn_h();
    // Get instance field reference: private readonly System.Byte[] tmp
    ::ArrayWrapper<uint8_t>& dyn_tmp();
    // Get instance field reference: private readonly System.Byte[] block
    ::ArrayWrapper<uint8_t>& dyn_block();
    // Get instance field reference: private System.Int32 bOff
    int& dyn_bOff();
    // public System.String get_AlgorithmName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_AlgorithmName();
    // protected System.Void .ctor(System.Byte[] IV)
    // Offset: 0x1EFF688
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Gost3411_2012Digest* New_ctor(::ArrayWrapper<uint8_t> IV) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Gost3411_2012Digest*, creationType>(IV)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1F0107C
    static void _cctor();
    // public Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Utilities::IMemoable* Copy();
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1EFF794
    int DoFinal(::ArrayWrapper<uint8_t> output, int outOff);
    // public System.Int32 GetByteLength()
    // Offset: 0x1EFFBDC
    int GetByteLength();
    // public System.Int32 GetDigestSize()
    // Offset: 0xFFFFFFFF
    int GetDigestSize();
    // public System.Void Reset()
    // Offset: 0x1EFFB28
    void Reset();
    // public System.Void Reset(Org.BouncyCastle.Utilities.IMemoable other)
    // Offset: 0x1EFFBE4
    void Reset(Org::BouncyCastle::Utilities::IMemoable* other);
    // public System.Void Update(System.Byte input)
    // Offset: 0x1EFFD40
    void Update(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 len)
    // Offset: 0x1EFFDD0
    void BlockUpdate(::ArrayWrapper<uint8_t> input, int inOff, int len);
    // private System.Void F(System.Byte[] V)
    // Offset: 0x1EFFF38
    void F(::ArrayWrapper<uint8_t> V);
    // private System.Void xor512(System.Byte[] A, System.Byte[] B)
    // Offset: 0x1F00E98
    void xor512(::ArrayWrapper<uint8_t> A, ::ArrayWrapper<uint8_t> B);
    // private System.Void E(System.Byte[] K, System.Byte[] m)
    // Offset: 0x1F00F04
    void E(::ArrayWrapper<uint8_t> K, ::ArrayWrapper<uint8_t> m);
    // private System.Void g_N(System.Byte[] h, System.Byte[] N, System.Byte[] m)
    // Offset: 0x1EFF930
    void g_N(::ArrayWrapper<uint8_t> h, ::ArrayWrapper<uint8_t> N, ::ArrayWrapper<uint8_t> m);
    // private System.Void addMod512(System.Byte[] A, System.Int32 num)
    // Offset: 0x1EFF9B4
    void addMod512(::ArrayWrapper<uint8_t> A, int num);
    // private System.Void addMod512(System.Byte[] A, System.Byte[] B)
    // Offset: 0x1EFFA40
    void addMod512(::ArrayWrapper<uint8_t> A, ::ArrayWrapper<uint8_t> B);
    // private System.Void reverse(System.Byte[] src, System.Byte[] dst)
    // Offset: 0x1EFFAAC
    void reverse(::ArrayWrapper<uint8_t> src, ::ArrayWrapper<uint8_t> dst);
  }; // Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest
  #pragma pack(pop)
  static check_size<sizeof(Gost3411_2012Digest), 80 + sizeof(int)> __Org_BouncyCastle_Crypto_Digests_Gost3411_2012DigestSizeCheck;
  static_assert(sizeof(Gost3411_2012Digest) == 0x54);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest*, "Org.BouncyCastle.Crypto.Digests", "Gost3411_2012Digest");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::IMemoable* (Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::Copy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::*)(::ArrayWrapper<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::DoFinal)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::GetByteLength
// Il2CppName: GetByteLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::GetByteLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest*), "GetByteLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::GetDigestSize
// Il2CppName: GetDigestSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::GetDigestSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest*), "GetDigestSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::*)(Org::BouncyCastle::Utilities::IMemoable*)>(&Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::Reset)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Utilities", "IMemoable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::*)(uint8_t)>(&Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::Update)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::*)(::ArrayWrapper<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::BlockUpdate)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::F
// Il2CppName: F
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::*)(::ArrayWrapper<uint8_t>)>(&Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::F)> {
  static const MethodInfo* get() {
    static auto* V = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest*), "F", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{V});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::xor512
// Il2CppName: xor512
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::*)(::ArrayWrapper<uint8_t>, ::ArrayWrapper<uint8_t>)>(&Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::xor512)> {
  static const MethodInfo* get() {
    static auto* A = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* B = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest*), "xor512", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{A, B});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::E
// Il2CppName: E
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::*)(::ArrayWrapper<uint8_t>, ::ArrayWrapper<uint8_t>)>(&Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::E)> {
  static const MethodInfo* get() {
    static auto* K = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* m = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest*), "E", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{K, m});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::g_N
// Il2CppName: g_N
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::*)(::ArrayWrapper<uint8_t>, ::ArrayWrapper<uint8_t>, ::ArrayWrapper<uint8_t>)>(&Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::g_N)> {
  static const MethodInfo* get() {
    static auto* h = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* N = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* m = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest*), "g_N", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{h, N, m});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::addMod512
// Il2CppName: addMod512
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::*)(::ArrayWrapper<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::addMod512)> {
  static const MethodInfo* get() {
    static auto* A = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* num = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest*), "addMod512", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{A, num});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::addMod512
// Il2CppName: addMod512
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::*)(::ArrayWrapper<uint8_t>, ::ArrayWrapper<uint8_t>)>(&Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::addMod512)> {
  static const MethodInfo* get() {
    static auto* A = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* B = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest*), "addMod512", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{A, B});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::reverse
// Il2CppName: reverse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::*)(::ArrayWrapper<uint8_t>, ::ArrayWrapper<uint8_t>)>(&Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest::reverse)> {
  static const MethodInfo* get() {
    static auto* src = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* dst = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest*), "reverse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dst});
  }
};
