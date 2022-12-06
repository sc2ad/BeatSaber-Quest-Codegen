// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IDigest
#include "Org/BouncyCastle/Crypto/IDigest.hpp"
// Including type: Org.BouncyCastle.Utilities.IMemoable
#include "Org/BouncyCastle/Utilities/IMemoable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Forward declaring type: Dstu7564Digest
  class Dstu7564Digest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*, "Org.BouncyCastle.Crypto.Digests", "Dstu7564Digest");
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.Dstu7564Digest
  // [TokenAttribute] Offset: FFFFFFFF
  class Dstu7564Digest : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::IDigest, public ::Org::BouncyCastle::Utilities::IMemoable*/ {
    public:
    public:
    // private System.Int32 hashSize
    // Size: 0x4
    // Offset: 0x10
    int hashSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 blockSize
    // Size: 0x4
    // Offset: 0x14
    int blockSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 columns
    // Size: 0x4
    // Offset: 0x18
    int columns;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 rounds
    // Size: 0x4
    // Offset: 0x1C
    int rounds;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.UInt64[] state
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint64_t> state;
    // Field size check
    static_assert(sizeof(::ArrayW<uint64_t>) == 0x8);
    // private System.UInt64[] tempState1
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint64_t> tempState1;
    // Field size check
    static_assert(sizeof(::ArrayW<uint64_t>) == 0x8);
    // private System.UInt64[] tempState2
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint64_t> tempState2;
    // Field size check
    static_assert(sizeof(::ArrayW<uint64_t>) == 0x8);
    // private System.UInt64 inputBlocks
    // Size: 0x8
    // Offset: 0x38
    uint64_t inputBlocks;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.Int32 bufOff
    // Size: 0x4
    // Offset: 0x40
    int bufOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: bufOff and: buf
    char __padding8[0x4] = {};
    // private System.Byte[] buf
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<uint8_t> buf;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::IDigest
    operator ::Org::BouncyCastle::Crypto::IDigest() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::IDigest*>(this);
    }
    // Creating interface conversion operator: i_IDigest
    inline ::Org::BouncyCastle::Crypto::IDigest* i_IDigest() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Crypto::IDigest*>(this);
    }
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Utilities::IMemoable
    operator ::Org::BouncyCastle::Utilities::IMemoable() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Utilities::IMemoable*>(this);
    }
    // Creating interface conversion operator: i_IMemoable
    inline ::Org::BouncyCastle::Utilities::IMemoable* i_IMemoable() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Utilities::IMemoable*>(this);
    }
    // Get static field: static private readonly System.Byte[] S0
    static ::ArrayW<uint8_t> _get_S0();
    // Set static field: static private readonly System.Byte[] S0
    static void _set_S0(::ArrayW<uint8_t> value);
    // Get static field: static private readonly System.Byte[] S1
    static ::ArrayW<uint8_t> _get_S1();
    // Set static field: static private readonly System.Byte[] S1
    static void _set_S1(::ArrayW<uint8_t> value);
    // Get static field: static private readonly System.Byte[] S2
    static ::ArrayW<uint8_t> _get_S2();
    // Set static field: static private readonly System.Byte[] S2
    static void _set_S2(::ArrayW<uint8_t> value);
    // Get static field: static private readonly System.Byte[] S3
    static ::ArrayW<uint8_t> _get_S3();
    // Set static field: static private readonly System.Byte[] S3
    static void _set_S3(::ArrayW<uint8_t> value);
    // Get instance field reference: private System.Int32 hashSize
    [[deprecated("Use field access instead!")]] int& dyn_hashSize();
    // Get instance field reference: private System.Int32 blockSize
    [[deprecated("Use field access instead!")]] int& dyn_blockSize();
    // Get instance field reference: private System.Int32 columns
    [[deprecated("Use field access instead!")]] int& dyn_columns();
    // Get instance field reference: private System.Int32 rounds
    [[deprecated("Use field access instead!")]] int& dyn_rounds();
    // Get instance field reference: private System.UInt64[] state
    [[deprecated("Use field access instead!")]] ::ArrayW<uint64_t>& dyn_state();
    // Get instance field reference: private System.UInt64[] tempState1
    [[deprecated("Use field access instead!")]] ::ArrayW<uint64_t>& dyn_tempState1();
    // Get instance field reference: private System.UInt64[] tempState2
    [[deprecated("Use field access instead!")]] ::ArrayW<uint64_t>& dyn_tempState2();
    // Get instance field reference: private System.UInt64 inputBlocks
    [[deprecated("Use field access instead!")]] uint64_t& dyn_inputBlocks();
    // Get instance field reference: private System.Int32 bufOff
    [[deprecated("Use field access instead!")]] int& dyn_bufOff();
    // Get instance field reference: private System.Byte[] buf
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_buf();
    // public System.String get_AlgorithmName()
    // Offset: 0x23546A0
    ::StringW get_AlgorithmName();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.Dstu7564Digest digest)
    // Offset: 0x23543EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Dstu7564Digest* New_ctor(::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest* digest) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Dstu7564Digest*, creationType>(digest)));
    }
    // public System.Void .ctor(System.Int32 hashSizeBits)
    // Offset: 0x2354558
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Dstu7564Digest* New_ctor(int hashSizeBits) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Dstu7564Digest*, creationType>(hashSizeBits)));
    }
    // static private System.Void .cctor()
    // Offset: 0x23557C0
    static void _cctor();
    // private System.Void CopyIn(Org.BouncyCastle.Crypto.Digests.Dstu7564Digest digest)
    // Offset: 0x235441C
    void CopyIn(::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest* digest);
    // public System.Int32 GetDigestSize()
    // Offset: 0x23546E8
    int GetDigestSize();
    // public System.Int32 GetByteLength()
    // Offset: 0x23546F0
    int GetByteLength();
    // public System.Void Update(System.Byte input)
    // Offset: 0x23546F8
    void Update(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x2354788
    void BlockUpdate(::ArrayW<uint8_t> input, int inOff, int length);
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x23548BC
    int DoFinal(::ArrayW<uint8_t> output, int outOff);
    // public System.Void Reset()
    // Offset: 0x2354BFC
    void Reset();
    // protected System.Void ProcessBlock(System.Byte[] input, System.Int32 inOff)
    // Offset: 0x2354C60
    void ProcessBlock(::ArrayW<uint8_t> input, int inOff);
    // private System.Void P(System.UInt64[] s)
    // Offset: 0x2354B38
    void P(::ArrayW<uint64_t> s);
    // private System.Void Q(System.UInt64[] s)
    // Offset: 0x2354DCC
    void Q(::ArrayW<uint64_t> s);
    // static private System.UInt64 MixColumn(System.UInt64 c)
    // Offset: 0x23555F0
    static uint64_t MixColumn(uint64_t c);
    // private System.Void MixColumns(System.UInt64[] s)
    // Offset: 0x235551C
    void MixColumns(::ArrayW<uint64_t> s);
    // static private System.UInt64 Rotate(System.Int32 n, System.UInt64 x)
    // Offset: 0x23556B8
    static uint64_t Rotate(int n, uint64_t x);
    // private System.Void ShiftRows(System.UInt64[] s)
    // Offset: 0x2354EB4
    void ShiftRows(::ArrayW<uint64_t> s);
    // private System.Void SubBytes(System.UInt64[] s)
    // Offset: 0x235535C
    void SubBytes(::ArrayW<uint64_t> s);
    // public Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x23556C0
    ::Org::BouncyCastle::Utilities::IMemoable* Copy();
    // public System.Void Reset(Org.BouncyCastle.Utilities.IMemoable other)
    // Offset: 0x235572C
    void Reset(::Org::BouncyCastle::Utilities::IMemoable* other);
  }; // Org.BouncyCastle.Crypto.Digests.Dstu7564Digest
  #pragma pack(pop)
  static check_size<sizeof(Dstu7564Digest), 72 + sizeof(::ArrayW<uint8_t>)> __Org_BouncyCastle_Crypto_Digests_Dstu7564DigestSizeCheck;
  static_assert(sizeof(Dstu7564Digest) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::CopyIn
// Il2CppName: CopyIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::*)(::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*)>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::CopyIn)> {
  static const MethodInfo* get() {
    static auto* digest = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Digests", "Dstu7564Digest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "CopyIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{digest});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::GetDigestSize
// Il2CppName: GetDigestSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::GetDigestSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "GetDigestSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::GetByteLength
// Il2CppName: GetByteLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::GetByteLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "GetByteLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::*)(uint8_t)>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::Update)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::BlockUpdate)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::DoFinal)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::ProcessBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::P
// Il2CppName: P
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::*)(::ArrayW<uint64_t>)>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::P)> {
  static const MethodInfo* get() {
    static auto* s = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "P", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::Q
// Il2CppName: Q
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::*)(::ArrayW<uint64_t>)>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::Q)> {
  static const MethodInfo* get() {
    static auto* s = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "Q", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::MixColumn
// Il2CppName: MixColumn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t)>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::MixColumn)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "MixColumn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::MixColumns
// Il2CppName: MixColumns
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::*)(::ArrayW<uint64_t>)>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::MixColumns)> {
  static const MethodInfo* get() {
    static auto* s = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "MixColumns", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::Rotate
// Il2CppName: Rotate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(int, uint64_t)>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::Rotate)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "Rotate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::ShiftRows
// Il2CppName: ShiftRows
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::*)(::ArrayW<uint64_t>)>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::ShiftRows)> {
  static const MethodInfo* get() {
    static auto* s = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "ShiftRows", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::SubBytes
// Il2CppName: SubBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::*)(::ArrayW<uint64_t>)>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::SubBytes)> {
  static const MethodInfo* get() {
    static auto* s = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "SubBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::IMemoable* (Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::Copy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::*)(::Org::BouncyCastle::Utilities::IMemoable*)>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::Reset)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Utilities", "IMemoable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
