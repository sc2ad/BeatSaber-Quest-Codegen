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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Behaviour because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EnableComponentWithCommandArgument
  class EnableComponentWithCommandArgument;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EnableComponentWithCommandArgument);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnableComponentWithCommandArgument*, "", "EnableComponentWithCommandArgument");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: EnableComponentWithCommandArgument
  // [TokenAttribute] Offset: FFFFFFFF
  class EnableComponentWithCommandArgument : public ::UnityEngine::MonoBehaviour {
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
    // private System.String _argument
    // Size: 0x8
    // Offset: 0x18
    ::StringW argument;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.Behaviour _component
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Behaviour* component;
    // Field size check
    static_assert(sizeof(::UnityEngine::Behaviour*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.String _argument
    ::StringW& dyn__argument();
    // Get instance field reference: private UnityEngine.Behaviour _component
    ::UnityEngine::Behaviour*& dyn__component();
    // private System.Void Awake()
    // Offset: 0x156AB90
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x156AC2C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnableComponentWithCommandArgument* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnableComponentWithCommandArgument::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnableComponentWithCommandArgument*, creationType>()));
    }
  }; // EnableComponentWithCommandArgument
  #pragma pack(pop)
  static check_size<sizeof(EnableComponentWithCommandArgument), 32 + sizeof(::UnityEngine::Behaviour*)> __GlobalNamespace_EnableComponentWithCommandArgumentSizeCheck;
  static_assert(sizeof(EnableComponentWithCommandArgument) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnableComponentWithCommandArgument::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnableComponentWithCommandArgument::*)()>(&GlobalNamespace::EnableComponentWithCommandArgument::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnableComponentWithCommandArgument*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnableComponentWithCommandArgument::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
