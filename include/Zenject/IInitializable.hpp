// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: IInitializable
  class IInitializable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::IInitializable);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IInitializable*, "Zenject", "IInitializable");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.IInitializable
  // [TokenAttribute] Offset: FFFFFFFF
  class IInitializable {
    public:
    // public System.Void Initialize()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Initialize();
  }; // Zenject.IInitializable
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::IInitializable::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::IInitializable::*)()>(&Zenject::IInitializable::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::IInitializable*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
