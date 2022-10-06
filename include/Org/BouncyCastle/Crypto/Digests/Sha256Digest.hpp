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
  // Forward declaring type: Sha256Digest
  class Sha256Digest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::Sha256Digest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::Sha256Digest*, "Org.BouncyCastle.Crypto.Digests", "Sha256Digest");
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.Sha256Digest
  // [TokenAttribute] Offset: FFFFFFFF
  class Sha256Digest : public ::Org::BouncyCastle::Crypto::Digests::GeneralDigest {
    public:
    public:
    // private System.UInt32 H1
    // Size: 0x4
    // Offset: 0x28
    uint H1;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 H2
    // Size: 0x4
    // Offset: 0x2C
    uint H2;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 H3
    // Size: 0x4
    // Offset: 0x30
    uint H3;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 H4
    // Size: 0x4
    // Offset: 0x34
    uint H4;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 H5
    // Size: 0x4
    // Offset: 0x38
    uint H5;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 H6
    // Size: 0x4
    // Offset: 0x3C
    uint H6;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 H7
    // Size: 0x4
    // Offset: 0x40
    uint H7;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 H8
    // Size: 0x4
    // Offset: 0x44
    uint H8;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32[] X
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<uint> X;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    // private System.Int32 xOff
    // Size: 0x4
    // Offset: 0x50
    int xOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get static field: static private readonly System.UInt32[] K
    static ::ArrayW<uint> _get_K();
    // Set static field: static private readonly System.UInt32[] K
    static void _set_K(::ArrayW<uint> value);
    // Get instance field reference: private System.UInt32 H1
    [[deprecated("Use field access instead!")]] uint& dyn_H1();
    // Get instance field reference: private System.UInt32 H2
    [[deprecated("Use field access instead!")]] uint& dyn_H2();
    // Get instance field reference: private System.UInt32 H3
    [[deprecated("Use field access instead!")]] uint& dyn_H3();
    // Get instance field reference: private System.UInt32 H4
    [[deprecated("Use field access instead!")]] uint& dyn_H4();
    // Get instance field reference: private System.UInt32 H5
    [[deprecated("Use field access instead!")]] uint& dyn_H5();
    // Get instance field reference: private System.UInt32 H6
    [[deprecated("Use field access instead!")]] uint& dyn_H6();
    // Get instance field reference: private System.UInt32 H7
    [[deprecated("Use field access instead!")]] uint& dyn_H7();
    // Get instance field reference: private System.UInt32 H8
    [[deprecated("Use field access instead!")]] uint& dyn_H8();
    // Get instance field reference: private System.UInt32[] X
    [[deprecated("Use field access instead!")]] ::ArrayW<uint>& dyn_X();
    // Get instance field reference: private System.Int32 xOff
    [[deprecated("Use field access instead!")]] int& dyn_xOff();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.Sha256Digest t)
    // Offset: 0x1E88478
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Sha256Digest* New_ctor(::Org::BouncyCastle::Crypto::Digests::Sha256Digest* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Digests::Sha256Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Sha256Digest*, creationType>(t)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1E88F50
    static void _cctor();
    // private System.Void CopyIn(Org.BouncyCastle.Crypto.Digests.Sha256Digest t)
    // Offset: 0x1E884F4
    void CopyIn(::Org::BouncyCastle::Crypto::Digests::Sha256Digest* t);
    // private System.Void initHs()
    // Offset: 0x1E8845C
    void initHs();
    // static private System.UInt32 Sum1Ch(System.UInt32 x, System.UInt32 y, System.UInt32 z)
    // Offset: 0x1E88E18
    static uint Sum1Ch(uint x, uint y, uint z);
    // static private System.UInt32 Sum0Maj(System.UInt32 x, System.UInt32 y, System.UInt32 z)
    // Offset: 0x1E88E38
    static uint Sum0Maj(uint x, uint y, uint z);
    // static private System.UInt32 Theta0(System.UInt32 x)
    // Offset: 0x1E88E08
    static uint Theta0(uint x);
    // static private System.UInt32 Theta1(System.UInt32 x)
    // Offset: 0x1E88DF8
    static uint Theta1(uint x);
    // public override System.String get_AlgorithmName()
    // Offset: 0x1E8858C
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.String GeneralDigest::get_AlgorithmName()
    ::StringW get_AlgorithmName();
    // public System.Void .ctor()
    // Offset: 0x1E883E0
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Sha256Digest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Digests::Sha256Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Sha256Digest*, creationType>()));
    }
    // public override System.Int32 GetDigestSize()
    // Offset: 0x1E885D4
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Int32 GeneralDigest::GetDigestSize()
    int GetDigestSize();
    // override System.Void ProcessWord(System.Byte[] input, System.Int32 inOff)
    // Offset: 0x1E885DC
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessWord(System.Byte[] input, System.Int32 inOff)
    void ProcessWord(::ArrayW<uint8_t> input, int inOff);
    // override System.Void ProcessLength(System.Int64 bitLength)
    // Offset: 0x1E88674
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessLength(System.Int64 bitLength)
    void ProcessLength(int64_t bitLength);
    // public override System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1E886F8
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Int32 GeneralDigest::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::ArrayW<uint8_t> output, int outOff);
    // public override System.Void Reset()
    // Offset: 0x1E887E4
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::Reset()
    void Reset();
    // override System.Void ProcessBlock()
    // Offset: 0x1E8883C
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessBlock()
    void ProcessBlock();
    // public override Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x1E88E5C
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: Org.BouncyCastle.Utilities.IMemoable GeneralDigest::Copy()
    ::Org::BouncyCastle::Utilities::IMemoable* Copy();
    // public override System.Void Reset(Org.BouncyCastle.Utilities.IMemoable other)
    // Offset: 0x1E88EBC
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::Reset(Org.BouncyCastle.Utilities.IMemoable other)
    void Reset(::Org::BouncyCastle::Utilities::IMemoable* other);
  }; // Org.BouncyCastle.Crypto.Digests.Sha256Digest
  #pragma pack(pop)
  static check_size<sizeof(Sha256Digest), 80 + sizeof(int)> __Org_BouncyCastle_Crypto_Digests_Sha256DigestSizeCheck;
  static_assert(sizeof(Sha256Digest) == 0x54);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha256Digest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha256Digest::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Digests::Sha256Digest::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha256Digest*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha256Digest::CopyIn
// Il2CppName: CopyIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Sha256Digest::*)(::Org::BouncyCastle::Crypto::Digests::Sha256Digest*)>(&Org::BouncyCastle::Crypto::Digests::Sha256Digest::CopyIn)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Digests", "Sha256Digest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha256Digest*), "CopyIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha256Digest::initHs
// Il2CppName: initHs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Sha256Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Sha256Digest::initHs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha256Digest*), "initHs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha256Digest::Sum1Ch
// Il2CppName: Sum1Ch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, uint, uint)>(&Org::BouncyCastle::Crypto::Digests::Sha256Digest::Sum1Ch)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha256Digest*), "Sum1Ch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha256Digest::Sum0Maj
// Il2CppName: Sum0Maj
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, uint, uint)>(&Org::BouncyCastle::Crypto::Digests::Sha256Digest::Sum0Maj)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha256Digest*), "Sum0Maj", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha256Digest::Theta0
// Il2CppName: Theta0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint)>(&Org::BouncyCastle::Crypto::Digests::Sha256Digest::Theta0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha256Digest*), "Theta0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha256Digest::Theta1
// Il2CppName: Theta1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint)>(&Org::BouncyCastle::Crypto::Digests::Sha256Digest::Theta1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha256Digest*), "Theta1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha256Digest::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Crypto::Digests::Sha256Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Sha256Digest::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha256Digest*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha256Digest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha256Digest::GetDigestSize
// Il2CppName: GetDigestSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::Sha256Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Sha256Digest::GetDigestSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha256Digest*), "GetDigestSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha256Digest::ProcessWord
// Il2CppName: ProcessWord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Sha256Digest::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Digests::Sha256Digest::ProcessWord)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha256Digest*), "ProcessWord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha256Digest::ProcessLength
// Il2CppName: ProcessLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Sha256Digest::*)(int64_t)>(&Org::BouncyCastle::Crypto::Digests::Sha256Digest::ProcessLength)> {
  static const MethodInfo* get() {
    static auto* bitLength = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha256Digest*), "ProcessLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bitLength});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha256Digest::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::Sha256Digest::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Digests::Sha256Digest::DoFinal)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha256Digest*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha256Digest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Sha256Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Sha256Digest::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha256Digest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha256Digest::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Sha256Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Sha256Digest::ProcessBlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha256Digest*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha256Digest::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::IMemoable* (Org::BouncyCastle::Crypto::Digests::Sha256Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Sha256Digest::Copy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha256Digest*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha256Digest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Sha256Digest::*)(::Org::BouncyCastle::Utilities::IMemoable*)>(&Org::BouncyCastle::Crypto::Digests::Sha256Digest::Reset)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Utilities", "IMemoable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha256Digest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
