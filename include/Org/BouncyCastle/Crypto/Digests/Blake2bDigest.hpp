// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IDigest
#include "Org/BouncyCastle/Crypto/IDigest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.Blake2bDigest
  // [TokenAttribute] Offset: FFFFFFFF
  class Blake2bDigest : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IDigest*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Int32 digestLength
    // Size: 0x4
    // Offset: 0x10
    int digestLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 keyLength
    // Size: 0x4
    // Offset: 0x14
    int keyLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Byte[] salt
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> salt;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] personalization
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> personalization;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] key
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> key;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] buffer
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint8_t> buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 bufferPos
    // Size: 0x4
    // Offset: 0x38
    int bufferPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: bufferPos and: internalState
    char __padding6[0x4] = {};
    // private System.UInt64[] internalState
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<uint64_t> internalState;
    // Field size check
    static_assert(sizeof(::ArrayW<uint64_t>) == 0x8);
    // private System.UInt64[] chainValue
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<uint64_t> chainValue;
    // Field size check
    static_assert(sizeof(::ArrayW<uint64_t>) == 0x8);
    // private System.UInt64 t0
    // Size: 0x8
    // Offset: 0x50
    uint64_t t0;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.UInt64 t1
    // Size: 0x8
    // Offset: 0x58
    uint64_t t1;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.UInt64 f0
    // Size: 0x8
    // Offset: 0x60
    uint64_t f0;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IDigest
    operator Org::BouncyCastle::Crypto::IDigest() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IDigest*>(this);
    }
    // Get static field: static private readonly System.UInt64[] blake2b_IV
    static ::ArrayW<uint64_t> _get_blake2b_IV();
    // Set static field: static private readonly System.UInt64[] blake2b_IV
    static void _set_blake2b_IV(::ArrayW<uint64_t> value);
    // Get static field: static private readonly System.Byte[,] blake2b_sigma
    static ::ArrayW<uint8_t> _get_blake2b_sigma();
    // Set static field: static private readonly System.Byte[,] blake2b_sigma
    static void _set_blake2b_sigma(::ArrayW<uint8_t> value);
    // Get instance field reference: private System.Int32 digestLength
    int& dyn_digestLength();
    // Get instance field reference: private System.Int32 keyLength
    int& dyn_keyLength();
    // Get instance field reference: private System.Byte[] salt
    ::ArrayW<uint8_t>& dyn_salt();
    // Get instance field reference: private System.Byte[] personalization
    ::ArrayW<uint8_t>& dyn_personalization();
    // Get instance field reference: private System.Byte[] key
    ::ArrayW<uint8_t>& dyn_key();
    // Get instance field reference: private System.Byte[] buffer
    ::ArrayW<uint8_t>& dyn_buffer();
    // Get instance field reference: private System.Int32 bufferPos
    int& dyn_bufferPos();
    // Get instance field reference: private System.UInt64[] internalState
    ::ArrayW<uint64_t>& dyn_internalState();
    // Get instance field reference: private System.UInt64[] chainValue
    ::ArrayW<uint64_t>& dyn_chainValue();
    // Get instance field reference: private System.UInt64 t0
    uint64_t& dyn_t0();
    // Get instance field reference: private System.UInt64 t1
    uint64_t& dyn_t1();
    // Get instance field reference: private System.UInt64 f0
    uint64_t& dyn_f0();
    // public System.String get_AlgorithmName()
    // Offset: 0x1EFB308
    ::Il2CppString* get_AlgorithmName();
    // public System.Void .ctor(System.Int32 digestSize)
    // Offset: 0x1EFA0C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Blake2bDigest* New_ctor(int digestSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::Blake2bDigest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Blake2bDigest*, creationType>(digestSize)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1EFB360
    static void _cctor();
    // private System.Void Init()
    // Offset: 0x1EFA1D0
    void Init();
    // private System.Void InitializeInternalState()
    // Offset: 0x1EFA548
    void InitializeInternalState();
    // public System.Void Update(System.Byte b)
    // Offset: 0x1EFA6FC
    void Update(uint8_t b);
    // public System.Void BlockUpdate(System.Byte[] message, System.Int32 offset, System.Int32 len)
    // Offset: 0x1EFAD4C
    void BlockUpdate(::ArrayW<uint8_t> message, int offset, int len);
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOffset)
    // Offset: 0x1EFAE90
    int DoFinal(::ArrayW<uint8_t> output, int outOffset);
    // public System.Void Reset()
    // Offset: 0x1EFAFF0
    void Reset();
    // private System.Void Compress(System.Byte[] message, System.Int32 messagePos)
    // Offset: 0x1EFA7C0
    void Compress(::ArrayW<uint8_t> message, int messagePos);
    // private System.Void G(System.UInt64 m1, System.UInt64 m2, System.Int32 posA, System.Int32 posB, System.Int32 posC, System.Int32 posD)
    // Offset: 0x1EFB060
    void G(uint64_t m1, uint64_t m2, int posA, int posB, int posC, int posD);
    // static private System.UInt64 Rotr64(System.UInt64 x, System.Int32 rot)
    // Offset: 0x1EFB300
    static uint64_t Rotr64(uint64_t x, int rot);
    // public System.Int32 GetDigestSize()
    // Offset: 0x1EFB350
    int GetDigestSize();
    // public System.Int32 GetByteLength()
    // Offset: 0x1EFB358
    int GetByteLength();
  }; // Org.BouncyCastle.Crypto.Digests.Blake2bDigest
  #pragma pack(pop)
  static check_size<sizeof(Blake2bDigest), 96 + sizeof(uint64_t)> __Org_BouncyCastle_Crypto_Digests_Blake2bDigestSizeCheck;
  static_assert(sizeof(Blake2bDigest) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::Blake2bDigest*, "Org.BouncyCastle.Crypto.Digests", "Blake2bDigest");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2bDigest::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Digests::Blake2bDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::Blake2bDigest::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2bDigest*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2bDigest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2bDigest::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Digests::Blake2bDigest::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2bDigest*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2bDigest::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Blake2bDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::Blake2bDigest::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2bDigest*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2bDigest::InitializeInternalState
// Il2CppName: InitializeInternalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Blake2bDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::Blake2bDigest::InitializeInternalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2bDigest*), "InitializeInternalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2bDigest::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Blake2bDigest::*)(uint8_t)>(&Org::BouncyCastle::Crypto::Digests::Blake2bDigest::Update)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2bDigest*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2bDigest::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Blake2bDigest::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Digests::Blake2bDigest::BlockUpdate)> {
  static const MethodInfo* get() {
    static auto* message = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2bDigest*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, offset, len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2bDigest::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::Blake2bDigest::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Digests::Blake2bDigest::DoFinal)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2bDigest*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOffset});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2bDigest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Blake2bDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::Blake2bDigest::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2bDigest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2bDigest::Compress
// Il2CppName: Compress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Blake2bDigest::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Digests::Blake2bDigest::Compress)> {
  static const MethodInfo* get() {
    static auto* message = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* messagePos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2bDigest*), "Compress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, messagePos});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2bDigest::G
// Il2CppName: G
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Blake2bDigest::*)(uint64_t, uint64_t, int, int, int, int)>(&Org::BouncyCastle::Crypto::Digests::Blake2bDigest::G)> {
  static const MethodInfo* get() {
    static auto* m1 = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* m2 = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* posA = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* posB = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* posC = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* posD = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2bDigest*), "G", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m1, m2, posA, posB, posC, posD});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2bDigest::Rotr64
// Il2CppName: Rotr64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t, int)>(&Org::BouncyCastle::Crypto::Digests::Blake2bDigest::Rotr64)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* rot = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2bDigest*), "Rotr64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, rot});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2bDigest::GetDigestSize
// Il2CppName: GetDigestSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::Blake2bDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::Blake2bDigest::GetDigestSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2bDigest*), "GetDigestSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2bDigest::GetByteLength
// Il2CppName: GetByteLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::Blake2bDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::Blake2bDigest::GetByteLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2bDigest*), "GetByteLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
