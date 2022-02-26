// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate2
  class X509Certificate2;
  // Forward declaring type: X509Certificate2Collection
  class X509Certificate2Collection;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate2Enumerator
  class X509Certificate2Enumerator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator*, "System.Security.Cryptography.X509Certificates", "X509Certificate2Enumerator");
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class X509Certificate2Enumerator : public ::Il2CppObject/*, public ::System::Collections::IEnumerator*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Collections.IEnumerator enumerator
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::IEnumerator* enumerator;
    // Field size check
    static_assert(sizeof(::System::Collections::IEnumerator*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IEnumerator
    operator ::System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<::System::Collections::IEnumerator*>(this);
    }
    // Creating conversion operator: operator ::System::Collections::IEnumerator*
    constexpr operator ::System::Collections::IEnumerator*() const noexcept {
      return enumerator;
    }
    // Get instance field reference: private System.Collections.IEnumerator enumerator
    ::System::Collections::IEnumerator*& dyn_enumerator();
    // public System.Security.Cryptography.X509Certificates.X509Certificate2 get_Current()
    // Offset: 0x1BED71C
    ::System::Security::Cryptography::X509Certificates::X509Certificate2* get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1BED8C0
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // System.Void .ctor(System.Security.Cryptography.X509Certificates.X509Certificate2Collection collection)
    // Offset: 0x1BED598
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate2Enumerator* New_ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* collection) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate2Enumerator*, creationType>(collection)));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x1BED810
    bool MoveNext();
    // private System.Boolean System.Collections.IEnumerator.MoveNext()
    // Offset: 0x1BED974
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1BEDA24
    void System_Collections_IEnumerator_Reset();
  }; // System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator
  #pragma pack(pop)
  static check_size<sizeof(X509Certificate2Enumerator), 16 + sizeof(::System::Collections::IEnumerator*)> __System_Security_Cryptography_X509Certificates_X509Certificate2EnumeratorSizeCheck;
  static_assert(sizeof(X509Certificate2Enumerator) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2* (System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::System_Collections_IEnumerator_MoveNext
// Il2CppName: System.Collections.IEnumerator.MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::System_Collections_IEnumerator_MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator*), "System.Collections.IEnumerator.MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
