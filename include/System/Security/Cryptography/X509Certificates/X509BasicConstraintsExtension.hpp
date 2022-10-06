// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509Extension
#include "System/Security/Cryptography/X509Certificates/X509Extension.hpp"
// Including type: System.Security.Cryptography.AsnDecodeStatus
#include "System/Security/Cryptography/AsnDecodeStatus.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Skipping declaration: AsnEncodedData because it is already included!
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509BasicConstraintsExtension
  class X509BasicConstraintsExtension;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*, "System.Security.Cryptography.X509Certificates", "X509BasicConstraintsExtension");
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension
  // [TokenAttribute] Offset: FFFFFFFF
  class X509BasicConstraintsExtension : public ::System::Security::Cryptography::X509Certificates::X509Extension {
    public:
    public:
    // private System.Boolean _certificateAuthority
    // Size: 0x1
    // Offset: 0x21
    bool certificateAuthority;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _hasPathLengthConstraint
    // Size: 0x1
    // Offset: 0x22
    bool hasPathLengthConstraint;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasPathLengthConstraint and: pathLengthConstraint
    char __padding1[0x1] = {};
    // private System.Int32 _pathLengthConstraint
    // Size: 0x4
    // Offset: 0x24
    int pathLengthConstraint;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Security.Cryptography.AsnDecodeStatus _status
    // Size: 0x4
    // Offset: 0x28
    ::System::Security::Cryptography::AsnDecodeStatus status;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::AsnDecodeStatus) == 0x4);
    public:
    // Deleting conversion operator: operator bool
    constexpr operator bool() const noexcept = delete;
    // static field const value: static System.String oid
    static constexpr const char* oid = "2.5.29.19";
    // Get static field: static System.String oid
    static ::StringW _get_oid();
    // Set static field: static System.String oid
    static void _set_oid(::StringW value);
    // static field const value: static System.String friendlyName
    static constexpr const char* friendlyName = "Basic Constraints";
    // Get static field: static System.String friendlyName
    static ::StringW _get_friendlyName();
    // Set static field: static System.String friendlyName
    static void _set_friendlyName(::StringW value);
    // Get instance field reference: private System.Boolean _certificateAuthority
    [[deprecated("Use field access instead!")]] bool& dyn__certificateAuthority();
    // Get instance field reference: private System.Boolean _hasPathLengthConstraint
    [[deprecated("Use field access instead!")]] bool& dyn__hasPathLengthConstraint();
    // Get instance field reference: private System.Int32 _pathLengthConstraint
    [[deprecated("Use field access instead!")]] int& dyn__pathLengthConstraint();
    // Get instance field reference: private System.Security.Cryptography.AsnDecodeStatus _status
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::AsnDecodeStatus& dyn__status();
    // public System.Boolean get_CertificateAuthority()
    // Offset: 0x1C1A934
    bool get_CertificateAuthority();
    // public System.Boolean get_HasPathLengthConstraint()
    // Offset: 0x1C1A9C4
    bool get_HasPathLengthConstraint();
    // public System.Int32 get_PathLengthConstraint()
    // Offset: 0x1C1AA54
    int get_PathLengthConstraint();
    // public System.Void .ctor(System.Security.Cryptography.AsnEncodedData encodedBasicConstraints, System.Boolean critical)
    // Offset: 0x1C1A404
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509BasicConstraintsExtension* New_ctor(::System::Security::Cryptography::AsnEncodedData* encodedBasicConstraints, bool critical) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509BasicConstraintsExtension*, creationType>(encodedBasicConstraints, critical)));
    }
    // public System.Void .ctor(System.Boolean certificateAuthority, System.Boolean hasPathLengthConstraint, System.Int32 pathLengthConstraint, System.Boolean critical)
    // Offset: 0x1C1A6AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509BasicConstraintsExtension* New_ctor(bool certificateAuthority, bool hasPathLengthConstraint, int pathLengthConstraint, bool critical) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509BasicConstraintsExtension*, creationType>(certificateAuthority, hasPathLengthConstraint, pathLengthConstraint, critical)));
    }
    // System.Security.Cryptography.AsnDecodeStatus Decode(System.Byte[] extension)
    // Offset: 0x1C1A4C8
    ::System::Security::Cryptography::AsnDecodeStatus Decode(::ArrayW<uint8_t> extension);
    // System.Byte[] Encode()
    // Offset: 0x1C1A7C8
    ::ArrayW<uint8_t> Encode();
    // public System.Void .ctor()
    // Offset: 0x1C1A36C
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Extension
    // Base method: System.Void X509Extension::.ctor()
    // Base method: System.Void AsnEncodedData::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509BasicConstraintsExtension* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509BasicConstraintsExtension*, creationType>()));
    }
    // public override System.Void CopyFrom(System.Security.Cryptography.AsnEncodedData asnEncodedData)
    // Offset: 0x1C1AAE4
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Extension
    // Base method: System.Void X509Extension::CopyFrom(System.Security.Cryptography.AsnEncodedData asnEncodedData)
    void CopyFrom(::System::Security::Cryptography::AsnEncodedData* asnEncodedData);
    // override System.String ToString(System.Boolean multiLine)
    // Offset: 0x1C1AC88
    // Implemented from: System.Security.Cryptography.AsnEncodedData
    // Base method: System.String AsnEncodedData::ToString(System.Boolean multiLine)
    ::StringW ToString(bool multiLine);
  }; // System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension
  #pragma pack(pop)
  static check_size<sizeof(X509BasicConstraintsExtension), 40 + sizeof(::System::Security::Cryptography::AsnDecodeStatus)> __System_Security_Cryptography_X509Certificates_X509BasicConstraintsExtensionSizeCheck;
  static_assert(sizeof(X509BasicConstraintsExtension) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::get_CertificateAuthority
// Il2CppName: get_CertificateAuthority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::*)()>(&System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::get_CertificateAuthority)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*), "get_CertificateAuthority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::get_HasPathLengthConstraint
// Il2CppName: get_HasPathLengthConstraint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::*)()>(&System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::get_HasPathLengthConstraint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*), "get_HasPathLengthConstraint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::get_PathLengthConstraint
// Il2CppName: get_PathLengthConstraint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::*)()>(&System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::get_PathLengthConstraint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*), "get_PathLengthConstraint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::Decode
// Il2CppName: Decode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::AsnDecodeStatus (System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::Decode)> {
  static const MethodInfo* get() {
    static auto* extension = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*), "Decode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{extension});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::*)()>(&System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::Encode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::CopyFrom
// Il2CppName: CopyFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::*)(::System::Security::Cryptography::AsnEncodedData*)>(&System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::CopyFrom)> {
  static const MethodInfo* get() {
    static auto* asnEncodedData = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "AsnEncodedData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*), "CopyFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asnEncodedData});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::*)(bool)>(&System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::ToString)> {
  static const MethodInfo* get() {
    static auto* multiLine = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{multiLine});
  }
};
