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
  // Forward declaring type: Touchable
  class Touchable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::Touchable);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::Touchable*, "HMUI", "Touchable");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.Touchable
  // [TokenAttribute] Offset: FFFFFFFF
  class Touchable : public ::UnityEngine::UI::Graphic {
    public:
    // Writing base type padding for base size: 0x89 to desired offset: 0x8C
    char ___base_padding[0x3] = {};
    public:
    // private System.Single _skew
    // Size: 0x4
    // Offset: 0x8C
    float skew;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private System.Single _skew
    [[deprecated("Use field access instead!")]] float& dyn__skew();
    // public System.Single get_skew()
    // Offset: 0x2ACE730
    float get_skew();
    // public System.Void .ctor()
    // Offset: 0x2ACE754
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Touchable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::Touchable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Touchable*, creationType>()));
    }
    // protected override System.Void OnPopulateMesh(UnityEngine.UI.VertexHelper vh)
    // Offset: 0x2ACE738
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnPopulateMesh(UnityEngine.UI.VertexHelper vh)
    void OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh);
  }; // HMUI.Touchable
  #pragma pack(pop)
  static check_size<sizeof(Touchable), 140 + sizeof(float)> __HMUI_TouchableSizeCheck;
  static_assert(sizeof(Touchable) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::Touchable::get_skew
// Il2CppName: get_skew
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (HMUI::Touchable::*)()>(&HMUI::Touchable::get_skew)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::Touchable*), "get_skew", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::Touchable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::Touchable::OnPopulateMesh
// Il2CppName: OnPopulateMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::Touchable::*)(::UnityEngine::UI::VertexHelper*)>(&HMUI::Touchable::OnPopulateMesh)> {
  static const MethodInfo* get() {
    static auto* vh = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "VertexHelper")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::Touchable*), "OnPopulateMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vh});
  }
};
