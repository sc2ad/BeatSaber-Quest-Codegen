// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.Graphic
#include "UnityEngine/UI/Graphic.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: VertexHelper
  class VertexHelper;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: EmptyBoxGraphic
  class EmptyBoxGraphic;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::EmptyBoxGraphic);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::EmptyBoxGraphic*, "HMUI", "EmptyBoxGraphic");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.EmptyBoxGraphic
  // [TokenAttribute] Offset: FFFFFFFF
  class EmptyBoxGraphic : public ::UnityEngine::UI::Graphic {
    public:
    // Writing base type padding for base size: 0x89 to desired offset: 0x8C
    char ___base_padding[0x3] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Single _depth
    // Size: 0x4
    // Offset: 0x8C
    float depth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private System.Single _depth
    float& dyn__depth();
    // protected System.Void OnDrawGizmosSelected()
    // Offset: 0x166D29C
    void OnDrawGizmosSelected();
    // public System.Void .ctor()
    // Offset: 0x166D508
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EmptyBoxGraphic* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::EmptyBoxGraphic::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EmptyBoxGraphic*, creationType>()));
    }
    // protected override System.Void OnPopulateMesh(UnityEngine.UI.VertexHelper vh)
    // Offset: 0x166CEDC
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnPopulateMesh(UnityEngine.UI.VertexHelper vh)
    void OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh);
  }; // HMUI.EmptyBoxGraphic
  #pragma pack(pop)
  static check_size<sizeof(EmptyBoxGraphic), 140 + sizeof(float)> __HMUI_EmptyBoxGraphicSizeCheck;
  static_assert(sizeof(EmptyBoxGraphic) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::EmptyBoxGraphic::OnDrawGizmosSelected
// Il2CppName: OnDrawGizmosSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::EmptyBoxGraphic::*)()>(&HMUI::EmptyBoxGraphic::OnDrawGizmosSelected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::EmptyBoxGraphic*), "OnDrawGizmosSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::EmptyBoxGraphic::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::EmptyBoxGraphic::OnPopulateMesh
// Il2CppName: OnPopulateMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::EmptyBoxGraphic::*)(::UnityEngine::UI::VertexHelper*)>(&HMUI::EmptyBoxGraphic::OnPopulateMesh)> {
  static const MethodInfo* get() {
    static auto* vh = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "VertexHelper")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::EmptyBoxGraphic*), "OnPopulateMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vh});
  }
};
