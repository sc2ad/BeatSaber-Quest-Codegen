// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIVertex
#include "UnityEngine/UIVertex.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Forward declaring type: BaseVertexEffect
  class BaseVertexEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::BaseVertexEffect);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::BaseVertexEffect*, "UnityEngine.UI", "BaseVertexEffect");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.BaseVertexEffect
  // [TokenAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: 11F9D10
  class BaseVertexEffect : public ::Il2CppObject {
    public:
    // public System.Void ModifyVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex> vertices)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ModifyVertices(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* vertices);
    // protected System.Void .ctor()
    // Offset: 0x18FDD94
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseVertexEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::BaseVertexEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseVertexEffect*, creationType>()));
    }
  }; // UnityEngine.UI.BaseVertexEffect
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::BaseVertexEffect::ModifyVertices
// Il2CppName: ModifyVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::BaseVertexEffect::*)(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*)>(&UnityEngine::UI::BaseVertexEffect::ModifyVertices)> {
  static const MethodInfo* get() {
    static auto* vertices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "UIVertex")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::BaseVertexEffect*), "ModifyVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vertices});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::BaseVertexEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
