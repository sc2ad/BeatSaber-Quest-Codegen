// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: ILateDisposable
  class ILateDisposable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::ILateDisposable);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ILateDisposable*, "Zenject", "ILateDisposable");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ILateDisposable
  // [TokenAttribute] Offset: FFFFFFFF
  class ILateDisposable {
    public:
    // public System.Void LateDispose()
    // Offset: 0xFFFFFFFF
    void LateDispose();
  }; // Zenject.ILateDisposable
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ILateDisposable::LateDispose
// Il2CppName: LateDispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ILateDisposable::*)()>(&Zenject::ILateDisposable::LateDispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ILateDisposable*), "LateDispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
