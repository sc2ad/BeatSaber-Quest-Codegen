// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.DerOctetString
#include "Org/BouncyCastle/Asn1/DerOctetString.hpp"
// Including type: System.Collections.IEnumerable
#include "System/Collections/IEnumerable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Skipping declaration: Asn1OctetString because it is already included!
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: BerOctetString
  class BerOctetString;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BerOctetString);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BerOctetString*, "Org.BouncyCastle.Asn1", "BerOctetString");
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.BerOctetString
  // [TokenAttribute] Offset: FFFFFFFF
  class BerOctetString : public ::Org::BouncyCastle::Asn1::DerOctetString/*, public ::System::Collections::IEnumerable*/ {
    public:
    // Nested type: ::Org::BouncyCastle::Asn1::BerOctetString::ChunkEnumerator
    class ChunkEnumerator;
    public:
    // private readonly System.Int32 chunkSize
    // Size: 0x4
    // Offset: 0x18
    int chunkSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: chunkSize and: octs
    char __padding0[0x4] = {};
    // private readonly Org.BouncyCastle.Asn1.Asn1OctetString[] octs
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*> octs;
    // Field size check
    static_assert(sizeof(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IEnumerable
    operator ::System::Collections::IEnumerable() noexcept {
      return *reinterpret_cast<::System::Collections::IEnumerable*>(this);
    }
    // Creating interface conversion operator: i_IEnumerable
    inline ::System::Collections::IEnumerable* i_IEnumerable() noexcept {
      return reinterpret_cast<::System::Collections::IEnumerable*>(this);
    }
    // Deleting conversion operator: operator ::ArrayW<uint8_t>
    constexpr operator ::ArrayW<uint8_t>() const noexcept = delete;
    // Get static field: static private readonly System.Int32 DefaultChunkSize
    static int _get_DefaultChunkSize();
    // Set static field: static private readonly System.Int32 DefaultChunkSize
    static void _set_DefaultChunkSize(int value);
    // Get instance field reference: private readonly System.Int32 chunkSize
    [[deprecated("Use field access instead!")]] int& dyn_chunkSize();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.Asn1OctetString[] octs
    [[deprecated("Use field access instead!")]] ::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*>& dyn_octs();
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1OctetString[] octs)
    // Offset: 0x1CD8A40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BerOctetString* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*> octs) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::BerOctetString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BerOctetString*, creationType>(octs)));
    }
    // public System.Void .ctor(System.Byte[] str, System.Int32 chunkSize)
    // Offset: 0x1CDFAC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BerOctetString* New_ctor(::ArrayW<uint8_t> str, int chunkSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::BerOctetString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BerOctetString*, creationType>(str, chunkSize)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1OctetString[] octs, System.Int32 chunkSize)
    // Offset: 0x1CDFAEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BerOctetString* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*> octs, int chunkSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::BerOctetString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BerOctetString*, creationType>(octs, chunkSize)));
    }
    // private System.Void .ctor(System.Byte[] str, Org.BouncyCastle.Asn1.Asn1OctetString[] octs, System.Int32 chunkSize)
    // Offset: 0x1CDFB78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BerOctetString* New_ctor(::ArrayW<uint8_t> str, ::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*> octs, int chunkSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::BerOctetString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BerOctetString*, creationType>(str, octs, chunkSize)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1CDFFD4
    static void _cctor();
    // static public Org.BouncyCastle.Asn1.BerOctetString FromSequence(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1CDC120
    static ::Org::BouncyCastle::Asn1::BerOctetString* FromSequence(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);
    // static private System.Byte[] ToBytes(Org.BouncyCastle.Asn1.Asn1OctetString[] octs)
    // Offset: 0x1CDF940
    static ::ArrayW<uint8_t> ToBytes(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*> octs);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x1CDFBB0
    ::System::Collections::IEnumerator* GetEnumerator();
    // public System.Void .ctor(System.Byte[] str)
    // Offset: 0x1CDFA34
    // Implemented from: Org.BouncyCastle.Asn1.DerOctetString
    // Base method: System.Void DerOctetString::.ctor(System.Byte[] str)
    // Base method: System.Void Asn1OctetString::.ctor(System.Byte[] str)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BerOctetString* New_ctor(::ArrayW<uint8_t> str) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::BerOctetString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BerOctetString*, creationType>(str)));
    }
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x1CDFC90
    // Implemented from: Org.BouncyCastle.Asn1.DerOctetString
    // Base method: System.Void DerOctetString::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);
  }; // Org.BouncyCastle.Asn1.BerOctetString
  #pragma pack(pop)
  static check_size<sizeof(BerOctetString), 32 + sizeof(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*>)> __Org_BouncyCastle_Asn1_BerOctetStringSizeCheck;
  static_assert(sizeof(BerOctetString) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerOctetString::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerOctetString::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerOctetString::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerOctetString::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerOctetString::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Asn1::BerOctetString::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::BerOctetString*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerOctetString::FromSequence
// Il2CppName: FromSequence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::BerOctetString* (*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(&Org::BouncyCastle::Asn1::BerOctetString::FromSequence)> {
  static const MethodInfo* get() {
    static auto* seq = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1Sequence")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::BerOctetString*), "FromSequence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{seq});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerOctetString::ToBytes
// Il2CppName: ToBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*>)>(&Org::BouncyCastle::Asn1::BerOctetString::ToBytes)> {
  static const MethodInfo* get() {
    static auto* octs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1OctetString"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::BerOctetString*), "ToBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{octs});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerOctetString::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Org::BouncyCastle::Asn1::BerOctetString::*)()>(&Org::BouncyCastle::Asn1::BerOctetString::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::BerOctetString*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerOctetString::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerOctetString::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::BerOctetString::*)(::Org::BouncyCastle::Asn1::DerOutputStream*)>(&Org::BouncyCastle::Asn1::BerOctetString::Encode)> {
  static const MethodInfo* get() {
    static auto* derOut = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerOutputStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::BerOctetString*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{derOut});
  }
};
