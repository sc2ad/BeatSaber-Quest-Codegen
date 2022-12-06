// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.X509.TbsCertificateList
#include "Org/BouncyCastle/Asn1/X509/TbsCertificateList.hpp"
// Including type: System.Collections.IEnumerable
#include "System/Collections/IEnumerable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::TbsCertificateList::RevokedCertificatesEnumeration);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::TbsCertificateList::RevokedCertificatesEnumeration*, "Org.BouncyCastle.Asn1.X509", "TbsCertificateList/RevokedCertificatesEnumeration");
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.TbsCertificateList/Org.BouncyCastle.Asn1.X509.RevokedCertificatesEnumeration
  // [TokenAttribute] Offset: FFFFFFFF
  class TbsCertificateList::RevokedCertificatesEnumeration : public ::Il2CppObject/*, public ::System::Collections::IEnumerable*/ {
    public:
    // Nested type: ::Org::BouncyCastle::Asn1::X509::TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator
    class RevokedCertificatesEnumerator;
    public:
    // private readonly System.Collections.IEnumerable en
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::IEnumerable* en;
    // Field size check
    static_assert(sizeof(::System::Collections::IEnumerable*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IEnumerable
    operator ::System::Collections::IEnumerable() noexcept {
      return *reinterpret_cast<::System::Collections::IEnumerable*>(this);
    }
    // Creating interface conversion operator: i_IEnumerable
    inline ::System::Collections::IEnumerable* i_IEnumerable() noexcept {
      return reinterpret_cast<::System::Collections::IEnumerable*>(this);
    }
    // Creating conversion operator: operator ::System::Collections::IEnumerable*
    constexpr operator ::System::Collections::IEnumerable*() const noexcept {
      return en;
    }
    // Get instance field reference: private readonly System.Collections.IEnumerable en
    [[deprecated("Use field access instead!")]] ::System::Collections::IEnumerable*& dyn_en();
    // System.Void .ctor(System.Collections.IEnumerable en)
    // Offset: 0x1F9797C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TbsCertificateList::RevokedCertificatesEnumeration* New_ctor(::System::Collections::IEnumerable* en) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::X509::TbsCertificateList::RevokedCertificatesEnumeration::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TbsCertificateList::RevokedCertificatesEnumeration*, creationType>(en)));
    }
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x1F979B8
    ::System::Collections::IEnumerator* GetEnumerator();
  }; // Org.BouncyCastle.Asn1.X509.TbsCertificateList/Org.BouncyCastle.Asn1.X509.RevokedCertificatesEnumeration
  #pragma pack(pop)
  static check_size<sizeof(TbsCertificateList::RevokedCertificatesEnumeration), 16 + sizeof(::System::Collections::IEnumerable*)> __Org_BouncyCastle_Asn1_X509_TbsCertificateList_RevokedCertificatesEnumerationSizeCheck;
  static_assert(sizeof(TbsCertificateList::RevokedCertificatesEnumeration) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::TbsCertificateList::RevokedCertificatesEnumeration::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::TbsCertificateList::RevokedCertificatesEnumeration::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Org::BouncyCastle::Asn1::X509::TbsCertificateList::RevokedCertificatesEnumeration::*)()>(&Org::BouncyCastle::Asn1::X509::TbsCertificateList::RevokedCertificatesEnumeration::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::TbsCertificateList::RevokedCertificatesEnumeration*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
