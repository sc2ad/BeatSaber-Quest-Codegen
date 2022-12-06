// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIVertex
#include "UnityEngine/UIVertex.hpp"
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
  // Forward declaring type: IVertexModifier
  class IVertexModifier;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::IVertexModifier);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::IVertexModifier*, "UnityEngine.UI", "IVertexModifier");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.IVertexModifier
  // [TokenAttribute] Offset: FFFFFFFF
  // [EditorBrowsableAttribute] Offset: 10C0654
  // [ObsoleteAttribute] Offset: 10C0654
  class IVertexModifier {
    public:
    // public System.Void ModifyVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex> verts)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ModifyVertices(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts);
  }; // UnityEngine.UI.IVertexModifier
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::IVertexModifier::ModifyVertices
// Il2CppName: ModifyVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::IVertexModifier::*)(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*)>(&UnityEngine::UI::IVertexModifier::ModifyVertices)> {
  static const MethodInfo* get() {
    static auto* verts = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "UIVertex")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::IVertexModifier*), "ModifyVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{verts});
  }
};
