// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.MonoKernel
#include "Zenject/MonoKernel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: SceneKernel
  class SceneKernel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::SceneKernel);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SceneKernel*, "Zenject", "SceneKernel");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x32
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SceneKernel
  // [TokenAttribute] Offset: FFFFFFFF
  class SceneKernel : public ::Zenject::MonoKernel {
    public:
    // public System.Void .ctor()
    // Offset: 0x1DB56F0
    // Implemented from: Zenject.MonoKernel
    // Base method: System.Void MonoKernel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneKernel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::SceneKernel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneKernel*, creationType>()));
    }
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1DB56F8
    // Implemented from: Zenject.MonoKernel
    // Base method: Zenject.InjectTypeInfo MonoKernel::__zenCreateInjectTypeInfo()
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.SceneKernel
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SceneKernel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::SceneKernel::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::SceneKernel::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneKernel*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
