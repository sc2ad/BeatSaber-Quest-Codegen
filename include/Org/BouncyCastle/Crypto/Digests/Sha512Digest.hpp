// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Digests.LongDigest
#include "Org/BouncyCastle/Crypto/Digests/LongDigest.hpp"
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
  // Forward declaring type: Sha512Digest
  class Sha512Digest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::Sha512Digest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::Sha512Digest*, "Org.BouncyCastle.Crypto.Digests", "Sha512Digest");
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Size: 0x84
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.Sha512Digest
  // [TokenAttribute] Offset: FFFFFFFF
  class Sha512Digest : public ::Org::BouncyCastle::Crypto::Digests::LongDigest {
    public:
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.Sha512Digest t)
    // Offset: 0x1E11BD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Sha512Digest* New_ctor(::Org::BouncyCastle::Crypto::Digests::Sha512Digest* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Digests::Sha512Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Sha512Digest*, creationType>(t)));
    }
    // public override System.String get_AlgorithmName()
    // Offset: 0x1E11C50
    // Implemented from: Org.BouncyCastle.Crypto.Digests.LongDigest
    // Base method: System.String LongDigest::get_AlgorithmName()
    ::StringW get_AlgorithmName();
    // public System.Void .ctor()
    // Offset: 0x1E11B70
    // Implemented from: Org.BouncyCastle.Crypto.Digests.LongDigest
    // Base method: System.Void LongDigest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Sha512Digest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Digests::Sha512Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Sha512Digest*, creationType>()));
    }
    // public override System.Int32 GetDigestSize()
    // Offset: 0x1E11C98
    // Implemented from: Org.BouncyCastle.Crypto.Digests.LongDigest
    // Base method: System.Int32 LongDigest::GetDigestSize()
    int GetDigestSize();
    // public override System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1E11CA0
    // Implemented from: Org.BouncyCastle.Crypto.Digests.LongDigest
    // Base method: System.Int32 LongDigest::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::ArrayW<uint8_t> output, int outOff);
    // public override System.Void Reset()
    // Offset: 0x1E11D8C
    // Implemented from: Org.BouncyCastle.Crypto.Digests.LongDigest
    // Base method: System.Void LongDigest::Reset()
    void Reset();
    // public override Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x1E11DE0
    // Implemented from: Org.BouncyCastle.Crypto.Digests.LongDigest
    // Base method: Org.BouncyCastle.Utilities.IMemoable LongDigest::Copy()
    ::Org::BouncyCastle::Utilities::IMemoable* Copy();
    // public override System.Void Reset(Org.BouncyCastle.Utilities.IMemoable other)
    // Offset: 0x1E11E40
    // Implemented from: Org.BouncyCastle.Crypto.Digests.LongDigest
    // Base method: System.Void LongDigest::Reset(Org.BouncyCastle.Utilities.IMemoable other)
    void Reset(::Org::BouncyCastle::Utilities::IMemoable* other);
  }; // Org.BouncyCastle.Crypto.Digests.Sha512Digest
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha512Digest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha512Digest::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Crypto::Digests::Sha512Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Sha512Digest::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha512Digest*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha512Digest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha512Digest::GetDigestSize
// Il2CppName: GetDigestSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::Sha512Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Sha512Digest::GetDigestSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha512Digest*), "GetDigestSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha512Digest::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::Sha512Digest::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Digests::Sha512Digest::DoFinal)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha512Digest*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha512Digest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Sha512Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Sha512Digest::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha512Digest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha512Digest::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::IMemoable* (Org::BouncyCastle::Crypto::Digests::Sha512Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Sha512Digest::Copy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha512Digest*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Sha512Digest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Sha512Digest::*)(::Org::BouncyCastle::Utilities::IMemoable*)>(&Org::BouncyCastle::Crypto::Digests::Sha512Digest::Reset)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Utilities", "IMemoable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Sha512Digest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
