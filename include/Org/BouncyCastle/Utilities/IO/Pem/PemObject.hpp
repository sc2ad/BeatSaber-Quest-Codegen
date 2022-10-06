// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IList
  class IList;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Utilities.IO.Pem
namespace Org::BouncyCastle::Utilities::IO::Pem {
  // Forward declaring type: PemObject
  class PemObject;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::Pem::PemObject);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::Pem::PemObject*, "Org.BouncyCastle.Utilities.IO.Pem", "PemObject");
// Type namespace: Org.BouncyCastle.Utilities.IO.Pem
namespace Org::BouncyCastle::Utilities::IO::Pem {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.IO.Pem.PemObject
  // [TokenAttribute] Offset: FFFFFFFF
  class PemObject : public ::Il2CppObject {
    public:
    public:
    // private System.String type
    // Size: 0x8
    // Offset: 0x10
    ::StringW type;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Collections.IList headers
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::IList* headers;
    // Field size check
    static_assert(sizeof(::System::Collections::IList*) == 0x8);
    // private System.Byte[] content
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> content;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Get instance field reference: private System.String type
    [[deprecated("Use field access instead!")]] ::StringW& dyn_type();
    // Get instance field reference: private System.Collections.IList headers
    [[deprecated("Use field access instead!")]] ::System::Collections::IList*& dyn_headers();
    // Get instance field reference: private System.Byte[] content
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_content();
    // public System.String get_Type()
    // Offset: 0x2653BEC
    ::StringW get_Type();
    // public System.Collections.IList get_Headers()
    // Offset: 0x2653BF4
    ::System::Collections::IList* get_Headers();
    // public System.Byte[] get_Content()
    // Offset: 0x2653BFC
    ::ArrayW<uint8_t> get_Content();
    // public System.Void .ctor(System.String type, System.Collections.IList headers, System.Byte[] content)
    // Offset: 0x2653AF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PemObject* New_ctor(::StringW type, ::System::Collections::IList* headers, ::ArrayW<uint8_t> content) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Utilities::IO::Pem::PemObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PemObject*, creationType>(type, headers, content)));
    }
  }; // Org.BouncyCastle.Utilities.IO.Pem.PemObject
  #pragma pack(pop)
  static check_size<sizeof(PemObject), 32 + sizeof(::ArrayW<uint8_t>)> __Org_BouncyCastle_Utilities_IO_Pem_PemObjectSizeCheck;
  static_assert(sizeof(PemObject) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::IO::Pem::PemObject::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Utilities::IO::Pem::PemObject::*)()>(&Org::BouncyCastle::Utilities::IO::Pem::PemObject::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::IO::Pem::PemObject*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::IO::Pem::PemObject::get_Headers
// Il2CppName: get_Headers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList* (Org::BouncyCastle::Utilities::IO::Pem::PemObject::*)()>(&Org::BouncyCastle::Utilities::IO::Pem::PemObject::get_Headers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::IO::Pem::PemObject*), "get_Headers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::IO::Pem::PemObject::get_Content
// Il2CppName: get_Content
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Utilities::IO::Pem::PemObject::*)()>(&Org::BouncyCastle::Utilities::IO::Pem::PemObject::get_Content)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::IO::Pem::PemObject*), "get_Content", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::IO::Pem::PemObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
