// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IExperimentModel
#include "GlobalNamespace/IExperimentModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IExperimentData
  class IExperimentData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NoExperimentModel
  class NoExperimentModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NoExperimentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoExperimentModel*, "", "NoExperimentModel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NoExperimentModel
  // [TokenAttribute] Offset: FFFFFFFF
  class NoExperimentModel : public ::Il2CppObject/*, public ::GlobalNamespace::IExperimentModel*/ {
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IExperimentModel
    operator ::GlobalNamespace::IExperimentModel() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IExperimentModel*>(this);
    }
    // public System.Threading.Tasks.Task`1<System.Boolean> IsEmployee()
    // Offset: 0x1472034
    ::System::Threading::Tasks::Task_1<bool>* IsEmployee();
    // public System.Threading.Tasks.Task`1<System.Boolean> IsInTest(IExperimentData data)
    // Offset: 0x14720A0
    ::System::Threading::Tasks::Task_1<bool>* IsInTest(::GlobalNamespace::IExperimentData* data);
    // public System.Void .ctor()
    // Offset: 0x147210C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoExperimentModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NoExperimentModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoExperimentModel*, creationType>()));
    }
  }; // NoExperimentModel
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoExperimentModel::IsEmployee
// Il2CppName: IsEmployee
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (GlobalNamespace::NoExperimentModel::*)()>(&GlobalNamespace::NoExperimentModel::IsEmployee)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoExperimentModel*), "IsEmployee", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoExperimentModel::IsInTest
// Il2CppName: IsInTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (GlobalNamespace::NoExperimentModel::*)(::GlobalNamespace::IExperimentData*)>(&GlobalNamespace::NoExperimentModel::IsInTest)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("", "IExperimentData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoExperimentModel*), "IsInTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoExperimentModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
