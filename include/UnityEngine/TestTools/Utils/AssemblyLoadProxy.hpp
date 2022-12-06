// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TestTools.Utils.IAssemblyLoadProxy
#include "UnityEngine/TestTools/Utils/IAssemblyLoadProxy.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools::Utils
namespace UnityEngine::TestTools::Utils {
  // Forward declaring type: IAssemblyWrapper
  class IAssemblyWrapper;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.Utils
namespace UnityEngine::TestTools::Utils {
  // Forward declaring type: AssemblyLoadProxy
  class AssemblyLoadProxy;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestTools::Utils::AssemblyLoadProxy);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestTools::Utils::AssemblyLoadProxy*, "UnityEngine.TestTools.Utils", "AssemblyLoadProxy");
// Type namespace: UnityEngine.TestTools.Utils
namespace UnityEngine::TestTools::Utils {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.Utils.AssemblyLoadProxy
  // [TokenAttribute] Offset: FFFFFFFF
  class AssemblyLoadProxy : public ::Il2CppObject/*, public ::UnityEngine::TestTools::Utils::IAssemblyLoadProxy*/ {
    public:
    // Creating interface conversion operator: operator ::UnityEngine::TestTools::Utils::IAssemblyLoadProxy
    operator ::UnityEngine::TestTools::Utils::IAssemblyLoadProxy() noexcept {
      return *reinterpret_cast<::UnityEngine::TestTools::Utils::IAssemblyLoadProxy*>(this);
    }
    // Creating interface conversion operator: i_IAssemblyLoadProxy
    inline ::UnityEngine::TestTools::Utils::IAssemblyLoadProxy* i_IAssemblyLoadProxy() noexcept {
      return reinterpret_cast<::UnityEngine::TestTools::Utils::IAssemblyLoadProxy*>(this);
    }
    // public System.Void .ctor()
    // Offset: 0x2B4FD6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssemblyLoadProxy* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TestTools::Utils::AssemblyLoadProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssemblyLoadProxy*, creationType>()));
    }
    // public UnityEngine.TestTools.Utils.IAssemblyWrapper Load(System.String assemblyString)
    // Offset: 0x2B4FCAC
    ::UnityEngine::TestTools::Utils::IAssemblyWrapper* Load(::StringW assemblyString);
  }; // UnityEngine.TestTools.Utils.AssemblyLoadProxy
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::AssemblyLoadProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::AssemblyLoadProxy::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TestTools::Utils::IAssemblyWrapper* (UnityEngine::TestTools::Utils::AssemblyLoadProxy::*)(::StringW)>(&UnityEngine::TestTools::Utils::AssemblyLoadProxy::Load)> {
  static const MethodInfo* get() {
    static auto* assemblyString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Utils::AssemblyLoadProxy*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assemblyString});
  }
};
