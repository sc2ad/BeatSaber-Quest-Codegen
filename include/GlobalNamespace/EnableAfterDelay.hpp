// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EnableAfterDelay
  class EnableAfterDelay;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EnableAfterDelay);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnableAfterDelay*, "", "EnableAfterDelay");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: EnableAfterDelay
  // [TokenAttribute] Offset: FFFFFFFF
  class EnableAfterDelay : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::EnableAfterDelay::$Start$d__1
    class $Start$d__1;
    public:
    // private UnityEngine.MonoBehaviour _component
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::MonoBehaviour* component;
    // Field size check
    static_assert(sizeof(::UnityEngine::MonoBehaviour*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.MonoBehaviour _component
    [[deprecated("Use field access instead!")]] ::UnityEngine::MonoBehaviour*& dyn__component();
    // public System.Void .ctor()
    // Offset: 0x15C964C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnableAfterDelay* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnableAfterDelay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnableAfterDelay*, creationType>()));
    }
    // private System.Collections.IEnumerator Start()
    // Offset: 0x15C95B0
    ::System::Collections::IEnumerator* Start();
  }; // EnableAfterDelay
  #pragma pack(pop)
  static check_size<sizeof(EnableAfterDelay), 24 + sizeof(::UnityEngine::MonoBehaviour*)> __GlobalNamespace_EnableAfterDelaySizeCheck;
  static_assert(sizeof(EnableAfterDelay) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnableAfterDelay::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EnableAfterDelay::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::EnableAfterDelay::*)()>(&GlobalNamespace::EnableAfterDelay::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnableAfterDelay*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
