// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::IEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::IEnumerator*, "System.Collections", "IEnumerator");
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.IEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 118C7C0
  // [GuidAttribute] Offset: 118C7C0
  class IEnumerator {
    public:
    // public System.Object get_Current()
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* get_Current();
    // public System.Boolean MoveNext()
    // Offset: 0xFFFFFFFF
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0xFFFFFFFF
    void Reset();
  }; // System.Collections.IEnumerator
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::IEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::IEnumerator::*)()>(&System::Collections::IEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::IEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::IEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::IEnumerator::*)()>(&System::Collections::IEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::IEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::IEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::IEnumerator::*)()>(&System::Collections::IEnumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::IEnumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
