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
// Forward declaring namespace: System::Security::AccessControl
namespace System::Security::AccessControl {
  // Forward declaring type: GenericAcl
  class GenericAcl;
  // Forward declaring type: GenericAce
  class GenericAce;
}
// Completed forward declares
// Type namespace: System.Security.AccessControl
namespace System::Security::AccessControl {
  // Forward declaring type: AceEnumerator
  class AceEnumerator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::AccessControl::AceEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::AceEnumerator*, "System.Security.AccessControl", "AceEnumerator");
// Type namespace: System.Security.AccessControl
namespace System::Security::AccessControl {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.AccessControl.AceEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class AceEnumerator : public ::Il2CppObject/*, public ::System::Collections::IEnumerator*/ {
    public:
    public:
    // private System.Security.AccessControl.GenericAcl owner
    // Size: 0x8
    // Offset: 0x10
    ::System::Security::AccessControl::GenericAcl* owner;
    // Field size check
    static_assert(sizeof(::System::Security::AccessControl::GenericAcl*) == 0x8);
    // private System.Int32 current
    // Size: 0x4
    // Offset: 0x18
    int current;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IEnumerator
    operator ::System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<::System::Collections::IEnumerator*>(this);
    }
    // Creating interface conversion operator: i_IEnumerator
    inline ::System::Collections::IEnumerator* i_IEnumerator() noexcept {
      return reinterpret_cast<::System::Collections::IEnumerator*>(this);
    }
    // Get instance field reference: private System.Security.AccessControl.GenericAcl owner
    [[deprecated("Use field access instead!")]] ::System::Security::AccessControl::GenericAcl*& dyn_owner();
    // Get instance field reference: private System.Int32 current
    [[deprecated("Use field access instead!")]] int& dyn_current();
    // public System.Security.AccessControl.GenericAce get_Current()
    // Offset: 0x1B9A238
    ::System::Security::AccessControl::GenericAce* get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1B9A268
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // System.Void .ctor(System.Security.AccessControl.GenericAcl owner)
    // Offset: 0x1B9A204
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AceEnumerator* New_ctor(::System::Security::AccessControl::GenericAcl* owner) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::AccessControl::AceEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AceEnumerator*, creationType>(owner)));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x1B9A26C
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x1B9A2C8
    void Reset();
  }; // System.Security.AccessControl.AceEnumerator
  #pragma pack(pop)
  static check_size<sizeof(AceEnumerator), 24 + sizeof(int)> __System_Security_AccessControl_AceEnumeratorSizeCheck;
  static_assert(sizeof(AceEnumerator) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::AccessControl::AceEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::GenericAce* (System::Security::AccessControl::AceEnumerator::*)()>(&System::Security::AccessControl::AceEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::AceEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::AceEnumerator::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Security::AccessControl::AceEnumerator::*)()>(&System::Security::AccessControl::AceEnumerator::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::AceEnumerator*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::AceEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::AccessControl::AceEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::AccessControl::AceEnumerator::*)()>(&System::Security::AccessControl::AceEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::AceEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::AceEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::AceEnumerator::*)()>(&System::Security::AccessControl::AceEnumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::AceEnumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
