// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_SessionBase
  class HEU_SessionBase;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_InputInterface
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_InputInterface : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // protected System.Int32 _priority
    // Size: 0x4
    // Offset: 0x10
    int priority;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return priority;
    }
    // static field const value: static public System.Int32 DEFAULT_PRIORITY
    static constexpr const int DEFAULT_PRIORITY = 100;
    // Get static field: static public System.Int32 DEFAULT_PRIORITY
    static int _get_DEFAULT_PRIORITY();
    // Set static field: static public System.Int32 DEFAULT_PRIORITY
    static void _set_DEFAULT_PRIORITY(int value);
    // Get instance field reference: protected System.Int32 _priority
    int& dyn__priority();
    // public System.Int32 get_Priority()
    // Offset: 0x151D568
    int get_Priority();
    // public System.Void .ctor(System.Int32 priority)
    // Offset: 0x151D570
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_InputInterface* New_ctor(int priority) {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_InputInterface::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_InputInterface*, creationType>(priority)));
    }
    // public System.Void RegisterInterface()
    // Offset: 0x151D59C
    void RegisterInterface();
    // public System.Boolean IsThisInputObjectSupported(UnityEngine.GameObject inputObject)
    // Offset: 0xFFFFFFFF
    bool IsThisInputObjectSupported(UnityEngine::GameObject* inputObject);
    // public System.Boolean CreateInputNodeWithDataUpload(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 connectNodeID, UnityEngine.GameObject inputObject, out System.Int32 inputNodeID)
    // Offset: 0xFFFFFFFF
    bool CreateInputNodeWithDataUpload(HoudiniEngineUnity::HEU_SessionBase* session, int connectNodeID, UnityEngine::GameObject* inputObject, ByRef<int> inputNodeID);
  }; // HoudiniEngineUnity.HEU_InputInterface
  #pragma pack(pop)
  static check_size<sizeof(HEU_InputInterface), 16 + sizeof(int)> __HoudiniEngineUnity_HEU_InputInterfaceSizeCheck;
  static_assert(sizeof(HEU_InputInterface) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_InputInterface*, "HoudiniEngineUnity", "HEU_InputInterface");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterface::get_Priority
// Il2CppName: get_Priority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (HoudiniEngineUnity::HEU_InputInterface::*)()>(&HoudiniEngineUnity::HEU_InputInterface::get_Priority)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputInterface*), "get_Priority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterface::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterface::RegisterInterface
// Il2CppName: RegisterInterface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputInterface::*)()>(&HoudiniEngineUnity::HEU_InputInterface::RegisterInterface)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputInterface*), "RegisterInterface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterface::IsThisInputObjectSupported
// Il2CppName: IsThisInputObjectSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InputInterface::*)(UnityEngine::GameObject*)>(&HoudiniEngineUnity::HEU_InputInterface::IsThisInputObjectSupported)> {
  static const MethodInfo* get() {
    static auto* inputObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputInterface*), "IsThisInputObjectSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputObject});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterface::CreateInputNodeWithDataUpload
// Il2CppName: CreateInputNodeWithDataUpload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InputInterface::*)(HoudiniEngineUnity::HEU_SessionBase*, int, UnityEngine::GameObject*, ByRef<int>)>(&HoudiniEngineUnity::HEU_InputInterface::CreateInputNodeWithDataUpload)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* connectNodeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* inputNodeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputInterface*), "CreateInputNodeWithDataUpload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, connectNodeID, inputObject, inputNodeID});
  }
};
