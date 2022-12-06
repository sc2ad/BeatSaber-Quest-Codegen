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
  // Forward declaring type: TigerDigest
  class TigerDigest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::TigerDigest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::TigerDigest*, "Org.BouncyCastle.Crypto.Digests", "TigerDigest");
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.TigerDigest
  // [TokenAttribute] Offset: FFFFFFFF
  class TigerDigest : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::IDigest, public ::Org::BouncyCastle::Utilities::IMemoable*/ {
    public:
    public:
    // private System.Int64 a
    // Size: 0x8
    // Offset: 0x10
    int64_t a;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 b
    // Size: 0x8
    // Offset: 0x18
    int64_t b;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 c
    // Size: 0x8
    // Offset: 0x20
    int64_t c;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 byteCount
    // Size: 0x8
    // Offset: 0x28
    int64_t byteCount;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Byte[] Buffer
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint8_t> Buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 bOff
    // Size: 0x4
    // Offset: 0x38
    int bOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: bOff and: x
    char __padding5[0x4] = {};
    // private System.Int64[] x
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<int64_t> x;
    // Field size check
    static_assert(sizeof(::ArrayW<int64_t>) == 0x8);
    // private System.Int32 xOff
    // Size: 0x4
    // Offset: 0x48
    int xOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
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
    // Get static field: static private readonly System.Int64[] t1
    static ::ArrayW<int64_t> _get_t1();
    // Set static field: static private readonly System.Int64[] t1
    static void _set_t1(::ArrayW<int64_t> value);
    // Get static field: static private readonly System.Int64[] t2
    static ::ArrayW<int64_t> _get_t2();
    // Set static field: static private readonly System.Int64[] t2
    static void _set_t2(::ArrayW<int64_t> value);
    // Get static field: static private readonly System.Int64[] t3
    static ::ArrayW<int64_t> _get_t3();
    // Set static field: static private readonly System.Int64[] t3
    static void _set_t3(::ArrayW<int64_t> value);
    // Get static field: static private readonly System.Int64[] t4
    static ::ArrayW<int64_t> _get_t4();
    // Set static field: static private readonly System.Int64[] t4
    static void _set_t4(::ArrayW<int64_t> value);
    // Get instance field reference: private System.Int64 a
    [[deprecated("Use field access instead!")]] int64_t& dyn_a();
    // Get instance field reference: private System.Int64 b
    [[deprecated("Use field access instead!")]] int64_t& dyn_b();
    // Get instance field reference: private System.Int64 c
    [[deprecated("Use field access instead!")]] int64_t& dyn_c();
    // Get instance field reference: private System.Int64 byteCount
    [[deprecated("Use field access instead!")]] int64_t& dyn_byteCount();
    // Get instance field reference: private System.Byte[] Buffer
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_Buffer();
    // Get instance field reference: private System.Int32 bOff
    [[deprecated("Use field access instead!")]] int& dyn_bOff();
    // Get instance field reference: private System.Int64[] x
    [[deprecated("Use field access instead!")]] ::ArrayW<int64_t>& dyn_x();
    // Get instance field reference: private System.Int32 xOff
    [[deprecated("Use field access instead!")]] int& dyn_xOff();
    // public System.String get_AlgorithmName()
    // Offset: 0x1EB3A2C
    ::StringW get_AlgorithmName();
    // public System.Void .ctor()
    // Offset: 0x1EB376C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TigerDigest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Digests::TigerDigest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TigerDigest*, creationType>()));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.TigerDigest t)
    // Offset: 0x1EB389C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TigerDigest* New_ctor(::Org::BouncyCastle::Crypto::Digests::TigerDigest* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Digests::TigerDigest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TigerDigest*, creationType>(t)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1EB4BA4
    static void _cctor();
    // public System.Int32 GetDigestSize()
    // Offset: 0x1EB3A74
    int GetDigestSize();
    // public System.Int32 GetByteLength()
    // Offset: 0x1EB3A7C
    int GetByteLength();
    // private System.Void ProcessWord(System.Byte[] b, System.Int32 off)
    // Offset: 0x1EB3A84
    void ProcessWord(::ArrayW<uint8_t> b, int off);
    // public System.Void Update(System.Byte input)
    // Offset: 0x1EB3FAC
    void Update(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x1EB4030
    void BlockUpdate(::ArrayW<uint8_t> input, int inOff, int length);
    // private System.Void RoundABC(System.Int64 x, System.Int64 mul)
    // Offset: 0x1EB415C
    void RoundABC(int64_t x, int64_t mul);
    // private System.Void RoundBCA(System.Int64 x, System.Int64 mul)
    // Offset: 0x1EB432C
    void RoundBCA(int64_t x, int64_t mul);
    // private System.Void RoundCAB(System.Int64 x, System.Int64 mul)
    // Offset: 0x1EB44F8
    void RoundCAB(int64_t x, int64_t mul);
    // private System.Void KeySchedule()
    // Offset: 0x1EB46C4
    void KeySchedule();
    // private System.Void ProcessBlock()
    // Offset: 0x1EB3BC0
    void ProcessBlock();
    // private System.Void UnpackWord(System.Int64 r, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1EB4954
    void UnpackWord(int64_t r, ::ArrayW<uint8_t> output, int outOff);
    // private System.Void ProcessLength(System.Int64 bitLength)
    // Offset: 0x1EB4A50
    void ProcessLength(int64_t bitLength);
    // private System.Void Finish()
    // Offset: 0x1EB4A88
    void Finish();
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1EB4AD8
    int DoFinal(::ArrayW<uint8_t> output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1EB37EC
    void Reset();
    // public Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x1EB4B44
    ::Org::BouncyCastle::Utilities::IMemoable* Copy();
    // public System.Void Reset(Org.BouncyCastle.Utilities.IMemoable other)
    // Offset: 0x1EB392C
    void Reset(::Org::BouncyCastle::Utilities::IMemoable* other);
  }; // Org.BouncyCastle.Crypto.Digests.TigerDigest
  #pragma pack(pop)
  static check_size<sizeof(TigerDigest), 72 + sizeof(int)> __Org_BouncyCastle_Crypto_Digests_TigerDigestSizeCheck;
  static_assert(sizeof(TigerDigest) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::GetDigestSize
// Il2CppName: GetDigestSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::GetDigestSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "GetDigestSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::GetByteLength
// Il2CppName: GetByteLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::GetByteLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "GetByteLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::ProcessWord
// Il2CppName: ProcessWord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::ProcessWord)> {
  static const MethodInfo* get() {
    static auto* b = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "ProcessWord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b, off});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)(uint8_t)>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::Update)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::BlockUpdate)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::RoundABC
// Il2CppName: RoundABC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)(int64_t, int64_t)>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::RoundABC)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* mul = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "RoundABC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, mul});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::RoundBCA
// Il2CppName: RoundBCA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)(int64_t, int64_t)>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::RoundBCA)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* mul = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "RoundBCA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, mul});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::RoundCAB
// Il2CppName: RoundCAB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)(int64_t, int64_t)>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::RoundCAB)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* mul = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "RoundCAB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, mul});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::KeySchedule
// Il2CppName: KeySchedule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::KeySchedule)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "KeySchedule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::ProcessBlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::UnpackWord
// Il2CppName: UnpackWord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)(int64_t, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::UnpackWord)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "UnpackWord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::ProcessLength
// Il2CppName: ProcessLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)(int64_t)>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::ProcessLength)> {
  static const MethodInfo* get() {
    static auto* bitLength = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "ProcessLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bitLength});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::Finish
// Il2CppName: Finish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::Finish)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "Finish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::DoFinal)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::IMemoable* (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::Copy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::TigerDigest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::TigerDigest::*)(::Org::BouncyCastle::Utilities::IMemoable*)>(&Org::BouncyCastle::Crypto::Digests::TigerDigest::Reset)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Utilities", "IMemoable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::TigerDigest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
