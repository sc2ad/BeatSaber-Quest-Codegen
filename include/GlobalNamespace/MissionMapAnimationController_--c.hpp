// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MissionMapAnimationController
#include "GlobalNamespace/MissionMapAnimationController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionNodeConnection
  class MissionNodeConnection;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MissionMapAnimationController::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionMapAnimationController::$$c*, "", "MissionMapAnimationController/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MissionMapAnimationController/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MissionMapAnimationController::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly MissionMapAnimationController/<>c <>9
    static ::GlobalNamespace::MissionMapAnimationController::$$c* _get_$$9();
    // Set static field: static public readonly MissionMapAnimationController/<>c <>9
    static void _set_$$9(::GlobalNamespace::MissionMapAnimationController::$$c* value);
    // Get static field: static public System.Func`2<MissionNodeConnection,System.Single> <>9__15_0
    static ::System::Func_2<::GlobalNamespace::MissionNodeConnection*, float>* _get_$$9__15_0();
    // Set static field: static public System.Func`2<MissionNodeConnection,System.Single> <>9__15_0
    static void _set_$$9__15_0(::System::Func_2<::GlobalNamespace::MissionNodeConnection*, float>* value);
    // Get static field: static public System.Func`2<MissionNodeConnection,System.Single> <>9__15_1
    static ::System::Func_2<::GlobalNamespace::MissionNodeConnection*, float>* _get_$$9__15_1();
    // Set static field: static public System.Func`2<MissionNodeConnection,System.Single> <>9__15_1
    static void _set_$$9__15_1(::System::Func_2<::GlobalNamespace::MissionNodeConnection*, float>* value);
    // static private System.Void .cctor()
    // Offset: 0x132D0F0
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x132D154
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionMapAnimationController::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MissionMapAnimationController::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionMapAnimationController::$$c*, creationType>()));
    }
    // System.Single <UpdateNodesAndConnectionCoroutine>b__15_0(MissionNodeConnection connection)
    // Offset: 0x132D15C
    float $UpdateNodesAndConnectionCoroutine$b__15_0(::GlobalNamespace::MissionNodeConnection* connection);
    // System.Single <UpdateNodesAndConnectionCoroutine>b__15_1(MissionNodeConnection connection)
    // Offset: 0x132D224
    float $UpdateNodesAndConnectionCoroutine$b__15_1(::GlobalNamespace::MissionNodeConnection* connection);
  }; // MissionMapAnimationController/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionMapAnimationController::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::MissionMapAnimationController::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionMapAnimationController::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionMapAnimationController::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MissionMapAnimationController::$$c::$UpdateNodesAndConnectionCoroutine$b__15_0
// Il2CppName: <UpdateNodesAndConnectionCoroutine>b__15_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::MissionMapAnimationController::$$c::*)(::GlobalNamespace::MissionNodeConnection*)>(&GlobalNamespace::MissionMapAnimationController::$$c::$UpdateNodesAndConnectionCoroutine$b__15_0)> {
  static const MethodInfo* get() {
    static auto* connection = &::il2cpp_utils::GetClassFromName("", "MissionNodeConnection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionMapAnimationController::$$c*), "<UpdateNodesAndConnectionCoroutine>b__15_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connection});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionMapAnimationController::$$c::$UpdateNodesAndConnectionCoroutine$b__15_1
// Il2CppName: <UpdateNodesAndConnectionCoroutine>b__15_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::MissionMapAnimationController::$$c::*)(::GlobalNamespace::MissionNodeConnection*)>(&GlobalNamespace::MissionMapAnimationController::$$c::$UpdateNodesAndConnectionCoroutine$b__15_1)> {
  static const MethodInfo* get() {
    static auto* connection = &::il2cpp_utils::GetClassFromName("", "MissionNodeConnection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionMapAnimationController::$$c*), "<UpdateNodesAndConnectionCoroutine>b__15_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connection});
  }
};
