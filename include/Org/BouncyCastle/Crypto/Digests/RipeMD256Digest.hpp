// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Digests.GeneralDigest
#include "Org/BouncyCastle/Crypto/Digests/GeneralDigest.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Utilities
namespace Org::BouncyCastle::Utilities {
  // Skipping declaration: IMemoable because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Forward declaring type: RipeMD256Digest
  class RipeMD256Digest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::RipeMD256Digest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::RipeMD256Digest*, "Org.BouncyCastle.Crypto.Digests", "RipeMD256Digest");
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.RipeMD256Digest
  // [TokenAttribute] Offset: FFFFFFFF
  class RipeMD256Digest : public ::Org::BouncyCastle::Crypto::Digests::GeneralDigest {
    public:
    public:
    // private System.Int32 H0
    // Size: 0x4
    // Offset: 0x28
    int H0;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H1
    // Size: 0x4
    // Offset: 0x2C
    int H1;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H2
    // Size: 0x4
    // Offset: 0x30
    int H2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H3
    // Size: 0x4
    // Offset: 0x34
    int H3;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H4
    // Size: 0x4
    // Offset: 0x38
    int H4;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H5
    // Size: 0x4
    // Offset: 0x3C
    int H5;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H6
    // Size: 0x4
    // Offset: 0x40
    int H6;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H7
    // Size: 0x4
    // Offset: 0x44
    int H7;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32[] X
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<int> X;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private System.Int32 xOff
    // Size: 0x4
    // Offset: 0x50
    int xOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Int32 H0
    [[deprecated("Use field access instead!")]] int& dyn_H0();
    // Get instance field reference: private System.Int32 H1
    [[deprecated("Use field access instead!")]] int& dyn_H1();
    // Get instance field reference: private System.Int32 H2
    [[deprecated("Use field access instead!")]] int& dyn_H2();
    // Get instance field reference: private System.Int32 H3
    [[deprecated("Use field access instead!")]] int& dyn_H3();
    // Get instance field reference: private System.Int32 H4
    [[deprecated("Use field access instead!")]] int& dyn_H4();
    // Get instance field reference: private System.Int32 H5
    [[deprecated("Use field access instead!")]] int& dyn_H5();
    // Get instance field reference: private System.Int32 H6
    [[deprecated("Use field access instead!")]] int& dyn_H6();
    // Get instance field reference: private System.Int32 H7
    [[deprecated("Use field access instead!")]] int& dyn_H7();
    // Get instance field reference: private System.Int32[] X
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_X();
    // Get instance field reference: private System.Int32 xOff
    [[deprecated("Use field access instead!")]] int& dyn_xOff();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.RipeMD256Digest t)
    // Offset: 0x2361850
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RipeMD256Digest* New_ctor(::Org::BouncyCastle::Crypto::Digests::RipeMD256Digest* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RipeMD256Digest*, creationType>(t)));
    }
    // private System.Void CopyIn(Org.BouncyCastle.Crypto.Digests.RipeMD256Digest t)
    // Offset: 0x23618C8
    void CopyIn(::Org::BouncyCastle::Crypto::Digests::RipeMD256Digest* t);
    // private System.Void UnpackWord(System.Int32 word, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x2361AA8
    void UnpackWord(int word, ::ArrayW<uint8_t> outBytes, int outOff);
    // private System.Int32 RL(System.Int32 x, System.Int32 n)
    // Offset: 0x2361C78
    int RL(int x, int n);
    // private System.Int32 F1(System.Int32 x, System.Int32 y, System.Int32 z)
    // Offset: 0x2361C84
    int F1(int x, int y, int z);
    // private System.Int32 F2(System.Int32 x, System.Int32 y, System.Int32 z)
    // Offset: 0x2361C90
    int F2(int x, int y, int z);
    // private System.Int32 F3(System.Int32 x, System.Int32 y, System.Int32 z)
    // Offset: 0x2361CA0
    int F3(int x, int y, int z);
    // private System.Int32 F4(System.Int32 x, System.Int32 y, System.Int32 z)
    // Offset: 0x2361CAC
    int F4(int x, int y, int z);
    // private System.Int32 F1(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d, System.Int32 x, System.Int32 s)
    // Offset: 0x2361CBC
    int F1(int a, int b, int c, int d, int x, int s);
    // private System.Int32 F2(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d, System.Int32 x, System.Int32 s)
    // Offset: 0x2361CD8
    int F2(int a, int b, int c, int d, int x, int s);
    // private System.Int32 F3(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d, System.Int32 x, System.Int32 s)
    // Offset: 0x2361D04
    int F3(int a, int b, int c, int d, int x, int s);
    // private System.Int32 F4(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d, System.Int32 x, System.Int32 s)
    // Offset: 0x2361D2C
    int F4(int a, int b, int c, int d, int x, int s);
    // private System.Int32 FF1(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d, System.Int32 x, System.Int32 s)
    // Offset: 0x2361D58
    int FF1(int a, int b, int c, int d, int x, int s);
    // private System.Int32 FF2(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d, System.Int32 x, System.Int32 s)
    // Offset: 0x2361D74
    int FF2(int a, int b, int c, int d, int x, int s);
    // private System.Int32 FF3(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d, System.Int32 x, System.Int32 s)
    // Offset: 0x2361DA0
    int FF3(int a, int b, int c, int d, int x, int s);
    // private System.Int32 FF4(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d, System.Int32 x, System.Int32 s)
    // Offset: 0x2361DC8
    int FF4(int a, int b, int c, int d, int x, int s);
    // public override System.String get_AlgorithmName()
    // Offset: 0x2361790
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.String GeneralDigest::get_AlgorithmName()
    ::StringW get_AlgorithmName();
    // public System.Void .ctor()
    // Offset: 0x23617E0
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RipeMD256Digest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RipeMD256Digest*, creationType>()));
    }
    // public override System.Int32 GetDigestSize()
    // Offset: 0x23617D8
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Int32 GeneralDigest::GetDigestSize()
    int GetDigestSize();
    // override System.Void ProcessWord(System.Byte[] input, System.Int32 inOff)
    // Offset: 0x236195C
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessWord(System.Byte[] input, System.Int32 inOff)
    void ProcessWord(::ArrayW<uint8_t> input, int inOff);
    // override System.Void ProcessLength(System.Int64 bitLength)
    // Offset: 0x2361A24
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessLength(System.Int64 bitLength)
    void ProcessLength(int64_t bitLength);
    // public override System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x2361B34
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Int32 GeneralDigest::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::ArrayW<uint8_t> output, int outOff);
    // public override System.Void Reset()
    // Offset: 0x2361BFC
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::Reset()
    void Reset();
    // override System.Void ProcessBlock()
    // Offset: 0x2361DF4
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessBlock()
    void ProcessBlock();
    // public override Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x2362CFC
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: Org.BouncyCastle.Utilities.IMemoable GeneralDigest::Copy()
    ::Org::BouncyCastle::Utilities::IMemoable* Copy();
    // public override System.Void Reset(Org.BouncyCastle.Utilities.IMemoable other)
    // Offset: 0x2362D5C
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::Reset(Org.BouncyCastle.Utilities.IMemoable other)
    void Reset(::Org::BouncyCastle::Utilities::IMemoable* other);
  }; // Org.BouncyCastle.Crypto.Digests.RipeMD256Digest
  #pragma pack(pop)
  static check_size<sizeof(RipeMD256Digest), 80 + sizeof(int)> __Org_BouncyCastle_Crypto_Digests_RipeMD256DigestSizeCheck;
  static_assert(sizeof(RipeMD256Digest) == 0x54);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::CopyIn
// Il2CppName: CopyIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::*)(::Org::BouncyCastle::Crypto::Digests::RipeMD256Digest*)>(&Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::CopyIn)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Digests", "RipeMD256Digest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD256Digest*), "CopyIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::UnpackWord
// Il2CppName: UnpackWord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::*)(int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::UnpackWord)> {
  static const MethodInfo* get() {
    static auto* word = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD256Digest*), "UnpackWord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{word, outBytes, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::RL
// Il2CppName: RL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::*)(int, int)>(&Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::RL)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD256Digest*), "RL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, n});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::F1
// Il2CppName: F1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::*)(int, int, int)>(&Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::F1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD256Digest*), "F1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::F2
// Il2CppName: F2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::*)(int, int, int)>(&Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::F2)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD256Digest*), "F2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::F3
// Il2CppName: F3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::*)(int, int, int)>(&Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::F3)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD256Digest*), "F3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::F4
// Il2CppName: F4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::*)(int, int, int)>(&Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::F4)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD256Digest*), "F4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::F1
// Il2CppName: F1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::*)(int, int, int, int, int, int)>(&Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::F1)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD256Digest*), "F1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c, d, x, s});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::F2
// Il2CppName: F2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::*)(int, int, int, int, int, int)>(&Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::F2)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD256Digest*), "F2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c, d, x, s});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::F3
// Il2CppName: F3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::*)(int, int, int, int, int, int)>(&Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::F3)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD256Digest*), "F3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c, d, x, s});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::F4
// Il2CppName: F4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::*)(int, int, int, int, int, int)>(&Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::F4)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD256Digest*), "F4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c, d, x, s});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::FF1
// Il2CppName: FF1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::*)(int, int, int, int, int, int)>(&Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::FF1)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD256Digest*), "FF1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c, d, x, s});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::FF2
// Il2CppName: FF2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::*)(int, int, int, int, int, int)>(&Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::FF2)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD256Digest*), "FF2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c, d, x, s});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::FF3
// Il2CppName: FF3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::*)(int, int, int, int, int, int)>(&Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::FF3)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD256Digest*), "FF3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c, d, x, s});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::FF4
// Il2CppName: FF4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::*)(int, int, int, int, int, int)>(&Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::FF4)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD256Digest*), "FF4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c, d, x, s});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD256Digest*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::GetDigestSize
// Il2CppName: GetDigestSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::GetDigestSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD256Digest*), "GetDigestSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::ProcessWord
// Il2CppName: ProcessWord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::ProcessWord)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD256Digest*), "ProcessWord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::ProcessLength
// Il2CppName: ProcessLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::*)(int64_t)>(&Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::ProcessLength)> {
  static const MethodInfo* get() {
    static auto* bitLength = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD256Digest*), "ProcessLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bitLength});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::DoFinal)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD256Digest*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD256Digest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::ProcessBlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD256Digest*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::IMemoable* (Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::Copy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD256Digest*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::*)(::Org::BouncyCastle::Utilities::IMemoable*)>(&Org::BouncyCastle::Crypto::Digests::RipeMD256Digest::Reset)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Utilities", "IMemoable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD256Digest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
